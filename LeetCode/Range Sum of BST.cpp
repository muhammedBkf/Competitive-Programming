class Solution
{
public:
  int sum(TreeNode* root, int low, int high, int& somme)
  {
    if (root)
    {
      if (root->val <= high && root->val >= low)
        somme += root->val;
      sum(root->right, low, high, somme);
      sum(root->left, low, high, somme);
    }
    return somme;
  }
  int rangeSumBST(TreeNode* root, int low, int high)
  {
    int somme = 0;
    sum(root, low, high, somme);
    return somme;
  }
};
