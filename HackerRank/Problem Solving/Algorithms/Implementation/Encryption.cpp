
std::string encryption(std::string s)
{
  std::string se;
  int ceil = (int)std::ceil(std::sqrt(s.size()));
  int floor = (int)std::floor(std::sqrt(s.size()));
  for (int i = 0; i < ceil; i++)
  {
    for (int j = 0; j < s.size(); j += ceil)
    {
      if (i + j < s.size())
      {
        se.push_back(s[i + j]);
      }
    };
    se.push_back(' ');
  }
  se.pop_back();
  return se;
}
