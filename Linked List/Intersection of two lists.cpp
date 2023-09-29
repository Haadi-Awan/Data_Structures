//Check any intersection b/w two lists
			int intersection_of_2_LISTS(LList l1, LList l2)
			{
				if(l1.head==NULL || l2.head==NULL){
					return 0;
				}
				int a=l1.getlength();
				int b=l2.getlength();
				int z;
				if(a>b){
					z=a;
				}
				else{
					 z=b;
				}
				node* arr[z];
				node* temp=l1.head;
				int c=0;
				while(temp!=NULL)
				{
					arr[c]=temp;
					c++;
					temp=temp->next;
				}
				node* temp2=l2.head;
				while(temp2!=NULL)
				{
					for (int i=0;i<l1.getlength();i++)
					{
						if(temp2==arr[i]){
							cout<<"Intersection found at node "<<temp2->data;
							return 1;
						}	
					}
					temp2=temp2->next;
					
				}
				cout<<"Intersection not found\n";
			}
