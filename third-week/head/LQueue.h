#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <iostream>
#include <malloc.h>
#include <cstdio>
#include <cstdlib>
#include <windows.h>

int see;
//�ڵ㶨��
typedef struct QNode
{
	int data;
	struct QNode  *next;
}QNode, *QueuePtr;

//��ʽ���ж��� 
typedef struct
{
 	QueuePtr head;
	QueuePtr tail;
}LinkQueue;
//�ڵ㶨��

//���������˳��ջ

void InitLQueue(LinkQueue &Q);//��ʼ������
void DestoryLQueue(LinkQueue &Q);//���ٶ��� 
void IsEmptyLQueue(LinkQueue &Q);//�������Ƿ�Ϊ�� 
void GetHeadLQueue(LinkQueue &Q);//�鿴��ͷԪ�� 
void LengthLQueue(LinkQueue &Q);//ȷ�����г��� 
void EnLQueue(LinkQueue &Q);//��Ӳ���	
void DeLQueue(LinkQueue &Q);//���Ӳ���	
void ClearLQueue(LinkQueue &Q);//��ն���	
void TraverseLQueue(LinkQueue &Q);//������������
char inputStr();//�����ַ�
void screen(); //������
void conti();//�����Ĺ���
#endif 
