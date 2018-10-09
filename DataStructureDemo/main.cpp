//
//  main.cpp
//  DataStructureDemo
//
//  Created by David on 2018/10/7.
//  Copyright © 2018 火柴小不点. All rights reserved.
/**
 学习数据结构+C++的项目
 */

#include "PrefixHeader.h"
#include "List.hpp"

int main(int argc, const char * argv[]) {
    
    SqList list = ListInit_Sq();
    ListAdd(list, 12);
    ListAdd(list, 10);
    ListAdd(list, 1);
    ListAdd(list, 8);
    ListAdd(list, 12);
    ListAdd(list, 10);
    ListAdd(list, 1);
    ListAdd(list, 8);
    ListAdd(list, 12);
    ListAdd(list, 10);
    ListAdd(list, 1);
    ListAdd(list, 8);
    ListAdd(list, 12);
    ListAdd(list, 10);
    ListAdd(list, 1);
    ListAdd(list, 8);
    
    ListPrint(list);
    
    
    cout << ListGetElem(list, 100) << endl;
    
    return OK;
}
