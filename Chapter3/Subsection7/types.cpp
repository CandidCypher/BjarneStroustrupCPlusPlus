#include<iostream>
#include<list>
#include<map>
#include<vector>

struct Entry
{
    std::string Name;
    int number; 
};

int main(int argc, char* argv[])
{
    for(int i=0; i<argc; i++)
    {
        // Simple loop prints command line args
        std::cout<<argv[i]<<std::endl;
    }

    std::vector<int> my_vector = {0,2,30};
    // itterator object
    std::vector<int>::iterator vittero;
    for(vittero=my_vector.begin(); vittero!=my_vector.end(); ++vittero)
    {
        std::cout << *vittero << std::endl;
    }

    std::list<Entry> entries = {{"tom", 10}, {"tim", 11}};
    std::list<Entry>::iterator li;
    for(li=entries.begin(); li!=entries.end(); li++)
    {
        Entry &refI = *li;
        std::cout<<refI.Name<<std::endl;
    }

    // Direct acces using keys. 
    std::map<std::string, int> phone_book = {{"Joe", 101}, {"Jake", 102}};
    std::cout<< phone_book["Jake"]<<std::endl;

    // Print all keys
    for(std::map<std::string, int>::iterator it = phone_book.begin(); it!=phone_book.end(); ++it)
    {

        std::cout<<it->first<<it->second<<std::endl;
    }

}