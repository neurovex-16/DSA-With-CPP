# 3Sum

## Problem Statement

Given an integer array `nums`, return all unique triplets `[nums[i], nums[j], nums[k]]` such that:

```text
nums[i] + nums[j] + nums[k] = 0
```

The solution set must not contain duplicate triplets.

---

## Example

```text
Input:
nums = [-1, 0, 1, 2, -1, -4]

Output:
[[-1, -1, 2], [-1, 0, 1]]
```

### Explanation

The only unique triplets whose sum equals `0` are:

```text
[-1, -1, 2]

[-1, 0, 1]
```

---

## Key Observation

The problem requires finding all **unique triplets** whose sum equals zero.

Different approaches improve efficiency by reducing unnecessary computations and avoiding duplicate triplets.

---

## Approaches

### 1. Brute Force

Check every possible combination of three elements.

#### Algorithm

1. Select the first element.
2. Select the second element.
3. Select the third element.
4. If their sum equals `0`, store the triplet.
5. Ignore duplicate triplets.

**Time Complexity:** O(n³)

**Space Complexity:** O(1) *(excluding the output list)*

File: `Brute_Force.cpp`

---

### 2. Better (Hash Set)

Fix one element and use a hash set to find the remaining two elements.

#### Algorithm

1. Fix one element.
2. Traverse the remaining elements.
3. Store visited elements in a hash set.
4. Check whether the required third element exists.
5. Store only unique triplets.

**Time Complexity:** O(n²)

**Space Complexity:** O(n)

File: `Better.cpp`

---

### 3. Optimal (Sorting + Two Pointers)

Sort the array and use the Two Pointers technique for every fixed element.

#### Algorithm

1. Sort the array.
2. Fix one element.
3. Place two pointers on the remaining subarray.
4. Compare the sum of the three elements with `0`.
5. Move the pointers based on the sum.
6. Skip duplicate elements to ensure unique triplets.

**Time Complexity:** O(n²)

**Space Complexity:** O(1) *(excluding the output list)*

File: `Optimal.cpp`

---

## Complexity Comparison

| Approach                         | Time Complexity | Space Complexity |
| -------------------------------- | --------------- | ---------------- |
| Brute Force                      | O(n³)           | O(1)             |
| Better (Hash Set)                | O(n²)           | O(n)             |
| Optimal (Sorting + Two Pointers) | O(n²)           | O(1)             |

---

## Key Insight

Sorting the array transforms the problem into a series of **Two Sum** searches. By fixing one element and applying the Two Pointers technique on the remaining elements, the search space is significantly reduced while duplicate triplets are efficiently eliminated. This achieves the optimal **O(n²)** time complexity.
