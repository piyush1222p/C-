#include <iostream>
using namespace std;

// Function to perform insertion sort and display the sorted array
void insertion_sort(int arr[], int size);
// Main function
int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    // Display the unsorted array
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertion_sort(arr, size);

    // Display the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
void insertion_sort(int array[],int size)
{
    for (int i = 0; i < size; i++)
    {
        int key = array[i];
        int j = i-1;

        while (j>=0 && array[j]>key)
        {
            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = key;
    }
}