#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <iostream>
#include <malloc.h>
#include <cstdio>
#include <cstdlib>
#include <windows.h>

int  MAXQUEUE=0;
int see;
typedef struct Aqueue
{
    int data[100];      //数据域
    int front;
    int rear;
    int length;        //队列长度
} AQueue;


//基于数组的顺序栈

void InitAQueue(AQueue *Q);//初始化队列
void DestoryAQueue(AQueue *Q);//销毁队列 
void IsFullAQueue(AQueue *Q);//检查队列是否已满 
void IsEmptyAQueue(AQueue *Q);//检查队列是否为空 
void GetHeadAQueue(AQueue *Q);//查看队头元素 
void LengthAQueue(AQueue *Q);//确定队列长度 
void EnAQueue(AQueue *Q);//入队操作	
void DeAQueue(AQueue *Q);//出队操作	
void ClearAQueue(AQueue *Q);//清空队列	
void TraverseAQueue(AQueue *Q);//遍历函数操作	
char inputStr();//输入字符
void screen(); //主界面
void conti();//输入后的功能
#endif 
