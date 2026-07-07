# Two Sum

## Problem Statement

Given an integer array `nums` and an integer `target`, return the indices of the two numbers such that they add up to the target.

You may assume that each input has **exactly one solution**, and the same element cannot be used twice.

Return the indices in any order.

---

## Example

```text
Input:
nums = [2, 7, 11, 15]
target = 9

Output:
[0, 1]
```

### Explanation

```text
nums[0] + nums[1] = 2 + 7 = 9
```

---

## Key Observation

The goal is to find two elements whose sum equals the target value.

Different approaches trade off between simplicity, time complexity, and extra space usage.

---

## Approaches

### 1. Brute Force

Check every possible pair of elements until the target sum is found.

#### Algorithm

1. Select the first element.
2. Pair it with every remaining element.
3. If their sum equals the target, return their indices.

**Time Complexity:** O(n²)

**Space Complexity:** O(1)

File: `Brute_Force.cpp`

---

### 2. Hash Map (Optimized)

Store previously visited elements in a hash map while traversing the array.

#### Algorithm

1. Traverse the array.
2. Compute the complement (`target - current element`).
3. If the complement exists in the hash map, return both indices.
4. Otherwise, store the current element and its index.
5. Continue until the pair is found.

**Time Complexity:** O(n)

**Space Complexity:** O(n)

File: `Hash_Map.cpp`

---

### 3. Two Pointers

This approach is applicable **only when the array is sorted**.

#### Algorithm

1. Place one pointer at the beginning and another at the end of the array.
2. Compute the sum of the two elements.
3. If the sum equals the target, return the indices.
4. If the sum is smaller than the target, move the left pointer to the right.
5. If the sum is larger than the target, move the right pointer to the left.
6. Repeat until the pair is found.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

File: `Two_Pointers.cpp`

---

## Complexity Comparison

| Approach      | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Brute Force   | O(n²)           | O(1)             |
| Hash Map      | O(n)            | O(n)             |
| Two Pointers* | O(n)            | O(1)             |

> **Note:** The Two Pointers approach requires the array to be sorted.

---

## Key Insight

The choice of approach depends on the properties of the input array. For an unsorted array, a hash map provides an efficient linear-time solution. If the array is already sorted, the Two Pointers technique achieves the same time complexity while using constant extra space.
