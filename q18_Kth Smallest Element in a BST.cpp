/**
Leetcode:TC: O(N) SC: O(H)
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private:
    void Inorder(TreeNode* root,vector<int>&temp)
    {
        if(root == NULL)
        {
            return ;
        }
        Inorder(root->left,temp);
        temp.push_back(root->val);
        Inorder(root->right,temp);

    }
public:
    int kthSmallest(TreeNode* root, int k) {
        
        vector<int> temp;

        Inorder(root,temp);
        return temp[k-1];
    }
};


//geeksforgeeks 
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
    
    void Inorder(Node* root,int &k,int &res)
    {
        if(root == NULL)return ;
        
        Inorder(root->left,k,res);
        k= k-1;
        
        if(k==0)
        {
            res = root->data;
        }
        
        Inorder(root->right,k,res);
        
        
    }
  public:
    // Return the Kth smallest element in the given BST
    int KthSmallestElement(Node *root, int K) {
        // add code here.
        int temp =-1;
        Inorder(root,K,temp);
        return temp;
    }
};
