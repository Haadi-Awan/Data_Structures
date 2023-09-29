//remove duplicates of a current node
		void remove_Duplicates()
		{
			if(head==NULL || head->next==NULL){
				return;
			}
			node* curr=head;
			node* temp1=head;
			node* temp2=NULL;
			while(temp1->next!=NULL)
			{
					if(temp1->next->data==curr->data)
					{
						temp2=temp1->next;
						temp1->next=temp1->next->next;
						temp2=NULL;
						delete temp2;
					}
					else{
					
						temp1=temp1->next;
						curr=curr->next;
					}
					
				
			}
		}

