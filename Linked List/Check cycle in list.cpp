		//Check that if a list contains any loop
			bool linkedList_cycle()
			{
				if(head==NULL){
					return 0;
				}
				node* slow=head;
				node* fast=head;
				while(slow!=NULL)
				{
					slow=slow->next;
					fast=fast->next->next;
					if(fast->data==slow->data){
						return 1;
					}
				}
				return 0;
			}
