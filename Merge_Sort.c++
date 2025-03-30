#include <iostream>
using namespace std;
void merge(int arr1[],int size1,int arr2[],int size2,int merged[]);
int main()
{
    int arr1[4] = {1,2,3,4};
    int arr2[4] = {5,6,7,8};
    int merged[8];

    merge(arr1,4,arr2,4,merged);

    std::cout<<"Merged Array: ";

    for (int element: merged)
    {
        std::cout<<element<<" ";
    }
    return 0;
}
void merge(int arr1[],int size1,int arr2[],int size2,int merged[])
{
    int i=0,j=0,k=0;

    while (i<size1 && j<size2)
    {
        if (arr1[i]<arr2[j])
        {
            merged[k++]=arr1[i++];
        }
        else
        {
            merged[k++]=arr2[j++];
        }
    }
    
    while (i<size1)
    {
        merged[k++]=arr1[i++];
    }
    
    while (j<size2)
    {
        merged[k++]=arr2[j++];
    }
}