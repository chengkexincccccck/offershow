/*
 * @Author: Chengkexin
 * @Date: 2022-07-23 23:00:17
 * @LastEditors: Chengkexin
 * @LastEditTime: 2022-07-24 10:08:09
 * @FilePath: /getOffer/chapter2/10_Fibonacci.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Chengkexin, All Rights Reserved. 
 */
#include "10_Fibonacci.h"

int Fibonacci_n(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    int nums[100];
    nums[0]=0;
    nums[1]=1;
    for(int i=2;i<=n;i++){
        nums[i]=nums[i-1]+nums[i-2];
    }
    return nums[n];
}

/**
 * @description: 找规律
 * 0阶：0
 * 1阶：1
 * 2阶：1+1=2
 * 3阶：f(n-1)+f(n-2)=3?
 * @param {int} n
 * @return {*}
 */
int qingwatiaotaijie(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    int ways[100];
    ways[0]=0;
    ways[1]=1;
    ways[2]=2;
    for(int i=3;i<=n;i++){
        ways[i]=ways[i-1]+ways[i-2];
    }
    return ways[n];
}