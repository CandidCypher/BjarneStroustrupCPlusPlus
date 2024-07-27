#include <iostream>
#include <string>

void f()
{
    const char* p = "Plato";
    
    //p[4] = 'e'; <- Produces an error because it's a const string pointer array.
    std::cout<<p<<std::endl;
}

void f2()
{
    char p[] = "Zeno";
    p[0] = 'R';
    std::cout<<p<<std::endl;
}

const char* error_message(int i)
{
    // do stuff
    return "range error";
}
int main(int argc, char* argv[])
{
    f();
    f2();
    const char* c;
    const char* d;
    c = error_message(10);
    d = error_message(101);

    std::cout << c << std::endl;
    std::cout << &c << std::endl;
    std::cout << d << std::endl;
    std::cout << &d << std::endl;

    const char* p = "Heraclitus";
    const char* q = "Heraclitus";

    if (p==q)
    {
        std::cout<<"One in the same"<<std::endl;
    }

    std::cout<<"Make some noise\a\n"<<std::endl;
}