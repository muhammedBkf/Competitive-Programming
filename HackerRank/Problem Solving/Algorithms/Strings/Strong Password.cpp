int minimumNumber(int n, string password)
{
  if (n == 0)
    return 6;
  int a[5];
  for (int& im : a)
    im = 0;
  a[0] = n;
  for (char& c : password)
  {
    if (isdigit(c))
    {
      a[1] = 1;
      break;
    }
  }
  for (char& c : password)
  {
    if (islower(c))
    {
      a[2] = 1;
      break;
    }
  }
  for (char& c : password)
  {
    if (isupper(c))
    {
      a[3] = 1;
      break;
    }
  }
  for (char& c : password)
  {
    if (!isalnum(c))
    {
      a[4] = 1;
      break;
    }
  }
  int count = 0;
  for (int& im : a)
    if (!im)
    {
      count++;
    };

  return ((6 - n > count) ? (6 - n) : count);
}