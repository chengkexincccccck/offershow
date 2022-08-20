/*
 * @Author: Chengkexin
 * @Date: 2022-07-05 13:12:56
 * @LastEditors: Chengkexin
 * @LastEditTime: 2022-08-07 22:48:54
 * @FilePath: /getOffer/freedomTest.cpp
 * @Description: 书籍中的一些随意测试
 * 
 * 
 * Copyright (c) 2022 by Chengkexin, All Rights Reserved. 
 */
#include "freedomTest.h"

int getsize(int data[]){
    return sizeof(data);
}


int* kuaisupaixu(int nums[],int length,int start,int end){
    if(length<=0||start<0||end<0||nums==nullptr||end>=length)
        return nullptr;
    //随便选一个数字作为基准，这个函数使用第一个数作为基准
    
}