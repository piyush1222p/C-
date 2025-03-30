#include <iostream>
#include <cstdlib>

using namespace std;

int find_food(string array[],int size,std::string element);
int main()
{
    string Foods[] = {"Apple","Banana","Guava","Mango","Grapes","Kiwi","Lichi"};
    string my_fruit;
    int index;
    int size = sizeof(Foods)/sizeof(std::string);

    //Asking input
    cout << "Enter a Fruit name: "<<endl;
    getline(cin,my_fruit);

    //calling function
    index = find_food(Foods,size,my_fruit);  //The paramenters inside the functions are passed by value

    //displaying the Element at the particualr index
    if (index != -1)
    {
        cout<<my_fruit<<" is at the index "<<index<<endl;
    }
    else
    {
        cout<<"The Element is not in the index "<<endl;
    }
    return EXIT_SUCCESS;
}
int find_food(string array[],int size,string element)
{
    for(int i=0;i<size;i++)
    {
        if (array[i]==element)
        {
            cout<<"Element Found"<<endl;
            return i;break;
        }
        else
        {
            cout<<"Element Not Found"<<endl;
        }
    }
    return EXIT_SUCCESS;
}