/*
 * @Author: Chengkexin
 * @Date: 2022-07-13 00:08:42
 * @LastEditors: Chengkexin
 * @LastEditTime: 2022-07-14 22:55:21
 * @FilePath: /getOffer/Utilities/BinaryTree.h
 * @Description: 
 * 
 * Copyright (c) 2022 by Chengkexin, All Rights Reserved. 
 */
#ifndef BINARYTREE_H
#define BINARYTREE_H

struct BinaryTreeNode 
{
    int                    m_nValue; 
    BinaryTreeNode*        m_pLeft;  
    BinaryTreeNode*        m_pRight; 
};

BinaryTreeNode* CreateBinaryTreeNode(int value);
void ConnectTreeNodes(BinaryTreeNode* pParent, BinaryTreeNode* pLeft, BinaryTreeNode* pRight);
void PrintTreeNode(const BinaryTreeNode* pNode);
void PrintTree(const BinaryTreeNode* pRoot);
void DestroyTree(BinaryTreeNode* pRoot);

#endif
