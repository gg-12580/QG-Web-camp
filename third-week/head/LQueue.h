#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <iostream>
#include <malloc.h>
#include <cstdio>
#include <cstdlib>
#include <windows.h>

int see;
//节点定义
typedef struct QNode
{
	int data;
	struct QNode  *next;
}QNode, *QueuePtr;

//链式队列定义 
typedef struct
{
 	QueuePtr head;
	QueuePtr tail;
}LinkQueue;
//节点定义

//基于数组的顺序栈

void InitLQueue(LinkQueue &Q);//初始化队列
void DestoryLQueue(LinkQueue &Q);//销毁队列 
void IsEmptyLQueue(LinkQueue &Q);//检查队列是否为空 
void GetHeadLQueue(LinkQueue &Q);//查看队头元素 
void LengthLQueue(LinkQueue &Q);//确定队列长度 
void EnLQueue(LinkQueue &Q);//入队操作	
void DeLQueue(LinkQueue &Q);//出队操作	
void ClearLQueue(LinkQueue &Q);//清空队列	
void TraverseLQueue(LinkQueue &Q);//遍历函数操作
char inputStr();//输入字符
void screen(); //主界面
void conti();//输入后的功能
#endif 
