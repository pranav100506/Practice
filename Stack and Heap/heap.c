#include<stdio.h>
#include<stdlib.h>

int main(){

int *p = malloc(sizeof(int));
*p =42;
printf("Heap address : %p\n",p);
free(p);
}

