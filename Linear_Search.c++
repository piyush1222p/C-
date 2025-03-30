#include <iostream>
void linear_search(int array[],int size,int target);
int main(){
    int marks[] = {25,36,14,15,24,29};
    int target;
    int size = sizeof(marks)/sizeof(marks[0]);
    std::cout<<"Enter the Element to found: "<<std::endl;
    std::cin>>target;

    linear_search(marks,size,target);

    return EXIT_SUCCESS;
}
void linear_search(int array[],int size,int target){
    for (int i = 0; i < size; i++)
    {
        if (array[i]==target)
        {
            std::cout<<"Element found at the index "<<i<<" and Element is "<<target<<std::endl;
        }
        else{
            std::cout<<"Element not found in the array "<<std::endl;
        }
    }
}