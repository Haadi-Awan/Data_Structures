	void insert_after(int d,int key)
		{
			node* newnode=new node(d);
			node* curr=head->next;
			node* p=head;
//			if (head->data==key)
//			{
//				insert_at_head(d);
//			}
			if(tail->data==key)
			{
				insert_at_tail(d);
			}
			else
			{
				while(p!=NULL)
				{
					if (p->data==key)
					{
						break;
					}
					curr=curr->next;
					p=p->next;
				}
				if (p==NULL)
				{
					cout<<"Node not present\n";
					return;
				}
				else{
					newnode->prev=p;
					newnode->next=curr;
					p->next=newnode;
					curr->prev=newnode;
				}
			}
		}
		
