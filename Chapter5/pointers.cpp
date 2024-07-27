#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int i = 0;
    int* pi; // pointer to an int;
    pi = &i; // pi holds the address of i

    cout << "The value of i: "<< i << endl;
    cout << "The value of pi holds: " << pi <<endl;
    cout << "pi 'points to': " << *pi <<endl;
    cout << "The address of pi is: " << &pi << endl;
    // Modifying i through the reference of pi
    *pi = 101; 
    cout << "The value of i is now: " << i << endl;

    char c = 'a';
    char* pchar = &c;
    char b = *pchar;
    // Prints out the character 'a'
    cout << b << endl;
}