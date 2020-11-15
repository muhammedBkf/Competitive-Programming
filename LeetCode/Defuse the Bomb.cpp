class Solution
{
public:
  vector<int> decrypt(vector<int>& code, int k)
  {
    vector<int> dec;
    if (k > 0)
    {
      for (int i = 0; i < code.size(); i++)
      {
        int sum = 0;
        for (int j = 1; j <= k; ++j)
        {
          sum += code[(i + j) % (code.size())];
        }
        dec.push_back(sum);
      }
      return dec;
    }
    if (k == 0)
    {
      for (int i = 0; i < code.size(); i++)
      {
        code[i] = 0;
      }
      vector<int> dec(code.size());
      return dec;
    }
    else
    {
      for (int i = 0; i < code.size(); i++)
      {
        int sum = 0;
        for (int j = 1; j <= abs(k); ++j)
        {
          int m = i - j;
          if (m < 0)
            m += code.size();
          sum += code[m];
        }
        dec.push_back(sum);
      }
      return dec;
    }
  }
};
