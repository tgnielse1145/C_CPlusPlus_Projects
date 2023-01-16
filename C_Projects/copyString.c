#include <stdio.h>
void copy_string(char*, char*);

int main(){
    char source[100], target[100];
    printf("Enter source string \n");
    //fgets(source);
    source[0]='h';
    source[1]='e';
    source[2]='l';
    source[3]='l';
    source[4]='o';
    copy_string(target, source);
    printf("Target string is \%s\n", target);
    return 0;
}
void copy_string(char *target, char *source){
    while(*source){
        *target = *source;
        source++;
        target++;


    }
    *target='\0';
}