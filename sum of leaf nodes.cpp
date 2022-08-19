int sumLeaf(Node* root)
{
    if(root==NULL)return 0;
    if(!root->left && !root->right)
    return root->data;
    
    return sumLeaf(root->left)+sumLeaf(root->right);
}
