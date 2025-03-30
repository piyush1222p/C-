#include <iostream>
#include <streambuf>
#include <fstream>
using namespace std;
int main(){
    std::ofstream OS("test.txt");
    if(OS.is_open()){
        char data[] = "Hi, My name is Piyush Shukla";  // Data to be written
        OS.write(data,sizeof(data)-1); // -1 to avoid writing the null character
    }
    else{
        std::cout<<"Error opening file"; // If file is not opened
        return 1;
    }
    return 0;
}