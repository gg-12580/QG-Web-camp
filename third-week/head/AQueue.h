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
    int data[100];      //������
    int front;
    int rear;
    int length;        //���г���
} AQueue;


//���������˳��ջ

void InitAQueue(AQueue *Q);//��ʼ������
void DestoryAQueue(AQueue *Q);//���ٶ��� 
void IsFullAQueue(AQueue *Q);//�������Ƿ����� 
void IsEmptyAQueue(AQueue *Q);//�������Ƿ�Ϊ�� 
void GetHeadAQueue(AQueue *Q);//�鿴��ͷԪ�� 
void LengthAQueue(AQueue *Q);//ȷ�����г��� 
void EnAQueue(AQueue *Q);//��Ӳ���	
void DeAQueue(AQueue *Q);//���Ӳ���	
void ClearAQueue(AQueue *Q);//��ն���	
void TraverseAQueue(AQueue *Q);//������������	
char inputStr();//�����ַ�
void screen(); //������
void conti();//�����Ĺ���
#endif 
