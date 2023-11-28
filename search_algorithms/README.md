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

# Linear Search Algorithm

The Linear Search is a method used in computer science to find an element within a list or array. It checks each element of the list in turn until a match is found or the entire list has been searched.

The Linear Search algorithm starts at one end of the list and proceeds through each element of the list until the target element is located. If the target element is not found, the search continues until the entire list has been searched

The algorithm makes at most n comparisons, where n is the length of the list. This means that in the worst-case scenario, the algorithm would have to check every element in the list.

The time complexity of the Linear Search algorithm is O(n) in the worst case and O(1) in the best case. This is because in the worst case, the algorithm has to check every element in the list, hence the time complexity is linear. However, in the best case, where the target element is the first element of the list, the time complexity is constant, i.e., O(1).

```
#include <stdio.h>

int linearSearch(int arr[], int n, int x) {
   int i;
   for(i = 0; i < n; i++) {
       if(arr[i] == x) {
           return i;
       }
   }
   return -1;
}

int main(void) {
   int arr[] = {2, 4, 3, 7, 13, 87, 23, 90, 45, 1};
   int x = 90;
   int n = sizeof(arr) / sizeof(arr[0]);
   int result = linearSearch(arr, n, x);
   if(result == -1) {
       printf("Element is not present in array");
   } else {
       printf("Element is present at index %d", result);
   }
   return 0;
}
```

In this code, the linearSearch function takes an array, the size of the array, and the value to search for as input. It iterates over the array and checks if the current element is equal to the value. If it is, it returns the index of the element. If the value is not found in the array, it returns -1.

In the main function, we define an array and the value to search for. We calculate the size of the array and call the linearSearch function with the array, its size, and the value to search for. If the value is found, we print the index of the value. If the value is not found, we print a message indicating that the value is not present in the array.

# Binary Search Algorithm

Binary Search is a searching algorithm that finds the position of a target value within a sorted array. It works by comparing the target value to the middle element of the array. If they are not equal, the half in which the target cannot lie is eliminated and the search continues on the remaining half, again taking the middle element to compare to the target value, and repeating this until the target value is found. If the search ends with the remaining half being empty, the target is not in the array. The time complexity of this algorithm is O(log n).

## Example 

Consider an array A = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10] and we want to find the position of 5 in this array.

* Set lower bound to 0
* Set upper bound to n-1
* If x > A[n-1] or x < A[0] then print element not found
* Set mid to the lower bound plus upper bound divided by 2
* If A[mid] < x then set lower bound to mid + 1
* Else if A[mid] > x then set upper bound to mid - 1
* Else if A[mid] = x then print element found at index mid
* If lower bound > upper bound then print element not found
* Go to step 4

## An EXAMPLE in C

```
#include <stdio.h>

void BinarySearch(int arr[], int n, int x)
{
   int low = 0;
   int high = n;
   int mid;
   // If x is greater than the last element or less than the first element, element not found
   while(low <= high)
   {
       mid = (low + high)/2; // Set mid to the lower bound plus upper bound divided by 2
       if(arr[mid] == x) // If element is found, print index
       {
           printf("Element found at index %d", mid+1);
           return;
       }
       else if(arr[mid] < x) // If element is greater than mid, set lower bound to mid + 1
       {
           low = mid + 1;
       }
       else // If element is less than mid, set upper bound to mid - 1
       {
           high = mid - 1;
       }
   }
   printf("Element not found");
}

int main()
{
   int arr[] = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60};
   int n = sizeof(arr)/sizeof(arr[0]);
   int x = 30;
   BinarySearch(arr, n, x);
   return 0;
}
```
