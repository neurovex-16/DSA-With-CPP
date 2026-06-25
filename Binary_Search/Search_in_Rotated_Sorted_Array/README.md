# Search in Rotated Sorted Array

## Problem Statement

Given a rotated sorted array of **distinct integers** and a target value, return the index of the target if it exists. Otherwise, return `-1`.

The algorithm should run in **O(log n)** time.

---

## Example

```text
Input:
Array = [4, 5, 6, 7, 0, 1, 2]
Target = 0

Output:
4
```

### Explanation

The target value `0` is present at index `4`.

---

## What is a Rotated Sorted Array?

A rotated sorted array is obtained by rotating a sorted array around a pivot.

### Example

```text
Sorted Array:
[0, 1, 2, 4, 5, 6, 7]

Rotated Array:
[4, 5, 6, 7, 0, 1, 2]
```

Although the array is rotated, it still consists of **two sorted halves**.

---

## Key Observation

During Binary Search, **at least one half of the array is always sorted**.

* If the left half is sorted, check whether the target lies within that range.
* Otherwise, the right half must be sorted, so check whether the target belongs there.

This observation allows us to discard half of the search space in every iteration.

---

## Approaches

### 1. Brute Force

Traverse the array sequentially until the target element is found.

#### Algorithm

1. Traverse the array from left to right.
2. Compare each element with the target.
3. Return the index if found.
4. Otherwise, return `-1`.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

File: `Brute_Force.cpp`

---

### 2. Modified Binary Search

Use Binary Search while determining which half of the array is sorted.

#### Algorithm

1. Find the middle element.
2. If it matches the target, return its index.
3. Identify the sorted half of the array.
4. Check whether the target lies within the sorted half.
5. Continue searching in the appropriate half.

**Time Complexity:** O(log n)

**Space Complexity:** O(1)

File: `Optimised.cpp`

---

## Complexity Comparison

| Approach               | Time Complexity | Space Complexity |
| ---------------------- | --------------- | ---------------- |
| Brute Force            | O(n)            | O(1)             |
| Modified Binary Search | O(log n)        | O(1)             |

---

## Key Insight

A rotated sorted array always contains **one sorted half** during each Binary Search iteration. By identifying the sorted half and checking whether the target belongs to it, we can eliminate half of the search space and efficiently locate the target in logarithmic time.
