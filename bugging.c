#include<stdio.h>
#include<stdlib.h>

static char buff[256];
static char* string;

int main(){

	printf("Please input a string:");
	fgets(string,100,stdin);
	printf("\nYour string is:%s\n",string);
}
