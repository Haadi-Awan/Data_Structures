node* buildtree(node* root)
		{
			cout<<"Enter the data for node \n";
			int d;
			cin>>d;
			root=new node(d);
			if (d==-1){
				return NULL;
			}
			cout<<"Enter the data for left  on node "<<d<<endl;
			root->left=buildtree(root->left);
			cout<<"Enter the data for right on node "<<d<<endl;
			root->right=buildtree(root->right);
			return root;
		}
		
