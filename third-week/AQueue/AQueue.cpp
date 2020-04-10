#include "../head/AQueue.h"
using namespace std;

//初始化 
void InitAQueue(AQueue *Q)
{	
	int si;
	cout<<"\n队列的长度： ";
	if(!(cin>>si))
    {
    	cin.clear();
    	while(cin.get()!='\n')
    		continue;
		cout<<"\n输入错误\n\n"; 
    }
    else
    {
    	MAXQUEUE=si;
    	Q->front=Q->rear=0;
    	Q->length=0;
    	see=1;
    	cout<<"\n初始化成功\n\n";
	}
}

//检查队列是否为空 
void IsEmptyAQueue(AQueue *Q)
{
	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else 
	{
		if(Q->length==0)
			cout<<"\n队列为空\n\n";
		else
			cout<<"\n队列非空\n\n";
	} 
}

//检查队列是否已满 
void IsFullAQueue(AQueue *Q)
{
	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else 
	{
		if(Q->length==MAXQUEUE)
			cout<<"\n队列已满\n\n";
		else
			cout<<"\n队列未满\n\n";
	} 
}

//查看队头元素
void GetHeadAQueue(AQueue *Q)
{
	int i;
	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else
	{
		if(Q->length==0)
			cout<<"\n队列为空\n\n";
		else
		{
			i=Q->data[Q->front];
			cout<<"\n队头元素为"<<i<<endl<<endl; 
		}
	}
 } 
 
 //清空队列
void ClearAQueue(AQueue *Q)
 {
 	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else
	{
		Q->length=0;
		cout<<"\n清空成功\n\n";
	}
 }
 
//销毁队列 
void DestoryAQueue(AQueue *Q)
{
 	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else
	{
		see=0;
		cout<<"\n销毁成功\n\n";
	}
}
 
//确定队列长度 
void LengthAQueue(AQueue *Q)
{
	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else
	{
		if(Q->length==0)
			cout<<"\n队列为空\n\n";
		else	
			cout<<"\n队列的长度："<<Q->length<<endl<<endl; 
	}
 }

//入队操作	 
void EnAQueue(AQueue *Q)
 {	
 	int t;
 	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else
	{
		if(Q->length==MAXQUEUE)
			cout<<"\n队列已满\n\n";
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
				Q->data[Q->rear]=t;
				Q->rear=(Q->rear+1)%MAXQUEUE;
				Q->length++; 
				cout<<"\n【"<<t<<"】成功入队\n\n";
			}
		}
	}
 }
 
//出队操作
void DeAQueue(AQueue *Q)	
{
	int t;
	if(see==0)
 		cout<<"\n未初始化\n\n";
	else if(Q->length==0)
		cout<<"\n队列为空\n\n";
	else
	{
		t= Q->data[Q->front];
		Q->front=(Q->front+1)%MAXQUEUE;
		Q->length--;
		cout<<"\n【"<<t<<"】成功出队\n\n" ;
	}
}
 
 //遍历 
void TraverseAQueue(AQueue *Q)
 {
 	int i;
 	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else if(Q->length==0)
		cout<<"【空】\n遍历输出完毕\n\n"; 
	else
	{
		for(i=0;i<Q->length;i++)
			cout<<"【"<<Q->data[i]<<"】 " ;
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
    while(s>'k' || s<'a' )
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
 	cout<<"     |-------------d    TO   判断队列是否为满--|\n";
 	cout<<"     |-------------e    TO   得到队头元素------|\n";
 	cout<<"     |-------------f    TO   检测队列长度------|\n";
 	cout<<"     |-------------g    TO   入队--------------|\n";
 	cout<<"     |-------------h    TO   出队--------------|\n";
 	cout<<"     |-------------i    TO   清空队列----------|\n";
 	cout<<"     |-------------j    TO   遍历输出----------|\n";
 	cout<<"     |-------------k    TO   退出--------------|\n\n";
 	cout<<"输入你选择的操作(以输入的第一个字符为准):  ";
 }
 
 
 
 
 
 
 
 
 
 
 
 
