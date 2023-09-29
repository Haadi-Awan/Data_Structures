	int height(node* root)
		{
			if(root==NULL){
				return 0;
			}
			int l=height(root->left);
			int r=height(root->right);
			int ans=max(l,r)+1;		
		}
