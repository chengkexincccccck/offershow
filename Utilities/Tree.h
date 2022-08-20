/*
 * @Author: Chengkexin
 * @Date: 2022-07-13 00:08:42
 * @LastEditors: Chengkexin
 * @LastEditTime: 2022-07-14 23:21:00
 * @FilePath: /getOffer/Utilities/Tree.h
 * @Description: 
 * 
 * Copyright (c) 2022 by Chengkexin, All Rights Reserved. 
 */
/*******************************************************************
Copyright(c) 2016, Harry He
All rights reserved.

Distributed under the BSD license.
(See accompanying file LICENSE.txt at
https://github.com/zhedahht/CodingInterviewChinese2/blob/master/LICENSE.txt)
*******************************************************************/

//==================================================================
// ����ָOffer�����������Թپ������ͱ���⡷����
// ���ߣ��κ���
//==================================================================

#ifndef TREE_H
#define TREE_H

#include <vector>
#include <iostream>
struct TreeNode 
{
    int                       m_nValue;    
    std::vector<TreeNode*>    m_vChildren;    
};

TreeNode* CreateTreeNode(int value);
void ConnectTreeNodes(TreeNode* pParent, TreeNode* pChild);
void PrintTreeNode(const TreeNode* pNode);
void PrintTree(const TreeNode* pRoot);
void DestroyTree(TreeNode* pRoot);

#endif