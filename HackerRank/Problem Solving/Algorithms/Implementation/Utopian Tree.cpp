int utopianTree(int n)
{
  int total = 1;
  for (int i = 0; i < n; i++)
  {
    if (i % 2)
      total++;

    else
      total *= 2;
  }
  return total;
}
