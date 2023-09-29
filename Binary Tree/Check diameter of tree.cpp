int diameter(node* root)
		{
			if (root==NULL){
				return 0;
			}
			int p1= diameter(root->left);
			int p2= diameter(root->right);
			int p3= height(root->left)+height(root->right)+1;
			
			int ans=max(p1,max(p2,p3));
			return ans;
		}
