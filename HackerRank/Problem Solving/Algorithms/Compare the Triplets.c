int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {int *res =malloc(sizeof(int)*2);
res[0]=res[1]=0;
    for (size_t i=0; i<3; i++) {
if (a[i]>b[i]) {res[0]++;}
else if(a[i]<b[i] ){res[1]++;}

}
return res;
}
