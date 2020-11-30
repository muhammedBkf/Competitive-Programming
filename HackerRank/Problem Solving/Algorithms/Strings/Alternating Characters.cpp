int alternatingCharacters(std::string s)
{
  int deletion = 0;
  int freq = 0;
  for (int i = 0; i < s.size(); ++i)
  {
    if (s[i] == s[i + 1])
    {
      freq++;
    }
    else
    {
      deletion += freq;
      freq = 0;
    }
  }
  return deletion;
}
