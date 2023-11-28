# Time Complexity Notations

This README provides an explanation of various time complexity notations. Time complexity is a measure of the amount of time an algorithm takes to run as a function of the size of the input to the program.

## O(1)

O(1) represents constant time complexity. This means that the time taken by the algorithm to execute does not change with the size of the input data set. It is the fastest time complexity. For example, accessing an array by index is a constant time operation, regardless of the size of the array.
```
def get_first_element(array):
   return array[0]
```

In the above Python function, the time complexity is O(1) because accessing an element by its index in an array is a constant time operation.

## O(n)

O(n) represents linear time complexity. This means that the time taken by the algorithm to execute is directly proportional to the size of the input data set. For example, finding the maximum element in an array of 'n' elements would require 'n' comparisons, hence the time complexity is O(n).
```
def find_max(array):
   max_element = array[0]
   for i in range(1, len(array)):
       if array[i] > max_element:
           max_element = array[i]
   return max_element
```

In the above Python function, the time complexity is O(n) because in the worst-case scenario, we have to iterate through each element in the array.

## O(n!)

O(n!) represents factorial time complexity. This is the most inefficient time complexity and is usually seen in brute force algorithms. For example, the Travelling Salesman Problem (TSP) has a solution with a time complexity of O(n!) because in the worst case, we have to generate all permutations of the cities to find the shortest route.

## n*m -> O(nm)

When we have two nested loops, where the outer loop runs 'n' times and the inner loop runs 'm' times, the time complexity is O(nm). This is because the total number of operations is 'n' times 'm'.

```
def print_matrix(matrix):
   for i in range(len(matrix)):
       for j in range(len(matrix[0])):
           print(matrix[i][j], end=' ')
       print()
```

In the above Python function, the time complexity is O(nm) because we have two nested loops, one running 'n' times and the other running 'm' times.

## n square -> O(n^2)

O(n^2) represents quadratic time complexity. This means that the time taken by the algorithm to execute is proportional to the square of the size of the input data set. For example, bubble sort and insertion sort algorithms have a time complexity of O(n^2) because in the worst case, we have to compare each element with every other element.
```
def bubble_sort(array):
   for i in range(len(array)):
       for j in range(len(array) - 1):
           if array[j] > array[j + 1]:
               array[j], array[j + 1] = array[j + 1], array[j]
```

In the above Python function, the time complexity is O(n^2) because we have two nested loops, each running 'n' times 10.

## sqrt(n) -> O(sqrt(n))

O(sqrt(n)) represents square root time complexity. This is a more efficient time complexity than O(n^2) and is seen in algorithms like the Binary Search algorithm.
```
def binary_search(array, target):
   low, high = 0, len(array) - 1
   while low <= high:
       mid = (low + high) // 2
       if array[mid] == target:
           return mid
       elif array[mid] < target:
           low = mid + 1
       else:
           high = mid - 1
   return -1
```

In the above Python function, the time complexity is O(sqrt(n)) because in the worst case, we have to repeatedly divide the problem size by 2 until we find the target element.

## log(n) -> O(log(n))

O(log(n)) represents logarithmic time complexity. This is the most efficient time complexity and is seen in algorithms like Binary Search, Merge Sort, and Heap Sort.
```
def binary_search(array, target):
   low, high = 0, len(array) - 1
   while low <= high:
       mid = (low + high) // 2
       if array[mid] == target:
           return mid
       elif array[mid] < target:
           low = mid + 1
       else:
           high = mid - 1
   return -1
```


In the above Python function, the time complexity is O(log(n)) because in the worst case, we have to repeatedly divide the problem size by 2 until we find the target element.

## n * log(n) -> O(nlog(n))

O(nlog(n)) represents linearithmic time complexity. This is more efficient than O(nlog(n)) represents linearithmic time complexity. This is more efficient than O(n^2) and is seen in algorithms like Merge Sort and Heap Sort. The time complexity of these algorithms is O(nlog(n)) because they divide the problem into smaller subproblems and solve them in a divide-and-conquer approach.
```
def merge_sort(array):
  if len(array) <= 1:
      return array
  mid = len(array) // 2
  left_half = merge_sort(array[:mid])
  right_half = merge_sort(array[mid:])
  return merge(left_half, right_half)
```

In the above Python function, the time complexity is O(nlog(n)) because the array is divided into two halves and the process is repeated until we get an array of size 1. Then, we merge the arrays back together, which takes linear time.

## Conclusion

Understanding time complexity notations is crucial for evaluating the efficiency of an algorithm. It helps us to choose the most efficient algorithm for a given problem and to understand the trade-offs between different algorithms. Remember, lower time complexity usually means better performance, but it's also important to consider other factors like space complexity and readability of the code.