#include<stdio.h>

#define Pi 3.14
int main(int argc, char const *argv[])
{
    int a =2;
    const float b = 3.758;
   // b =38; // wrong since b is defined as a constant.
    printf("Hello world\n");
    //printf("%.2f this is the code",b);
    
    printf("%f\a ",Pi); 

    return 0;
}
