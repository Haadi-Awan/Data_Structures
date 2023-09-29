	void reverse_levelOrderTraversal(node* root)
		{
			stack<node*> s;
			 s.push(root);
			 while(1)
			 {
			 	node* temp=root;
			 	if (temp->right){
			 		s.push(temp->right);
				 }
				if (temp->left){
				 	s.push(temp->left);
				 }
			 }
		}
