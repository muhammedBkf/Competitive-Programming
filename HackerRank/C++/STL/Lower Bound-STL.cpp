int main()
{
  int queries = 0;
  cin >> queries;
  vector<int> vect(queries);
  for (int i = 0; i < queries; i++)
  {
    cin >> vect[i];
  }
  cin >> queries;
  for (int i = 0; i < queries; i++)
  {
    int value;
    cin >> value;

    vector<int>::iterator m = lower_bound(vect.begin(), vect.end(), value);
    if (*m == value)
    {
      cout << "Yes"
           << " " << m - vect.begin() + 1 << endl;
    }
    else
    {
      cout << "No"
           << " " << m - vect.begin() + 1 << endl;
    }
  }
  return 0;
}