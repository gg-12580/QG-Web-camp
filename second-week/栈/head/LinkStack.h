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




//��ջ
void initStack(LinkStack &s);//��ʼ��ջ
void isEmptyStack(LinkStack s);//�ж�ջ�Ƿ�Ϊ��
void getTopStack(LinkStack s); //�õ�ջ��Ԫ��
void clearStack(LinkStack &s);//���ջ
void destroyStack(LinkStack &s);//����ջ
void stackLength(LinkStack s);//���ջ����
void pushStack(LinkStack &s);//��ջ
void popStack(LinkStack &s);//��ջ
void visitStack(LinkStack s);//���� 
char inputStr();//�����ַ�
void screen(); //������
void conti();//�����Ĺ���
#endif 

