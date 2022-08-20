/*
 * @Author: Chengkexin
 * @Date: 2022-07-13 00:08:42
 * @LastEditors: Chengkexin
 * @LastEditTime: 2022-07-14 22:57:13
 * @FilePath: /getOffer/Utilities/StringUtil.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Chengkexin, All Rights Reserved. 
 */

#include "StringUtil.h"

void Reverse(char *pBegin, char *pEnd)
{
    if(pBegin == nullptr || pEnd == nullptr)
        return;

    while(pBegin < pEnd)
    {
        char temp = *pBegin;
        *pBegin = *pEnd;
        *pEnd = temp;

        pBegin ++, pEnd --;
    }
}
