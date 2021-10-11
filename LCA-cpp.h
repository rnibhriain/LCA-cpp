#pragma once
#include <vector>

struct Node
{
    int key;
    struct Node* left, * right;
};

int findLCA(Node* root, int n1, int n2);
bool findPath(Node* root, std::vector<int>& path, int k);


Node* newNode(int k);

