//check palindrome
		bool is_palindrome()
		{
			if(head==NULL ){
				return 0;
			}
			if( head->next==NULL){
				return 1;
			}
			stack<int> s;
			node* temp=head;
			while(temp!=NULL)
			{
				s.push(temp->data);
				temp=temp->next;
			}
			node* temp2=head;
			while(temp2!=NULL)
			{
				if(temp2->data!= s.top()){
					return 0;
				}
				s.pop();
				temp2=temp2->next;
			}
			return 1;
		}

