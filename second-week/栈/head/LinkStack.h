#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <iostream>
#include <malloc.h>
#include <cstdio>
#include <cstdlib>
#include <windows.h>

int see; 
int num;

typedef int ElemType;

typedef  struct StackNode
{
	ElemType data;
	struct StackNode *next;
}StackNode, *LinkStack;




//链栈
void initStack(LinkStack &s);//初始化栈
void isEmptyStack(LinkStack s);//判断栈是否为空
void getTopStack(LinkStack s); //得到栈顶元素
void clearStack(LinkStack &s);//清空栈
void destroyStack(LinkStack &s);//销毁栈
void stackLength(LinkStack s);//检测栈长度
void pushStack(LinkStack &s);//入栈
void popStack(LinkStack &s);//出栈
void visitStack(LinkStack s);//遍历 
char inputStr();//输入字符
void screen(); //主界面
void conti();//输入后的功能
#endif 

