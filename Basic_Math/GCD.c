#include<stdio.h>
int gcd(int x, int y){
    if(y>x){
         return gcd(y,x);
    }
    if(y==0){
        return x;
    }
  return  gcd(y,x%y);
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int z =gcd(x,y);
    printf("%d",z);
    return 0;
}