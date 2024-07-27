#include <string>
#include <iostream>

void lastFour(std::string &str)
{
    //Helper function to print last 4.
    std::cout<<str.substr(str.size()-4, str.size())<<std::endl;
}
void printcstring(std::string &str)
{
    printf("your string: %s\n", str.c_str());
}
int main(int argc, char* argv[])
{
    std::string str = "ideaGarage";

    std::cout<<str<<std::endl; // Output stream of  full string
    std::cout<<str.substr(0,4)<<std::endl; // ouput stream substring
    std::cout<< str.substr(4,str.size())<<std::endl; // output stream substring to end

    lastFour(str);
    printcstring(str);
}

