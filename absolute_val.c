#include<stdio.h>
#include<stdlib.h> // to include abs func.

// program to find the absolute value of a num.

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d",&a);

    printf("The absolute value of a is %d\n",abs(a));  // USE abs function to calculate the absolute value of a number.

    return 0;
}
