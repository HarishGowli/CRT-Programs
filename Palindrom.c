// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num,reverse=0,remainderr;
    printf("Enter a Number:- ");
    scanf("%d",&num);
    int originalNum = num;
    while(num!=0){
        remainderr = num%10;
        reverse = reverse*10+remainderr;
        num/=10;
    }
    if(originalNum==reverse){
        printf("Yes the given Number is Palindrome");
    }else{
        printf("No the given number is not a palindrome");
    }
    return 0;
}