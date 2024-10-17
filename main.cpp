#include <stdio.h>
int main()
{
    float value;
    printf("enter the value\n");
    scanf("%f",&value);
    float input=(value)-(int)value;
    if(input>0 && input<1){
        printf("gaven value is float num\n");
    }
    else
    {
    if(value>0)
    {
        printf("int num\n");
    }
    else if(value<0)
    {
            printf("signed int\n");
    }
    else if((value>='a'|| value<='z')||(value>='A'|| value<='Z'))
    {
            printf("charater\n");
    }
    else
    {
            printf("invalid value\n");
    }

    }
}
