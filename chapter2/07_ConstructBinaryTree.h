/*
 * @Author: Chengkexin
 * @Date: 2022-07-16 21:07:21
 * @LastEditors: Chengkexin
 * @LastEditTime: 2022-07-16 23:40:21
 * @FilePath: /getOffer/chapter2/07_ConstructBinaryTree.h
 * @Description: 重建二叉树
 * 
 * Copyright (c) 2022 by Chengkexin, All Rights Reserved. 
 */
#ifndef CONSTRUCTBINARYTREE_H
#define CONSTRUCTBINARYTREE_H

#include "../Utilities/BinaryTree.h"
#include <iostream>
using namespace std;
void print_binaryTree();
BinaryTreeNode* build_tree(int front[],int middle[],int count);

//官方给的编程答案
BinaryTreeNode* ConstructCore(
    int* startPreorder, int* endPreorder, 
    int* startInorder, int* endInorder
);
BinaryTreeNode* Construct(int* preorder, int* inorder, int length);
#endif 
