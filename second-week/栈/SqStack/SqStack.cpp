#include "../head/SqStack.h"
using namespace std;

//初始化 
int initStack(SqStack *s)
{	
	int si;
	s->top=-1; 
	cout<<"\n栈的长度： ";
	if(!(cin>>si))
    {
    	cin.clear();
    	while(cin.get()!='\n')
    		continue;
		cout<<"\n输入错误\n\n"; 
    }
    else
    {
    	see=1;
    	s->size=si;
    	cout<<"\n初始化成功\n\n";
	}
	return 0;
}

//判断栈是否为空
void isEmptyStack(SqStack *s)
{
	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else 
	{
		if(s->top==-1)
			cout<<"\n栈为空\n\n";
		else
			cout<<"\n栈非空\n\n";
	} 
}

//得到栈顶元素
void getTopStack(SqStack *s,ElemType *e)
{
	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else
	{
		if(s->top==-1)
			cout<<"\n栈为空\n\n";
		else
		{
			*e=s->elem[s->top];
			cout<<"\n栈顶元素为"<<*e<<endl<<endl; 
		}
	}
 } 
 
 //清空栈
 void clearStack(SqStack *s)
 {
 	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else
	{
		s->top=-1;
		cout<<"\n清空成功\n\n";
	}
 }
 
 //销毁栈
void destroyStack(SqStack *s)
 {
 	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else
	{
		see=0;
		cout<<"\n销毁成功\n\n";
	}
 }
 
 //检测栈长度
void stackLength(SqStack *s,ElemType *length)
{
	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else
	{
		if(s->top==-1)
			cout<<"\n栈为空\n\n";
		else
		{
			*length=s->top+1;
			cout<<"\n栈的长度："<<*length<<endl<<endl; 
		}
	}
 }
 
 //入栈
 void pushStack(SqStack *s)
 {	
 	int t;
 	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else
	{
		if(s->size==s->top+1)
			cout<<"\n栈已满\n\n";
		else 
		{
			cout<<"\n入栈数据: ";
			if(!(cin>>t))
    		{
    			cin.clear();
    			while(cin.get()!='\n')
    				continue;
				cout<<"\n输入错误\n\n"; 
    		}
    		else
			{ 
				s->top++;	
				s->elem[s->top]=t;
				cout<<"\n【"<<t<<"】成功入栈\n\n";
			}
		}
	}
 }
 
 //出栈
void popStack(SqStack *s)
{
	int t;
	if(see==0)
 		cout<<"\n未初始化\n\n";
	else if(s->top==-1)
		cout<<"\n栈为空\n\n";
	else
	{
		t=s->elem[s->top];
		s->top--;
		cout<<"\n【"<<t<<"】成功出栈\n\n" ;
	}
}
 
 //遍历 
 void visitStack(SqStack *s)
 {
 	int t;
 	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else if(s->top==-1)
		cout<<"【空】\n遍历输出完毕\n\n"; 
	else
	{
		t=s->top;
		for(;s->top>-1;s->top--)
			cout<<"【"<<s->elem[s->top]<<"】 " ;
		cout<<"\n遍历输出完毕\n\n";
		s->top=t; 
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
 	cout<<"     |-------------a    TO   初始化栈----------|\n";
 	cout<<"     |-------------b    TO   销毁栈------------|\n";
 	cout<<"     |-------------c    TO   判断栈是否为空----|\n";
 	cout<<"     |-------------d    TO   得到栈顶元素------|\n";
 	cout<<"     |-------------e    TO   检测栈的长度------|\n";
 	cout<<"     |-------------f    TO   入栈--------------|\n";
 	cout<<"     |-------------g    TO   出栈--------------|\n";
 	cout<<"     |-------------h    TO   清空栈------------|\n";
 	cout<<"     |-------------i    TO   遍历输出----------|\n";
 	cout<<"     |-------------j    TO   退出--------------|\n\n";
 	cout<<"输入你选择的操作(以输入的第一个字符为准):  ";
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
