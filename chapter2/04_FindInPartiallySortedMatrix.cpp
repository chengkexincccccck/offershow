/*
 * @Author: Chengkexin
 * @Date: 2022-07-07 23:15:01
 * @LastEditors: Chengkexin
 * @LastEditTime: 2022-07-11 22:40:32
 * @FilePath: /文档/chapter2/04_FindInPartiallySortedMatrix.cpp
 * @Description: 实现
 * 
 * Copyright (c) 2022 by Chengkexin, All Rights Reserved. 
 */
using namespace std;
#include "04_FindInPartiallySortedMatrix.h"

/**
 * @description: 自己写的方法，能用，时间复杂度O(n²)
 * @param {int} row
 * @param {int} col
 * @param {int} number
 * @return {*}
 */
bool FindInPartially(int  (*matrix)[4],int row,int col,int number){
    if(*(*(matrix+row-1)+col-1)<number){
        return false;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(*(*(matrix+i)+j)>number){
                col=j;
                break;
            }else if(*(*(matrix+i)+j)==number){
                return true;
            }
            
        }
        cout<<endl;
    }
    return false;
}
bool FindInPartially_official(int (*matrix)[4],int row,int col,int number){
    int rows=0;
    int cols=col-1;
    while(true){
        if(*(*(matrix+rows)+cols)>number){
            if(cols>0){
                cols--;
                continue;
            }else{
                break;
            }
            
        }else if(*(*(matrix+rows)+cols)<number){
            if(rows<row-1){
                rows++;
                continue;
            }else{
                break;
            }
        }else{
            return true;
        }
    }
    return false;
}