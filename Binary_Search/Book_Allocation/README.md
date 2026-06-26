# Book Allocation Problem

## Problem Statement

Given an array `books`, where each element represents the number of pages in a book, and an integer `students` representing the number of students, allocate the books such that:

* Each student receives at least one book.
* Each book is allocated to exactly one student.
* Books assigned to a student must be contiguous.

The objective is to **minimize the maximum number of pages assigned to any student**.

Return the minimum possible value of the maximum pages allocated.

---

## Example

```text
Input:
Books = [12, 34, 67, 90]
Students = 2

Output:
113
```

### Explanation

One possible allocation is:

```text
Student 1: [12, 34, 67] → 113 pages
Student 2: [90] → 90 pages
```

The maximum number of pages assigned to any student is **113**, which is the minimum possible.

---

## Key Observation

The answer always lies within the following range:

```text
Lower Bound = Maximum number of pages in a single book

Upper Bound = Sum of all pages
```

This search space is monotonic, making it suitable for **Binary Search on the Answer**.

---

## Approach: Binary Search on Answer

Instead of searching for the allocation directly, perform Binary Search on the maximum number of pages that can be assigned to a student.

### Algorithm

1. Set:

   * `low = maximum pages in a single book`
   * `high = sum of all pages`
2. Find the middle value (`mid`).
3. Check whether all books can be allocated using `mid` as the maximum page limit.
4. If the allocation is possible, search the left half for a smaller answer.
5. Otherwise, search the right half.
6. Continue until the minimum feasible page limit is found.

**Time Complexity:** O(n log(sum))

**Space Complexity:** O(1)

File: `Optimised.cpp`

---

## Key Insight

The feasibility of allocating books changes monotonically with the page limit. If allocation is possible for a given maximum number of pages, it will also be possible for any larger value. This monotonic property makes **Binary Search on the Answer** an efficient solution for finding the minimum feasible page limit.
