# Insertion Sort

## Problem Statement

Given an array of elements, sort the array in **ascending order** using the Insertion Sort algorithm.

---

## Example

```text
Input:
[5, 2, 4, 6, 1, 3]

Output:
[1, 2, 3, 4, 5, 6]
```

---

## Key Observation

Insertion Sort builds the sorted portion of the array **one element at a time**.

At each iteration, the current element is inserted into its correct position within the already sorted portion of the array.

---

## Approach

Traverse the array from left to right and insert each element into its appropriate position in the sorted subarray.

### Algorithm

1. Assume the first element is already sorted.
2. Select the next element as the current element.
3. Compare it with the elements in the sorted portion.
4. Shift all larger elements one position to the right.
5. Insert the current element into its correct position.
6. Repeat until all elements are sorted.

**Time Complexity:**

* Best Case: **O(n)** *(Array is already sorted)*
* Average Case: **O(n²)**
* Worst Case: **O(n²)** *(Array is sorted in reverse order)*

**Space Complexity:** **O(1)**

File: `main.cpp`

---

## Key Insight

Instead of repeatedly swapping adjacent elements, Insertion Sort shifts larger elements to create space for the current element. This makes it efficient for **small datasets** and **nearly sorted arrays**, where it can achieve linear time complexity.
