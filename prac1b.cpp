/*1. Write a program (using fork() and/or exec() commands) where parent and child execute:
 b) same program, different code.*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
int a;
a=fork();
if(a<0)
{
printf("Sorry!! Child Process can not be Created");
exit(-1);
}
else if(a==0)
{
execl("/bin/ls","ls\n",NULL);
}
else 
{
printf("\n In Parent Process\n");
}
return 0;
}