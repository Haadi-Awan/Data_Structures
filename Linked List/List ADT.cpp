#include<iostream>
#include<stack>
using namespace std;

class node{
	public:
		int data;
		node* next;
		
		node()
		{
			int d=0;
			next=NULL;
		}
		node(int d):data(d),next(NULL){}
};
class LList{
		public:
		node* head;
		node* tail;
		
		LList()
		{
		head=NULL;
		tail=NULL;
		}
		
		void insert_at_head(int d)
		{
			node* temp=new node(d);
			if(head==NULL)
			{
				head=temp;
				tail=temp;
				tail->next=NULL;
			}
			else{
			temp->next=head;
			head=temp;
			}
		}
		void insert_at_tail(int d){
			node* temp=new node(d);
			if(head==NULL)
			{
				head=temp;
				tail=temp;
				tail->next=NULL;
			}
			else{
				tail->next=temp;
				temp->next=NULL;
				tail=temp;
			}
		}
		void remove_head()
		{
			if (head==NULL)
			{
				return;
			}
			node* temp= new node();
			temp= head->next;
			head=temp;
		}
		
		void remove_tail()
		{
			if (head==NULL)
			{
				return;
			}
			else{
				node* temp=new node();
				temp=head;
				while(temp->next!=tail)
				{
					temp=temp->next;
				}
				tail=temp;
				temp->next=NULL;
			}
		}
		
		int getlength()
		{
			if(head==NULL)
			{
				return 0;
			}
			int count=1;
			node* temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
				count++;
			}
			return count;
		}
