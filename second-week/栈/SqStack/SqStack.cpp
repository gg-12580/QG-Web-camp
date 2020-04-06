#include "../head/SqStack.h"
using namespace std;

//��ʼ�� 
int initStack(SqStack *s)
{	
	int si;
	s->top=-1; 
	cout<<"\nջ�ĳ��ȣ� ";
	if(!(cin>>si))
    {
    	cin.clear();
    	while(cin.get()!='\n')
    		continue;
		cout<<"\n�������\n\n"; 
    }
    else
    {
    	see=1;
    	s->size=si;
    	cout<<"\n��ʼ���ɹ�\n\n";
	}
	return 0;
}

//�ж�ջ�Ƿ�Ϊ��
void isEmptyStack(SqStack *s)
{
	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else 
	{
		if(s->top==-1)
			cout<<"\nջΪ��\n\n";
		else
			cout<<"\nջ�ǿ�\n\n";
	} 
}

//�õ�ջ��Ԫ��
void getTopStack(SqStack *s,ElemType *e)
{
	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else
	{
		if(s->top==-1)
			cout<<"\nջΪ��\n\n";
		else
		{
			*e=s->elem[s->top];
			cout<<"\nջ��Ԫ��Ϊ"<<*e<<endl<<endl; 
		}
	}
 } 
 
 //���ջ
 void clearStack(SqStack *s)
 {
 	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else
	{
		s->top=-1;
		cout<<"\n��ճɹ�\n\n";
	}
 }
 
 //����ջ
void destroyStack(SqStack *s)
 {
 	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else
	{
		see=0;
		cout<<"\n���ٳɹ�\n\n";
	}
 }
 
 //���ջ����
void stackLength(SqStack *s,ElemType *length)
{
	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else
	{
		if(s->top==-1)
			cout<<"\nջΪ��\n\n";
		else
		{
			*length=s->top+1;
			cout<<"\nջ�ĳ��ȣ�"<<*length<<endl<<endl; 
		}
	}
 }
 
 //��ջ
 void pushStack(SqStack *s)
 {	
 	int t;
 	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else
	{
		if(s->size==s->top+1)
			cout<<"\nջ����\n\n";
		else 
		{
			cout<<"\n��ջ����: ";
			if(!(cin>>t))
    		{
    			cin.clear();
    			while(cin.get()!='\n')
    				continue;
				cout<<"\n�������\n\n"; 
    		}
    		else
			{ 
				s->top++;	
				s->elem[s->top]=t;
				cout<<"\n��"<<t<<"���ɹ���ջ\n\n";
			}
		}
	}
 }
 
 //��ջ
void popStack(SqStack *s)
{
	int t;
	if(see==0)
 		cout<<"\nδ��ʼ��\n\n";
	else if(s->top==-1)
		cout<<"\nջΪ��\n\n";
	else
	{
		t=s->elem[s->top];
		s->top--;
		cout<<"\n��"<<t<<"���ɹ���ջ\n\n" ;
	}
}
 
 //���� 
 void visitStack(SqStack *s)
 {
 	int t;
 	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else if(s->top==-1)
		cout<<"���ա�\n����������\n\n"; 
	else
	{
		t=s->top;
		for(;s->top>-1;s->top--)
			cout<<"��"<<s->elem[s->top]<<"�� " ;
		cout<<"\n����������\n\n";
		s->top=t; 
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
 	cout<<"     |-------------a    TO   ��ʼ��ջ----------|\n";
 	cout<<"     |-------------b    TO   ����ջ------------|\n";
 	cout<<"     |-------------c    TO   �ж�ջ�Ƿ�Ϊ��----|\n";
 	cout<<"     |-------------d    TO   �õ�ջ��Ԫ��------|\n";
 	cout<<"     |-------------e    TO   ���ջ�ĳ���------|\n";
 	cout<<"     |-------------f    TO   ��ջ--------------|\n";
 	cout<<"     |-------------g    TO   ��ջ--------------|\n";
 	cout<<"     |-------------h    TO   ���ջ------------|\n";
 	cout<<"     |-------------i    TO   �������----------|\n";
 	cout<<"     |-------------j    TO   �˳�--------------|\n\n";
 	cout<<"������ѡ��Ĳ���(������ĵ�һ���ַ�Ϊ׼):  ";
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
