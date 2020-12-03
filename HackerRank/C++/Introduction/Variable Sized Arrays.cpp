#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  unsigned int n, j, size;
  cin >> n >> j;
  vector<vector<int>> arr(n);
  int d;
  for (unsigned int i = 0; i < n; i++)
  {
    cin >> size;
    for (; size > 0; size--)
    {
      cin >> d;
      arr[i].push_back(d);
    }
  }
  for (; j > 0; j--)
  {
    cin >> n >> d;
    cout << arr[n][d] << endl;
  }
  return 0;
}
