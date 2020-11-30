int lonelyinteger(vector<int> a)
{
  map<int, int> mp;
  for (int x : a)
    mp[x]++;
  for (auto x : mp)
    if (1 == x.second)
      return x.first;
  return 0;
}