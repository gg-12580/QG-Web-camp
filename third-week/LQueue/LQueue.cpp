#include "../head/LQueue.h"
using namespace std;

//��ʼ�� 
void InitLQueue(LinkQueue &Q)
{	 
   	Q.head=Q.tail=(QueuePtr)malloc(sizeof(QNode));
   	Q.head->next=NULL;
   	see=1;
   	cout<<"\n��ʼ���ɹ�\n\n";
}

//�������Ƿ�Ϊ�� 
void IsEmptyLQueue(LinkQueue &Q)
{
	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else 
	{
		if(Q.head==Q.tail)
			cout<<"\n����Ϊ��\n\n";
		else
			cout<<"\n���зǿ�\n\n";
	} 
}

//�鿴��ͷԪ��
void GetHeadLQueue(LinkQueue &Q)
{
	int i;
	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else
	{
		if(Q.head==Q.tail)
			cout<<"\n����Ϊ��\n\n";
		else
		{
			i=Q.head->next->data;
			cout<<"\n��ͷԪ��Ϊ"<<i<<endl<<endl; 
		}
	}
 } 
 
 //��ն���
void ClearLQueue(LinkQueue &Q)
 {
 	QueuePtr p,q;
 	q=p=(QueuePtr)malloc(sizeof(QNode));
 	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else
	{
		Q.head=Q.tail;
		p=Q.head->next;
		Q.head->next=NULL;
		while(p)
		{
			q=p;
			p=p->next;
			free(q);
		}
		cout<<"\n��ճɹ�\n\n";
	}
 }
 
//���ٶ��� 
void DestoryLQueue(LinkQueue &Q)
{
	QueuePtr p;
 	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else
	{
		p=(QueuePtr)malloc(sizeof(QNode));
		while(Q.head)
		{
			p=Q.head->next;
			free(Q.head);
			Q.head=p;
			see=0;
		}
		cout<<"\n���ٳɹ�\n\n";
	}
}
 
//ȷ�����г��� 
void LengthLQueue(LinkQueue &Q)
{
	int i=0;
	QueuePtr p;
	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else
	{
		if(Q.head==Q.tail)
			cout<<"\n����Ϊ��\n\n";
		else
		{
			p=(QueuePtr)malloc(sizeof(QNode));
			p=Q.head;
			while(p!=Q.tail)
			{
				i++;
				p=p->next;	
			}
			cout<<"\n���еĳ��ȣ�"<<i<<endl<<endl; 
		}	
			
	}
 }

//��Ӳ���	 
void EnLQueue(LinkQueue &Q)
 {	
 	QueuePtr p;
 	int t;
 	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else
	{
		cout<<"\n�������: ";
		if(!(cin>>t))
   		{
   			cin.clear();
   			while(cin.get()!='\n')
   				continue;
			cout<<"\n�������\n\n"; 
    	}
   		else
		{ 
			p=(QueuePtr)malloc(sizeof(QNode));
			p->data=t;
			p->next=NULL;
			Q.tail->next=p;
			Q.tail=p;
			cout<<"\n��"<<t<<"���ɹ����\n\n";			
		}
	}
 }
 
//���Ӳ���
void DeLQueue(LinkQueue &Q)	
{
	QueuePtr p;
	int t;
	if(see==0)
 		cout<<"\nδ��ʼ��\n\n";
	else if(Q.head==Q.tail)
		cout<<"\n����Ϊ��\n\n";
	else
	{
		p=(QueuePtr)malloc(sizeof(QNode));
		p=Q.head->next;
		t=p->data;
		cout<<"\n��"<<t<<"���ɹ�����\n\n" ;
		Q.head->next=p->next;
		if(Q.tail==p) Q.tail=Q.head;
		free(p);
	}
}
 
 //���� 
void TraverseLQueue(LinkQueue &Q)
 {
	QueuePtr p;
 	int i;
 	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else if(Q.head==Q.tail)
		cout<<"���ա�\n����������\n\n"; 
	else
	{
		p=(QueuePtr)malloc(sizeof(QNode));
		p=Q.head->next;
		while(p)
		{
			cout<<"��"<<p->data<<"�� " ;
			p=p->next;
		}
		cout<<"\n����������\n\n";
	}
}

//�����ַ�
char inputStr()
{	
	char s; 
	fflush(stdin);
	s=cin.get();
	fflush(stdin);
    while(s>'j' || s<'a' )
    {
		cout<<"\n�������,����������:  ";
		s=cin.get();
		fflush(stdin);
    }
    return s;
}

//�����Ĺ���	 
void conti()
{
	system("pause");
	system("cls");
	screen(); 	
}	 

//������	
 void screen()
 {
 	cout<<"                 *��ѡ�����¹���*\n\n";
 	cout<<"     |����������������  &&   ���ܡ�������������|\n";
 	cout<<"     |-����������������������������������������|\n";
 	cout<<"     |-------------a    TO   ��ʼ������--------|\n";
 	cout<<"     |-------------b    TO   ���ٶ���----------|\n";
 	cout<<"     |-------------c    TO   �ж϶����Ƿ�Ϊ��--|\n";
 	cout<<"     |-------------d    TO   �õ���ͷԪ��------|\n";
 	cout<<"     |-------------e    TO   �����г���------|\n";
 	cout<<"     |-------------f    TO   ���--------------|\n";
 	cout<<"     |-------------g    TO   ����--------------|\n";
 	cout<<"     |-------------h    TO   ��ն���----------|\n";
 	cout<<"     |-------------i    TO   �������----------|\n";
 	cout<<"     |-------------j    TO   �˳�--------------|\n\n";
 	cout<<"������ѡ��Ĳ���(������ĵ�һ���ַ�Ϊ׼):  ";
 }
 
 
 
 
 
 
 
 
 
 
 
 
