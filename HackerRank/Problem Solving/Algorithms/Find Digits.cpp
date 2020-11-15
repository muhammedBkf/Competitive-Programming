int findDigits(int n)
{
  int i = 1, num = n, count = 0;
  while (n)
  {
    while (n % 10 == 0)
      n /= 10;
    if ((num % (n % 10)) == 0)
      count++;
    n /= 10;
  }
  return count;
}
