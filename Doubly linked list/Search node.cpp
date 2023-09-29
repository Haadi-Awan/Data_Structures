	void search_node(int key)
		{
			node* temp=head;
			if(head==NULL)
			{
				cout<<"Empty list\n";
			}
			else
			{
				while(temp!=NULL)
				{
					if (temp->data==key)
					{
						break;
					}
					temp=temp->next;
				}
			}
			if (temp==NULL)
			{
				cout<<"Node not present\n";
			}
			else
			{
				cout<<"NOde found\n";
			}
		}
		
