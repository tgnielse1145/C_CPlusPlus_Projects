#include <stdio.h>
void stringCopyPointer(char *, char *);
void stringCopyArray(char *s, char *t){
    int i;
    i = 0;
    while((s[i]=t[i])!='\0'){
        i++;
    }
}

int main(int argc, char *argv[]){
    char *s = "Hello world";
    char *t;// = "Goodbye world";
    printf("s = %s\n",s);
   // printf("t = %s\n",t);
    stringCopyPointer(s,t);
   // printf("now t = %s\n",t);
}
void stringCopyPointer(char *s, char *t){
    // while((*s=*t)!='\0'){
    //     s++;
    //     t++;
    // }
    //  while((*s++ = *t++)){
    //     ;
    // }
    while(*s){
        *t = *s;
        s++;
        t++;
    }
    *t = '\0';
   // printf("now t = %s\n",t);
}