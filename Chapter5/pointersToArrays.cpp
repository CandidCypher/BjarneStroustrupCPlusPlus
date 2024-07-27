#include <iostream>

int main(int argc, char* argv[])
{
    int v[] = {1,2,3,4};
    int* p1 = v; //Pointer to the initial element
    int* p2 = &v[0];
    int* p3 = &v[4];

    // Question what is the value of p3 
    std::cout<<*p3<<std::endl;
    //Junk value because it is uninitialized memory.
    *p3 = 101;
    // This is very dangerous because you don't know if this
    // is memory being used by something else.  
    *p2 = 10;
    std::cout<<*p3<<std::endl;
    for(int i = 0; i<sizeof(v)/sizeof(int); i++)
    {
        std::cout<<v[i]<<std::endl;
    }

    // Best method for traversing arrays
    char v[] = "Annemarie";
    for(int i = 0; v[i] != 0; i++)
    {
        std::cout<<v[i];
    }

}