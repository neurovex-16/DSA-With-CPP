# Pair Sum

## Problem Statement

Given a sorted array of integers and a target value, find a pair of elements whose sum is equal to the target.

Return the indices (or values) of the pair.

---

## Example

```text id="p4wx4v"
Input:
Array = [2, 7, 11, 15]
Target = 9

Output:
[0, 1]
```

### Explanation

```text id="vffihs"
2 + 7 = 9
```

Therefore, the pair is found at indices `0` and `1`.

---

## Key Observation

Since the array is sorted:

* Moving the left pointer increases the sum.
* Moving the right pointer decreases the sum.

This observation allows us to solve the problem efficiently using the Two Pointers technique.

---

## Approaches

### 1. Brute Force

Check every possible pair of elements and compare their sum with the target value.

#### Algorithm

1. Select the first element.
2. Select the second element.
3. Check whether their sum equals the target.
4. Return the matching pair.

**Time Complexity:** O(n²)

**Space Complexity:** O(1)

File: `Brute_Force.cpp`

---

### 2. Two Pointers (Optimized)

Use two pointers:

* Left pointer starts at the beginning.
* Right pointer starts at the end.

#### Algorithm

1. Calculate the current sum.
2. If the sum is greater than the target, move the right pointer left.
3. If the sum is smaller than the target, move the left pointer right.
4. If the sum equals the target, return the pair.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

File: `Two_Pointers.cpp`

---

## Complexity Comparison

| Approach     | Time Complexity | Space Complexity |
| ------------ | --------------- | ---------------- |
| Brute Force  | O(n²)           | O(1)             |
| Two Pointers | O(n)            | O(1)             |

---

## Key Insight

Because the array is sorted, we can use the Two Pointers technique to eliminate unnecessary comparisons and find the target pair in linear time.
