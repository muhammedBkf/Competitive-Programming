
int countingValleys(int steps, string path)
{
  int coun = 0;
  int height = 0;
  int height9;
  for (unsigned int i = 0; i < steps; i++)
  {
    height9 = height;
    if (path[i] == 'D')
    {
      height--;
    }
    else if (path[i] == 'U')
    {
      height++;
    }
    if (height9 < 0 && height == 0)
    {
      coun++;
    }
  }
  return coun;
}
