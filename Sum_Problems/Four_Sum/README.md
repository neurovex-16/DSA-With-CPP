# 4Sum

## Problem Statement

Given an integer array `nums` and an integer `target`, return all unique quadruplets `[nums[a], nums[b], nums[c], nums[d]]` such that:

```text
nums[a] + nums[b] + nums[c] + nums[d] = target
```

The solution set must not contain duplicate quadruplets.

---

## Example

```text
Input:
nums = [1, 0, -1, 0, -2, 2]
target = 0

Output:
[[-2, -1, 1, 2],
 [-2,  0, 0, 2],
 [-1,  0, 0, 1]]
```

### Explanation

Each quadruplet sums to the target value `0`, and all returned quadruplets are unique.

---

## Key Observation

After sorting the array, fix the first two elements and use the **Two Pointers** technique to find the remaining two elements.

Sorting also makes it easy to skip duplicate elements and avoid repeated quadruplets.

---

## Approach: Sorting + Two Pointers

Sort the array and use the Two Pointers technique after fixing the first two elements.

### Algorithm

1. Sort the array.
2. Fix the first element.
3. Fix the second element.
4. Place one pointer immediately after the second element and another at the end of the array.
5. Compute the sum of the four elements.
6. If the sum equals the target, store the quadruplet and skip duplicate elements.
7. If the sum is smaller than the target, move the left pointer to the right.
8. If the sum is greater than the target, move the right pointer to the left.
9. Continue until all unique quadruplets are found.

**Time Complexity:** O(n³)

**Space Complexity:** O(1) *(excluding the output list)*

File: `Two_Pointers.cpp`

---

## Key Insight

Sorting transforms the problem into a series of **Two Sum** searches. By fixing the first two elements and applying the **Two Pointers** technique to the remaining subarray, all unique quadruplets can be found efficiently while avoiding duplicate results. This approach achieves the optimal **O(n³)** time complexity with constant extra space.
