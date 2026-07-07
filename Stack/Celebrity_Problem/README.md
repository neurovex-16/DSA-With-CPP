# Celebrity Problem

## Problem Statement

A celebrity is a person who:

* **Knows nobody** at the party.
* **Is known by everyone else**.

Given an `n × n` matrix `M`, where:

* `M[i][j] = 1` means person `i` knows person `j`.
* `M[i][j] = 0` means person `i` does not know person `j`.

Determine whether a celebrity exists. If a celebrity exists, return their index; otherwise, return `-1`.

---

## Example

```text id="efn9v0"
Input:

M =
[
  [0, 1, 1],
  [0, 0, 0],
  [0, 1, 0]
]

Output:
1
```

### Explanation

* Person `1` knows nobody.
* Every other person knows person `1`.

Therefore, person `1` is the celebrity.

---

## Key Observation

If person **A knows B**, then **A cannot be the celebrity**.

If person **A does not know B**, then **B cannot be the celebrity**.

Using this observation, we can eliminate one candidate at a time until only one potential celebrity remains.

---

## Approach: Stack

Use a stack to eliminate non-celebrities efficiently.

### Algorithm

1. Push all people into a stack.
2. While the stack contains more than one person:

   * Pop two people.
   * If the first person knows the second, discard the first.
   * Otherwise, discard the second.
   * Push the remaining candidate back onto the stack.
3. The remaining person is the potential celebrity.
4. Verify the candidate:

   * They should know nobody.
   * Everyone else should know them.
5. If both conditions are satisfied, return the candidate's index; otherwise, return `-1`.

**Time Complexity:** O(n)

**Space Complexity:** O(n)

File: `Stack.cpp`

---

## Key Insight

Instead of checking every person against every other person, the elimination process removes one non-celebrity in each comparison. After identifying a single candidate, one final verification confirms whether they satisfy the celebrity conditions. This reduces the overall time complexity to **O(n)**.
