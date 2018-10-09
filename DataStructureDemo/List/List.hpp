//
//  List.hpp
//  DataStructureDemo
//
//  Created by David on 2018/10/7.
//  Copyright © 2018 火柴小不点. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <stdio.h>
#include <stdlib.h>


#include "PrefixHeader.h"

#define LIST_INIT_SIZE 10//长度
#define LISTINCREMENT 10 //增量

typedef int ElemType;

typedef struct {
    ElemType * elem;//记录
    int length;//长度
    int listSize;//当前分配的存储容量
}SqList;

//初始化
SqList ListInit_Sq(void);
//删除
Status ListDestroy(SqList &L);
//清空
Status ListClean(SqList &L);
//添加
Status ListAdd(SqList &L,ElemType elem);
//删除在某个位置的
Status ListRemoveAt(SqList &L,int i);
//删除某个元素
Status ListRemoveElem(SqList &L,ElemType elem);
//插入
Status ListInsert(SqList &L,ElemType *elem,int i);
//获取
ElemType ListGetElem(SqList &L,int i);
//打印
Status ListPrint(SqList &L);


#endif /* List_hpp */
