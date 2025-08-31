#include<stdio.h>
int main(){
    int a,b,c;
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    printf("c:");
    scanf("%d",&c);
   if(a>b && a>c){
        printf("a is largest\n");
        if(b>c) 
        {
            printf("b is second largest");
        printf("\nc is smallest");
    }
    else {
        printf("c is second largest");
        printf("\nb is smallest");
    } }
if(b>c && b>a){
        printf("b is largest\n");
        if(c>a) 
        {
            printf("c is second largest");
        printf("\nc is smallest");
    }
    else {
        printf("a is second largest");
        printf("\nc is smallest");
    } }
if(c>a && c>b){
        printf("c is largest\n");
        if(b>a) 
        {
            printf("b is second largest");
        printf("\na is smallest");
    }
    else {
        printf("a is second largest");
        printf("\nb is smallest"); 
    } }
    return 0;
}
