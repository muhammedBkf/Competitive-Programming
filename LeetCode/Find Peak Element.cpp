class Solution
{
public:
  int findPeakElement(vector<int>& nums)
  {
    if (nums.size() == 1 || nums[0] > nums[1])
      return 0;
    else if (nums[nums.size() - 1] > nums[nums.size() - 2])
      return nums.size() - 1;
    else
    {
      int left = 0, right = nums.size() - 1;
      int index;
      bool done = false;
      while (!done)
      {
        index = (left + right) / 2;
        if (nums[index] < nums[index - 1])
        {
          right = index;
        }
        else if (nums[index] < nums[index + 1])
        {
          left = index;
        }
        else
          done = true;
      }
      return index;
    }
  }
};