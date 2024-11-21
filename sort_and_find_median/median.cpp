#include <iostream>
#include <vector>
using namespace std;

// Function to perform bubble sort on the array
void sort(vector<int>& numbers) {
    int n = numbers.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // Swap the elements if they are in the wrong order
                swap(numbers[j], numbers[j + 1]);
            }
        }
    }
}

// Function to find the median of the sorted array
double sortAndFindMedian(vector<int>& numbers) {
    sort(numbers);  // Sort the numbers first
    int n = numbers.size();

    // Check if the number of elements is even or odd
    if (n % 2 == 0) {
        // If even, return the average of the two middle numbers
        return (numbers[n / 2 - 1] + numbers[n / 2]) / 2.0;
    } else {
        // If odd, return the middle number
        return numbers[n / 2];
    }
}

int main() {
    vector<int> numbers;
    int n, num;

    // User input for array size and elements
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> num;
        numbers.push_back(num);
    }

    // Find and output the median
    double median = sortAndFindMedian(numbers);
    cout << "The median is: " << median << endl;

    return 0;
}

