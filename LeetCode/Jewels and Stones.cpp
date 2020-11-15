class Solution
{
public:
  int numJewelsInStones(string J, string S)
  {
    int count = 0;
    for (char x : S)
      for (char xx : J)
        if (xx == x)
          count++;
    return count;
  }
};
