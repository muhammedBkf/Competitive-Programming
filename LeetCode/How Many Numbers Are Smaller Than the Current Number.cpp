class Solution
{
public:
  vector<int> smallerNumbersThanCurrent(vector<int>& nums)
  {
    vector<int> small(nums.size());
    vector<int> sorte;
    sort.reserve(nums.size());
    for (int i = 0; i < nums.size(); i++)
      sorte.emplace(nums[i]);

    std::sort(sorte.begin(), sorte.end());
    for (int i = 0; i < nums.size(); i++)
    {
      small[i] = binary_search(sorte.begin(), sorte.end(), nums(i));
      return small;
    }
  };
