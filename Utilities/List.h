/*
 * @Author: Chengkexin
 * @Date: 2022-07-13 00:08:42
 * @LastEditors: Chengkexin
 * @LastEditTime: 2022-07-14 23:14:06
 * @FilePath: /getOffer/Utilities/List.h
 * @Description: 
 * 
 * Copyright (c) 2022 by Chengkexin, All Rights Reserved. 
 */
#ifndef LIST_H
#define LIST_H

struct ListNode
{
    int       m_nValue;
    ListNode* m_pNext;
};

ListNode* CreateListNode(int value);
void ConnectListNodes(ListNode* pCurrent, ListNode* pNext);
void PrintListNode(ListNode* pNode);
void PrintList(ListNode* pHead);
void DestroyList(ListNode* pHead);
void AddToTail(ListNode** pHead, int value);
void RemoveNode(ListNode** pHead, int value);

#endif