#include "../head/LinkStack.h"
using namespace std;

//初始化 
void initStack(LinkStack &s)
{	
	s=NULL;
	see=1; 
    cout<<"\n初始化成功\n\n";
}

//判断栈是否为空
void isEmptyStack(LinkStack s)
{
	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else 
	{
		if(s==NULL)
			cout<<"\n栈为空\n\n";
		else
			cout<<"\n栈非空\n\n";
	} 
}

//得到栈顶元素
void getTopStack(LinkStack s)
{
	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else
	{
		if(s==NULL)
			cout<<"\n栈为空\n\n";
		else		
			cout<<"\n栈顶元素为"<<s->data<<endl<<endl; 
	}
 } 
 
 //清空栈
 void clearStack(LinkStack &s)
 {
 	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else
	{
		s=NULL;
		num=0;
		cout<<"\n清空成功\n\n";
	}
 }
 
 //销毁栈
void destroyStack(LinkStack &s)
 {
 	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else
	{
		see=0;
		num=0;
		cout<<"\n销毁成功\n\n";
	}
 }
 
 //检测栈长度
void stackLength(LinkStack s)
{
	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else
	{
		if(s==NULL)
			cout<<"\n栈为空\n\n";
		else
		{
			cout<<"\n栈的长度："<<num<<endl<<endl; 
		}
	}
 }
 
 //入栈
 void pushStack(LinkStack &s)
 {	
 	int t;
 	LinkStack p;
 	if(see==0)
	 	cout<<"\n未初始化\n\n";
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
				p=new StackNode; 
				p->data=t;
				p->next=s;
				num++;
				s=p;
				cout<<"\n【"<<t<<"】成功入栈\n\n";
			}
		}
}
 
 
 //出栈
void popStack(LinkStack &s)
{
	LinkStack p;
	int t;
	if(see==0)
 		cout<<"\n未初始化\n\n";
	else if(s==NULL)
		cout<<"\n栈为空\n\n";
	else
	{
		t=s->data;
		p=new StackNode; 
		p=s;
		s=s->next;
		num--; 
		delete p;
		cout<<"\n【"<<t<<"】成功出栈\n\n" ;
	}
}
 
 //遍历 
 void visitStack(LinkStack s)
 {
 	if(see==0)
	 	cout<<"\n未初始化\n\n";
	else if(s==NULL)
		cout<<"【空】\n遍历输出完毕\n\n"; 
	else
	{
		LinkStack p;
		p=new StackNode;
		for(p=s;p!=NULL;p=p->next)
			cout<<"【"<<p->data<<"】 " ;
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
 
 
 
