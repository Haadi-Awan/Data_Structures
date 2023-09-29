void reverse_Dlist()
		{
			node* temp=tail;
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
					temp=temp->prev;
				}
				cout<<"NULL\n";
			}
		}
