class Solution
{
public:
  void con(Node* root)
  {
    if (root && root->left)
    {
      root->left->next = root->right;

      Node *l = root->left, *r = root->right;

      while (r->left)
      {
        r = r->left;
        l = l->right;
        l->next = r;
      }

      this->connect(root->left);
      this->connect(root->right);
    }
  }
  Node* connect(Node* root)
  {
    this->con(root);
    return root;
  }
};
