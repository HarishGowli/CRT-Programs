// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char name[15];
    int sub1;
    int sub2;
    int sub3;
    printf("Enter the Name :- ");
    scanf("%s",name);
    printf("Enter the 3 subjects marks:- ");
    scanf("%d",&sub1);
    scanf("%d",&sub2);
    scanf("%d",&sub3);
    int percentage = (sub1+sub2+sub3)/3;
    printf("\n%s Progress Report",name);
    printf("\nName :- %s\n",name);
    printf("Subject 1 Marks :-  %d\n",sub1);
    printf("Subject 2 Marks :- %d\n",sub2);
    printf("Subject 3 Marks :-  %d\n",sub3);
    printf("\nTotal percentage of the %s is %d\n",name,percentage);
    if(percentage > 35){
        printf("%s Passed",name);
    }else{
        printf("%s Fail",name);
    }
    
    return 0;
}