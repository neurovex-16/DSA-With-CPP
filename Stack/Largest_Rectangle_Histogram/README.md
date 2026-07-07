# Largest Rectangle in Histogram

## Problem Statement

Given an array `heights` representing the heights of bars in a histogram, where the width of each bar is `1`, find the area of the largest rectangle that can be formed within the histogram.

Return the maximum rectangular area.

---

## Example

```text id="v9bqzc"
Input:
heights = [2, 1, 5, 6, 2, 3]

Output:
10
```

### Explanation

The largest rectangle is formed using the bars with heights `5` and `6`.

```text id="r6nwrv"
Height = 5

Width = 2

Area = 5 × 2 = 10
```

---

## Key Observation

For each bar, determine:

* The **Previous Smaller Element (PSE)**.
* The **Next Smaller Element (NSE)**.

These two boundaries define the maximum width over which the current bar can extend while remaining the smallest bar in the rectangle.

---

## Approach: Monotonic Stack

Use monotonic stacks to compute the previous and next smaller elements for every bar.

### Algorithm

1. Compute the Previous Smaller Element (PSE) for each bar.
2. Compute the Next Smaller Element (NSE) for each bar.
3. For every bar:

   * Calculate the width:

     * `width = NSE - PSE - 1`
   * Compute the rectangle area:

     * `area = height × width`
4. Return the maximum area among all bars.

**Time Complexity:** O(n)

**Space Complexity:** O(n)

File: `Monotonic_Stack.cpp`

---

## Key Insight

The maximum rectangle for a bar is obtained by extending it to the nearest smaller bar on both the left and right. A monotonic increasing stack efficiently finds these boundaries in linear time, allowing every bar to be processed exactly once and resulting in an **O(n)** solution.
