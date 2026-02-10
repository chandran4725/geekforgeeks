/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    
    void traverse(Node* node,int x,Node* &ans)
    {
        if(node == NULL) return;
        
        if(node->data <= x)
        {
            ans = node;
            traverse(node->right,x,ans);
        }
        else traverse(node->left,x,ans);
    }
    
    int floor(Node* root, int x) {
        // code here
        Node* ans = NULL;
        
        traverse(root,x,ans);
        
        if(ans == NULL) return -1;
        
        return ans->data;
    }
};