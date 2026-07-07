# Find the Duplicate Number

## Problem Statement

Given an array `nums` containing `n + 1` integers where each integer is in the range `[1, n]`, there is exactly **one duplicate number**.

Return the duplicate number without modifying the array.

---

## Example

```text
Input:
nums = [1, 3, 4, 2, 2]

Output:
2
```

### Explanation

The number `2` appears more than once in the array.

---

## Key Observation

Since the array contains `n + 1` numbers in the range `[1, n]`, at least one number must be repeated.

Different approaches trade off between simplicity and space efficiency.

---

## Approaches

### 1. Using Set

Store each element in a set while traversing the array.

If an element already exists in the set, it is the duplicate.

#### Algorithm

1. Initialize an empty set.
2. Traverse the array.
3. If the current element already exists in the set, return it.
4. Otherwise, insert the element into the set.
5. Continue until the duplicate is found.

**Time Complexity:** O(n)

**Space Complexity:** O(n)

File: `Using_Set.cpp`

---

### 2. Floyd's Cycle Detection (Slow & Fast Pointers)

Treat the array as a linked list where each value points to the next index.

The duplicate number forms a cycle.

#### Algorithm

1. Initialize two pointers:

   * `slow` moves one step at a time.
   * `fast` moves two steps at a time.
2. Continue until both pointers meet.
3. Reset one pointer to the beginning.
4. Move both pointers one step at a time.
5. The point where they meet again is the duplicate number.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

File: `Slow_Fast_Pointers.cpp`

---

## Complexity Comparison

| Approach             | Time Complexity | Space Complexity |
| -------------------- | --------------- | ---------------- |
| Using Set            | O(n)            | O(n)             |
| Slow & Fast Pointers | O(n)            | O(1)             |

---

## Key Insight

The array can be viewed as a linked list where each value represents the next index. Because one number is duplicated, a cycle is formed. Floyd's Cycle Detection algorithm efficiently identifies the entry point of this cycle, which corresponds to the duplicate number, achieving **O(n)** time with **constant extra space**.
