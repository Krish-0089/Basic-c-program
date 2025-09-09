#include<stdio.h>
int main(){
int n;
printf("Enter your number: ");
scanf("%d",&n);
int i;
unsigned long long prod;
for(i=1;i<=110;i++){
    
prod=i*n;
printf("%d*%d=%llu\n",n,i,prod);
}

    return 0;
}
