// Even group indexing sum problem		
		void twin_sum()
		{
			int n=getlength();
			int arr[n];
			int i=0;
			node* temp=head;
			while(temp!=NULL)
			{
				arr[i]=temp->data;
				i++;
				temp=temp->next;
			}
			int sum=0;
			for(int i=0;i<n;i++)
			{
				if (i>n){
					break;
				}
				int s=arr[i]+arr[n-1];
				if(s>sum){
					sum=s;
				}
				n=n-1;
				
			}
			cout<<sum;
		}
