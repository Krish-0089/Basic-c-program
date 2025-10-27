#include<stdio.h>
void fibonacci(int n){
    int i;
    int t1 = 0, t2 = 1, nextTerm;
printf("Fibonacci Series: ");
for(i = 1;i <= n;i++) {
       printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main(){
    int n;
printf("Enter the maximun number of series you want to print:");
scanf("%d",&n);
fibonacci(n);
return 0;
}
