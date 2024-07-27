#include <iostream>
#include <vector>
#include <map>

int main (int argc, char *argv[])
{
    float fNumber;
    int iNumber; 

    std::cout<<fNumber<<std::endl;
    std::cout<<iNumber<<std::endl;

    std::cout<<"This shows the importance of initalizing variables"<<std::endl;

    fNumber = 123456789;
    iNumber = 1.2345;

    std::cout<<fNumber<<std::endl;
    std::cout<<iNumber<<std::endl;

    std::cout<<"Size of float: "<<sizeof(fNumber)<<std::endl;
    std::cout<<"size of int: "<<sizeof(iNumber)<<std::endl;
}