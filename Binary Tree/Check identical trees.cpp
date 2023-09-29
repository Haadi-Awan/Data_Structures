bool identical(node* r1, node* r2)
		{
			if (r1==NULL && r2==NULL){
				return true;
			}
			if (r1!=NULL && r2==NULL){
				return false;
			}
			if (r1==NULL && r2!=NULL){
				return false;
			}

			bool b1= identical(r1->left,r2->left);
			bool b2= identical(r1->right,r2->right);
			bool value=(r1->data==r2->data); 
			if(b1 && b2 && value){
				return true;
			}
			else
				return false;
		}
