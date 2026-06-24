# Maximum Subarray Sum

## Problem Statement

Given an integer array, find the contiguous subarray with the largest possible sum.

---

## Concept: Subarray

A subarray consists of contiguous (continuous) elements taken from an array.

### Example

Original Array:

```text
[1, 2, 3, 4, 5]
```

Possible Subarrays:

```text
[1], [2], [3], [4], [5]

[1, 2], [2, 3], [3, 4], [4, 5]

[1, 2, 3], [2, 3, 4], [3, 4, 5]

[1, 2, 3, 4], [2, 3, 4, 5]

[1, 2, 3, 4, 5]
```

**Note:** Elements in a subarray must remain contiguous. For example, `[1, 3, 5]` is not a valid subarray.

---

## Total Number of Subarrays

For an array of size `n`:

```text
Number of Subarrays = n × (n + 1) / 2
```

### Example

```text
n = 5

Number of Subarrays = 5 × 6 / 2 = 15
```

---

## How Subarrays Are Generated

The starting position remains fixed while the ending position changes.

Example:

```text
start = 0 → end = 0, 1, 2, ..., n-1

start = 1 → end = 1, 2, 3, ..., n-1

start = 2 → end = 2, 3, 4, ..., n-1
```

---

## Approaches

### 1. Optimized Brute Force

Reuse previously computed sums instead of recalculating them from scratch.

**Time Complexity:** O(n²)

**Space Complexity:** O(1)

File: `Brute_Force.cpp`

---

### 2. Kadane's Algorithm

Maintain a running sum and reset it whenever the sum becomes negative.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

File: `Kadane's_Algorithm.cpp`

---

## Complexity Comparison

| Approach              | Time Complexity | Space Complexity |
| --------------------- | --------------- | ---------------- |
| Brute Force           | O(n³)           | O(1)             |
| Optimized Brute Force | O(n²)           | O(1)             |
| Kadane's Algorithm    | O(n)            | O(1)             |
