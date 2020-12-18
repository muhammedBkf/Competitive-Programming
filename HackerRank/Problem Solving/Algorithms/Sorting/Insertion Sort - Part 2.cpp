void insertionSort2(int n, vector<int> arr)
{
  for (int key = 1; key < arr.size(); key++)
  {
    int i = key - 1, j = key;

    while (arr[j] < arr[i])
    {
      swap(arr[j], arr[i]);
      i--;
      j--;
    };
    for (int j : arr)
      cout << j << " ";
    cout << endl;
  }