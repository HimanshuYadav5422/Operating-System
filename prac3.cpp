/* 3. Write a program to report behaviour of Linux kernel including information on 19
configured memory, amount of free and used memory. (memory information)*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
int a;
printf("\n TheKernel Version is:\n");
system("cat /proc/sys/kernel/osrelease");
printf("\n The Information on Configured amount of Free and Used Memoryb is:\n");
system("cat /proc/meminfo | awk 'NR==1,NR==2 {print}'");
return 0;
}