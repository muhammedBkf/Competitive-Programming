vector<int> countingSort(vector<int> arr)
{
  map<int, int> mp;
  for (int x : arr)
    mp[x]++;
  vector<int> ad(100);

  for (auto x : mp)
    ad[x.first] = x.second;
  return ad;
}
