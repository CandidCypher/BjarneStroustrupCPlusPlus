#include <iostream>


int main(int argc, char* argv[])
{
    const int model = 90;
    const int v[] = {1,2,3,4,5};
    int p[] = {1,2,3,4};
    //v[0] = 10;
    p[0] = 10;

    std::cout<<sizeof(p[0])<<std::endl;
    std::cout<<sizeof(p)<<std::endl;

    for(int* i = p; *i!=0; i++)
    {
        std::cout<<*i<<std::endl;
    }

    // for(int i = 0; i<= sizeof(v)/sizeof(v[0]); i++)
    // {
    //     std::cout<< v[i];
    // }

    // for(const int* i = v; *i!=0; i++)
    // {
    //     std::cout<<*i<<std::endl;
    // }
}