#include <iostream>
#include <malloc.h>
#include <string>
struct Node{
	int num;
    struct Node *next;
};
using namespace std;
//���벢����,
int inputNumber()
{
	int i;				//i�洢���������
    cout<<"����������\n"; 
    while(!(cin>>i))
    {
    	cin.clear();
    	while(cin.get()!='\n')
    		continue;
		cout<<"����������\n"; 
    }
    return i;
}
//�ж��Ƿ����
char inputYN()
{
	string str;
	cin.get();
	cout<<"�Ƿ������������Y����N\n";
    getline(cin,str);
    while(str!="Y" && str!="N")
    {
    	cin.get();
		cout<<"������Y����N\n";
		getline(cin,str);
    }
    return str[0];
}
struct Node *creat(){
	struct Node *head,*p,*current;//p����ʱָ�룬current�ǵ�ǰָ��
    int n;							//n�洢���� 
    char s1;						//s1�ж��Ƿ���� 
    n=inputNumber();				
    head=(struct Node *)malloc(sizeof(struct Node));//���䲢����
    head->num=n;		
    current=head;	
	/*�ж��Ƿ�������洢*/ 
    s1=inputYN();					 
    while(s1!='N'){
		n=inputNumber();
        p=(struct Node *)malloc(sizeof(struct Node));
        p->num=n;
        current->next=p;	//��ǰ��ָ�����һ��ָ�����ʱָ��
        current=p;  		//��ǰ��ָ��ָ�����ʱָ��
        s1=inputYN();

    }
    current->next=NULL;		//����ָ��ָ��� 
    return head;			//����ͷָ�� 
}
//�������
void list(struct Node *p){
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
void change(struct Node *p)
{
	struct Node *first=p;
    struct Node *second=p;
    int temp;
    /*�жϲ�������ֵ*/ 
    while(first)
    {
		first=first->next;
        if(first!=NULL)
        {
			temp=first->num;
            first->num=second->num;
            second->num=temp;
            
            first=first->next;
            second=first;
        }
    }
    list(p);
}
int main()
{
	struct Node *p;
    p=creat();
    cout<<"�������\n";
    list(p);
    cout<<"��ż��������������\n";
    change(p);
	return 0;
}
