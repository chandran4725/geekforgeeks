class Solution {
  public:
  
    void traverse(Node* node,int x,Node* &ans)
    {
        if(node == NULL) return;
        
        if(node->data >= x) 
        {
            ans = node;
            
            traverse(node->left,x,ans);
            
        }
        else traverse(node->right,x,ans);
    }
  
    int findCeil(Node* root, int x) {
        // code here
        Node* ans = NULL;
        
        traverse(root,x,ans);
        
        if(ans == NULL) return -1;
        
        return ans->data;
    }
};
