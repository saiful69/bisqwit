#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>


int main(){

printf("main process PID: %d \n", getpid());
int pid = fork();
printf("Child process PID: %d \n", pid);

}
