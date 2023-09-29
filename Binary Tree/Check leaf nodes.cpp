node*  checkLeafNodes(node* root, int &c)
		{
			if(root==NULL){
				return  NULL;
			}
			if(root->left==NULL && root->right==NULL)
			{
				c++;
			}
			checkLeafNodes(root->left,c);
			checkLeafNodes(root->right,c);

		}
		
		int leafNodes(node* root)
		{
			int c=0;
			checkLeafNodes( root, c);
			
			return c;
		}
