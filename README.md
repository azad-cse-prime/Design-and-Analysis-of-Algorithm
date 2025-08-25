Here about two types of Sorting Algorithm used: 
## Insertion Sort::

(a) A simple comparison-based sorting algorithm.

(b) Efficient for small or partially sorted arrays.

---> How it works: Takes one element at a time and inserts it into its correct position in the sorted part.

--> Time Complexity:

1) Best: O(n)

2) Average: O(n²)

3) Worst: O(n²)

## Merge Sort::

(a) A divide-and-conquer sorting algorithm.

(b) Efficient for large arrays and arrays in random order.

---> How it works: Divides the array into two halves, recursively sorts them, and then merges them.

--> Time Complexity:

Best / Average / Worst: O(n log n)

# Recursive Tree

mergeSort(0,8)  → arr[0..8]
|
|-- mergeSort(0,4)   → arr[0..4]
|   |
|   |-- mergeSort(0,2)   → arr[0..2]
|   |   |
|   |   |-- mergeSort(0,1)   → arr[0..1]
|   |   |   |
|   |   |   |-- mergeSort(0,0)   → {8} ✅
|   |   |   |-- mergeSort(1,1)   → {9} ✅
|   |   |   |-- merge(0,0,1)     → {8,9}
|   |   |
|   |   |-- mergeSort(2,2)       → {7} ✅
|   |   |-- merge(0,1,2)         → {7,8,9}
|   |
|   |-- mergeSort(3,4)           → arr[3..4]
|   |   |
|   |   |-- mergeSort(3,3)       → {5} ✅
|   |   |-- mergeSort(4,4)       → {12} ✅
|   |   |-- merge(3,3,4)         → {5,12}
|   |
|   |-- merge(0,2,4)             → {5,7,8,9,12}
|
|-- mergeSort(5,8)   → arr[5..8]
    |
    |-- mergeSort(5,6)           → arr[5..6]
    |   |
    |   |-- mergeSort(5,5)       → {4} ✅
    |   |-- mergeSort(6,6)       → {13} ✅
    |   |-- merge(5,5,6)         → {4,13}
    |
    |-- mergeSort(7,8)           → arr[7..8]
    |   |
    |   |-- mergeSort(7,7)       → {2} ✅
    |   |-- mergeSort(8,8)       → {4} ✅
    |   |-- merge(7,7,8)         → {2,4}
    |
    |-- merge(5,6,8)             → {2,4,4,13}
|
|-- merge(0,4,8)                 → {2,4,4,5,7,8,9,12,13}

