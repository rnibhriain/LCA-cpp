#include "gtest/gtest.h"
#include "LCA-cpp.h"

TEST(TestLCA, HandlesBasic) {
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    int result = findLCA(root, 4, 5);
    ASSERT_EQ(result, 2);
}

TEST(TestLCA, HandlesNull) {
    Node* root = newNode(0);
    int result = findLCA(root, 4, 5);
    ASSERT_EQ(result, -1);
}