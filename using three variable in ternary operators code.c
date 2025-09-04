#include<stdio.h>
int main()
{
    int a,b,c,greater;
    printf("a : ");
    scanf("%d",&a);
    printf("b : ");
    scanf("%d",&b);
    printf("c : ");
    scanf("%d",&c);
    
    greater= a>b? a>c? a : c: b>c? b : c;
    printf("The value is : %d",greater);
    return 0;
}
