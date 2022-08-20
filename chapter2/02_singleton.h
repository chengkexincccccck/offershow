/*
 * @Author: Chengkexin
 * @Date: 2022-07-04 23:25:00
 * @LastEditors: Chengkexin
 * @LastEditTime: 2022-07-05 12:58:36
 * @FilePath: /文档/chapter2/02_singleton.h
 * @Description: 设计一个类，只能生成该类的一个实例——单例模式——核心：隐藏构造函数
 * 
 * Copyright (c) 2022 by Chengkexin, All Rights Reserved. 
 */
#ifndef SINGLETON_H
#define SINGLETON_H
#include <stdio.h>
#include <string>
#include <mutex>
#include <iostream>

using namespace std;
/**
 * @description: 饿汉模式：不管是否需要使用对象都将其定义出来，浪费了内存，或者说减慢了程序启动速度
 * @return {*}
 */
class singletonhunger
{
private:
    static singletonhunger* instance;
    //防止外部构造
    singletonhunger()=default;
    //防止拷贝和赋值
    singletonhunger& operator=(const singletonhunger&)=delete;
    singletonhunger(const singletonhunger& other)=delete;
    
public:
    static singletonhunger* getinstance();
    ~singletonhunger();
    void printf(){
        cout<<"singletonhunger"<<endl;
    }
};
singletonhunger* singletonhunger::getinstance(){
    if(instance==NULL){
        instance=new singletonhunger();
    }
    return instance;
}


singletonhunger* singletonhunger::instance=new singletonhunger;


/**
 * @description: 懒汉模式：延迟构造对象，在第一次使用该对象的时候才进行new该对象
 * @return {*}
 */
class singletonlazy
{
private:
    /* data */
    singletonlazy(/* args */)=default;
    static singletonlazy* instance;
    static std::mutex mutex_;
public:
    void print(){
        cout<<"singletonlazy"<<endl;
    }
    ~singletonlazy();
    static singletonlazy* getInstance(){
        if(instance==nullptr){
            std::lock_guard<std::mutex> lock(mutex_);//上锁，保证多线程的安全，在使用锁的前后判断是否为空可避免每次都申请锁
            if(instance==nullptr){
                instance=new singletonlazy;
            }
        }
        return instance;
    }
    void destory(){
        if(instance!=nullptr){
            delete[] instance;
            instance=nullptr;
        }
    }
};
std::mutex singletonlazy::mutex_;
singletonlazy* singletonlazy::instance=nullptr;




#endif