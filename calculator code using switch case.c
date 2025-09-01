#include <stdio.h>
int main()
{
    int num;
    printf("Enter your num : ");
    scanf("%d", &num );
    int a, b;
    printf("The value of a is: ");
    scanf("%d",&a );
    printf("The value of b is :");
    scanf("%d",&b );
    char sum,sub,mul,div,mod;
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    switch (num)
    {
    case 1:

        

        printf("Sum :%d", sum);
        break;

    case 2:

        
        
        printf(" sub :%d", sub);
        break;

    case 3:

        
        
        printf(" Mul :%d", mul);
        break;

    case 4:

        
        
        printf("Div :%d", div);
        break;

    default:

        
        
        printf("Mod : %d", mod);
    }
    return 0;
}
