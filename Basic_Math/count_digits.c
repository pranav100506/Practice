#include<stdio.h>
int count =0;
 int count_digits(int n){
    if(n==0){
        count =1;
        return count;

    }
    else{
        while(n!=0){
            n/=10;
            count++;

        }
    }
    return count;
 }
 int main(){
    int n;
    scanf("%d",&n);
    int x = count_digits(n);
    printf("%d",x);
    return 0;
 }