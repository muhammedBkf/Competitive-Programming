void insertionSort1(int n, vector<int> arr)
{
  int temp = arr[arr.size() - 1];
  int i = arr.size() - 2;
  while (temp < arr[i])
  {
    arr[i + 1] = arr[i];

    for (int j : arr)
      cout << j << " ";
    cout << endl;

    i--;
  }
  arr[i + 1] = temp;
  for (auto& x : arr)
    cout << x << " ";
}
