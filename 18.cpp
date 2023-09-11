// Write a program of to sort the array using templates.

#include <iostream>

// Template function to swap two elements
template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

// Template function to partition the array
template <typename T>
int partition(T arr[], int low, int high) {
    T pivot = arr[high]; // Choose the last element as the pivot
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Template function to perform the quicksort
template <typename T>
void quickSort(T arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        // Recursively sort the elements before and after the pivot
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    int intArray[] = {5, 2, 9, 3, 6};
    double doubleArray[] = {5.6, 2.2, 9.0, 3.1, 6.4};
    char charArray[] = {'e', 'b', 'f', 'a', 'd'};

    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    int charSize = sizeof(charArray) / sizeof(charArray[0]);

    std::cout << "Before sorting:" << std::endl;
    for (int i = 0; i < intSize; i++) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    quickSort(intArray, 0, intSize - 1);

    std::cout << "After sorting:" << std::endl;
    for (int i = 0; i < intSize; i++) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

