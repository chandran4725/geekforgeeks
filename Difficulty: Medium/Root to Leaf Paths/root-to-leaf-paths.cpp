/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void traverse(Node* node,vector<int>& ds,vector<vector<int>>& ans)
    {
        ds.push_back(node->data);
        
        if(node->left == NULL && node->right == NULL)
        {
           
            ans.push_back(ds);
            ds.pop_back();
            return;
        }
        
        
        
        if(node->left) traverse(node->left,ds,ans);
        
        
        
        if(node->right) traverse(node->right,ds,ans);
        
        ds.pop_back();
    }
  
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<int> ds;
        vector<vector<int>> ans;
        
        traverse(root,ds,ans);
        
        return ans;
    }
};