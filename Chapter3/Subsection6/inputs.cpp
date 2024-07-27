#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    int i; 
    double d;
    while(true)
    {
        cout<<"enter integer value:"<<endl;
        cin>>i;
        if(i==0)
        {
            //
            return 0;
        }
        printf("You entered %i\n", i);

        cout <<"enter double value:"<<endl;
        cin>>d;
        printf("You entered %f\n", d);
    }
    

}