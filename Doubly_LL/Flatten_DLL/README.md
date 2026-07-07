# Flatten a Multilevel Doubly Linked List

## Problem Statement

You are given the head of a multilevel doubly linked list.

In addition to the `next` and `prev` pointers, each node may also have a `child` pointer that points to another doubly linked list.

Flatten the list so that all nodes appear in a single-level doubly linked list. The `child` pointers should be removed, and the relative order of nodes must be preserved.

---

## Example

```text id="tjlwmx"
Input:

1 ⇄ 2 ⇄ 3 ⇄ 4 ⇄ 5 ⇄ 6
        |
        7 ⇄ 8 ⇄ 9 ⇄ 10
            |
            11 ⇄ 12
```

```text id="vqjlwm"
Output:

1 ⇄ 2 ⇄ 3 ⇄ 7 ⇄ 8 ⇄ 11 ⇄ 12 ⇄ 9 ⇄ 10 ⇄ 4 ⇄ 5 ⇄ 6
```

---

## Key Observation

Whenever a node has a **child** list, the child should be inserted immediately after that node while preserving the remaining part of the original list.

A **Depth-First Search (DFS)** traversal naturally visits nodes in the required order.

---

## Approach: Depth-First Search (DFS)

Traverse the multilevel list recursively and connect each child list into the main list.

### Algorithm

1. Traverse the current level.
2. If a node has no child, continue to the next node.
3. If a child exists:

   * Flatten the child list recursively.
   * Connect the child list after the current node.
   * Connect the tail of the flattened child list to the original next node.
   * Remove the child pointer.
4. Continue until all nodes are processed.

**Time Complexity:** O(n)

**Space Complexity:** O(n) *(Recursive call stack)*

File: `DFS.cpp`

---

## Key Insight

The multilevel structure can be viewed as a tree, where each `child` pointer represents a deeper level. A **Depth-First Search** traversal visits every node exactly once while preserving the required order. After flattening each child list, reconnecting it with the remaining nodes produces a valid single-level doubly linked list.
