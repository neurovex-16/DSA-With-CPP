# Container With Most Water

## Problem Statement

Given an array `height`, where each element represents the height of a vertical line, find two lines that together with the x-axis form a container capable of holding the maximum amount of water.

Return the maximum amount of water the container can store.

---

## Example

```text
Input:
height = [1,8,6,2,5,4,8,3,7]

Output:
49
```

### Explanation

The maximum area is formed by the lines with heights `8` and `7`.

```text
Area = min(8, 7) × (8 - 1)
     = 7 × 7
     = 49
```

---

## Key Observation

The area of water between two lines is determined by:

* The shorter of the two heights.
* The distance between the two lines.

Formula:

```text
Area = min(height[left], height[right]) × (right - left)
```

---

## Approaches

### 1. Brute Force

Check every possible pair of lines and calculate the area formed by each pair.

#### Algorithm

1. Select the first line.
2. Select every possible second line.
3. Compute the area.
4. Update the maximum area found.

**Time Complexity:** O(n²)

**Space Complexity:** O(1)

File: `Brute_Force.cpp`

---

### 2. Two Pointers (Optimal)

Use two pointers starting from both ends of the array.

#### Algorithm

1. Place one pointer at the beginning and the other at the end.
2. Calculate the current area.
3. Update the maximum area if necessary.
4. Move the pointer with the smaller height inward.
5. Continue until both pointers meet.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

File: `Two_Pointers.cpp`

---

## Complexity Comparison

| Approach     | Time Complexity | Space Complexity |
| ------------ | --------------- | ---------------- |
| Brute Force  | O(n²)           | O(1)             |
| Two Pointers | O(n)            | O(1)             |

---

## Key Insight

The container's height is limited by the shorter line. Moving the taller line cannot increase the area because the height remains constrained while the width decreases. Therefore, always move the pointer pointing to the shorter line in search of a potentially taller one, allowing the algorithm to find the maximum area in linear time.
