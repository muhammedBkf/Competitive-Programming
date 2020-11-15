class Solution
{
public:
  vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
  {
    vector<bool> kidsWithCandie;
    kidsWithCandie.reserve(candies.size());
    int max = *max_element(candies.begin(), candies.end());
    for (int x : candies)
    {
      if (x + extraCandies >= max)
        kidsWithCandie.push_back(true);
      else
        kidsWithCandie.push_back(false);
    }
    return kidsWithCandie;
  }
};
