#include <iostream>
#include <vector>

void dynamicArray(int iSize);

int i = 10;

int main(int argc, char* argv[])
{
    float v[3] = {0,10,20}; // Array of 3 floats
    char* a[32]; // array of 32 pointers to chars

    for(int i = 0; i<sizeof(v)/sizeof(float); i++)
    {
        std::cout<<v[i]<<std::endl;
    }

    dynamicArray(::i);

    int multi_dim [10][10]; // 10x10 array

    double arr[] = {1.0, 2.2, 3.3, 4.4};
    for(int i=0; i<sizeof(arr)/sizeof(double); i++)
    {
        std::cout<<arr[i]<<std::endl;
    }

    // Error: too many values for declared size
    // char arr3[3] = {'a', 'b', 'c', 'd'};

    char arr4[10] = {'a', 'b', 'c', 'd'};
    for(int i=0; i<sizeof(arr4)/sizeof(char); i++)
    {
        // For uninitialized indiicies, they will be null
        std::cout << arr4[i];
        if(i==9)
        {
            std::cout<<std::endl;
        }
    } 

    char v5[] = {'a','b', 'c', 'd', 0, 1,2,3,4,5};
    for(int i=0; i<sizeof(v5)/sizeof(char); i++)
    {
        std::cout<<(unsigned char)v5[i];
        if(i == (sizeof(v5)/sizeof(char)- 1))
        std::cout<<std::endl;
    }
}

void dynamicArray(int iSize)
{
    int v1[iSize]; // <- This should yield an error but doesnt...
    for(int i=0; i<sizeof(v1)/sizeof(int); i++)
    {
        std::cout<<i<<std::endl;
    }
    std::vector<int> v2(iSize);
}