class Solution
{
public:
  float distance(std::vector<int> p1, std::vector<int> p2)
  {
    return std::sqrt((std::pow((p1[0] - p2[0]), 2) + std::pow((p1[1] - p2[1]), 2)));
  }
  vector<int> pointA(vector<int> a, vector<int> b, vector<int> c, vector<int> d)
  {
    vector<int> mini(2);
    mini[0] = a[0];
    mini[1] = a[1];
    if (b[0] <= mini[0])
    {
      mini[0] = b[0];
      mini[1] = b[1];
    }
    if (c[0] <= mini[0])
    {
      mini[0] = c[0];
      mini[1] = c[1];
    }
    if (d[0] <= mini[0])
    {
      mini[0] = d[0];
      mini[1] = d[1];
    }
    if ((a[0] == mini[0]) && (a[1] < mini[1]))
    {
      mini[0] = a[0];
      mini[1] = a[1];
    }
    if ((b[0] == mini[0]) && (b[1] < mini[1]))
    {
      mini[0] = b[0];
      mini[1] = b[1];
    }
    if ((c[0] == mini[0]) && (c[1] < mini[1]))
    {
      mini[0] = c[0];
      mini[1] = c[1];
    }
    if ((d[0] == mini[0]) && (d[1] < mini[1]))
    {
      mini[0] = d[0];
      mini[1] = d[1];
    }

    return mini;
  }
  vector<int> pointC(vector<int> a, vector<int> b, vector<int> c, vector<int> d)
  {
    vector<int> mini(2);
    mini[0] = a[0];
    mini[1] = a[1];
    if (b[1] >= mini[1])
    {
      mini[0] = b[0];
      mini[1] = b[1];
    }
    if (c[1] >= mini[1])
    {
      mini[0] = c[0];
      mini[1] = c[1];
    }
    if (d[1] >= mini[1])
    {
      mini[0] = d[0];
      mini[1] = d[1];
    }
    if ((a[1] == mini[1]) && (a[0] < mini[0]))
    {
      mini[0] = a[0];
      mini[1] = a[1];
    }
    if ((b[1] == mini[1]) && (b[0] < mini[0]))
    {
      mini[0] = b[0];
      mini[1] = b[1];
    }
    if ((c[1] == mini[1]) && (c[0] < mini[0]))
    {
      mini[0] = c[0];
      mini[1] = c[1];
    }
    if ((d[1] == mini[1]) && (d[0] < mini[0]))
    {
      mini[0] = d[0];
      mini[1] = d[1];
    }

    return mini;
  }
  vector<int> pointB(vector<int> a, vector<int> b, vector<int> c, vector<int> d)
  {
    vector<int> mini(2);
    mini[0] = a[0];
    mini[1] = a[1];
    if (b[1] <= mini[1])
    {
      mini[0] = b[0];
      mini[1] = b[1];
    }
    if (c[1] <= mini[1])
    {
      mini[0] = c[0];
      mini[1] = c[1];
    }
    if (d[1] <= mini[1])
    {
      mini[0] = d[0];
      mini[1] = d[1];
    }

    if ((a[1] == mini[1]) && (a[0] > mini[0]))
    {
      mini[0] = a[0];
      mini[1] = a[1];
    }
    if ((b[1] == mini[1]) && (b[0] > mini[0]))
    {
      mini[0] = b[0];
      mini[1] = b[1];
    }
    if ((c[1] == mini[1]) && (c[0] > mini[0]))
    {
      mini[0] = c[0];
      mini[1] = c[1];
    }
    if ((d[1] == mini[1]) && (d[0] > mini[0]))
    {
      mini[0] = d[0];
      mini[1] = d[1];
    }

    return mini;
  }
  bool zawiya(vector<int> a, vector<int> b, vector<int> c)

  {
    vector<int> vec2(2);
    vector<int> vec1(2);
    vec1[0] = b[0] - a[0];
    vec1[1] = b[1] - a[1];

    vec2[0] = c[0] - a[0];
    vec2[1] = c[1] - a[1];
    if (vec1[0] * vec2[0] + vec1[1] * vec2[1] == 0)
      return true;
    else
      return false;
  }
  bool validSquare(std::vector<int>& p1, std::vector<int>& p2, std::vector<int>& p3, std::vector<int>& p4)
  {
    if (!((p1[0] == p2[0]) && (p1[0] == p3[0]) && (p1[0] == p4[0])) && !((p2[0] == p3[0]) && (p2[0] == p4[0])) &&
        !(p3[0] == p4[0] && p3[1] == p4[1]))
    {
      for (auto x : pointA(p1, p2, p3, p4))
        cout << x << endl;
      for (auto x : pointB(p1, p2, p3, p4))
        cout << x << endl;
      for (auto x : pointC(p1, p2, p3, p4))
        cout << x << endl;
      if ((this->distance(pointA(p1, p2, p3, p4), pointB(p1, p2, p3, p4)) ==
           (this->distance(pointA(p1, p2, p3, p4), pointC(p1, p2, p3, p4)))) &&
          (zawiya(pointA(p1, p2, p3, p4), pointB(p1, p2, p3, p4), pointC(p1, p2, p3, p4))))
        return true;
      else
        return false;
    }
    else
      return false;
  }
};
