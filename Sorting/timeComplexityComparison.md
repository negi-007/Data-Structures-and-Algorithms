# Time Complexity Comparison

This document compares the time complexities of three common sorting algorithms: Bubble Sort, Insertion Sort, and Selection Sort. The complexities are discussed for Best Case, Average Case, and Worst Case scenarios.

| Algorithm       | Best Case      | Average Case    | Worst Case      |
|-----------------|-----------------|-----------------|-----------------|
| **Bubble Sort** | O(n)            | O(n^2)          | O(n^2)          |
| **Insertion Sort** | O(n)            | O(n^2)          | O(n^2)          |
| **Selection Sort** | O(n^2)          | O(n^2)          | O(n^2)          |

### Explanation

- **Bubble Sort**:
  - **Best Case**: O(n) – Occurs when the array is already sorted. The algorithm performs one pass through the array to confirm no swaps are needed.
  - **Average Case**: O(n^2) – The algorithm performs multiple passes and needs to compare and swap elements in roughly half of the array.
  - **Worst Case**: O(n^2) – Occurs when the array is sorted in reverse order, requiring the maximum number of comparisons and swaps.

- **Insertion Sort**:
  - **Best Case**: O(n) – Occurs when the array is already sorted. The algorithm only needs to make a single pass through the array.
  - **Average Case**: O(n^2) – The algorithm performs a quadratic number of comparisons and shifts on average as elements are inserted into their correct position.
  - **Worst Case**: O(n^2) – Occurs when the array is sorted in reverse order, requiring the maximum number of comparisons and shifts.

- **Selection Sort**:
  - **Best Case**: O(n^2) – Selection Sort always performs the same number of comparisons regardless of the initial order of elements.
  - **Average Case**: O(n^2) – The algorithm consistently performs a quadratic number of comparisons to find the minimum element in the unsorted portion.
  - **Worst Case**: O(n^2) – Similar to the average case, the number of comparisons is quadratic.

### Summary

- **Bubble Sort** and **Insertion Sort** can achieve better performance in the best case when the array is already sorted. 
- **Selection Sort** has a fixed time complexity of O(n^2) in all cases due to its method of finding the minimum element repeatedly.