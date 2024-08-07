#include<bits/stdc++.h>
using namespace std;

//  Definition for a binary tree node.
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
  
class Solution {

    void solve(TreeNode* &root)
    {
        if(root==NULL)
        return ;
        TreeNode* l=root->left;
        root->left=root->right;
        root->right=l;
        solve(root->left);
        solve(root->right);
    }
public:
    TreeNode* invertTree(TreeNode* root) {

        solve(root);
        return root;
        
    }
};