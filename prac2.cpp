/* 2. Write a program to report behaviour of Linux kernel including kernel version, CPU type
and model. (CPU information) */
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
int a;
printf("\n The Kernel Version is:\n");
system("cat /proc/sys/kernel/osrelease");
printf("\n CPU TYPE & MODEL is:\n");
system("cat /proc/cpuinfo | awk 'NR==4,NR==5 {print}'");
return 0;
}