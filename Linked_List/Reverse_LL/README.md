# Reverse Linked List

## Problem Statement

Given the head of a singly linked list, reverse the linked list and return the new head.

---

## Example

```text
Input:

1 → 2 → 3 → 4 → 5

Output:

5 → 4 → 3 → 2 → 1
```

### Explanation

The direction of every link in the linked list is reversed, making the last node the new head.

---

## Key Observation

Each node points to the next node in the list. Reversing the linked list requires changing the direction of every `next` pointer without losing access to the remaining nodes.

Using three pointers allows the reversal to be performed in a single traversal.

---

## Approach: Iterative (Three Pointers)

Maintain three pointers to reverse the links one node at a time.

### Algorithm

1. Initialize three pointers:

   * `prev = NULL`
   * `curr = head`
   * `next = NULL`
2. Store the next node.
3. Reverse the current node's `next` pointer.
4. Move `prev` to the current node.
5. Move `curr` to the next node.
6. Repeat until all nodes are processed.
7. Return `prev` as the new head of the reversed list.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

File: `Reverse.cpp`

---

## Key Insight

The algorithm traverses the linked list only once while maintaining three pointers to preserve the remaining nodes during reversal. Each node is visited exactly once, resulting in an efficient **O(n)** solution with **constant extra space**.
