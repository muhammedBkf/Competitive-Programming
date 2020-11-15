void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
  unsigned int apple = 0;
  for (unsigned int i = 0; i < apples.size(); i++)
  {
    if (((apples[i] + a) >= s) && ((apples[i] + a) <= t))
    {
      apple++;
    };
  }
  cout << apple << endl;
  apple = 0;
  for (unsigned int i = 0; i < oranges.size(); i++)
  {
    if (((oranges[i] + b) <= t) && ((oranges[i] + b) >= s))
    {
      apple++;
    };
  }
  cout << apple;
}
