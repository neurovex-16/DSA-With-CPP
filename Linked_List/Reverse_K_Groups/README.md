# Reverse Nodes in k-Group

## Problem Statement

Given the head of a linked list and an integer `k`, reverse the nodes of the linked list **k at a time** and return the modified list.

If the number of remaining nodes is less than `k`, leave them unchanged.

The node values must not be modified; only the node links may be changed.

---

## Example

```text id="bzlttd"
Input:

List:
1 → 2 → 3 → 4 → 5

k = 2

Output:

2 → 1 → 4 → 3 → 5
```

---

```text id="3h1n5w"
Input:

List:
1 → 2 → 3 → 4 → 5

k = 3

Output:

3 → 2 → 1 → 4 → 5
```

### Explanation

The first `k` nodes are reversed as a group. Any remaining nodes with fewer than `k` elements remain in their original order.

---

## Key Observation

Before reversing a group, verify that at least `k` nodes are available.

If fewer than `k` nodes remain, stop the process and leave the remaining nodes unchanged.

---

## Approach

Reverse the linked list one group of `k` nodes at a time.

### Algorithm

1. Count whether at least `k` nodes are available.
2. If fewer than `k` nodes remain, return the current head.
3. Reverse the current group of `k` nodes.
4. Recursively or iteratively process the remaining list.
5. Connect the reversed group to the processed remainder.
6. Return the head of the reversed group.

**Time Complexity:** O(n)

**Space Complexity:**

* **O(n / k)** *(Recursive implementation due to recursion stack)*
* **O(1)** *(Iterative implementation)*

File: `Reverse_K_Groups.cpp`

---

## Key Insight

The linked list is processed in fixed-size groups. Each group is reversed independently while preserving the order of any remaining nodes that do not form a complete group. Since every node is visited exactly once, the algorithm runs in **O(n)** time.
