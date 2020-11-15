void staircase(int n) {
for (size_t j=0; j<n; j++) {

for (size_t i=0; i<n-1-j; i++) {
printf(" ");
}
for (size_t i=0; i<j+1; i++) {
printf("#");
}
printf("\n");
}

}
