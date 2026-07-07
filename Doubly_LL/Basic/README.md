# Doubly Linked List

## Overview

A **Doubly Linked List (DLL)** is a linear data structure in which each node contains:

* A data field.
* A pointer to the next node.
* A pointer to the previous node.

Unlike a singly linked list, traversal is possible in both forward and backward directions.

---

## Structure

```text
NULL ← 1 ⇄ 2 ⇄ 3 ⇄ 4 ⇄ 5 → NULL
```

Each node maintains links to both its previous and next nodes.

---

## Key Characteristics

* Supports bidirectional traversal.
* Allows efficient insertion and deletion when the node position is known.
* Requires extra memory for the previous pointer.

---

## Implemented Operations

### 1. Insert at Front

Insert a new node at the beginning of the doubly linked list.

**Time Complexity:** O(1)

**Space Complexity:** O(1)

---

### 2. Insert at Back

Insert a new node at the end of the doubly linked list.

**Time Complexity:** O(1)

**Space Complexity:** O(1)

---

### 3. Delete Front

Remove the first node from the doubly linked list.

**Time Complexity:** O(1)

**Space Complexity:** O(1)

---

### 4. Delete Back

Remove the last node from the doubly linked list.

**Time Complexity:** O(1)

**Space Complexity:** O(1)

---

### 5. Print List

Traverse the list from head to tail and print all elements.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

---

## Complexity Summary

| Operation       | Time Complexity | Space Complexity |
| --------------- | --------------- | ---------------- |
| Insert at Front | O(1)            | O(1)             |
| Insert at Back  | O(1)            | O(1)             |
| Delete Front    | O(1)            | O(1)             |
| Delete Back     | O(1)            | O(1)             |
| Print           | O(n)            | O(1)             |

---

## Key Insight

A Doubly Linked List maintains pointers to both the previous and next nodes, allowing efficient insertion and deletion at both ends of the list. The additional backward pointer enables bidirectional traversal but requires extra memory compared to a singly linked list.
