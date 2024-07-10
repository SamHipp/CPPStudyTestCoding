// CPPStudyTestCoding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include "Solution.h"

int main()
{
    int nodeCount = 7;
    std::vector<std::vector<int>> edges({
        {1,3},{3,1},{2,3},{1,2},{2,4},{4,5},{5,6},{4,6},{6,4},{4,0}
        });
    Solution solution;
    solution.Tarjan(nodeCount, edges);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
