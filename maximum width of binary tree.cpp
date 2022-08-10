class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {
           int ans=0;
        if(root==NULL)
        return ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                Node * curr=q.front();
                q.pop();
                if(curr->left!=NULL)
                q.push(curr->left);
                if(curr->right!=NULL)
                q.push(curr->right);
                ans=max(ans,n);
        
            }
            
        }
        return ans;
    }
};
