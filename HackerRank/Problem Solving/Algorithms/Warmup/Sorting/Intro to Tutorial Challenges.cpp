int introTutorial(int V, vector<int> arr)
{
  for (size_t i = 0; i < arr.size(); i++)
  {
    if (arr[i] == V)
    {
      return i;
    }
  }
  return 0;
}
