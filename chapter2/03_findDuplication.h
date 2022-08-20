/*
 * @Author: Chengkexin
 * @Date: 2022-07-05 13:17:53
 * @LastEditors: Chengkexin
 * @LastEditTime: 2022-07-07 23:04:42
 * @FilePath: /文档/chapter2/03_findDuplication.h
 * @Description: 找出数组中重复的数字
 * 在一个长度为n的数组里的所有数字都在0~n-1的范围内。数组中某些数字是重复的，但不知道
 * 有几个数字重复了，也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。例如，
 * 如果输入长度为7的数组{2，3，1，0，2，5，3}，那么对应的输出是重复的数字2或者数字3
 * 
 * Copyright (c) 2022 by Chengkexin, All Rights Reserved. 
 */
#ifndef FINDDUPLICATION_H
#define FINDDUPLICATION_H

#include <iostream>
#include <vector>


/**
 * @description: 只需要第一个重复的就可以，因此用类似哈希表存是否已经有这个数值。
 * 时间复杂度O(n),空间复杂度O(n)
 * @param {int} *nums 数组名
 * @param {int} count 数组长度
 * @return {*}
 */
void findDuplication_any(int *nums,int count);


/**
 * @description: 
 * |2|3|1|0|2|5|3|，直接对数组进行修改。时间复杂度O(n),空间复杂度O(1)
 * 原理：使数字i存到下标i的地方，一一对应
 * @param {int} *nums 数组名
 * @param {int} count   数组长度
 * @return {*}
 */
void findDuplication_any2(int *nums,int count);


/**
 * @description: 在一个长度为n+1的数组里的所有数字都在1~n的范围里，所以数组中至少有一个数字是重复的。
 * 请找出数组中任意一个重复的数字，但不能修改输入的数组
 * 原理：一定至少有一个重复的，以中间值x为基准，看0~x和x~n哪个范围个数多重复的数字就肯定在哪个范围内，然后不断缩小范围
 * 时间复杂度O(nlogn),空间复杂度O(1)。该算法不能保证找到所有重复数字
 * @param {int} *nums  数组名
 * @param {int} count 数组长度
 * @return {*}
 */
void findDuplication_any3(int *nums,int count);
int countRange(const int* numbers, int length, int start, int end);


#endif