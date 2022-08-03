long int sumBT(Node* root)
{
    if(root==NULL){
    return 0;
    }
    return sumBT(root->left) + sumBT(root->right) + root->key;
}
