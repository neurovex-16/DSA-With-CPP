# Selection Sort

## Problem Statement

Given an array of elements, sort the array in **ascending order** using the Selection Sort algorithm.

---

## Example

```text
Input:
[64, 25, 12, 22, 11]

Output:
[11, 12, 22, 25, 64]
```

---

## Key Observation

Selection Sort repeatedly selects the **smallest element** from the unsorted portion of the array and places it at its correct position.

After each iteration, the sorted portion of the array grows by one element.

---

## Approach

Find the minimum element in the unsorted portion and swap it with the first unsorted element.

### Algorithm

1. Traverse the array.
2. Find the minimum element in the unsorted portion.
3. Swap it with the first unsorted element.
4. Repeat until the array is sorted.

**Time Complexity:**

* Best Case: **O(n²)**
* Average Case: **O(n²)**
* Worst Case: **O(n²)**

**Space Complexity:** **O(1)**

File: `main.cpp`

---

## Key Insight

Unlike Bubble Sort, Selection Sort performs at most **one swap per iteration**, making it useful when minimizing the number of swaps is important.
