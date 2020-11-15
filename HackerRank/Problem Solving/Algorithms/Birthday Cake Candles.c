int max(int *array, int size)
{
    int temp = array[0];
    for (size_t i = 1; i < size; i++)
    {
        if (temp < array[i])
        {
            temp = array[i];
        }
       
    }
     return temp;
}
int freq(int *array, int size, int number)
{int count = 0;
    for (size_t i = 0; i < size; i++)
    {
        
        if (number == array[i])
        {
            count++;
        }
    }
    return count;
}
int birthdayCakeCandles(int candles_count, int *candles)
{
    return freq(candles,candles_count,max(candles,candles_count));
}
