#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>

std::unordered_map<char, std::vector<char>> graph = {
    {'4', {}},
    {'1', {'3'}},
    {'2', {'1'}},
    {'3', {'2'}}
};

std::unordered_set<char> visited;
std::unordered_set<char> path;

void dfs(std::unordered_set<char>& visited, const std::unordered_map<char, std::vector<char>>& graph, char node) {
    path.insert(node);
    if (visited.count(node) > 0) {
        std::cout << "Nodes in Deadlock: ";
        for (const auto& n : path) {
            std::cout << n << " ";
        }
        std::cout << std::endl;
    }
    if (visited.count(node) == 0) {
        visited.insert(node);
        for (const auto& neighbour : graph.at(node)) {
            dfs(visited, graph, neighbour);
        }
    }
}

int main() {
    std::cout << "Following is the Depth-First Search" << std::endl;
    dfs(visited, graph, '1');
    return 0;
}
