int main()
{
  int size;
  cin >> size;
  vector<int> vect;
  vect.reserve(size);
  for (; size > 0; size--)
  {
    int value;
    cin >> value;
    vect.emplace_back(value);
  }
  sort(vect.begin(), vect.end());
  for (int& num : vect)
    cout << num << " ";
  return 0;
}
