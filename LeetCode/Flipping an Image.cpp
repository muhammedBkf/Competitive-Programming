class Solution
{
public:
  vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A)
  {
    for (unsigned int j = 0; j < A.size(); j++)
    {
      std::reverse(A[j].begin(), A[j].end());
      for (int i = 0; i < A[j].size(); i++)
        A[j][i] = (A[j][i] + 1) % 2;
    }
    return A;
  }
};
