#include <stdio.h>
#include <unistd.h>

int main()
{
 
    printf("Parent Process ID: %d\n", getppid());
    printf("Child Process ID: %d\n", getpid());

    return 0;
}
