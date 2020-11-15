int divisibleSumPairs(int n, int k, vector<int> ar)
{
  int count = 0;
  for (unsigned int i = 0; i < ar.size() - 1; i++)
  {
    for (unsigned int j = i + 1; j < ar.size(); j++)
    {
      if ((ar[i] + ar[j]) % k == 0)
      {
        count++;
      }
    }
  }
  return count;
}
