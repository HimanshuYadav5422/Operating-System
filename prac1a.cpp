/*1. Write a program (using fork() and/or exec() commands) where parent and child execute:
 a) same program, same code.*/
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
else 
{
printf("My ID is:%d,My Parent ID is:%d\n",getpid(),getppid());
}
return 0;
}