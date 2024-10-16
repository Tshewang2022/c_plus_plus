#include <iostream>
#include <map>
#include <list>
using namespace std;

// int main()
// {
//     // creating the map in c++
//     map<string, string> myDictionary;
//     myDictionary.insert(pair<string, string>("apple", "the one that intrigue enisten"));
//     myDictionary.insert(pair<string, string>("relativity", "the one that intrigue enisten"));

//     // looping over to get the output on the screen
//     for (auto pair : myDictionary)
//     {
//         cout << pair.first << "-" << pair.second << endl;
//     }
//     return 0;
// };

//  we can store the complex datatypes as the value of the key
int main()
{
    map<string, list<string>> programming;
    // creating the value
    list<string> myprogramming{"c++", "java", "python", "javascript"};
    programming.insert(pair<string, list<string>>("myFavourite", myprogramming));

    // outputing the result
    for (auto pair : programming)
    {
        std::cout << pair.first;
        for (auto attack : pair.second)
        {
            cout << attack << endl;
        }
    }
    return 0;
}