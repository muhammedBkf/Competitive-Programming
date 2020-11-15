int jumpingOnClouds(std::vector<int> c)
{
  unsigned int count = 0;

  int i;
  for (i = 0; i < c.size() - 2; i++)
  {
    if (c[i + 1] == 1)
      i++;
    else if (c[i + 2] == 0)
      i++;
    count++;
  }
  if (i < c.size() - 1)
    count++;
  return count;
  return count;
}
