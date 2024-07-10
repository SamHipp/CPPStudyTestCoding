#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include "../Solution.h"

void Solution::Tarjan(int nodeCount, std::vector<std::vector<int>>& edges) {
	std::vector<std::vector<int>> ans; // {{a,b,c},{d,e}...}
	// Initialize onStack = false, ids, low, children vectors, and Stack
	std::vector<bool> onStack(nodeCount, false);
	std::vector<int> ids(nodeCount, -1), low(nodeCount, -1);
	std::vector<std::vector<int>> children(nodeCount);
	std::stack<int> stack;
	// Loop through edges and set up "children" vector
	for (std::vector<int> edge : edges) {
		children[edge[0]].push_back(edge[1]);
	}
	// Loop through IDs and if ids[i] == -1, do TarjanHelper(i)
	for (int i = 0; i < nodeCount; i++) {
		if (ids[i] == -1) TarjanHelper(i, stack, onStack, ids, low, children, ans);
	}
	for (int i = 0; i < ans.size(); i++) {
		std::cout << "Set " << i << ": {";
		for (int j = 0; j < ans[i].size(); j++) {
			std::cout << ans[i][j];
			if (j < ans[i].size() - 1) std::cout << ", ";
		}
		std::cout << "}" << std::endl;
	}
	std::cin;
}

void Solution::TarjanHelper(int node, std::stack<int>& stack, std::vector<bool>& onStack, std::vector<int>& ids, std::vector<int>& low, std::vector<std::vector<int>>& children, std::vector<std::vector<int>>& ans) {
	stack.push(node);
	onStack[node] = true;
	low[node] = node;
	ids[node] = node;
	for (int child : children[node]) {
		if (ids[child] == -1) TarjanHelper(child, stack, onStack, ids, low, children, ans);
		if (onStack[child]) low[node] = std::min(low[node], low[child]);
	}
	if (ids[node] == low[node]) {
		std::vector<int> currentV;
		while (true) {
			int next = stack.top();
			stack.pop();
			onStack[next] = false;
			currentV.push_back(next);
			if (next == node) break;
		}
		ans.push_back(currentV);
	}
}