# Merge Two Sorted Lists

## Problem Statement

Given the heads of two sorted linked lists, merge them into a single sorted linked list.

The merged list should be created by reusing the existing nodes from the two input lists while maintaining the sorted order.

Return the head of the merged linked list.

---

## Example

```text
Input:

List 1:
1 → 2 → 4

List 2:
1 → 3 → 4

Output:

1 → 1 → 2 → 3 → 4 → 4
```

### Explanation

At each step, the smaller node between the two lists is selected and recursively linked to the remaining merged list.

---

## Key Observation

Since both linked lists are already sorted, the smaller of the two current nodes must always appear first in the merged list.

This observation naturally leads to a recursive solution.

---

## Approach: Recursion

Recursively compare the heads of the two linked lists and merge the remaining nodes.

### Algorithm

1. If one list is empty, return the other list.
2. Compare the first nodes of both lists.
3. If the first node of the first list is smaller:

   * Link it with the recursively merged remainder.
   * Return the first node.
4. Otherwise:

   * Link the first node of the second list with the recursively merged remainder.
   * Return the second node.
5. Continue until all nodes are merged.

**Time Complexity:** O(n + m)

*(`n` and `m` are the lengths of the two linked lists.)*

**Space Complexity:** O(n + m)

*(Recursive call stack)*

File: `Merge.cpp`

---

## Key Insight

Because both input lists are already sorted, each recursive call selects the smaller current node and attaches it to the merged list. Every node is visited exactly once, resulting in **O(n + m)** time complexity. The recursive approach produces concise and elegant code, with the only additional cost being the recursion stack.
