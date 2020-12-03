int max(int x, int y)
{
  if (x > y)
  {
    return x;
  }
  else
  {
    return y;
  }
};
int max_of_four(int a, int b, int c, int d)
{
  return max(max(a, b), max(c, d));
}