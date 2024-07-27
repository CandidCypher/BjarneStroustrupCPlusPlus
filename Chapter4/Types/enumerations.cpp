#include <iostream>

int main(int argc, char *argv[])
{
    enum keyword {BIG, BANG, PHONE};

    keyword key = BIG;
    switch (key)
    {
        case BIG:
            std::cout<<"Big is the key"<<std::endl;
            break;
        case BANG:
            std::cout<<"bang is the noise"<<std::endl;
            break;
    }

    enum flag {x=1, y=2, z=4, e=8};
    // Testing the range of the enum
    flag f1 = flag(5);// This works because it is in the range
                      // of flag.
    std::cout<<f1<<std::endl;

}