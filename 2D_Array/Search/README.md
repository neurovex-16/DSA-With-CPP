# Search in a 2D Matrix

## Problem Statement

Given an integer matrix and a target value, determine whether the target exists in the matrix.

There are two common versions of this problem:

* **Version I:** The matrix is globally sorted.
* **Version II:** Each row and each column are individually sorted.

---

## Version I: Search a 2D Matrix

### Matrix Properties

* Each row is sorted in non-decreasing order.
* The first element of each row is greater than the last element of the previous row.

### Example

```text id="44tnye"
Input:
matrix =
[
  [1, 3, 5, 7],
  [10, 11, 16, 20],
  [23, 30, 34, 60]
]

target = 3

Output:
true
```

### Key Observation

The matrix behaves like a single sorted array.

### Approach: Binary Search

Perform Binary Search on the virtual one-dimensional representation of the matrix.

#### Algorithm

1. Consider the matrix as a sorted array of size `rows × columns`.
2. Perform Binary Search.
3. Convert the middle index into matrix coordinates:

   * `row = mid / columns`
   * `column = mid % columns`
4. Compare the current element with the target.
5. Continue until the target is found or the search space becomes empty.

**Time Complexity:** O(log(m × n))

**Space Complexity:** O(1)

File: `Binary_Search.cpp`

---

## Version II: Search a 2D Matrix II

### Matrix Properties

* Each row is sorted in ascending order.
* Each column is sorted in ascending order.

### Example

```text id="wy2yb0"
Input:
matrix =
[
  [1, 4, 7, 11, 15],
  [2, 5, 8, 12, 19],
  [3, 6, 9, 16, 22],
  [10,13,14,17,24],
  [18,21,23,26,30]
]

target = 5

Output:
true
```

### Key Observation

The matrix is sorted row-wise and column-wise, but it is **not globally sorted**.

Starting from the **top-right** corner allows one row or one column to be eliminated after each comparison.

### Approach: Staircase Search

Traverse the matrix from the top-right corner.

#### Algorithm

1. Start from the top-right element.
2. If the current element equals the target, return `true`.
3. If the current element is greater than the target, move left.
4. If the current element is smaller than the target, move down.
5. Continue until the target is found or the indices go out of bounds.

**Time Complexity:** O(m + n)

**Space Complexity:** O(1)

File: `Staircase_Search.cpp`

---

## Complexity Comparison

| Version               | Approach         | Time Complexity | Space Complexity |
| --------------------- | ---------------- | --------------- | ---------------- |
| Search a 2D Matrix    | Binary Search    | O(log(m × n))   | O(1)             |
| Search a 2D Matrix II | Staircase Search | O(m + n)        | O(1)             |

---

## Key Insight

Although both problems involve searching in a sorted matrix, their sorting properties are different.

* **Version I** treats the matrix as a single sorted array, making **Binary Search** the optimal solution.
* **Version II** is only sorted row-wise and column-wise, so the **Staircase Search** technique efficiently eliminates one row or one column after each comparison, resulting in **O(m + n)** time complexity.
