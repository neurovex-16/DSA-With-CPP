# Stock Span Problem

## Problem Statement

The stock span of a day's price is defined as the maximum number of consecutive days (including the current day) for which the stock price was **less than or equal to today's price**.

Given an array of daily stock prices, return the span for each day.

---

## Example

```text id="w8m5cp"
Input:
prices = [100, 80, 60, 70, 60, 75, 85]

Output:
[1, 1, 1, 2, 1, 4, 6]
```

### Explanation

```text id="4ttj6o"
Price: 100 → Span = 1
Price: 80  → Span = 1
Price: 60  → Span = 1
Price: 70  → Span = 2
Price: 60  → Span = 1
Price: 75  → Span = 4
Price: 85  → Span = 6
```

---

## Key Observation

For each day's price, we need to find the **nearest previous day with a greater stock price**.

A **Monotonic Stack** efficiently keeps track of indices with decreasing stock prices, allowing spans to be computed in linear time.

---

## Approach: Monotonic Stack

Maintain a stack that stores the indices of stock prices in **decreasing order**.

### Algorithm

1. Initialize an empty stack.
2. Traverse the stock prices from left to right.
3. While the stack is not empty and the current price is greater than or equal to the price at the top index, pop the stack.
4. If the stack becomes empty, the span is `current_index + 1`.
5. Otherwise, the span is `current_index - stack.top()`.
6. Push the current index onto the stack.
7. Repeat for all stock prices.

**Time Complexity:** O(n)

**Space Complexity:** O(n)

File: `Monotonic_Stack.cpp`

---

## Key Insight

Each stock price index is pushed onto the stack once and popped at most once. This ensures that the total number of stack operations is linear, resulting in an efficient **O(n)** solution. The monotonic stack avoids repeatedly scanning previous prices, making it significantly faster than the brute-force approach.
