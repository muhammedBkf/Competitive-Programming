class Solution
{
public:
  int diagonalSum(vector<vector<int>>& mat)
  {
    int diag1 = 0, diag2 = 0;
    int j = 0;
    for (size_t i = 0; i < mat.size(); i++)
    {
      diag1 += mat[j][i];
      j++;
      diag2 += mat[mat[0].size() - j][i];
    }
    if (mat.size() % 2)
      diag2 -= mat[mat.size() / 2][mat.size() / 2];
    return diag1 + diag2;
  }
};
