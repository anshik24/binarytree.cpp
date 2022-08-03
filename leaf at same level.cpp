class Solution{
  public:
  int height(Node* root){
      if(root==NULL)return 0;
      return 1+max(height(root->left),height(root->right));
  }
    /*You are required to complete this method*/
    bool check(Node *root)
    {
        if(root==NULL)return true;
        if(root->left!=NULL && root->right!=NULL){
            
        int lh=height(root->left);
        int rh=height(root->right);
        if(lh!=rh)
        return false;
        }
        
        return check(root->left)&& check(root->right);
    }
};
