/*
 * @Author: Chengkexin
 * @Date: 2022-07-16 23:46:09
 * @LastEditors: Chengkexin
 * @LastEditTime: 2022-07-23 22:00:04
 * @FilePath: /getOffer/chapter2/08_nextNodeInBinaryTree.h
 * @Description: 二叉树中序遍历的下一个节点
 * 
 * Copyright (c) 2022 by Chengkexin, All Rights Reserved. 
 */
#ifndef nextNodeInBinaryTree_H
#define nextNodeInBinaryTree_H
#include <iostream>

//最简单的方法是先对树进行一次中序遍历，把数据顺序存储在一个vector中，然后对vecotr进行遍历找到节点的下一个节点。相当于做两次O(n)操作，切需要额外创建O(n)的空间
struct BinaryTreeNodeF
{
    int                    m_nValue;
    BinaryTreeNodeF*        m_pLeft;
    BinaryTreeNodeF*        m_pRight;
    BinaryTreeNodeF*        m_pParent;
};
BinaryTreeNodeF* find_nextnode_inmiddle(BinaryTreeNodeF *node);

BinaryTreeNodeF* CreateBinaryTreeNodeF(int value);
void ConnectTreeNodes(BinaryTreeNodeF* pParent, BinaryTreeNodeF* pLeft, BinaryTreeNodeF* pRight);
void Test(char* testName, BinaryTreeNodeF* pNode, BinaryTreeNodeF* expected);

#endif