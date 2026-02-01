#include<stdio.h>
#include<stdbool.h>
int rem, rev =0;
  bool check_palindrome(int n){
    // if(n<0){
        
    // }
    int x =n;
   
      while(n!=0){
        rem = n%10;
        rev = (rev*10)+rem;
        n/=10;
      }
    
    if(rev==x){
        return true;
    }
    else{
        return false;
    }
}
 
int main(){
  int n;
  scanf("%d",&n);
  bool reverse = check_palindrome(n);
  printf("%d",reverse);
  return 0;
}
