class Solution
{
public:
  int smallestDivisor(std::vector<int>& nums, int threshold)
  {
    int max = *std::max_element(nums.begin(), nums.end()), min = 0;

    while (true)
    {
      int i = (max + min) / 2;
      int sum = 0;
      for (int x : nums)
      {
        if (i != 0)
        {
          x = std::ceil((x / (float)i));
          sum += x;
        }
      }

      if (i == min)
      {
        return i + 1;
      }
      else if ((sum > threshold))
      {
        min = i;
      }
      else
      {
        max = i;
      }
    }
  }
};
