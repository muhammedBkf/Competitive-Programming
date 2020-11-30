string funnyString(string s)
{
  vector<int> dif, difR;
  for (int i = 0; i < s.size() - 1; i++)
  {
    dif.push_back(abs(s[i] - s[i + 1]));
  }

  for (int i = s.size() - 1; i > 0; i--)
  {
    difR.push_back(abs(s[i] - s[i - 1]));
  }
  if (dif == difR)
    return "Funny";
  else
    return "Not Funny";
}
