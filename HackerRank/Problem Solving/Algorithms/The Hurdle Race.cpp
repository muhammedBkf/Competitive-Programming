int hurdleRace(int k, vector<int> height)
{
  int j = max(height) - k;
  if (j > 0)
  {
    return j;
  }
  return 0;
}
