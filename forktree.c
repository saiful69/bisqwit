#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>


void forktree(int n)
{
    if(n>0)
    {
        printf("Parent PID: %d ", getpid());
        int pid = fork();
        printf("-------> Child PID: %d \n", pid);
        forktree(n-1);
    }
}

int main()
{
   printf("Start PID: %d \n",getpid());
   printf("Enter a number: ");
   return 0;
}
