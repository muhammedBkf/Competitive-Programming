long repeatedString(string s, long n)
{
  unsigned long count = 0;
  for (unsigned long i = 0; i < s.size(); i++)
  {
    if (s[i] == 'a')
      count++;
  }
  unsigned long left = 0;
  for (unsigned long i = 0; i < n % s.size(); i++)
  {
    if (s[i] == 'a')
      left++;
  }
  return ((n / s.size()) * count + left);
}
