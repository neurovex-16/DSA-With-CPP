# Min Stack

## Problem Statement

Design a stack that supports the following operations in **constant time**:

* `push(x)` – Push an element onto the stack.
* `pop()` – Remove the top element.
* `top()` – Return the top element.
* `getMin()` – Retrieve the minimum element currently in the stack.

All operations must run in **O(1)** time.

---

## Example

```text id="o4dq5m"
Operations:

push(-2)
push(0)
push(-3)

getMin() → -3

pop()

top() → 0

getMin() → -2
```

---

## Key Observation

The challenge is to retrieve the minimum element in constant time without traversing the entire stack.

Different approaches achieve this by either storing additional information or encoding values.

---

## Approaches

### 1. Stack of Pairs

Store both the element and the minimum value up to that point.

#### Algorithm

1. If the stack is empty, push `{value, value}`.
2. Otherwise, store:

   * Current value.
   * Minimum of the current value and the previous minimum.
3. For `getMin()`, return the stored minimum of the top element.

**Time Complexity:**

* Push: O(1)
* Pop: O(1)
* Top: O(1)
* Get Minimum: O(1)

**Space Complexity:** O(n)

File: `Using_Pair.cpp`

---

### 2. Space Optimized (Encoding Technique)

Store only one stack and encode values whenever a new minimum element is inserted.

#### Algorithm

1. Maintain a variable `minValue`.
2. If the new value is smaller than `minValue`, push an encoded value:

   * `2 × value − minValue`
3. Update `minValue`.
4. During `pop()`, decode the previous minimum when an encoded value is encountered.
5. `top()` and `getMin()` return the correct values using the encoding logic.

**Time Complexity:**

* Push: O(1)
* Pop: O(1)
* Top: O(1)
* Get Minimum: O(1)

**Space Complexity:** O(1) *(excluding the stack itself)*

File: `Space_Optimized.cpp`

---

## Complexity Comparison

| Approach           | Push |  Pop |  Top | Get Minimum | Extra Space |
| ------------------ | :--: | :--: | :--: | :---------: | :---------: |
| Stack of Pairs     | O(1) | O(1) | O(1) |     O(1)    |     O(n)    |
| Encoding Technique | O(1) | O(1) | O(1) |     O(1)    |     O(1)    |

---

## Key Insight

The **Stack of Pairs** approach stores the minimum value alongside every element, making the implementation straightforward but requiring additional memory.

The **Encoding Technique** eliminates the need for storing extra minimum values by encoding elements whenever a new minimum is encountered. This preserves constant-time operations while reducing the auxiliary space to **O(1)**, making it the optimal solution.
