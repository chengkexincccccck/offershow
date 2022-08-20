/*
 * @Author: Chengkexin
 * @Date: 2022-07-11 23:04:32
 * @LastEditors: Chengkexin
 * @LastEditTime: 2022-07-12 23:09:03
 * @FilePath: /getOffer/chapter2/05_replaceSpace.h
 * @Description: 
 * 
 * Copyright (c) 2022 by Chengkexin, All Rights Reserved. 
 */
#ifndef replaceSpace_H
#define replaceSpace_H
using namespace std;
// #include <string.h>
#include <cstring>
// #include <string>
#include <iostream>

/**
 * @description: 实现方式是另外开辟一个string变量存储。简单但是空间复杂度高
 * @param {string} str
 * @return {*}
 */
string replace_Space(string str);

/**
 * @description: 利用原字符串往后移动的方式进行替换.首先需要str长度足够长，才能将数据向后移动。
 * @param {string} str
 * @return {*}
 */
void ReplaceBlank(char str[], int length);


void merge_two_to_one(char str1[],char str2[],int length);

#endif