#include <iostream>
#include <malloc.h>
#include <cstdlib> 
#include <string>
#include <windows.h>
struct Node{
	int num;
    struct Node *next;
    struct Node *font;
};
using namespace std;
/*输入并测试*/
int inputNumber()
{
	int i;				//i存储输入的数字
    cout<<"请输入数字\n"; 
    while(!(cin>>i))
    {
    	cin.clear();
    	while(cin.get()!='\n')
    		continue;
		cout<<"请输入数字\n"; 
    }
    return i;
}
/*判断是否继续*/
char inputYN()
{
	string str;
	cin.get();
	cout<<"是否继续，请输入Y或者N\n";
    getline(cin,str);
    while(str!="Y" && str!="N")
    {
    	cin.get();
		cout<<"请输入Y或者N\n";
		getline(cin,str);
    }
    return str[0];
}
/*生成链表 */
struct Node *creat(){
	struct Node *head,*p,*current,*tail;//p是临时指针，current是当前指针
    int n;							//n存储数字 
    char s1;						//s1判断是否继续 
    n=inputNumber();				
    head=(struct Node *)malloc(sizeof(struct Node));//分配并储存
    head->num=n;	
	head->font=NULL;	
    current=head;	
	/*判断是否继续并存储*/ 
    s1=inputYN();					 
    while(s1!='N'){
		n=inputNumber();
        p=(struct Node *)malloc(sizeof(struct Node));
        p->num=n;
        current->next=p;	//当前的指针的下一个指向该临时指针
        p->font=current;
        current=p;  		//当前的指针指向该临时指针
        s1=inputYN();

    }
    current->next=NULL;	//最后的指针指向空 
	tail=current;	
    return head;			//返回头指针 
}
/*遍历链表*/
void list(struct Node *p){
	cout<<"输出如下\n";
	while (1){
		cout<<p->num<<" ";
		if(p->next !=NULL){
            p=p->next;
        }
        else{
            break;
        } 
    }
    cout<<endl; 
}
/*插入值 */
void insertList(struct Node *p,int insert)
{
	/*target是要插入位置的前一节点，node表示要插入的节点位置*/ 
	struct Node *target,*node,*temp;
	int j,item;
	target=p;
	/*输入节点值，储存在item*/ 
	cout<<"输入要插入的节点的数值\n" ;	
	item=inputNumber();
	node=(struct Node *)malloc(sizeof(struct Node));
    node->num=item;
    /*找出target位置*/ 
	for(j=1;j<insert-1;j++)
	{
		target=target->next;
	}
	/*插入，temp是插入位置的后一节点*/ 
	temp=target->next;
	node->next=temp;
	target->next=node;
	list(p);
}
/*删除节点*/ 
void deletList(struct Node *p,int delet)
{
	/*target是要删除位置的前一节点,temp是删除位置*/ 
	struct Node *target,*temp;
	int j; 
	target=p;
    /*找出target位置*/ 
	for(j=1;j<delet-1;j++)
	{
		target=target->next;
	}
	/*删除*/ 
	temp=target->next;
	target->next= temp->next;
	free(temp);
	list(p);
}
/*查找节点*/
void searchList(struct Node *p,int search)
{
	/*target是要删除位置的前一节点,temp是删除位置*/ 
	struct Node *target,*temp;
	int j; 
	target=p;
    /*找出target位置*/ 
	for(j=1;target->num!=search && target->next!=NULL;j++)
	{
		target=target->next;
	}
	/*输出节点位置*/ 
	if(target->num!=search && target->next==NULL) 
		cout<<"没有该节点值" ;
	else
		cout<<"该节点位置为:"<<j<<endl;
}
/*销毁链表*/
void destroyList(struct Node *p)
{
	struct Node *t;
	while(p)
	{
		t=p->next;
		free(p);
		p=t;
	}
}
int main() 
{
	struct Node *p;
	int i,button;
	char str2='Y'; 
	cout<<" *请生成链表* \n";
    p=creat();
    list(p);
    Sleep(3000); 
    while(str2=='Y')
    {
		system("cls");
    	cout<<"<- *请选择操作* -> "<<endl; 
    	cout<<"<- 1:插入节点 ->"<<endl;
    	cout<<"<- 2:删除节点 ->"<<endl;
		cout<<"<- 3:查找节点 ->"<<endl;
		cout<<"<- 4.销毁链表 ->"<<endl;
		button=inputNumber();
    	switch(button)
   		{
    		case 1:
    			Sleep(3000); 
				system("cls");
    			cout<<"输入要插入的节点位置，以1开始算起\n";
   				i=inputNumber();
    			insertList(p,i);
    			str2=inputYN();
    			break;
    		case 2:
    			Sleep(3000); 
				system("cls");
    			cout<<"输入要删除的节点位置，以1开始算起\n";
    			i=inputNumber();
    			deletList(p,i);
    			str2=inputYN();
    			break;
    		case 3:
    			Sleep(3000); 
				system("cls");
    			cout<<"输入要查找的节点值\n";
    			i=inputNumber();
    			searchList(p,i);
    			str2=inputYN();
    			break;
    		case 4:
    			Sleep(3000); 
				system("cls");
    			destroyList(p); 
    			cout<<"销毁成功\n";
    			str2='N';
		}
 	}
	return 0;
}
