/*
 * @Author: Chengkexin
 * @Date: 2022-07-05 13:18:07
 * @LastEditors: Chengkexin
 * @LastEditTime: 2022-07-07 23:01:09
 * @FilePath: /文档/chapter2/03_findDuplication.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Chengkexin, All Rights Reserved. 
 */
#include "03_findDuplication.h"

using namespace std;
void findDuplication_any(int *nums,int count){
    if(nums==nullptr||count<=0){//检查参数的合法性
        cout<<"no valued!"<<endl;
        return ;
    }
    for(int i=0;i<count;i++){//检查数组内容是否规范
        if(*(nums+i)<0||*(nums+i)>count-1){
            cout<<"非法数组"<<endl;
            return ;
        }
    }
    vector<bool> a(count,false);
    for(int i=0;i<count;i++){
        if(a[*(nums+i)]==false){
            a[*(nums+i)]=true;
        }else{
            cout<<"duplication value is: "<<*(nums+i)<<endl;
            return ;
        }
        
    }
    cout<<"no duplication values!"<<endl;
}


void findDuplication_any2(int *nums,int count){
    if(nums==nullptr||count<=0){
        cout<<"no valued!"<<endl;
        return ;
    }
    for(int i=0;i<count;i++){
        while(i!=*(nums+i)){
            int index=*(nums+i);
            if(*(nums+index)!=*(nums+i)){
                int tmp=*(nums+index);
                *(nums+index)=*(nums+i);
                *(nums+i)=tmp;
            }else{
                cout<<"duplication value is: "<<*(nums+i)<<endl;
                return ;
            }
        }
    }
    cout<<"no duplication values!"<<endl;
}


void findDuplication_any3(int *nums,int count){
    int tmp=count;
    if(nums==nullptr||count<=0){
        cout<<"no valued!"<<endl;
        return ;
    }
    int start = 1;
    int end = count - 1;
    while(end >= start)
    {
        int middle = ((end - start) >> 1) + start;
        int tmp = countRange(nums, count, start, middle);
        if(end == start)
        {
            if(tmp > 1){
                cout<<"duplication value is: "<<start<<endl;
                return ;
            }
            else
                break;
        }
        if(tmp > (middle - start + 1))
            end = middle;
        else
            start = middle + 1;
    }
    cout<<"no duplication values!"<<endl;
}
int countRange(const int* numbers, int length, int start, int end){
    if(numbers == nullptr)
        return 0;

    int count = 0;
    for(int i = 0; i < length; i++)
        if(numbers[i] >= start && numbers[i] <= end)
            ++count;
    return count;
}
