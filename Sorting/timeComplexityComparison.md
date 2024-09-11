# Time Complexity Comparison

This document provides a comparison of the time complexities for various sorting algorithms, including Bubble Sort, Insertion Sort, Selection Sort, Merge Sort, and Quick Sort.

## Time Complexity Table

| Sorting Algorithm | Best Case       | Average Case     | Worst Case       |
|--------------------|------------------|------------------|------------------|
| Bubble Sort        | O(n)             | O(n^2)           | O(n^2)           |
| Insertion Sort     | O(n)             | O(n^2)           | O(n^2)           |
| Selection Sort     | O(n^2)           | O(n^2)           | O(n^2)           |
| Merge Sort         | O(n log n)       | O(n log n)       | O(n log n)       |
| Quick Sort         | O(n log n)       | O(n log n)       | O(n^2)           |

## Explanation

- **Bubble Sort**:
  - **Best Case**: O(n) when the array is already sorted (one pass with no swaps needed).
  - **Average Case**: O(n^2) due to nested loops for each element comparison.
  - **Worst Case**: O(n^2) when the array is sorted in reverse order.

- **Insertion Sort**:
  - **Best Case**: O(n) when the array is already sorted (each element only needs to be compared once).
  - **Average Case**: O(n^2) due to the nested loop comparisons and shifts.
  - **Worst Case**: O(n^2) when the array is sorted in reverse order.

- **Selection Sort**:
  - **Best Case**: O(n^2) as it always performs the same number of comparisons.
  - **Average Case**: O(n^2) due to the nested loop for finding the minimum element.
  - **Worst Case**: O(n^2) as it always performs the same number of comparisons regardless of the initial order.

- **Merge Sort**:
  - **Best Case**: O(n log n) as it always divides the array and merges in logarithmic steps.
  - **Average Case**: O(n log n) due to the divide-and-conquer approach.
  - **Worst Case**: O(n log n) as it consistently performs the same operations regardless of the initial order.

- **Quick Sort**:
  - **Best Case**: O(n log n) when the pivot divides the array into nearly equal parts.
  - **Average Case**: O(n log n) on average with random or well-chosen pivots.
  - **Worst Case**: O(n^2) when the pivot choices lead to highly unbalanced partitions (e.g., sorted array with poor pivot selection).

## Notes

- Quick Sort's performance can be improved with randomized or median-of-three pivot strategies to avoid the worst case.
- Merge Sort is stable and guarantees O(n log n) time complexity but requires additional space for merging.