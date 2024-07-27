/*
For each declaration in 4.9, do the following: If the declaration
is not a definition, write a definiion for it. If the declaration is a definition,
write a declaration for it that is not also a definition
*/

#include <iostream>
#include <string>
#include <complex>

struct{
    int index;
    int value;
    char letter;

} data_struct;


data_struct values = {1,2,'a'};


const extern int error_code = 99999;
void print_error_code(int error_code);

int main(int argc, char* argv[])
{
    char ch;
    ch = 'a';
    std::string s;
    s = "This is a string";

    int count;
    std::cout << "Initialized Value for 'count' is: "<<count<<"\n";
    std::cout << "Shows the importance of initializing variables\n";
    count = 1;

    const double pi = 3.141592653589;
    //pi = 1.234; <- Error: pi is declared as const.
    int error_code = 12234;
    
    print_error_code(error_code);

    typedef unsigned char uchar; // declaring a custom name
    uchar variy = 'a';
    std::cout<<variy<<std::endl;

    //char *name = "Narwall";

    typedef std::complex<short> Point;
    Point myPoint = {1,2};
    std::cout<<myPoint<<std::endl;

    enum Beer_List {KiltLifter, PBR, Shiner};
    Beer_List beer = KiltLifter;
    
    std::cout<<beer<<std::endl;


}

void print_error_code(int error_code)
{
    //int error_code; // Default initialized to 0 as it is in scope of a function
    if(true)
    {
        
        std::cout << "global error_code: "<<::error_code<<std::endl;

        std::cout << "arg error_code: "<< error_code<<std::endl;
        // New declaration hides the input arg. 
        int error_code = 54321; // <- Local scope
        std::cout << "local error_code :"<< error_code<<std::endl;

    }
    // Now that the second error_code has fallen out of scope, 
    // it is inaccessible so input arg name is no longer hidden.
    std::cout<< "input error_code: " << error_code << std::endl;
}