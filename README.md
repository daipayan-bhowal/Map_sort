# Map Sort Algorithm

A non-comparison based sorting algorithm using STL map

## Overview
Map Sort is a simple sorting algorithm that uses a map (or hash map) to sort an array of integers. The algorithm works by:
1. Finding the minimum and maximum elements in the input array.
2. Marking the presence of each element in a map.
3. Reconstructing the sorted array by iterating from the minimum to the maximum element and checking the map for the presence of each element.

This algorithm is efficient for small ranges of integers but may not be suitable for large datasets or wide ranges due to its space complexity.

---

## Features
- **Simple Implementation:** Easy to understand and implement.
- **Efficient for Small Ranges:** Works well when the range of input values is small.
- **Stable Sorting:** Maintains the relative order of equal elements.

---

## Time and Space Complexity
- **Time Complexity:** O(n log n + k), where:
  - `n` is the number of elements in the input array.
  - `k` is the range of values (`maxElement - minElement + 1`).
- **Space Complexity:** O(k), where `k` is the range of values.

---

## Pseudocode
Below is the pseudocode for the Map Sort algorithm:

```plaintext
FUNCTION map_sort(nums):
    // Step 1: Initialize variables
    mp = empty map (key: integer, value: boolean)
    maxElement = -∞
    minElement = +∞

    // Step 2: Find min and max elements in the input vector
    FOR EACH num IN nums:
        IF num > maxElement:
            maxElement = num
        IF num < minElement:
            minElement = num
        // Mark the presence of the element in the map
        mp[num] = true

    // Step 3: Reconstruct the sorted array using the map
    j = 0
    FOR i = minElement TO maxElement:
        IF mp[i] is true:
            nums[j] = i
            j = j + 1

    // Step 4: The vector 'nums' is now sorted
    RETURN
