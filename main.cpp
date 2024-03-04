#include <iostream>
// #include <vector>
// #include <string>
#include "sum.cpp"
// #include "sum.h" // have to include .cpp instead of .h (opposite of tutorial)

using namespace osp;

int main()
{
    // vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    // int someNum = osp::sum(5, 6);

    std::cout << "The sum of 5 and 6 is: " << osp::sum(5, 6) << std::endl;

    // for (const string &word : msg)
    // {
    //     cout << word << " ";
    // }
    // cout << endl;
}