int pageCount(int n, int p)
{
  if (p <= n / 2)
  {
    return p / 2;
  }

  else
  {
    return n / 2 - p / 2;
  }
}
