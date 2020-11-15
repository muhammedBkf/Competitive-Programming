int viralAdvertising(int n)
{
  int share = 5;
  int total = 0;
  int like = 0;
  for (unsigned int i = 0; i < n; i++)
  {
    like = share / 2;
    share = like * 3;
    total += like;
  }
  return total;
}
