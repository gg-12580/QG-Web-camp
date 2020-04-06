#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <iostream>
#include <malloc.h>
#include <cstdio>
#include <cstdlib>
#include <windows.h>

int  see;

typedef int ElemType;

typedef struct SqStack 
{
	int elem[1000];
	int top;
	int size;
}SqStack;

//基于数组的顺序栈
int initStack(SqStack *s);//初始化栈
void isEmptyStack(SqStack *s);//判断栈是否为空
void getTopStack(SqStack *s,ElemType *e); //得到栈顶元素
void clearStack(SqStack *s);//清空栈
void destroyStack(SqStack *s);//销毁栈
void stackLength(SqStack *s,ElemType *length);//检测栈长度
void pushStack(SqStack *s);//入栈
void popStack(SqStack *s);//出栈
void visitStack(SqStack *s);//遍历 
char inputStr();//输入字符
void screen(); //主界面
void conti();//输入后的功能
#endif 
