#include<stdio.h>
int main(){
    int num,rev=0,digit,n1,n2;
    printf("Enter the number: ");
    scanf("%d",&num);
    n2=num;
    for(int i=0;num>0;i++){
        digit=num%10;


        rev=rev*10+digit;
        num=num/10;
    }
    n1=rev;
    printf("The value of n1: %d\n",n1);
    num=n2;
    printf("The value of n2 : %d\n",n2);
    if(num==n2){
        printf("TRUE\n");
    }
    else{
        printf("FALSE\n");
    }

    return 0;

}
