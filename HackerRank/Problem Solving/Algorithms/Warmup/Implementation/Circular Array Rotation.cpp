std::vector<int> circularArrayRotation(std::vector<int> a, int k, std::vector<int> queries)
{
  std::vector<int> arr(a.size());
  for (unsigned int i = 0; i < a.size(); i++)
  {
    arr[((i + k) % a.size())] = a[i];
  }
  std::vector<int> b(queries.size());
  for (unsigned int i = 0; i < queries.size(); i++)
  {
    b[i] = arr[queries[i]];
  }
  return b;
}
