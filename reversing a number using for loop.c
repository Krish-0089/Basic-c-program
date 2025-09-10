#include<stdio.h>
int main(){
    int n,rev=0,digit;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=0;n>0;i++){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    printf("%d",rev);
    return 0;

}
