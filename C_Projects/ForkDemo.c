#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <assert.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

int main(void) {
    
    int pid = fork();
    if(pid>0){
        printf("parent: child=%d\n",pid);
        pid = wait(NULL);
        printf("child %d is done\n", pid);

    }else if(pid==0){
        printf("child exiting\n");
        exit(0);
    }
    else{
        printf("fork error\n");
    }
    return 0; 
}