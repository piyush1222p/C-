#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    //nested loop

    int row,coloumn;
    char symbol;

    cout<<"Enter the number of rows: ";
    cin>>row;

    cout<<"Enter the number of coloumns: ";
    cin>>coloumn;

    cout<<"Enter the symbol: "; //not req in the case of the pattern, only for the symbol pattern
    cin>>symbol;

    char ch = 'A';

    for(int i=0; i<row;i++)
    {
        for(int j=0;j<coloumn;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

    return EXIT_SUCCESS;
}

/*
//Pyramid star pattern
#include <iostream>
using namespace std;
int main(){
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        // Print leading spaces
        for (int j = 0; j < row-i; j++)
        {
            cout << " ";
        }
        
        //print stars
        for (int k = 0; k < (2*i-1); k++)
        {
            cout<<"*";
        }
        cout << endl;
    }
    return 0;
}
*/