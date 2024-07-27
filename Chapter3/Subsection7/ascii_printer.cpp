#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    // little diddy to print out all of the arguments used to call
    // the program
    for(int i=0; i< argc; i++)
    {
        cout<<argv[i]<<endl;
    }

    while(true)
    {
        char c;
        cout<<"input character."<< endl;
        cin>>c;
        cout<<"The value of "<<c<<" is: "<<int(c)<<endl;
    }
}