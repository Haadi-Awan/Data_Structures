//complete reverse list
		void reverse_list()
		{			
			if(head==NULL || head->next==NULL){
				return;
			}
			node* prev=NULL;
			node* curr=head;
			node* temp=head->next;
			while(curr!=NULL)
			{
			
			curr->next=prev;
			prev=curr;
			curr=temp;
			if(curr==NULL){
				break;
			}
			else{
				temp=curr->next;	
			}
			
			}
			head=prev;
		}
