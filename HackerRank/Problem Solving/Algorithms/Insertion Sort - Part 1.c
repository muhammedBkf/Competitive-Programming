void insertionSort1(int n, int arr_count, int* arr) {

    int temp=arr[arr_count-1];
    int i=arr_count-2;
    while (temp<arr[i])
     {
    arr[i+1]=arr[i]; 

for (int j=0; j<arr_count; j++) {
printf("%d ",arr[j])
;}
printf("\n");

        i--;
    }
    arr[i+1]=temp;
    for (int j=0; j<arr_count; j++) {
printf("%d ",arr[j])
;}
}
