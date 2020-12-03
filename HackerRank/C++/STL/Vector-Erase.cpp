int main()
{
  int size;
  cin >> size;
  vector<int> vect(size);
  for (int i = 0; i < size; i++)
    cin >> vect[i];
  int earase;
  cin >> earase;
  vect.erase(vect.begin() + earase - 1);
  cin >> earase;
  cin >> size;
  vect.erase(vect.begin() + earase - 1, vect.begin() + size - 1);
  cout << vect.size() << endl;
  for (int x : vect)
    cout << x << " ";
  return 0;
}
