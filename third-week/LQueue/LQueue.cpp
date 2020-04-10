#include "../head/LQueue.h"
using namespace std;

//初始化 
void InitLQueue(LinkQueue &Q)
{	 
   	Q.head=Q.tail=(QueuePtr)malloc(sizeof(QNode));
   	Q.head->next=NULL;
   	see=1;
   	cout<<"\n初始化成功\n\n";
}

//检查队列是否为空 
void IsEmptyLQueue(LinkQueue &Q)
{
	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else 
	{
		if(Q.head==Q.tail)
			cout<<"\n队列为空\n\n";
		else
			cout<<"\n队列非空\n\n";
	} 
}

//查看队头元素
void GetHeadLQueue(LinkQueue &Q)
{
	int i;
	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else
	{
		if(Q.head==Q.tail)
			cout<<"\n队列为空\n\n";
		else
		{
			i=Q.head->next->data;
			cout<<"\n队头元素为"<<i<<endl<<endl; 
		}
	}
 } 
 
 //清空队列
void ClearLQueue(LinkQueue &Q)
 {
 	QueuePtr p,q;
 	q=p=(QueuePtr)malloc(sizeof(QNode));
 	if(see==0)
	 	cout<<"\n未初始化\n\n";
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
		cout<<"\n清空成功\n\n";
	}
 }
 
//销毁队列 
void DestoryLQueue(LinkQueue &Q)
{
	QueuePtr p;
 	if(see==0)
	 	cout<<"\n未初始化\n\n";
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
		cout<<"\n销毁成功\n\n";
	}
}
 
//确定队列长度 
void LengthLQueue(LinkQueue &Q)
{
	int i=0;
	QueuePtr p;
	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else
	{
		if(Q.head==Q.tail)
			cout<<"\n队列为空\n\n";
		else
		{
			p=(QueuePtr)malloc(sizeof(QNode));
			p=Q.head;
			while(p!=Q.tail)
			{
				i++;
				p=p->next;	
			}
			cout<<"\n队列的长度："<<i<<endl<<endl; 
		}	
			
	}
 }

//入队操作	 
void EnLQueue(LinkQueue &Q)
 {	
 	QueuePtr p;
 	int t;
 	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else
	{
		cout<<"\n入队数据: ";
		if(!(cin>>t))
   		{
   			cin.clear();
   			while(cin.get()!='\n')
   				continue;
			cout<<"\n输入错误\n\n"; 
    	}
   		else
		{ 
			p=(QueuePtr)malloc(sizeof(QNode));
			p->data=t;
			p->next=NULL;
			Q.tail->next=p;
			Q.tail=p;
			cout<<"\n【"<<t<<"】成功入队\n\n";			
		}
	}
 }
 
//出队操作
void DeLQueue(LinkQueue &Q)	
{
	QueuePtr p;
	int t;
	if(see==0)
 		cout<<"\n未初始化\n\n";
	else if(Q.head==Q.tail)
		cout<<"\n队列为空\n\n";
	else
	{
		p=(QueuePtr)malloc(sizeof(QNode));
		p=Q.head->next;
		t=p->data;
		cout<<"\n【"<<t<<"】成功出队\n\n" ;
		Q.head->next=p->next;
		if(Q.tail==p) Q.tail=Q.head;
		free(p);
	}
}
 
 //遍历 
void TraverseLQueue(LinkQueue &Q)
 {
	QueuePtr p;
 	int i;
 	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else if(Q.head==Q.tail)
		cout<<"【空】\n遍历输出完毕\n\n"; 
	else
	{
		p=(QueuePtr)malloc(sizeof(QNode));
		p=Q.head->next;
		while(p)
		{
			cout<<"【"<<p->data<<"】 " ;
			p=p->next;
		}
		cout<<"\n遍历输出完毕\n\n";
	}
}

//输入字符
char inputStr()
{	
	char s; 
	fflush(stdin);
	s=cin.get();
	fflush(stdin);
    while(s>'j' || s<'a' )
    {
		cout<<"\n输入错误,请重新输入:  ";
		s=cin.get();
		fflush(stdin);
    }
    return s;
}

//输入后的功能	 
void conti()
{
	system("pause");
	system("cls");
	screen(); 	
}	 

//主界面	
 void screen()
 {
 	cout<<"                 *请选择以下功能*\n\n";
 	cout<<"     |——————输入  &&   功能———————|\n";
 	cout<<"     |-————————————————————|\n";
 	cout<<"     |-------------a    TO   初始化队列--------|\n";
 	cout<<"     |-------------b    TO   销毁队列----------|\n";
 	cout<<"     |-------------c    TO   判断队列是否为空--|\n";
 	cout<<"     |-------------d    TO   得到队头元素------|\n";
 	cout<<"     |-------------e    TO   检测队列长度------|\n";
 	cout<<"     |-------------f    TO   入队--------------|\n";
 	cout<<"     |-------------g    TO   出队--------------|\n";
 	cout<<"     |-------------h    TO   清空队列----------|\n";
 	cout<<"     |-------------i    TO   遍历输出----------|\n";
 	cout<<"     |-------------j    TO   退出--------------|\n\n";
 	cout<<"输入你选择的操作(以输入的第一个字符为准):  ";
 }
 
 
 
 
 
 
 
 
 
 
 
 
