int pickingNumbers(vector<int> a)
{
  sort(a.begin(), a.end());
  int count = 1, max = 0;
  for (int i = 0; i < a.size(); i++)
  {
    count = 1;
    for (int j = i + 1; j < a.size(); j++)
    {
      if (abs(a[i] - a[j]) < 2)
      {
        count++;
      }
      else
      {
        j = a.size();
      }
    }
    if (max < count)
      max = count;
  }
  return max;
}