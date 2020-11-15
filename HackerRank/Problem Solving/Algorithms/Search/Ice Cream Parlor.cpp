vector<int> icecreamParlor(int m, vector<int> arr)
{
  vector<int> a;
  for (int i = 0; i < arr.size(); i++)
    for (int j = i + 1; j < arr.size(); j++)
      if (arr[i] + arr[j] == m)
      {
        a.push_back(i + 1);
        a.push_back(j + 1);
      }
  return a;
}
