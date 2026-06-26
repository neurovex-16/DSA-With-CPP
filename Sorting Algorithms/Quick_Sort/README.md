# Quick Sort

## Problem Statement

Given an array of elements, sort the array in **ascending order** using the Quick Sort algorithm.

---

## Example

```text
Input:
[10, 7, 8, 9, 1, 5]

Output:
[1, 5, 7, 8, 9, 10]
```

---

## Key Observation

Quick Sort also follows the **Divide and Conquer** technique.

It selects a **pivot element** and partitions the array such that:

* Elements smaller than the pivot are placed on the left.
* Elements greater than the pivot are placed on the right.

The same process is then applied recursively to both partitions.

---

## Approach

Partition the array around a pivot and recursively sort the left and right subarrays.

### Algorithm

1. Choose a pivot element.
2. Partition the array around the pivot.
3. Recursively sort the left partition.
4. Recursively sort the right partition.
5. Continue until the array is sorted.

**Time Complexity:**

* Best Case: **O(n log n)**
* Average Case: **O(n log n)**
* Worst Case: **O(n²)** *(Occurs when poor pivot selection repeatedly creates highly unbalanced partitions.)*

**Space Complexity:** **O(log n)** *(Recursive call stack on average)*

File: `main.cpp`

---

## Key Insight

Quick Sort is one of the fastest sorting algorithms in practice due to its efficient partitioning strategy and excellent cache performance. Although its worst-case time complexity is **O(n²)**, choosing a good pivot (such as a random or median pivot) significantly reduces the likelihood of encountering this case.
