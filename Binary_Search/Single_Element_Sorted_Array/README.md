# Single Element in a Sorted Array

## Problem Statement

Given a sorted array where every element appears exactly twice except for one element, find the single element that appears only once.

The solution should run in **O(log n)** time and **O(1)** space.

---

## Example

```text
Input:
[1, 1, 2, 3, 3, 4, 4, 8, 8]

Output:
2
```

### Explanation

All elements appear exactly twice except `2`, which appears only once.

---

## Key Observation

Since the array is sorted:

* Duplicate elements always appear consecutively.
* Before the single element, pairs begin at **even indices**.
* After the single element, the pairing pattern shifts.

This property allows Binary Search to eliminate half of the search space in each iteration.

---

## Approaches

### 1. Linear Search

Traverse the array by comparing adjacent elements.

#### Algorithm

1. Traverse the array in pairs.
2. Compare every two consecutive elements.
3. If a pair is different, the first element is the answer.
4. If no mismatch is found, the last element is the single element.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

File: `Brute_Force.cpp`

---

### 2. Binary Search

Use Binary Search while maintaining the pairing pattern.

#### Algorithm

1. Find the middle index.
2. Ensure the middle index follows the pairing rule.
3. Compare the middle element with its adjacent element.
4. If the pair is valid, search the right half.
5. Otherwise, search the left half.
6. Continue until the single element is found.

**Time Complexity:** O(log n)

**Space Complexity:** O(1)

File: `Optimised.cpp`

---

## Complexity Comparison

| Approach      | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Linear Search   | O(n)            | O(1)             |
| Binary Search | O(log n)        | O(1)             |

---

## Key Insight

The single element breaks the normal pairing pattern in the sorted array. By checking whether the middle element follows this pattern, Binary Search can determine which half contains the answer and efficiently reduce the search space.
