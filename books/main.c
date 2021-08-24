#include <stdio.h>
int main()
{
    float a,b;
    printf("Enter Tow Numbers: ");
    scanf("%f %f",&a,&b);
    a>b?printf("%.2f is the bigest number",a):printf("%.2f is the bigest number",b);
}
