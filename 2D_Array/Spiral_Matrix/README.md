# Spiral Matrix

## Problem Statement

Given an `m × n` matrix, return all elements of the matrix in **spiral order**.

The traversal starts from the top-left corner and proceeds clockwise until all elements have been visited.

---

## Example

```text
Input:
[
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9]
]

Output:
[1, 2, 3, 6, 9, 8, 7, 4, 5]
```

### Explanation

The elements are traversed in the following order:

```text
→ → ↓
      ↓
↑ ← ←
   ↑
```

Result:

```text
1 → 2 → 3 → 6 → 9 → 8 → 7 → 4 → 5
```

---

## Key Observation

The matrix can be traversed by maintaining four boundaries:

* **Top**
* **Bottom**
* **Left**
* **Right**

After traversing one side, update the corresponding boundary and continue until all elements have been visited.

---

## Approach

Use four pointers to represent the current boundaries of the matrix and traverse layer by layer in clockwise order.

### Algorithm

1. Initialize four boundaries:

   * `top = 0`
   * `bottom = rows - 1`
   * `left = 0`
   * `right = columns - 1`
2. Traverse from **left to right** along the top row, then increment `top`.
3. Traverse from **top to bottom** along the right column, then decrement `right`.
4. If rows remain, traverse from **right to left** along the bottom row, then decrement `bottom`.
5. If columns remain, traverse from **bottom to top** along the left column, then increment `left`.
6. Repeat until all elements have been visited.

**Time Complexity:** O(m × n)

**Space Complexity:** O(1) *(excluding the output array)*

File: `Spiral_Matrix.cpp`

---

## Key Insight

Instead of marking visited cells, the algorithm gradually shrinks the traversal boundaries after completing each layer. Since every element is visited exactly once, the solution runs in **O(m × n)** time while using constant extra space.
