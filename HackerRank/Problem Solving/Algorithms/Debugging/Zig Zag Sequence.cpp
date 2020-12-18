void findZigZagSequence(vector<int> a, int n)
{
  sort(a.begin(), a.end());
  int mid = (n) / 2;  // i changed (n-1) to (n)
  swap(a[mid], a[n - 1]);

  int st = mid + 1;
  int ed = n - 2;  // i changed (n-1) to (n-2)
  while (st <= ed)
  {
    swap(a[st], a[ed]);
    st = st + 1;
    ed = ed - 1;  // i changed (ed+1) to (ed-1)
  }
  for (int i = 0; i < n; i++)
  {
    if (i > 0)
      cout << " ";
    cout << a[i];
  }
  cout << endl;
}