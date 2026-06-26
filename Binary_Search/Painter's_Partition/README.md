# Painter's Partition Problem

## Problem Statement

Given an array `boards`, where each element represents the length of a board, and an integer `painters` representing the number of painters, partition the boards among the painters such that:

* Each painter paints only contiguous boards.
* Each board is painted by exactly one painter.
* A board cannot be split between painters.

The objective is to **minimize the maximum amount of work assigned to any painter**.

Return the minimum possible maximum workload.

---

## Example

```text
Input:
Boards = [10, 20, 30, 40]
Painters = 2

Output:
60
```

### Explanation

One possible partition is:

```text
Painter 1: [10, 20, 30] → 60
Painter 2: [40] → 40
```

The maximum workload among all painters is **60**, which is the minimum possible.

---

## Key Observation

The answer always lies within the following range:

```text
Lower Bound = Maximum board length

Upper Bound = Sum of all board lengths
```

This search space is monotonic, making it suitable for **Binary Search on the Answer**.

---

## Approach: Binary Search on Answer

Instead of searching for the optimal partition directly, perform Binary Search on the maximum workload that can be assigned to a painter.

### Algorithm

1. Set:

   * `low = maximum board length`
   * `high = sum of all board lengths`
2. Find the middle value (`mid`).
3. Check whether all boards can be assigned using `mid` as the maximum workload.
4. If the assignment is possible, search the left half for a smaller answer.
5. Otherwise, search the right half.
6. Continue until the minimum feasible workload is found.

**Time Complexity:** O(n log(sum))

**Space Complexity:** O(1)

File: `Optimised.cpp`

---

## Key Insight

The feasibility of assigning boards changes monotonically with the maximum workload. If all boards can be assigned with a workload of `X`, they can also be assigned with any workload greater than `X`. This monotonic property enables **Binary Search on the Answer**, resulting in an efficient solution.
