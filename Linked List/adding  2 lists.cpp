// adding  2 lists nodes data
		 LList addTwoNumbers(LList l1, LList l2)
		 {
		 	LList l3;
		 	node* c1=l1.head;
		 	node* c2=l2.head;
		 	if(l1.head==NULL){
		 		return l2;
			 }
			 else if(l2.head==NULL){
			 	return l1;
			 }
			 else
			 {
			 	int sum=0,rem=0,carry=0;
			 	
			 	while(c1!=NULL && c2!=NULL)
			 	{
			 		 sum=c1->data+c2->data+carry;
			 		 if(sum>10)
					  {
					  rem=sum%10; 
					  l3.insert_at_head(rem);
					  carry=sum/10;
					  }
					  else
					  {
					  	l3.insert_at_head(sum)	;
					  }
					  c1=c1->next;
					  c2=c2->next;
					
				}
				while(c1!=NULL)
				{
					sum=c1->data+carry;
				if(sum>10)
					  {
					  rem=sum%10; 
					  l3.insert_at_head(rem);
					  carry=sum/10;
					  }
			    else
					  {
					  	l3.insert_at_head(sum)	;
					  }
					  c1=c1->next;
				}
				
				while(c2!=NULL)
				{
				sum=c2->data+carry;
				if(sum>10)
					  {
					  rem=sum%10; 
					  l3.insert_at_head(rem);
					  carry=sum/10;
					  }
			    else
					  {
					  	l3.insert_at_head(sum)	;
					  }
					  c2=c2->next;
			 	}
			 	return l3;
			 	
		 }
		}
		
