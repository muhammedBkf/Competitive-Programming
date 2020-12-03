#define sos "SOS"
int marsExploration(string s)
{
  int count = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if (sos[(i % 3)] != s[i])
      count++;
  }
  return count;
}
