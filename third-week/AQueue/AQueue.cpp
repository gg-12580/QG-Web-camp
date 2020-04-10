#include "../head/AQueue.h"
using namespace std;

//��ʼ�� 
void InitAQueue(AQueue *Q)
{	
	int si;
	cout<<"\n���еĳ��ȣ� ";
	if(!(cin>>si))
    {
    	cin.clear();
    	while(cin.get()!='\n')
    		continue;
		cout<<"\n�������\n\n"; 
    }
    else
    {
    	MAXQUEUE=si;
    	Q->front=Q->rear=0;
    	Q->length=0;
    	see=1;
    	cout<<"\n��ʼ���ɹ�\n\n";
	}
}

//�������Ƿ�Ϊ�� 
void IsEmptyAQueue(AQueue *Q)
{
	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else 
	{
		if(Q->length==0)
			cout<<"\n����Ϊ��\n\n";
		else
			cout<<"\n���зǿ�\n\n";
	} 
}

//�������Ƿ����� 
void IsFullAQueue(AQueue *Q)
{
	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else 
	{
		if(Q->length==MAXQUEUE)
			cout<<"\n��������\n\n";
		else
			cout<<"\n����δ��\n\n";
	} 
}

//�鿴��ͷԪ��
void GetHeadAQueue(AQueue *Q)
{
	int i;
	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else
	{
		if(Q->length==0)
			cout<<"\n����Ϊ��\n\n";
		else
		{
			i=Q->data[Q->front];
			cout<<"\n��ͷԪ��Ϊ"<<i<<endl<<endl; 
		}
	}
 } 
 
 //��ն���
void ClearAQueue(AQueue *Q)
 {
 	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else
	{
		Q->length=0;
		cout<<"\n��ճɹ�\n\n";
	}
 }
 
//���ٶ��� 
void DestoryAQueue(AQueue *Q)
{
 	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else
	{
		see=0;
		cout<<"\n���ٳɹ�\n\n";
	}
}
 
//ȷ�����г��� 
void LengthAQueue(AQueue *Q)
{
	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else
	{
		if(Q->length==0)
			cout<<"\n����Ϊ��\n\n";
		else	
			cout<<"\n���еĳ��ȣ�"<<Q->length<<endl<<endl; 
	}
 }

//��Ӳ���	 
void EnAQueue(AQueue *Q)
 {	
 	int t;
 	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else
	{
		if(Q->length==MAXQUEUE)
			cout<<"\n��������\n\n";
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
				Q->data[Q->rear]=t;
				Q->rear=(Q->rear+1)%MAXQUEUE;
				Q->length++; 
				cout<<"\n��"<<t<<"���ɹ����\n\n";
			}
		}
	}
 }
 
//���Ӳ���
void DeAQueue(AQueue *Q)	
{
	int t;
	if(see==0)
 		cout<<"\nδ��ʼ��\n\n";
	else if(Q->length==0)
		cout<<"\n����Ϊ��\n\n";
	else
	{
		t= Q->data[Q->front];
		Q->front=(Q->front+1)%MAXQUEUE;
		Q->length--;
		cout<<"\n��"<<t<<"���ɹ�����\n\n" ;
	}
}
 
 //���� 
void TraverseAQueue(AQueue *Q)
 {
 	int i;
 	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else if(Q->length==0)
		cout<<"���ա�\n����������\n\n"; 
	else
	{
		for(i=0;i<Q->length;i++)
			cout<<"��"<<Q->data[i]<<"�� " ;
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
    while(s>'k' || s<'a' )
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
 	cout<<"     |-------------d    TO   �ж϶����Ƿ�Ϊ��--|\n";
 	cout<<"     |-------------e    TO   �õ���ͷԪ��------|\n";
 	cout<<"     |-------------f    TO   �����г���------|\n";
 	cout<<"     |-------------g    TO   ���--------------|\n";
 	cout<<"     |-------------h    TO   ����--------------|\n";
 	cout<<"     |-------------i    TO   ��ն���----------|\n";
 	cout<<"     |-------------j    TO   �������----------|\n";
 	cout<<"     |-------------k    TO   �˳�--------------|\n\n";
 	cout<<"������ѡ��Ĳ���(������ĵ�һ���ַ�Ϊ׼):  ";
 }
 
 
 
 
 
 
 
 
 
 
 
 
