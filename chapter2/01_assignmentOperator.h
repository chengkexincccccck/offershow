/*
 * @Author: Chengkexin
 * @Date: 2022-07-04 13:13:14
 * @LastEditors: Chengkexin
 * @LastEditTime: 2022-07-04 23:27:18
 * @FilePath: /文档/chapter2/01_assignmentOperator.h
 * @Description: 为CMyString添加赋值运算符函数
 * 
 * Copyright (c) 2022 by Chengkexin, All Rights Reserved. 
 */
#ifndef ASSIGNMENTOPERATOR_H
#define ASSIGNMENTOPERATOR_H
using namespace std;
class CMyString
{
public:
    CMyString(char* pData = nullptr);
    CMyString(const CMyString& str);
    ~CMyString(void);
    CMyString& operator=(const CMyString &other);
    void print();
private:
    char* m_pData;
};
/**
 * @description: 核心点在于：
 * 1.返回值为该类型的引用。因为只有返回引用才可连续赋值
 * 2.传入的参数应为常量引用
 * 3.注意释放自身已有的内存，避免内存泄漏
 * 4.判断传入的参数和当前实例是不是同一个实例。同一个实例直接返回，否则执行释放自身内存将导致严重问题
 * @return {CMyString&}
 */
CMyString& CMyString::operator=(const CMyString& other){
    
    if(this!=&other){
        CMyString temp(other);
        char *ptemp=temp.m_pData;
        temp.m_pData=this->m_pData;
        this->m_pData=ptemp;
    }
    return *this;
    
    //未考虑内存不足导致new抛出异常的情况
    // if(this==&other){
    //     return *this;
    // }
    // delete []m_pData;
    // m_pData=nullptr;
    // m_pData=new char[strlen(other.m_pData)+1];
    // strcpy(m_pData,other.m_pData);
    // return *this;
}

void CMyString::print(){
   cout<<m_pData<<endl;
}
CMyString::CMyString(char *pData)
{
    if(pData == nullptr)
    {
        m_pData = new char[1];
        m_pData[0] = '\0';
    }
    else
    {
        int length = strlen(pData);
        m_pData = new char[length + 1];
        strcpy(m_pData, pData);
    }
}
CMyString::~CMyString()
{
    delete[] m_pData;
}
CMyString::CMyString(const CMyString &str)
{
    int length = strlen(str.m_pData);
    m_pData = new char[length + 1];
    strcpy(m_pData, str.m_pData);
}

#endif