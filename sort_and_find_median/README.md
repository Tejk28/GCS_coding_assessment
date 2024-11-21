# Sort and Find Median

This C++ program calculates the median of an array of numbers. 
The program uses a sorting algorithm (bubble sort in this case) 
to sort the array in ascending order, and then computes the median 
based on the sorted array. The median is defined as the middle element 
of a sorted array if the number of elements is odd, or the average of 
the two middle elements if the number of elements is even.


## Features
- Bubble Sort algorithm to sort the array of numbers.
- Median Calculation: Handles both odd and even-sized arrays.
- User Input: The user is prompted to input the number of elements and the elements themselves.

## Requirements
- A C++ compiler (e.g., g++).
- C++11 or later for `std::vector` and other standard features.

## How to Run

1. Clone or download this repository to your local machine.
2. Navigate to the folder containing the C++ source file `median.cpp`.
3. Open a terminal and compile the program using the following command:
   g++ -o median median.cpp
4. Execute the C++ program in terminal with following command:
   ./median

#Example

Input:
Enter the number of elements: 5
Enter the elements: 3 1 4 1 5

Output:

The median is: 3

For an even number of elements:

Input:

Enter the number of elements: 6
Enter the elements: 1 2 3 4 5 6

Output:

The median is: 3.5

#Algorithm Details

Bubble Sort: The sort() function implements the bubble sort algorithm to sort the numbers in ascending order.
Median Calculation: The sortAndFindMedian() function checks whether the number of elements is odd or even:
If odd, it returns the middle element. If even, it returns the average of the two middle elements.

