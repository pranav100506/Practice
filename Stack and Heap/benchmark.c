#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 10000000
int main(){
clock_t start,end;
start = clock();
for(int i=0;i<N;i++){
int x=i;
}
end = clock();
printf("Stack :%lf\n",(double)(end-start)/CLOCKS_PER_SEC);

start =clock();
for(int i=0;i<N;i++){
int *p = malloc(sizeof(int));
free(p);
}
end = clock();
printf("Heap : %lf\n",(double)(end-start)/CLOCKS_PER_SEC);
}

