#include<stdio.h>
int main(){
    int num,og,reversed=0,remainder;
    printf("Enter your num : ");
    scanf("%d",&num);
    og=num;
    do{
        remainder=num%10;
        reversed=reversed*10+remainder;
        num=num/10;
    }while(num!=0);
    printf("%d is a palindrome no:",reversed);
    if(og==reversed){
       printf("%d is a palindrome number",og);

    }
    else{
    printf("%d is not a palindrome number",og);

    }
    return 0;
}
