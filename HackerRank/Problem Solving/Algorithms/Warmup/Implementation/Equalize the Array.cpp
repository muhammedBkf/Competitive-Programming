int max(std::vector<int> ar)
{
  unsigned int max = ar[0];
  for (unsigned int i = 1; i < ar.size(); i++)
  {
    if (ar[i] > max)
    {
      max = ar[i];
    }
  }
  return max;
}
int min(std::vector<int> ar)
{
  unsigned int min = ar[0];
  for (unsigned int i = 1; i < ar.size(); i++)
  {
    if (ar[i] < min)
    {
      min = ar[i];
    }
  }
  return min;
}
int freq(std::vector<int> ar, int num)
{
  unsigned int count = 0;
  for (unsigned int i = 0; i < ar.size(); i++)
  {
    if (ar[i] == num)
      count++;
  }
  return count;
}
int equalizeArray(std::vector<int> arr)
{
  int maxi = 0;
  int valeur;
  int maxArr = max(arr);
  for (unsigned int i = min(arr); i <= maxArr; i++)
  {
    int test = freq(arr, i);
    if (test > maxi)
    {
      maxi = test;
    }
  }
  if (!(maxi == 1))
  {
    return arr.size() - maxi;
  }
  else
  {
    return arr.size() - 1;
  }
}
