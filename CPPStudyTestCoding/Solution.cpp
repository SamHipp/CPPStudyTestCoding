#include <vector>

class Solution
{
public:
	// Data type-specific inputs and their constructors
	std::vector<std::vector<int>> DirectedGraphInput; // {{from, to}, {from, to}...}
	Solution(std::vector<std::vector<int>> directedGraphInput)
		: DirectedGraphInput(directedGraphInput) {}
};