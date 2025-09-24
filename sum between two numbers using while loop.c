#include<stdio.h>
int main(){
   int n,sum=0,a;
   printf("Enter your starting number: ");
   scanf("%d",&a);
   printf("Enter your last number: ");
   scanf("%d",&n);
   while(n>=a){
    sum+=a;
    a++;
   }
   printf("The sum of the number between two of them is:%d",sum);
   
    return 0;
}
