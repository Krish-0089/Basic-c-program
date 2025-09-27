#include <stdio.h>

int reverse(int a) {
    int rev = 0;
    while(a > 0) {
        int rem = a % 10;
        rev = rev * 10 + rem;
        a /= 10;
    }
    return rev;
    
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    

    int rev = reverse(num);

    if(num == rev){
        printf("Yes,palindrome.\n");
    } else {
        printf("Not,palindrome.\n");
    }
        return 0;
}
