int birthday(vector<int> s, int d, int m)
{
  unsigned int count = 0;
  for (unsigned int j = 0; j < s.size(); j++)
  {
    unsigned int sum = 0;
    for (unsigned int i = 0; i < m; i++)
    {
      sum += s[j + i];
    }
    if (sum == d)
    {
      count++;
    }
  }
  return count;
}
