#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr1, vector<int> &arr2, vector<int> &merged);

int main()
{
    int size1, size2;
    cout << "Enter the size of the first array: \n";
    cin >> size1;
    vector<int> arr1(size1);
    cout << "Enter elements of the first array (sorted): ";
    for (int i = 0; i < size1; i++) {
        cout<<"Enter the element "<<i+1<<": ";
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: \n";
    cin >> size2;
    vector<int> arr2(size2);
    cout << "Enter elements of the second array: \n";
    for (int i = 0; i < size2; i++) {
        cout<<"Enter the element "<<i+1<<": ";
        cin >> arr2[i];
    }

    vector<int> merged(size1 + size2);
    merge(arr1, arr2, merged);

    cout << "Merged Array: ";
    for (int element : merged) {
        cout << element << " ";
    }
    return 0;
}

void merge(vector<int> &arr1, vector<int> &arr2, vector<int> &merged)
{
    int i = 0, j = 0, k = 0;

    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }

    while (i < arr1.size())
    {
        merged[k++] = arr1[i++];
    }

    while (j < arr2.size())
    {
        merged[k++] = arr2[j++];
    }
}