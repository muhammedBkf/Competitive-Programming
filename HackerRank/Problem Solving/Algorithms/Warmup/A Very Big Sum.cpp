long aVeryBigSum(vector<long> ar)
{
  long sum = 0;
  for (size_t i = 0; i < ar.size(); i++)
  {
    sum += ar[i];
  }
  return sum;
}
