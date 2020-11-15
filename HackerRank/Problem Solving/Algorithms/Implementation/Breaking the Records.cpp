vector<int> breakingRecords(vector<int> scores)
{
  int max = scores[0], min = scores[0], maxn = 0, minn = 0;
  for (unsigned int i = 1; i < scores.size(); i++)
  {
    if (scores[i] > max)
    {
      max = scores[i];
      maxn++;
    };
    if (scores[i] < min)
    {
      min = scores[i];
      minn++;
    };
  }
  vector<int> ar(2);
  ar[0] = maxn;
  ar[1] = minn;
  return ar;
}
