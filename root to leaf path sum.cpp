class Solution
{
    public:
    bool hasPathSum(Node *root, int S) {
    
    if(root==NULL)
    return 0;
    
    if(S-root->data==0 && root->left==0 && root->right==0)
    return 1;
    int left=hasPathSum(root->left,S-root->data);
    if(left==1)
    return 1;
    int right=hasPathSum(root->right,S-root->data);
    if(right==1)
    return 1;
    return 0;
}
};
