vector<int> countingSort(vector<int> arr)
{
  map<int, int> mp;
  for (int x : arr)
    mp[x]++;
  vector<int> ad(100);
  for (auto x : mp)
    ad[x.first] = x.second;
  int i = 0;
  vector<int> sor;
  for (int i = 0; i < 100; i++)
  {
    while (ad[i])
    {
      sor.push_back(i);
      ad[i]--;
    }
  }
  return sor;
}