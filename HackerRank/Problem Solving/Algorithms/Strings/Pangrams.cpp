string pangrams(string s)
{
  map<char, int> map;
  for (char i = 'a'; i <= 'z'; i++)
    map[i] = 0;
  for (char c : s)
    map[tolower(c)]++;
  for (auto& mp : map)
    if (mp.second == 0)
      return "not pangram";
  return "pangram";
}