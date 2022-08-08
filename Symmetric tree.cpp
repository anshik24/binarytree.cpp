class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
	    return root==NULL || isSymmetricHelp(root->left,root->right);
    }
    bool isSymmetricHelp(Node* left,Node*right){
        if(left==NULL || right==NULL)
        return left==right;
        if(left->data!=right->data)return false;
        return isSymmetricHelp(left->left,right->right)  
        &&
        isSymmetricHelp(left->right, right->left);
    
    }
};
