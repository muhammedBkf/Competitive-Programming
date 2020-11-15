std::string caesarCipher(std::string& s, int k)
{
  for (unsigned int i = 0; i < s.length(); i++)
  {
    if (std::isalpha(s[i]))
    {
      if (s[i] >= 'a')
        s[i] = ((s[i] % 'a') + k) % 26 + 'a';
      else
        s[i] = ((s[i] % 'A') + k) % 26 + 'A';
    }
  }
  return s;
}
