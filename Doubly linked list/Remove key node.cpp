void remove_node(int key)
		{
			node* temp=head;
			node* curr=head->next;
			node* p=head;
			if (head->data==key)
			{
				head=head->next;
				temp=NULL;
				delete temp;
			}
			
			else
			{
				while(curr!=NULL)
				{
					if (curr->data==key)
					{
						break;
					}
					curr=curr->next;
					p=p->next;
				}
				if (curr==NULL)
				{
					cout<<"Node not present\n";
					return;
				}
				else{
					p->next=curr->next;
					curr->next->prev=p;
					curr=NULL;
					delete curr;
				}
			}	
		}
