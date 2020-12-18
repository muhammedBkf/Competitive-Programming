void plusMinus(vector<int> arr)
{
  int pos = 0, neg = 0, nul = 0;
  for (size_t i = 0; i < arr.size(); i++)
  {
    if (arr[i] > 0)
    {
      pos++;
    }
    else if (arr[i] < 0)
    {
      neg++;
    }
    else
    {
      nul++;
    }
  }
  cout << (float)pos / arr.size() << endl << (float)neg / arr.size() << endl << (float)nul / arr.size();
}
