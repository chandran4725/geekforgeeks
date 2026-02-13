/* BST Node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  
    void traverse(Node* node,vector<int>& ans)
    {
        if(!node) return;
        
        traverse(node->left,ans);
        
        ans.push_back(node->data);
        
        traverse(node->right,ans);
    }
  
  
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        vector<int> ans;
        
        traverse(root,ans);
        
        int suc = -1;
        int pre = -1;
        
        int i = 0,j = ans.size()-1;
        
        while(i < ans.size() && j >= 0)
        {
            if(ans[i] < key) pre = ans[i];
            if(ans[j] > key) suc = ans[j];
            
            i++;
            j--;
        }
        
        while(i < ans.size()) if(ans[i] < key) pre = ans[i++];
        while(j >= 0) if(ans[j] > key) suc = ans[j--];
        
        Node* prec = NULL;
        Node* succ = NULL;
        
        if(pre != -1) prec = new Node(pre);
        if(suc != -1) succ = new Node(suc);
        
        return {prec,succ};
    }
};