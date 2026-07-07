# Copy List with Random Pointer

## Problem Statement

Given the head of a linked list where each node contains:

* A `next` pointer to the next node.
* A `random` pointer that may point to any node in the list or `NULL`.

Create a **deep copy** of the linked list such that:

* Each new node has the same value as the corresponding original node.
* Both the `next` and `random` pointers are correctly assigned.
* No node in the copied list points to any node in the original list.

Return the head of the copied linked list.

---

## Example

```text
Original List:

7 → 13 → 11 → 10 → 1
      ↘     ↖      ↘
      7     1      11
```

```text
Copied List:

7 → 13 → 11 → 10 → 1
      ↘     ↖      ↘
      7     1      11
```

The copied list has the same structure, but all nodes are newly created.

---

## Key Observation

The `random` pointers can point to any node in the list, making a simple node-by-node copy insufficient.

A mapping between the original nodes and their corresponding copied nodes allows both `next` and `random` pointers to be assigned correctly.

---

## Approach: Hash Map

Use a hash map to maintain the correspondence between original nodes and copied nodes.

### Algorithm

1. Traverse the original list and create a copy of each node.
2. Store the mapping:

   * `original node → copied node`
3. Connect the `next` pointers while creating the copied list.
4. Traverse both lists again.
5. Assign the `random` pointer of each copied node using the hash map.
6. Return the head of the copied linked list.

**Time Complexity:** O(n)

**Space Complexity:** O(n)

File: `Hash_Map.cpp`

---

## Key Insight

A hash map provides constant-time access to the copied version of any original node. This allows both the `next` and `random` pointers to be assigned efficiently while traversing the list only twice, resulting in an **O(n)** solution.
