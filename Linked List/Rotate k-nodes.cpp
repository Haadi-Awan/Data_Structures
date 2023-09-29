//Rotate list nodes from last to head
			void rotate_list(int k)
			{
					if(head==NULL || head->next==NULL){
						return;
					}
					int c=0;
					while(c<k)
					{
						node* temp=head;
						while(temp->next!=tail){
							temp=temp->next;
						}
						tail=temp;
						temp=temp->next;
						temp->next=head;
						head=temp;
						tail->next=NULL;
						c++;
					}
					
			}
