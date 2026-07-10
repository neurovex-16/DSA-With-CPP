# Huffman Encoding

## Problem Statement

Given a set of characters along with their corresponding frequencies, construct a **Huffman Tree** and generate the binary Huffman code for each character.

The objective is to assign **shorter binary codes to more frequent characters** and **longer binary codes to less frequent characters**, minimizing the total number of bits required for encoding.

---

## Approach

This problem is solved using a **Greedy Algorithm** with a **Min Heap (Priority Queue)**.

### Algorithm

1. Create a leaf node for each character and insert all nodes into a **min heap** based on their frequencies.
2. While more than one node remains in the heap:

   * Remove the two nodes with the smallest frequencies.
   * Create a new internal node whose frequency is the sum of the two removed nodes.
   * Make the two removed nodes the left and right children of the new node.
   * Insert the new node back into the min heap.
3. The remaining node becomes the root of the Huffman Tree.
4. Perform a depth-first traversal (DFS):

   * Assign `0` when moving to the left child.
   * Assign `1` when moving to the right child.
5. The binary string formed along each root-to-leaf path is the Huffman code for that character.

---

## Time Complexity

* **Building Min Heap:** `O(n)`
* **Tree Construction:** `O(n log n)`
* **DFS Traversal:** `O(n)`

**Overall Complexity:** `O(n log n)`

---

## Space Complexity

* **Min Heap:** `O(n)`
* **Huffman Tree:** `O(n)`
* **DFS Recursion Stack:** `O(h)`

**Overall Auxiliary Space:** `O(n)`

---

## Example

### Input

```text
characters = ['a', 'b', 'c', 'd', 'e', 'f']
frequency  = [5, 9, 12, 13, 16, 45]
```

### Output

One possible Huffman encoding is:

```text
f : 0
c : 100
d : 101
a : 1100
b : 1101
e : 111
```

> **Note:** Huffman codes are **not unique**. Different valid Huffman trees may produce different binary codes while maintaining the same optimal encoded length.

---

## Key Idea

* Always combine the **two nodes with the smallest frequencies**.
* This greedy choice minimizes the weighted path length of the final Huffman Tree.
* More frequent characters are placed closer to the root, resulting in shorter binary codes and better compression.

---

## Topics

* Greedy Algorithm
* Min Heap (Priority Queue)
* Binary Tree
* Tree Traversal (DFS)
* Data Compression

---

## Platform

* GeeksforGeeks (GFG)

---

## Language

* C++
