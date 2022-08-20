/*
 * @Author: Chengkexin
 * @Date: 2022-07-16 23:46:14
 * @LastEditors: Chengkexin
 * @LastEditTime: 2022-07-23 22:12:47
 * @FilePath: /getOffer/chapter2/08_nextNodeInBinaryTree.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Chengkexin, All Rights Reserved. 
 */
#include "08_nextNodeInBinaryTree.h"
/**
 * @description: node的下一个节点有以下几种情况
 * 1.如果有右子树——右子树的中序遍历第一个输出
 * 2.没有右子树
 *  2.1是父树的左子树——父树
 *  2.2是父树的右子树——一直找到是左子树为止
 * @param {BinaryTreeNodeF} *node
 * @return {*}
 */
BinaryTreeNodeF* find_nextnode_inmiddle(BinaryTreeNodeF *node){
    if(node==nullptr)
        return nullptr;
    BinaryTreeNodeF *p=nullptr;
    if(node->m_pRight!=nullptr){
        p=node->m_pRight;
        while(p->m_pLeft!=nullptr){
            p=p->m_pLeft;
        }
    }
    else if(node->m_pParent!=nullptr&&node==node->m_pParent->m_pLeft){
        p=node->m_pParent;
    }
    else{
        if(node->m_pParent!=nullptr){
            p=node->m_pParent;
            while(p->m_pParent!=nullptr&&p==p->m_pParent->m_pRight){
                p=p->m_pParent;
            }
            p=p->m_pParent;
        }
            
    }
    return p;
}

BinaryTreeNodeF* CreateBinaryTreeNodeF(int value)
{
    BinaryTreeNodeF* pNode = new BinaryTreeNodeF();
    pNode->m_nValue = value;
    pNode->m_pLeft = nullptr;
    pNode->m_pRight = nullptr;
    pNode->m_pParent = nullptr;

    return pNode;
}

void ConnectTreeNodes(BinaryTreeNodeF* pParent, BinaryTreeNodeF* pLeft, BinaryTreeNodeF* pRight)
{
    if(pParent != nullptr)
    {
        pParent->m_pLeft = pLeft;
        pParent->m_pRight = pRight;

        if(pLeft != nullptr)
            pLeft->m_pParent = pParent;
        if(pRight != nullptr)
            pRight->m_pParent = pParent;
    }
}

void Test(char* testName, BinaryTreeNodeF* pNode, BinaryTreeNodeF* expected)
{
    if(testName != nullptr)
        printf("%s begins: ", testName);

    BinaryTreeNodeF* pNext = find_nextnode_inmiddle(pNode);
    if(pNext == expected)
        printf("Passed.\n");
    else
        printf("FAILED.\n");
}
