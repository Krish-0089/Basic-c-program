#include<stdio.h>
int main(){
int n;
printf("Enter your number: ");
scanf("%d",&n);

if(n%2==0){
printf("%d",n);
}
else{
    printf("%d",n*2);
}
    return 0;

}
