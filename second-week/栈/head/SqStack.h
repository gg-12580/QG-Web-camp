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

//���������˳��ջ
int initStack(SqStack *s);//��ʼ��ջ
void isEmptyStack(SqStack *s);//�ж�ջ�Ƿ�Ϊ��
void getTopStack(SqStack *s,ElemType *e); //�õ�ջ��Ԫ��
void clearStack(SqStack *s);//���ջ
void destroyStack(SqStack *s);//����ջ
void stackLength(SqStack *s,ElemType *length);//���ջ����
void pushStack(SqStack *s);//��ջ
void popStack(SqStack *s);//��ջ
void visitStack(SqStack *s);//���� 
char inputStr();//�����ַ�
void screen(); //������
void conti();//�����Ĺ���
#endif 
