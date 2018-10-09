//
//  List.cpp
//  DataStructureDemo
//
//  Created by David on 2018/10/7.
//  Copyright © 2018 火柴小不点. All rights reserved.
//

#include "List.hpp"



//初始化
SqList ListInit_Sq(void){
    SqList L;
    L.elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if (!L.elem) exit(OVERFLOW);
    L.length = 0;
    L.listSize = LIST_INIT_SIZE;
    return L;
}

//删除
Status ListDestroy(SqList &L){
    ListClean(L);
    return OK;
}

//清空
Status ListClean(SqList &L){
    free(L.elem);
    L = ListInit_Sq();
    return OK;
}

//添加
Status ListAdd(SqList &L,ElemType elem){
    int index = L.length;
    
    if (index >= L.listSize) {
        ElemType * newBase = (ElemType *)realloc(L.elem, (L.listSize+LIST_INIT_SIZE) * sizeof(ElemType));
        if (!newBase) exit(OVERFLOW);
        L.elem = newBase;
        L.listSize += LIST_INIT_SIZE;
    }
    
    L.elem[index] = elem;
    ++L.length;
    
    return OK;
}

Status ListPrint(SqList &L){
    int length = L.length;
    cout << "打印:" ;
    if (length == 0) {
        cout << "空表" << endl;
        return OK;
    }
    for (int i = 0; i<length; i++) {
        cout << L.elem[i] << ", ";
    }
    cout << endl;
    return OK;
}


//获取
ElemType ListGetElem(SqList &L,int i){
    if (i<0||i>L.length) {
        return ERROR;
    }
    return L.elem[i];
}

//插入
Status ListInsert(SqList &L,ElemType *elem,int i){
    if (i<0||i>L.length+1) {
        return ERROR;
    }
    
    if (L.length+1>L.listSize) {
        ElemType *newBase =(ElemType *)realloc(L.elem, (L.listSize + LIST_INIT_SIZE)*sizeof(ElemType));
        L.elem = newBase;
        L.listSize = L.listSize + LIST_INIT_SIZE;
    }
    
    
    
    return OK;
}
