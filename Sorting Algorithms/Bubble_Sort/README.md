# Bubble Sort

## Problem Statement

Given an array of elements, sort the array in **ascending order** using the Bubble Sort algorithm.

---

## Example

```text
Input:
[5, 1, 4, 2, 8]

Output:
[1, 2, 4, 5, 8]
```

---

## Key Observation

Bubble Sort repeatedly compares **adjacent elements** and swaps them if they are in the wrong order.

After each pass, the **largest unsorted element "bubbles up"** to its correct position at the end of the array.

---

## Approach

Perform multiple passes through the array until it becomes sorted.

### Algorithm

1. Compare each pair of adjacent elements.
2. Swap them if they are in the wrong order.
3. Continue until the end of the current unsorted portion.
4. After each pass, the largest element is placed in its correct position.
5. Repeat the process for the remaining unsorted elements.

**Time Complexity:**

* Best Case: **O(n)** *(Optimized Bubble Sort with no swaps)*
* Average Case: **O(n²)**
* Worst Case: **O(n²)**

**Space Complexity:** **O(1)**

File: `main.cpp`

---

## Key Insight

With every iteration, the largest unsorted element moves to its correct position, reducing the size of the unsorted portion. By keeping track of whether any swaps occur during a pass, Bubble Sort can terminate early when the array is already sorted, improving the best-case time complexity to **O(n)**.
