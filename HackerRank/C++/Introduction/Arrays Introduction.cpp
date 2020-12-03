
void swap(int* array, int leftIndex, int rightIndex)
{
  int temp;
  temp = array[leftIndex];
  array[leftIndex] = array[rightIndex];
  array[rightIndex] = temp;
}
void reverse(int* array, int leftIndex, int rightIndex)
{
  if (NULL == array)
  {
    printf("Invalid Input");
    return;
  }
  if (leftIndex < rightIndex)
  {
    swap(array, leftIndex, rightIndex);
    reverse(array, leftIndex + 1, rightIndex - 1);
  }
}
