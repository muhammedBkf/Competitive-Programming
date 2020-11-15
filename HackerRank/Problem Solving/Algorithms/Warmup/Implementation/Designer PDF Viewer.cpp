int designerPdfViewer(vector<int> h, string word)
{
  int m = h[(word[0] - 'a')];
  for (int i = 0; i < word.size(); i++)
  {
    if (h[word[i] - 'a'] > m)
    {
      m = h[(word[i] - 'a')];
    }
  }
  return m * word.size();
}
