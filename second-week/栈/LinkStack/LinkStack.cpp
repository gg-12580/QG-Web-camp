#include "../head/LinkStack.h"
using namespace std;

//��ʼ�� 
void initStack(LinkStack &s)
{	
	s=NULL;
	see=1; 
    cout<<"\n��ʼ���ɹ�\n\n";
}

//�ж�ջ�Ƿ�Ϊ��
void isEmptyStack(LinkStack s)
{
	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else 
	{
		if(s==NULL)
			cout<<"\nջΪ��\n\n";
		else
			cout<<"\nջ�ǿ�\n\n";
	} 
}

//�õ�ջ��Ԫ��
void getTopStack(LinkStack s)
{
	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else
	{
		if(s==NULL)
			cout<<"\nջΪ��\n\n";
		else		
			cout<<"\nջ��Ԫ��Ϊ"<<s->data<<endl<<endl; 
	}
 } 
 
 //���ջ
 void clearStack(LinkStack &s)
 {
 	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else
	{
		s=NULL;
		num=0;
		cout<<"\n��ճɹ�\n\n";
	}
 }
 
 //����ջ
void destroyStack(LinkStack &s)
 {
 	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else
	{
		see=0;
		num=0;
		cout<<"\n���ٳɹ�\n\n";
	}
 }
 
 //���ջ����
void stackLength(LinkStack s)
{
	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else
	{
		if(s==NULL)
			cout<<"\nջΪ��\n\n";
		else
		{
			cout<<"\nջ�ĳ��ȣ�"<<num<<endl<<endl; 
		}
	}
 }
 
 //��ջ
 void pushStack(LinkStack &s)
 {	
 	int t;
 	LinkStack p;
 	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
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
				p=new StackNode; 
				p->data=t;
				p->next=s;
				num++;
				s=p;
				cout<<"\n��"<<t<<"���ɹ���ջ\n\n";
			}
		}
}
 
 
 //��ջ
void popStack(LinkStack &s)
{
	LinkStack p;
	int t;
	if(see==0)
 		cout<<"\nδ��ʼ��\n\n";
	else if(s==NULL)
		cout<<"\nջΪ��\n\n";
	else
	{
		t=s->data;
		p=new StackNode; 
		p=s;
		s=s->next;
		num--; 
		delete p;
		cout<<"\n��"<<t<<"���ɹ���ջ\n\n" ;
	}
}
 
 //���� 
 void visitStack(LinkStack s)
 {
 	if(see==0)
	 	cout<<"\nδ��ʼ��\n\n";
	else if(s==NULL)
		cout<<"���ա�\n����������\n\n"; 
	else
	{
		LinkStack p;
		p=new StackNode;
		for(p=s;p!=NULL;p=p->next)
			cout<<"��"<<p->data<<"�� " ;
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
 
 
 
