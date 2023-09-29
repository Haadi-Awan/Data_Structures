	node* buildByTraversal(node* root)
		{
			queue<node*> q;
			int d;
			cout<<"Enter the data\n";
			cin>>d;
		
			if(d==-1){
				return NULL;
			}
			root=new node(d);
			q.push(root);
			while(!q.empty() )
			{
				node* temp=q.front();
				q.pop();
				cout<<"enter data for leftnode\n";
				int l;
				cin>>l;
				if(l!=-1){
					temp->left=new node(l);
					q.push(temp->left);
				}
				cout<<"enter data for right node\n";
				int r;
				cin>>r;
				if(r!=-1){
					temp->right=new node(r);
					q.push(temp->right);
				}
			}
			return root;
		}
