#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node* prev;
	public:
		node()
		{
			data=0;
			next=prev=NULL;
		}
		node(int d)
		{
			data=d;
			next=prev=NULL;
		}
		~node()
		{
			
			if (next!=NULL)
			{
				delete next;
				next = NULL;
			}
		}
};
class Dlist{
	private:
		node* head;
		node* tail;
	public:
		Dlist()
		{
			head=tail=NULL;
		}
		
		void insert_at_head(int d)
		{
			node* newnode=new node(d);
			if(head==NULL)
			{
				head=newnode;
				tail=newnode;
//				head->next=NULL;
//				head->prev=NULL;
				
			}
			else{
				newnode->next=head;
				head->prev=newnode;
				head=newnode;
			}
		}
		
		
		void insert_at_tail(int d)
		{
			node* temp=new node(d);
			if (head==NULL)
			{
				head=temp;
				tail=temp;
//				head->next=NULL;
//				head->prev=NULL;
//				tail->next=NULL;
			}
			else{
				tail->next=temp;
				temp->prev=tail;
				tail=temp;
			}
		}
		
		node *get_head()
		{
			return head;
		}
		
		node* get_tail()
		{
			return tail;
		}
		
		int get_length()
		{
			int count;
			if (head==NULL)
			{
				return 0;
			}
			node* temp=head;
			while(temp!=NULL)
			{
				count++;
				temp=temp->next;
			}
			return count;
		}
		
		
		void print_Dlist()
		{
			node* temp=head;
			if(head==NULL)
			{
				cout<<"No list present\n";
				return;
			}
			else{
				cout<<"NULL<-";
				while(temp!=NULL)
				{
					cout<<temp->data<<"->";
					temp=temp->next;
				}
				cout<<"NULL\n";
			}
		}
