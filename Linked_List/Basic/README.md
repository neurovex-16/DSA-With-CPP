# Singly Linked List

## Overview

A **Singly Linked List (SLL)** is a linear data structure in which each node contains:

* A data field.
* A pointer to the next node.

Unlike arrays, linked lists do not store elements in contiguous memory. Instead, each node points to the next node, allowing dynamic memory allocation and efficient insertion or deletion at specific positions.

---

## Structure

```text id="lhg1y8"
Head
 ↓
1 → 2 → 3 → 4 → 5 → NULL
```

Each node stores data and the address of the next node.

---

## Key Characteristics

* Dynamic size.
* Efficient insertion and deletion at the beginning.
* Sequential access to elements.
* Does not support direct indexing.

---

## Implemented Operations

### 1. Insert at Front

Insert a new node at the beginning of the linked list.

**Time Complexity:** O(1)

**Space Complexity:** O(1)

---

### 2. Insert at Back

Insert a new node at the end of the linked list.

**Time Complexity:** O(1) *(Using a tail pointer)*

**Space Complexity:** O(1)

---

### 3. Delete Front

Remove the first node from the linked list.

**Time Complexity:** O(1)

**Space Complexity:** O(1)

---

### 4. Delete Back

Remove the last node from the linked list.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

---

### 5. Insert at Position

Insert a new node at a specified position.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

---

### 6. Search

Search for a given value and return its index.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

---

### 7. Print List

Traverse and print all nodes from head to tail.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

---

## Complexity Summary

| Operation          | Time Complexity | Space Complexity |
| ------------------ | --------------- | ---------------- |
| Insert at Front    | O(1)            | O(1)             |
| Insert at Back     | O(1)*           | O(1)             |
| Delete Front       | O(1)            | O(1)             |
| Delete Back        | O(n)            | O(1)             |
| Insert at Position | O(n)            | O(1)             |
| Search             | O(n)            | O(1)             |
| Print              | O(n)            | O(1)             |

> **Note:** Insertion at the back is **O(1)** because this implementation maintains a **tail pointer**.

---

## Key Insight

A Singly Linked List stores elements as nodes connected through pointers rather than contiguous memory locations. This enables efficient insertion and deletion at the beginning of the list while requiring sequential traversal to access or modify elements at arbitrary positions.
