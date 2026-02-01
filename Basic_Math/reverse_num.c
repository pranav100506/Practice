#include<stdio.h>
int rem, rev =0;
  int reverse_num(int n){
    if(n==0){
        return 0;
    }
    else{
      while(n!=0){
        rem = n%10;
        rev = (rev*10)+rem;
        n/=10;
      }
    }
    return rev;
 }
int main(){
  int n;
  scanf("%d",&n);
  int reverse = reverse_num(n);
  printf("%d",reverse);
  return 0;
}