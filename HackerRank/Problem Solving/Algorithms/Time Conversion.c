char time(char *s){

        if (s[8]=='P')
        {
            return 'P';
        }   
        else {
         return 'A';
        }
}
char* timeConversion(char* s){
int num=atoi(s);
    char *st=malloc(sizeof(char)*8);
if (time(s)=='P') {
    if(num!=12) {
num=(num+12)%24;}
}
else {
    if(num==12){
        s[0]='0';
s[1]='0';
    }
strncpy(st, s, 8);
return st;
}
s[0]=(num/10)+'0';
s[1]=(num%10)+'0';

strncpy(st, s, 8);
return st;
}
