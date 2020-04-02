#include <iostream>
#include <malloc.h>
#include <string>
struct Node{
	int num;
    struct Node *next;
    struct Node *font;
};
using namespace std;
//输入并测试,
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
//判断是否继续
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
//输出链表
void list(struct Node *p){
	cout<<"输出如下\n";
	while (1){
		cout<<p->num<<endl;
		if(p->next !=NULL){
            p=p->next;
        }
        else{
            break;
        } 
    }
}
int main()
{
	struct Node *p;
    p=creat();
    list(p);
	return 0;
}
