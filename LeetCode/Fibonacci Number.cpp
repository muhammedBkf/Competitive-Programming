class Solution
{
public:
  int fib(int N)
  {
    int n1 = 0, n2 = 1, n = 0;
    if (N == 1)
    {
      n = 1;
    }
    else
    {
      for (int i = 0; i < N - 1; i++)
      {
        n = n1 + n2;
        n1 = n2;
        n2 = n;
      }
    }
    return n;
  }
};
