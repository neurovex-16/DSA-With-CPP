# Linked List Cycle

## Problem Statement

Given the head of a linked list, determine whether the linked list contains a cycle.

If a cycle exists, return the node where the cycle begins. Otherwise, return `NULL`.

This folder includes solutions for:

* **Linked List Cycle (LeetCode 141)** – Detect whether a cycle exists.
* **Linked List Cycle II (LeetCode 142)** – Find the starting node of the cycle.

---

## Example

```text
Input:

3 → 2 → 0 → -4
    ↑         │
    └─────────┘

Cycle starts at node with value 2.
```

### Output

```text
LeetCode 141:
true

LeetCode 142:
Node(2)
```

---

## Key Observation

If two pointers move through the linked list at different speeds:

* A **slow pointer** moves one node at a time.
* A **fast pointer** moves two nodes at a time.

They will eventually meet if a cycle exists.

Once they meet, resetting one pointer to the head and moving both one step at a time causes them to meet again at the **starting node of the cycle**.

---

## Approaches

### 1. Detect Cycle (LeetCode 141)

Determine whether the linked list contains a cycle.

#### Algorithm

1. Initialize two pointers:

   * `slow` moves one step.
   * `fast` moves two steps.
2. Traverse the list.
3. If both pointers meet, return `true`.
4. If `fast` reaches `NULL`, return `false`.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

File: `Detect_Cycle.cpp`

---

### 2. Find the Starting Node of the Cycle (LeetCode 142)

Return the node where the cycle begins.

#### Algorithm

1. Detect the cycle using the Slow & Fast Pointer technique.
2. If no cycle exists, return `NULL`.
3. Reset the slow pointer to the head.
4. Move both pointers one step at a time.
5. The node where they meet is the starting node of the cycle.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

File: `Detect_Cycle_Start.cpp`

---

## Complexity Comparison

| Problem          | Time Complexity | Space Complexity |
| ---------------- | --------------- | ---------------- |
| Detect Cycle     | O(n)            | O(1)             |
| Find Cycle Start | O(n)            | O(1)             |

---

## Key Insight

Floyd's Cycle Detection Algorithm exploits the difference in speeds between the slow and fast pointers. If a cycle exists, they are guaranteed to meet inside the cycle. Resetting one pointer to the head and moving both pointers at the same speed leads them to the cycle's entry point, enabling both cycle detection and cycle start identification without using extra memory.
