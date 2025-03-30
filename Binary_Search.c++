#include <iostream>
void binarysearch(int array[],int size,int target);
int main(){
    int age_match[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(age_match)/sizeof(age_match[0]);
    int target;
    std::cout << "Enter the target value: ";
    std::cin>>target;

    binarysearch(age_match,size,target);

    return 0;
}
void binarysearch(int array[],int size,int target){
    int low=0;
    int high=size-1;

    while (low<=high)
    {
        int mid = low + ((high-low)/2);

        if (array[mid]<target)
        {
            low=mid+1;
        }
        else if(array[mid]>target)
        {
            high=mid-1;
        }
        else if (array[mid]==target)
        {
            std::cout<<"Element is present at index "<<mid<<std::endl;
            break;
        }
    }
}