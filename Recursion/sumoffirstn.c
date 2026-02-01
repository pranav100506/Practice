#include<stdio.h>

int sum(int x){
    if(x==0){
        return 0;

    }
    return x + sum(x-1);
}
int main(){
    int n;
    scanf("%d",&n);
    int z = sum(n);
    printf("%d",z);
    return 0;
}