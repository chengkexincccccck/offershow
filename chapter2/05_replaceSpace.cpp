/*
 * @Author: Chengkexin
 * @Date: 2022-07-11 23:04:28
 * @LastEditors: Chengkexin
 * @LastEditTime: 2022-07-12 23:25:53
 * @FilePath: /getOffer/chapter2/05_replaceSpace.cpp
 * @Description: 主要思路：在合并两个数组时，优先考虑从后往前复制，这样可以减少移动的次数，从而提高效率
 * 
 * Copyright (c) 2022 by Chengkexin, All Rights Reserved. 
 */
#include "05_replaceSpace.h"
string replace_Space(string str){
    string temp="";
    string append="\%20";
    for(int i=0;i<str.length();i++){
        if(str.at(i)==' '){
            temp.append(append);
        }else{
            temp.push_back(str.at(i));
        }
    }
    return temp;
}

void ReplaceBlank(char str[], int length)
{
    if(str == nullptr && length <= 0)
        return;

    int originalLength = 0;
    int numberOfBlank = 0;
    int i = 0;
    while(str[i] != '\0')
    {
        ++ originalLength;

        if(str[i] == ' ')
            ++ numberOfBlank;

        ++ i;
    }

    int newLength = originalLength + numberOfBlank * 2;
    if(newLength > length)
        return;

    int indexOfOriginal = originalLength;
    int indexOfNew = newLength;
    while(indexOfOriginal >= 0 && indexOfNew > indexOfOriginal)
    {
        if(str[indexOfOriginal] == ' ')
        {
            str[indexOfNew --] = '0';
            str[indexOfNew --] = '2';
            str[indexOfNew --] = '%';
        }
        else
        {
            str[indexOfNew --] = str[indexOfOriginal];
        }

        -- indexOfOriginal;
    }
}

/**
 * @description: 面试题5举一反三练习。有两个排序的数组A1和A2，内存在A1的末尾有足够的的空余空间容纳A2。
 * 实现一个函数把A2所有数字插入A1中，并且所有数字都是排序的
 * @param {char} str1
 * @param {char} str2
 * @param {int} length
 * @return {*}
 */
void merge_two_to_one(char str1[],char str2[],int length){
    int str1_index=strlen(str1)-1;
    int str2_index=strlen(str2)-1;
    int nowindex=strlen(str1)+strlen(str2)-1;
    if(nowindex>=length){
        cout<<"str1 have no space to merge"<<endl;
        return;
    }
    while(str1_index>=0&&str2_index>=0){
        if(str1[str1_index]>str2[str2_index]){
            str1[nowindex]=str1[str1_index--];
        }else{
            str1[nowindex]=str2[str2_index--];
        }
        nowindex--;
    }
    while(str1_index>=0){
        str1[nowindex--]=str1[str1_index--];
    }
    while(str2_index>=0){
        str1[nowindex--]=str2[str2_index--];
    }
    cout<<str1<<endl;
}