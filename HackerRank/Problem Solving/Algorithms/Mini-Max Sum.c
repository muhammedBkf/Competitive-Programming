void miniMaxSum(int arr_count, int* arr) {
unsigned long long int min=arr[0];
unsigned long long int  max=arr[0];
for (size_t i=0;i<5 ; ++i) {
if (min>=arr[i]) {
min=arr[i];
}
if (max<=arr[i]) {
max=arr[i];
}
}
unsigned long long int  mini=0,maxi=0;
if (max!=min) {

for (size_t i=0; i<5; i++) {
if (arr[i]!=min) {
maxi+=arr[i];
}
if (arr[i]!=max) {
mini+=arr[i];
}

}
printf("%llu %llu",mini,maxi);
}
else {
printf("%llu %llu",min*4,max*4);
}
}
