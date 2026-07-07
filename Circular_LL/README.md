# Circular Linked List

## Overview

A **Circular Linked List (CLL)** is a variation of a linked list in which the last node points back to the first node instead of pointing to `NULL`.

This circular connection allows traversal of the entire list starting from any node without reaching a null pointer.

---

## Example

```text
Head
 ↓
1 → 2 → 3 → 4 → 5
↑               ↓
└───────────────┘
```

---

## Key Characteristics

* The last node points to the first node.
* There is no `NULL` pointer at the end of the list.
* Traversal can start from any node and eventually returns to the starting node.
* Both insertion and deletion require maintaining the circular connection.

---

## Implemented Operations

### 1. Insert at Head

Insert a new node at the beginning of the circular linked list.

**Time Complexity:** O(1)

**Space Complexity:** O(1)

---

### 2. Insert at Tail

Insert a new node at the end of the circular linked list.

**Time Complexity:** O(1)

**Space Complexity:** O(1)

---

### 3. Delete Head

Remove the first node from the circular linked list.

**Time Complexity:** O(1)

**Space Complexity:** O(1)

---

### 4. Delete Tail

Remove the last node from the circular linked list.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

---

### 5. Print List

Traverse and print all nodes until the traversal reaches the head node again.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

---

## Complexity Summary

| Operation      | Time Complexity | Space Complexity |
| -------------- | --------------- | ---------------- |
| Insert at Head | O(1)            | O(1)             |
| Insert at Tail | O(1)            | O(1)             |
| Delete Head    | O(1)            | O(1)             |
| Delete Tail    | O(n)            | O(1)             |
| Print          | O(n)            | O(1)             |

---

## Key Insight

Unlike a singly linked list, a Circular Linked List has no terminating `NULL` pointer. Instead, the last node always points back to the head, forming a loop. Maintaining this circular connection during insertion and deletion is the key to correctly implementing the data structure.
