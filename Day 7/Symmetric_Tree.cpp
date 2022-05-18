#include<bits/stdc++.h>
using namespace std ;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool helper(TreeNode *leftsub , TreeNode *rightsub )
    {
        if( !leftsub || !rightsub )
            return leftsub==rightsub  ;
        if( leftsub->val==rightsub->val )
            return helper(leftsub->left,rightsub->right) && helper(leftsub->right , rightsub->left) ;
        return false ;
        
    }
    bool isSymmetric(TreeNode* root) {
        return helper( root->left , root->right ) ;
    }
};