#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int sum=0;
    int d;
    int og;
    og=num;
    while(num>0){
        d=num%10;
        sum+=d;
        num/=10;
    }
    if(og%sum==0){
        printf("Output:%d",sum);
    }
    else{
        printf("Output:-1");
    }

    return 0;
}
