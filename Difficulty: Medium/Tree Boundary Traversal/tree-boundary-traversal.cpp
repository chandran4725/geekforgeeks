/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  
    bool isLeaf(Node* node)
    {
        return !node->left && !node->right;
    }
    
    void leftTraverse(Node* node,vector<int>& res)
    {
        node = node->left;
        while(node)
        {
            if(!isLeaf(node)) res.push_back(node->data);
            if(node->left) node = node->left;
            else node = node->right;
        }
    }
    
    void rightTraverse(Node* node,vector<int>& res)
    {
        node = node->right;
        vector<int> temp;
        while(node)
        {
            if(!isLeaf(node)) temp.push_back(node->data);
            if(node->right) node = node->right;
            else node = node->left;
        }
        
        for(int i = temp.size()-1;i>=0;i--)
        {
            res.push_back(temp[i]);
        }
    }
    
    void leafTraverse(Node* node,vector<int> &res)
    {
        if(isLeaf(node))
        {
            res.push_back(node->data);
            return;
        }
        
        if(node->left) leafTraverse(node->left,res);
        if(node->right) leafTraverse(node->right,res);
    }
  
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> res;
        if(!root) return res;
        
        if(!isLeaf(root)) res.push_back(root->data);
        leftTraverse(root,res);
        leafTraverse(root,res);
        rightTraverse(root,res);
        
        return res;
        
    }
};