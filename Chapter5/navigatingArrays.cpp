// Pointers to arrays 

#include <iostream>

void fi(char v[])
{
    for(int i =-0; v[i]!= 0; i++)
    {
        std::cout<<v[i]<<std::endl;
    }
}

void fp(char v[])
{
    for(char* p = v; *p!=0; p++)
    {
        std::cout<<*p<<std::endl;
    }
}

int main(int argc, char** argv)
{
    char v[] = "Annemarie";
    fi(v);
    fp(v);
}