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
/*���벢����*/
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
/*�ж��Ƿ����*/
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
/*�������� */
struct Node *creat(){
	struct Node *head,*p,*current,*tail;//p����ʱָ�룬current�ǵ�ǰָ��
    int n;							//n�洢���� 
    char s1;						//s1�ж��Ƿ���� 
    n=inputNumber();				
    head=(struct Node *)malloc(sizeof(struct Node));//���䲢����
    head->num=n;	
	head->font=NULL;	
    current=head;	
	/*�ж��Ƿ�������洢*/ 
    s1=inputYN();					 
    while(s1!='N'){
		n=inputNumber();
        p=(struct Node *)malloc(sizeof(struct Node));
        p->num=n;
        current->next=p;	//��ǰ��ָ�����һ��ָ�����ʱָ��
        p->font=current;
        current=p;  		//��ǰ��ָ��ָ�����ʱָ��
        s1=inputYN();

    }
    current->next=NULL;	//����ָ��ָ��� 
	tail=current;	
    return head;			//����ͷָ�� 
}
/*��������*/
void list(struct Node *p){
	cout<<"�������\n";
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
/*����ֵ */
void insertList(struct Node *p,int insert)
{
	/*target��Ҫ����λ�õ�ǰһ�ڵ㣬node��ʾҪ����Ľڵ�λ��*/ 
	struct Node *target,*node,*temp;
	int j,item;
	target=p;
	/*����ڵ�ֵ��������item*/ 
	cout<<"����Ҫ����Ľڵ����ֵ\n" ;	
	item=inputNumber();
	node=(struct Node *)malloc(sizeof(struct Node));
    node->num=item;
    /*�ҳ�targetλ��*/ 
	for(j=1;j<insert-1;j++)
	{
		target=target->next;
	}
	/*���룬temp�ǲ���λ�õĺ�һ�ڵ�*/ 
	temp=target->next;
	node->next=temp;
	target->next=node;
	list(p);
}
/*ɾ���ڵ�*/ 
void deletList(struct Node *p,int delet)
{
	/*target��Ҫɾ��λ�õ�ǰһ�ڵ�,temp��ɾ��λ��*/ 
	struct Node *target,*temp;
	int j; 
	target=p;
    /*�ҳ�targetλ��*/ 
	for(j=1;j<delet-1;j++)
	{
		target=target->next;
	}
	/*ɾ��*/ 
	temp=target->next;
	target->next= temp->next;
	free(temp);
	list(p);
}
/*���ҽڵ�*/
void searchList(struct Node *p,int search)
{
	/*target��Ҫɾ��λ�õ�ǰһ�ڵ�,temp��ɾ��λ��*/ 
	struct Node *target,*temp;
	int j; 
	target=p;
    /*�ҳ�targetλ��*/ 
	for(j=1;target->num!=search && target->next!=NULL;j++)
	{
		target=target->next;
	}
	/*����ڵ�λ��*/ 
	if(target->num!=search && target->next==NULL) 
		cout<<"û�иýڵ�ֵ" ;
	else
		cout<<"�ýڵ�λ��Ϊ:"<<j<<endl;
}
/*��������*/
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
	cout<<" *����������* \n";
    p=creat();
    list(p);
    Sleep(3000); 
    while(str2=='Y')
    {
		system("cls");
    	cout<<"<- *��ѡ�����* -> "<<endl; 
    	cout<<"<- 1:����ڵ� ->"<<endl;
    	cout<<"<- 2:ɾ���ڵ� ->"<<endl;
		cout<<"<- 3:���ҽڵ� ->"<<endl;
		cout<<"<- 4.�������� ->"<<endl;
		button=inputNumber();
    	switch(button)
   		{
    		case 1:
    			Sleep(3000); 
				system("cls");
    			cout<<"����Ҫ����Ľڵ�λ�ã���1��ʼ����\n";
   				i=inputNumber();
    			insertList(p,i);
    			str2=inputYN();
    			break;
    		case 2:
    			Sleep(3000); 
				system("cls");
    			cout<<"����Ҫɾ���Ľڵ�λ�ã���1��ʼ����\n";
    			i=inputNumber();
    			deletList(p,i);
    			str2=inputYN();
    			break;
    		case 3:
    			Sleep(3000); 
				system("cls");
    			cout<<"����Ҫ���ҵĽڵ�ֵ\n";
    			i=inputNumber();
    			searchList(p,i);
    			str2=inputYN();
    			break;
    		case 4:
    			Sleep(3000); 
				system("cls");
    			destroyList(p); 
    			cout<<"���ٳɹ�\n";
    			str2='N';
		}
 	}
	return 0;
}
