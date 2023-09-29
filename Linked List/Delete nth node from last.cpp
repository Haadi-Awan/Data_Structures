//Delete Nth element from last
		void removeNthFromEnd( int n)
		{	
			int count=1;
			int c=getlength()-n;
			
			if(head==NULL){
				return ;
			}
			if(c==0){
				remove_head();
			}
			else{
				node* prev=head;
				node* curr=head->next;
				while(count!=c){
					curr=curr->next;
					prev=prev->next;
					count++;
				}
				prev->next=curr->next;
				curr=NULL;
				delete curr;
				
			}
			
        }
					
		
