class Solution
{
public:
  int digitsNum(int number)
  {
    int dig = 0;
    while (number)
    {
      dig++;
      number /= 10;
    }
    return dig;
  }
  int findNumbers(std::vector<int>& nums)

  {
    int count = 0;
    for (int x : nums)
      if (this->digitsNum(x) % 2 == 0)
        count++;
    return count;
  }
};
