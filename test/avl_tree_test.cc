#include <stdio.h>
#include <gtest/gtest.h>
#include "../ministl/avl_tree.h"
USE_MINISTL;
TEST(AVLTreeTest, PushTest) {
    avl_tree<int> tree;
    tree.push(14);
    tree.push(16);
    EXPECT_TRUE(tree.top()->left == NULL);
    EXPECT_EQ(tree.top()->right->value, 16);
    tree.push(15);
    EXPECT_EQ(tree.top()->value, 15);
}
TEST(AVLTreeTest, OrderTest) {
    avl_tree<int> tree2;
    tree2.push(1);
    tree2.push(10);
    tree2.push(4);
    tree2.push(3);
    tree2.push(11);
    tree2.push(12);
    tree2.push(2);
    tree2.push(9);
    tree2.push(8);
    tree2.push(7);
    tree2.push(6);
    tree2.push(5);
    int i = 1;
    for (auto it = tree2.first(); it != tree2.end(); ++it) {
        EXPECT_EQ(*it, i++);
    }
}

