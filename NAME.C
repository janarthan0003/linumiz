#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<conio.h>
int main(void)
{
for(int i = 1;i <= 3; i++)
{
pid_t pid =fork();
if (pid == 0)
{
printf("it is a child process => PPID=%d\n", getppid(),
getpid());
exit(0);
}
else
{
printf("it is a parent process =>PID=%d\n,getpid());
printf("wait till the child process is finished...\n");
wait(NULL);
printf("The child process is now finished.\n");
}
}
return EXIT SUCCESS: