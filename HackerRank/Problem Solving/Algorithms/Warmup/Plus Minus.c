void plusMinus(int arr_count, int* arr) {
int pos=0,neg=0,nul=0;
for (size_t i=0; i<arr_count;i++) {
if (arr[i]>0) {pos++;}
else if(arr[i]<0){neg++;}
else {nul++;}
}

printf("%f\n%f\n%f\n",(float)pos/arr_count,(float)neg/arr_count,(float)nul/arr_count);
}
