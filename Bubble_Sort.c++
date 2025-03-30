#include <iostream>

void sort(int array[],int size);
int main()
{
    int array[] = {10,6,7,1,2,4,3,9,5,8};
    int size = sizeof(array)/sizeof(int);

    sort(array,size);

    /*This code is based on Bubble Sort algorithm*/
    for(int element:array)
    {
        std::cout << element << " ";
    }
    return 0;
}
void sort(int array[],int size)
{
    int temp;
    for(int i=0;i<size-1;i++)
    {
        for (int j=0; j < size-i-1; j++)
        {
            if (array[j]>array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}