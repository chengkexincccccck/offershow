/*
 * @Author: Chengkexin
 * @Date: 2022-07-16 21:07:15
 * @LastEditors: Chengkexin
 * @LastEditTime: 2022-07-16 23:44:28
 * @FilePath: /getOffer/chapter2/07_ConstructBinaryTree.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Chengkexin, All Rights Reserved. 
 */
#include "07_ConstructBinaryTree.h"
/*1,2,4,7,3,5,6,8前序——根左右
4,7,2,1,5,3,8,6中序——左根右

前序第一个为根节点，找到中序中这个数的index，左右为子树继续进行
*/
void print_binaryTree(){
    int front[]={1,2,4,7,3,5,6,8};
    int middle[]={4,7,2,1,5,3,8,6};
    BinaryTreeNode *head=build_tree(front,middle,sizeof(middle)/sizeof(int));
    PrintTree(head);
}
BinaryTreeNode* build_tree(int front[],int middle[],int count){
    BinaryTreeNode *node=new BinaryTreeNode;
    node->m_nValue=front[0];
    node->m_pLeft=nullptr;
    node->m_pRight=nullptr;
    int index=0;
    for(;index<count;index++){
        if(middle[index]==front[0])
            break;
    }
    if(index!=0)
        node->m_pLeft=build_tree(front+1,middle,index);
    if(index!=count-1)
        node->m_pRight=build_tree(front+1+index,middle+index+1,count-index-1);
    return node;
}

BinaryTreeNode* Construct(int* preorder, int* inorder, int length)
{
    if(preorder == nullptr || inorder == nullptr || length <= 0)
        return nullptr;//以后要注意判断参数的合法性

    return ConstructCore(preorder, preorder + length - 1,
        inorder, inorder + length - 1);
}
BinaryTreeNode* ConstructCore
(
    int* startPreorder, int* endPreorder, 
    int* startInorder, int* endInorder
)
{
    // ǰ��������еĵ�һ�������Ǹ�����ֵ
    int rootValue = startPreorder[0];
    BinaryTreeNode* root = new BinaryTreeNode();
    root->m_nValue = rootValue;
    root->m_pLeft = root->m_pRight = nullptr;

    if(startPreorder == endPreorder)
    {
        if(startInorder == endInorder && *startPreorder == *startInorder)
            return root;
        else
            return nullptr;
    }

    // ������������ҵ�������ֵ
    int* rootInorder = startInorder;
    while(rootInorder <= endInorder && *rootInorder != rootValue)
        ++ rootInorder;

    if(rootInorder == endInorder && *rootInorder != rootValue)
        throw nullptr;

    int leftLength = rootInorder - startInorder;
    int* leftPreorderEnd = startPreorder + leftLength;
    if(leftLength > 0)
    {
        // ����������
        root->m_pLeft = ConstructCore(startPreorder + 1, leftPreorderEnd, 
            startInorder, rootInorder - 1);
    }
    if(leftLength < endPreorder - startPreorder)
    {
        // ����������
        root->m_pRight = ConstructCore(leftPreorderEnd + 1, endPreorder,
            rootInorder + 1, endInorder);
    }

    return root;
}