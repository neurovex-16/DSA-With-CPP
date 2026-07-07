# Middle of the Linked List

## Problem Statement

Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the **second middle node**.

---

## Example

```text
Input:

1 → 2 → 3 → 4 → 5

Output:

3 → 4 → 5
```

### Explanation

The middle node of the linked list is `3`.

---

```text
Input:

1 → 2 → 3 → 4 → 5 → 6

Output:

4 → 5 → 6
```

### Explanation

The linked list has two middle nodes (`3` and `4`). According to the problem statement, the second middle node is returned.

---

## Key Observation

The middle node can be found either by:

* Counting the total number of nodes first, or
* Using two pointers moving at different speeds.

The second approach is more efficient because it finds the middle in a single traversal.

---

## Approaches

### 1. Brute Force

Traverse the linked list twice.

#### Algorithm

1. Traverse the linked list to count the total number of nodes.
2. Compute the middle position as `count / 2 + 1`.
3. Traverse the list again until the middle position is reached.
4. Return the middle node.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

File: `Brute_Force.cpp`

---

### 2. Slow & Fast Pointers (Optimal)

Use two pointers moving at different speeds.

#### Algorithm

1. Initialize two pointers:

   * `slow` at the head.
   * `fast` at the head.
2. Move:

   * `slow` one step at a time.
   * `fast` two steps at a time.
3. Continue until `fast` reaches the end of the list.
4. Return the node pointed to by `slow`.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

File: `Slow_Fast_Pointers.cpp`

---

## Complexity Comparison

| Approach             | Time Complexity | Space Complexity |
| -------------------- | --------------- | ---------------- |
| Brute Force          | O(n)            | O(1)             |
| Slow & Fast Pointers | O(n)            | O(1)             |

---

## Key Insight

The brute-force approach requires two traversals: one to determine the length of the list and another to reach the middle. The Slow & Fast Pointer technique improves this by locating the middle in a single traversal. Since the fast pointer moves twice as quickly as the slow pointer, the slow pointer naturally reaches the middle when the fast pointer reaches the end of the list.
