string kangaroo(int x1, int v1, int x2, int v2)
{
  if (((x1 < x2) & (v1 < v2)) || (v1 == v2))
  {
    return "NO";
  }
  else
  {
    float x = ((float)(x2 - x1) / (float)(v1 - v2));
    cout << x;
    if (x == (unsigned int)x)
    {
      return "YES";
    }
    else
    {
      return "NO";
    }
  }
}
