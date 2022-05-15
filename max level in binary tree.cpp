class Solution{
  public:
    /*You are required to complete below method */
    int maxLevelSum(Node* root) {
        // Your code here
        if(root==NULL)
        return 0;
        
        int result=root->data;
        queue<Node*>q;
        q.push(root);
    
        

        while(!q.empty()){
            int count= q.size();
            int sum=0;
            while(count--){
            Node* node=q.front();
            q.pop();
        
                sum= sum+node->data;
                if(node->left!=NULL)
                    q.push(node->left );
                    if(node->right!=NULL)
                    q.push(node->right);
            }
                result=max(sum, result);
            
        
        }
        return result;
    
    }
};
