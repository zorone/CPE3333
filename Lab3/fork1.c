#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	pid_t pid;
	int i=5;
	printf("Hello EveryOne :), the value of i is %d : This statement before fork () \n", i);
	pid=fork();
	printf("The value of i is %d, This statement after fork(), Goodbye :) \n", i);
}
