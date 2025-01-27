
#include <stdio.h>

int main() {
    int isPrime;
    printf("Enter the prime Number :- ");
    scanf("%d",&isPrime);
    int factors = 0;
    for(int i = 1 ; i <= isPrime ; i++){
        if(isPrime%i==0){
            factors++;
        }
    }
    if(factors==2){
            printf("%d it is a prime number",isPrime);
        }else{
            printf("%d is not a prime number",isPrime);
        }
    return 0;
}