#include <stdio.h>
int strlength(char *s){
    int n;
    for(n=0; *s!='\0';s++){
        n++;
    }
    return n;
}
int main(int argc, char *argv[]){
    int len=strlength("Hello");
    printf("The string Hello is %d characters long\n",len );
    return 0;
}