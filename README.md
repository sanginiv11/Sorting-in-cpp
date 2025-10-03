# Sorting-in-cpp
## Objective
Practice implementing core sorting algorithms in C++ and explaining how they operate, with attention to steps, complexity, stability, and memory use.

Software:
- MinGW C/C++ compiler
- Visual Studio Code
- Online C++ compiler

***

## Program 1 Bubble sort with pointers
### Explanation and theory
Bubble Sort repeatedly inspects neighboring elements and swaps them when they are out of order. In this variant, pointer arithmetic is used to traverse the array: comparisons are made via dereferenced pointers (for example, $$*ptr$$ and $$*(ptr+1)$$), and swaps are performed by writing through those pointers. The outer loop controls the number of passes, and the inner loop walks up to the last unsorted position, shrinking that boundary each pass. The algorithm is in-place, uses constant extra space, and runs in $$\mathcal{O}(n^2)$$ time on average and worst cases; it can be helpful for learning low-level memory access.

### Algorithm
- Start
- For $$n-1$$ passes:
  - Set a pointer to the first array element and another to its successor
  - Compare the two dereferenced values
  - If the first is larger, swap the values via a temporary
  - Advance both pointers and continue until the end of the unsorted range
- After each pass, reduce the comparison boundary by one
- Repeat until fully sorted
- End

***

## Program 2 Insertion sort
### Explanation and theory
Insertion Sort constructs a sorted prefix one item at a time. Treat the first element as sorted; for each subsequent key, scan left through the sorted portion, shifting larger elements to the right until the correct slot is found, then place the key. It is in-place with $$\mathcal{O}(1)$$ extra space, stable, and runs in $$\mathcal{O}(n^2)$$ time in average and worst cases (but $$\mathcal{O}(n)$$ in the best case of already sorted data). Its simplicity and good behavior on nearly sorted inputs make it practical for small arrays.

### Algorithm
- Start
- For each index from 1 to $$n-1$$:
  - Let key be the current element
  - Move left through the sorted portion while elements are greater than key, shifting each one position right
  - Insert key into the vacated position
- Repeat for all elements
- End

***

## Program 3 Bubble sort (array indexing)
### Explanation and theory
This standard Bubble Sort uses indices to compare adjacent array entries and swap them when out of order. Multiple passes move the largest remaining element to its final position at the end of the array after each pass. It is in-place with $$\mathcal{O}(1)$$ extra space and has $$\mathcal{O}(n^2)$$ time complexity on average and worst-case inputs. A pass counter (or an early-exit flag) manages progress until the array is completely ordered.

### Algorithm
- Start
- Read array size and elements
- Initialize pass counter
- For each pass over the unsorted range:
  - Compare adjacent elements by index
  - If the left element is larger, swap with the right
  - Continue to the end of the current unsorted section
  - Increment pass counter and shrink the boundary
- When finished, print the sorted array
- End

***

## Conclusion
Pointer-based Bubble Sort, index-based Bubble Sort, and Insertion Sort demonstrate essential patterns in ordering data: local comparisons, element movement, and pass-wise convergence to a sorted state. Both Bubble Sort variants are easy to follow and operate in-place; the pointer version emphasizes low-level access, while the index version favors clarity. Insertion Sort is stable, space-efficient, and shines on nearly sorted datasets. While $$\mathcal{O}(n^2)$$ methods are not ideal for large inputs, they build intuition for control flow, data movement, and algorithmic reasoning that underpins more advanced sorting techniques.
