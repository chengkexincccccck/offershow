/*
 * @Author: Chengkexin
 * @Date: 2022-07-12 23:30:46
 * @LastEditors: Chengkexin
 * @LastEditTime: 2022-07-14 23:28:26
 * @FilePath: /getOffer/chapter2/06_printListFromBack.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Chengkexin, All Rights Reserved. 
 */
#include "06_printListFromBack.h"

void print_listnode_fromback(ListNode* pHead){
    stack<int> listvalues;
    if(pHead==nullptr)
        return;
    ListNode* node=pHead;
    while (node->m_pNext!=nullptr)
    {
        listvalues.push(node->m_nValue);
        node=node->m_pNext;
    }
    listvalues.push(node->m_nValue);
    while (listvalues.size()>0)
    {
        cout<<listvalues.top()<<endl;
        listvalues.pop();
    }
}

void printlistnode_fromback_recursion(ListNode* pHead){
    if(pHead==nullptr)
        return ;
    if(pHead->m_pNext!=nullptr){
        print_listnode_fromback(pHead->m_pNext);
    }
    cout<<pHead->m_nValue<<endl;
    return;
}