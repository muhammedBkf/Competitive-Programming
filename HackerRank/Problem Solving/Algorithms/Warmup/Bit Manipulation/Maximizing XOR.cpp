int maximizingXor(int l, int r)
{
  int max = 0;
  for (int i = l; i <= r; i++)
  {
    for (int j = i; j <= r; j++)
    {
      if ((i ^ j) > max)
        max = i ^ j;
    }
  }
  return max;
}
