// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int num,reverse=0,remainders;
  printf("Enter any Number:- ");
  scanf("%d",&num);
  while(num!=0){
  remainders = num%10;
  reverse = reverse*10+remainders;
  num/=10;
  }
  printf("Reversed Number is %d",reverse);
    return 0;
}