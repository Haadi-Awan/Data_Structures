//Delete any node from list by telling data of node
		void remove_node(int key)
		{
			node* prev;
			prev=head;
			node* curr;
			curr=head->next;
			if (head==NULL)
			{
				return ;
			}
			else if(head->data==key){
				remove_head();
			}
			else{
				while((curr->data!=key) )
				{
					prev=prev->next;
					curr=curr->next;
					if (curr==tail && curr->data!=key)
					{
						break;
					}
				}
				if(curr==tail && curr->data!=key)
				{
					cout<<"Key not present\n";
				}
				else{
				
				prev->next=curr->next;
				curr=NULL;
				delete curr;}		
			}
		}
