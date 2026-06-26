# Merge Sort

## Problem Statement

Given an array of elements, sort the array in **ascending order** using the Merge Sort algorithm.

---

## Example

```text
Input:
[38, 27, 43, 3, 9, 82, 10]

Output:
[3, 9, 10, 27, 38, 43, 82]
```

---

## Key Observation

Merge Sort follows the **Divide and Conquer** technique.

It recursively divides the array into smaller subarrays, sorts them, and merges the sorted subarrays to obtain the final sorted array.

---

## Approach

Recursively divide the array until each subarray contains a single element, then merge the subarrays in sorted order.

### Algorithm

1. Divide the array into two halves.
2. Recursively sort both halves.
3. Merge the sorted halves.
4. Repeat until the entire array is sorted.

**Time Complexity:**

* Best Case: **O(n log n)**
* Average Case: **O(n log n)**
* Worst Case: **O(n log n)**

**Space Complexity:** **O(n)**

File: `main.cpp`

---

## Key Insight

Merge Sort guarantees **O(n log n)** time complexity regardless of the input order, making it one of the most efficient comparison-based sorting algorithms. However, it requires additional memory for merging.
