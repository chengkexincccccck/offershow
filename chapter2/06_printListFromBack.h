/*
 * @Author: Chengkexin
 * @Date: 2022-07-12 23:31:30
 * @LastEditors: Chengkexin
 * @LastEditTime: 2022-07-14 23:23:53
 * @FilePath: /getOffer/chapter2/06_printListFromBack.h
 * @Description: 从尾到头打印链表
 * 
 * Copyright (c) 2022 by Chengkexin, All Rights Reserved. 
 */
#ifndef PrintListFromBack_H
#define PrintListFromBack_H

#include <stack>
#include <iostream>
#include "../Utilities/List.h"
using namespace std;

/**
 * @description: 用栈保存链表数据，实现反向输出
 * @param {ListNode*} pHead
 * @return {*}
 */
void print_listnode_fromback(ListNode* pHead);

void printlistnode_fromback_recursion(ListNode* pHead);

#endif