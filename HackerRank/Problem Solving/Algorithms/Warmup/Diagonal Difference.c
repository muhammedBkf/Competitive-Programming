int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
int diag1=0,diag2=0;
int j=0;
for(size_t i=0; i<arr_rows;i++)
{
diag1+=arr[j][i];
j++;
diag2+=arr[arr_columns-j][i];
}
return abs(diag1-diag2);
}
