/*
 * @Author: Chengkexin
 * @Date: 2022-07-23 22:15:43
 * @LastEditors: Chengkexin
 * @LastEditTime: 2022-07-23 22:42:19
 * @FilePath: /getOffer/chapter2/09_buildQueueByStack.h
 * @Description: 用两个栈实现队列
 * 
 * Copyright (c) 2022 by Chengkexin, All Rights Reserved. 
 */
#ifndef buildQueueByStack_H
#define buildQueueByStack_H
#include <iostream>
#include <stack>
using namespace std;
template <typename T> class CQueue
{
public:
    CQueue(void);
    ~CQueue(void);
    
    void appendTail(const T& node);

    T deleteHead();

private:
    stack<T> stack1;
    stack<T> stack2;
};
template <typename T> CQueue<T>::CQueue(void)
{
}

template <typename T> CQueue<T>::~CQueue(void)
{
}
template <typename T> void CQueue<T>::appendTail(const T& node){
    stack1.push(node);
}   

template <typename T> T CQueue<T>::deleteHead(){
    T node=NULL;
    if(stack2.empty()){
        while(!stack1.empty()){
            stack2.push(stack1.top());
            stack1.pop();
        }
    }
    if(!stack2.empty()){
        node=stack2.top();
        stack2.pop();
    }
    cout<<node<<endl;
    return node;
}


#endif