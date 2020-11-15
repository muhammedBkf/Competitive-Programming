int freq(vector<int> ar, int x)
{
  int count = 0;
  for (int i = 0; i < ar.size(); i++)
  {
    if (ar[i] == x)
    {
      count++;
    }
  }
  return count;
}
int sockMerchant(int n, vector<int> ar)
{
  sort(ar.begin(), ar.end());

  int pair = 0;
  for (size_t i = 0; i < ar.size(); i++)
  {
    int current = ar[i];
    int count = 1;
    while (current == ar[i + 1])
    {
      count++;
      i++;
    }
    pair += count / 2;
  }
  return pair;
}
