# Valid Parentheses

## Problem Statement

Given a string `s` containing only the characters `'('`, `')'`, `'{'`, `'}'`, `'['`, and `']'`, determine whether the input string is valid.

A string is considered valid if:

* Every opening bracket has a corresponding closing bracket of the same type.
* Brackets are closed in the correct order.
* Every closing bracket matches the most recently opened bracket.

Return `true` if the string is valid; otherwise, return `false`.

---

## Example

```text
Input:
s = "()[]{}"

Output:
true
```

### Explanation

Each opening bracket is matched with the correct closing bracket in the proper order.

---

## Key Observation

A closing bracket must always match the **most recently opened** unmatched bracket.

This **Last-In, First-Out (LIFO)** behavior makes the **Stack** data structure the ideal choice for solving this problem.

---

## Approach: Stack

Use a stack to keep track of opening brackets while traversing the string.

### Algorithm

1. Initialize an empty stack.
2. Traverse each character of the string.
3. If the character is an opening bracket, push it onto the stack.
4. If the character is a closing bracket:

   * Check whether the stack is empty.
   * Compare it with the top element of the stack.
   * If they do not match, return `false`.
   * Otherwise, pop the top element.
5. After processing all characters, return `true` if the stack is empty; otherwise, return `false`.

**Time Complexity:** O(n)

**Space Complexity:** O(n)

File: `Stack.cpp`

---

## Key Insight

The stack always stores the unmatched opening brackets. Whenever a closing bracket is encountered, it must match the bracket at the top of the stack. If every opening bracket is matched correctly and the stack becomes empty at the end, the parentheses are valid.
