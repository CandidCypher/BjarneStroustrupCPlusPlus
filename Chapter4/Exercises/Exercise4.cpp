/*
Write a program that prints out the letters a-z and the digits 0-9
and their integer values. 

*/

#include <iostream>

int main(int argc, char* argv[])
{
    for(int i=0; i<10; i++)
    {
        std::cout<< (unsigned char)(i) << ": " << i<<std::endl;
    }
    for(int i=97; i<=122; i++)
    {
        // ASCII has 255 characters and lower case a starts at 97;
        std::cout << (unsigned char)(i) << i << std::endl;
    }
}