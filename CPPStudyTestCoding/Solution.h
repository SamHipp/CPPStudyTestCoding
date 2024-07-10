#ifndef SOLUTION_H
#define SOLUTION_H
#include <stack>
class Solution
{
public:
	// Solution Methods -- algorithm-specific
	void Tarjan(int nodeCount, std::vector<std::vector<int>>& edges);
	void TarjanHelper(int node, std::stack<int>& stack, std::vector<bool>& onStack, std::vector<int>& ids, std::vector<int>& low, std::vector<std::vector<int>>& children, std::vector<std::vector<int>>& ans);
};
#endif
