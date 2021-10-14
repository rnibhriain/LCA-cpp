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
    result = findLCA(root, 4, 6);
    ASSERT_EQ(result, 1);
    result = findLCA(root, 3, 4);
    ASSERT_EQ(result, 1);
    result = findLCA(root, 2, 4);
    ASSERT_EQ(result, 2);
}

TEST(TestLCA, HandlesLeftSide) {
    Node* root = newNode(1);
    root->left = newNode(2);
    root->left->left = newNode(4);
    int result = findLCA(root, 1, 4);
    ASSERT_EQ(result, 1);
    result = findLCA(root, 2, 4);
    ASSERT_EQ(result, 2);
}

TEST(TestLCA, HandlesRightSide) {
    Node* root = newNode(1);
    root->right = newNode(2);
    root->right->right = newNode(4);
    int result = findLCA(root, 1, 4);
    ASSERT_EQ(result, 1);
    result = findLCA(root, 2, 4);
    ASSERT_EQ(result, 2);
}

TEST(TestLCA, HandlesRightSide) {
    Node* root = newNode(-9);
    root->right = newNode(-82);
    root->left = newNode(-4);
    int result = findLCA(root, -4, -82);
    ASSERT_EQ(result, -9);
}

TEST(TestLCA, HandlesNull) {
    Node* root = newNode(0);
    int result = findLCA(root, 4, 5);
    ASSERT_EQ(result, -1);
}

