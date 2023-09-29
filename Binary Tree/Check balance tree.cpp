bool check_balance(node* root)
		{
			if(root==NULL){
				return 0;
			}
			int p1=check_balance(root->left);
			int p2=check_balance(root->right);
			int p3=height(root->left)-height(root->right);
			if(p3>=-1 && p3<=1){
				return true;
			}
			else
				return false;
		}
