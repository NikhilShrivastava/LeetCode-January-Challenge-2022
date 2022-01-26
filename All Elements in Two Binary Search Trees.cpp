class Solution {
public:
    vector<int> v;
    void func1(TreeNode* root)
    {
        if(root==NULL)
            return ;
        v.push_back(root->val);
        func1(root->left);
        func1(root->right);
    }
    void func2(TreeNode* root)
    {
        if(root==NULL)
            return ;
        v.push_back(root->val);
        func2(root->left);
        func2(root->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        func1(root1);
        func2(root2);
        sort(v.begin(),v.end());
        return v;
        
        
    }
};
