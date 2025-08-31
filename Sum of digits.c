#include<stdio.h>
int main(){
    int N=123;
    int sum=0, rem;
   while(N!=0){
     rem =N%10;
    sum=sum+ rem;
    N=N/10;
   }
   printf("Sum of digits = %d",sum);
    return 0;
}
