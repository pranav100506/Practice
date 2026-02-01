#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool armstrong(int n){
    int x=n;
    int sum =0;
    int count =0;
     while(x!=0){
            x/=10;
            count++;

        }
    x=n;
    while(x!=0){
        int digit = x%10;
        sum+=pow(digit,count);
        x/=10;
    }
    if(sum ==n){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int q = armstrong(n);
    printf("%d",q);
    return 0;
}