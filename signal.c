#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
static void sig_int_handler(){
printf("Hey!Jerry Please save me. I am going to die darling ");
fflush(stdout);
exit(0);
}
int main()
{
signal(SIGINT,sig_int_handler);
while(1)
{}
}
