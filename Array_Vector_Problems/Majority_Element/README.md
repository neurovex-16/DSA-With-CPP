# Majority Element

## Problem Statement

Given an array of size `n`, find the element that appears more than `n/2` times.

The majority element is guaranteed to exist.

---

## Example

```text
Input:
[2, 2, 1, 1, 1, 2, 2]

Output:
2
```

### Explanation

```text
Array Size = 7

Frequency of 2 = 4

4 > 7/2
```

Therefore, `2` is the majority element.

---

## Key Observation

A majority element appears more than half of the total number of elements in the array.

```text
Frequency > n/2
```

---

## Approaches

### 1. Brute Force

Count the frequency of every element by traversing the array repeatedly.

#### Algorithm

1. Select an element.
2. Count its occurrences in the array.
3. If the count exceeds `n/2`, return the element.
4. Otherwise, continue searching.

**Time Complexity:** O(n²)

**Space Complexity:** O(1)

File: `Brute_Force.cpp`

---

### 2. Sorting

Sort the array and identify the majority element.

#### Key Observation

After sorting, the majority element will always occupy the middle position of the array.

#### Algorithm

1. Sort the array.
2. Return the element at index `n/2`.

**Time Complexity:** O(n log n)

**Space Complexity:** O(1)

File: `Sorting.cpp`

---

### 3. Boyer-Moore Voting Algorithm

Maintain a candidate and a vote count.

#### Algorithm

1. Select a candidate when the count becomes zero.
2. Increase the count if the current element matches the candidate.
3. Otherwise, decrease the count.
4. The remaining candidate is the majority element.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

File: `Boyer_Moore_Algorithm.cpp`

---

## Complexity Comparison

| Approach                     | Time Complexity | Space Complexity |
| ---------------------------- | --------------- | ---------------- |
| Brute Force                  | O(n²)           | O(1)             |
| Sorting                      | O(n log n)      | O(1)             |
| Boyer-Moore Voting Algorithm | O(n)            | O(1)             |

---

## Key Insight

The Boyer-Moore Voting Algorithm works by canceling out different elements. Since the majority element appears more than `n/2` times, it will always remain as the final candidate.
