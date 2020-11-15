int minimumDistances(vector<int> a)
{
  int max = 1000;
  for (unsigned int i = 0; i < a.size() - 1; i++)
  {
    for (unsigned int j = i + 1; j < a.size(); j++)
    {
      if ((a[i] == a[j]) && ((j - i) < max))
      {
        max = j - i;
      }
    }
  }
  if (max == 1000 || max == 0)
    return -1;
  else
    return max;
}
