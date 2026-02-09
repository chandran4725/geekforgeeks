/*

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

*/

class Solution {
  public:
  
    bool isLeaf(Node* node)
    {
        if(node->left == NULL && node->right == NULL) return true;
        return false;
    }
    
    
    bool traverse(Node* node)
    {
        if(node == NULL) return true;
        if(isLeaf(node)) return true;
        
        int sum = node->data;
        
        int left=0,right=0;
        
        if(node->left) left = node->left->data;
        if(node->right) right = node->right->data;
        
        if(sum != left+right) return false;
        
        return traverse(node->left) && traverse(node->right);
        
        
    }
  
    bool isSumProperty(Node *root) {
        // code here
        if(!root) return false;
        return traverse(root);
    }
};