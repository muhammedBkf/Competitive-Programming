void staircase(int n)
{
  for (int j = 0; j < n; j++)
  {
    for (int i = 0; i < n - 1 - j; i++)
    {
      cout << " ";
    }
    for (size_t i = 0; i < j + 1; i++)
    {
      cout << "#";
    }
    cout << endl;
  }
}
