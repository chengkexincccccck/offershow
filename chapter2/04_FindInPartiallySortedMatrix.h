/*
 * @Author: Chengkexin
 * @Date: 2022-07-07 23:14:55
 * @LastEditors: Chengkexin
 * @LastEditTime: 2022-07-11 22:27:25
 * @FilePath: /文档/chapter2/04_FindInPartiallySortedMatrix.h
 * @Description: 在横竖均升序的二维数组中查找某个数字是否存在
 * 
 * Copyright (c) 2022 by Chengkexin, All Rights Reserved. 
 */

#ifndef FindInPartiallySortedMatrix_H
#define FindInPartiallySortedMatrix_H
#include <iostream>

bool FindInPartially(int (*matrix)[4],int row,int col,int number);
bool FindInPartially_official(int (*matrix)[4],int row,int col,int number);


#endif