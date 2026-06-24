# Best Time to Buy and Sell Stock

## Problem Statement

You are given an array `prices` where `prices[i]` represents the price of a stock on the `i-th` day.

Choose a single day to buy one stock and a different future day to sell that stock.

Return the maximum profit that can be achieved. If no profit is possible, return `0`.

---

## Example

```text
Input:  [7, 1, 5, 3, 6, 4]

Output: 5
```

### Explanation

* Buy on day 2 at price `1`
* Sell on day 5 at price `6`

```text
Profit = 6 - 1 = 5
```

---

## Key Observation

To maximize profit:

* Buy at the lowest price seen so far.
* Sell at the current price.
* Keep track of the maximum profit obtained.

---

## Approaches

### 1. Brute Force

Check every possible pair of buy and sell days.

#### Algorithm

* Select a buying day.
* Check all future selling days.
* Calculate the profit for each pair.
* Return the maximum profit.

**Time Complexity:** O(n²)

**Space Complexity:** O(1)

File: `Brute_Force.cpp`

---

### 2. Optimized Approach

Traverse the array once while maintaining:

* Minimum buying price seen so far.
* Maximum profit found so far.

#### Algorithm

1. Initialize `minPrice` with the first stock price.
2. For each day:

   * Update the minimum price if a lower price is found.
   * Calculate the current profit.
   * Update the maximum profit if needed.
3. Return the maximum profit.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

File: `Optimized.cpp`

---

## Complexity Comparison

| Approach    | Time Complexity | Space Complexity |
| ----------- | --------------- | ---------------- |
| Brute Force | O(n²)           | O(1)             |
| Optimized   | O(n)            | O(1)             |

---

## Key Insight

Instead of checking all possible buy-sell pairs, maintain the lowest stock price encountered so far and calculate the profit for each subsequent day. This allows the solution to run in linear time.
