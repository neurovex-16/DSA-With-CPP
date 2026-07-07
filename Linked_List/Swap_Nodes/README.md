# Swapping Nodes in a Linked List

## Problem Statement

Given the head of a linked list and an integer `k`, swap the values of the **kth node from the beginning** and the **kth node from the end**.

Return the head of the modified linked list.

---

## Example

```text
Input:

List:
1 → 2 → 3 → 4 → 5

k = 2

Output:

1 → 4 → 3 → 2 → 5
```

### Explanation

* The 2nd node from the beginning is `2`.
* The 2nd node from the end is `4`.
* After swapping their values, the linked list becomes:

```text
1 → 4 → 3 → 2 → 5
```

---

## Key Observation

To find the **kth node from the end** efficiently, there is no need to compute the length of the linked list.

Using two pointers allows both target nodes to be identified in a single traversal after locating the kth node from the beginning.

---

## Approach: Two Pointers

Use one pointer to locate the kth node from the beginning and another pointer to find the kth node from the end.

### Algorithm

1. Traverse the linked list to reach the kth node from the beginning.
2. Store its address.
3. Initialize another pointer at the head.
4. Move a second pointer from the kth node to the end.
5. Move both pointers simultaneously until the second pointer reaches the last node.
6. The first pointer now points to the kth node from the end.
7. Swap the values of the two nodes.
8. Return the head of the linked list.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

File: `Swap_Nodes.cpp`

---

## Key Insight

Instead of calculating the length of the linked list, the Two Pointers technique finds the kth node from the end by maintaining a fixed distance between two pointers. This enables both target nodes to be located efficiently in linear time while using constant extra space.
