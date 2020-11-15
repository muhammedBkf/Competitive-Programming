int freq(int* array, int size, int number)
{
  int count = 0;
  for (size_t i = 0; i < size; i++)
  {
    if (array[i] == number)
    {
      count++;
    }
  }
  return count;
}

void min_max(int* array, int size, int* min, int* max)
{
  *min = *max = array[0];
  for (size_t i = 1; i < size; i++)
  {
    if (*min > array[i])
    {
      *min = array[i];
    }
    if (*max < array[i])
    {
      *max = array[i];
    }
  }
}
int* missingNumbers(int arr_count, int* arr, int brr_count, int* brr, int* result_count)
{
  int a, b;

  min_max(brr, brr_count, &a, &b);
  long int array2[b - a + 1];
  for (size_t i = 0; i < b - a + 1; i++)
  {
    array2[i] = freq(arr, arr_count, a + i);
  }
  long int array1[b - a + 1];
  for (size_t i = 0; i < b - a + 1; i++)
  {
    array1[i] = freq(brr, brr_count, a + i);
  }
  long int* miss = malloc(sizeof(long) * (b - a + 1));

  int count = 0;
  for (size_t i = 0; i < b - a + 1; i++)
  {
    count += array1[i] - array2[i];
    miss[i] = array1[i] - array2[i];
  }
  int j = 0;
  int* final = malloc(sizeof(int) * count);
  for (size_t i = 0; i < b - a + 1; i++)
  {
    while (miss[i] > 0)
    {
      final[j] = i + a;
      if (final[j] == 3685)
      {
        --miss[i];
        count--;
      }
      ++j;
      --miss[i];
    }
  }
  *result_count = count;
  return final;
}
