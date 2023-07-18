//Fahrenheit to /Celsius
#include<stdio.h>
int main(){
    float cel,fh;
    printf("Enter the temparature in Fahrenheit:");
    scanf("%f",&fh);
    cel=(fh-32)/1.8;
    printf("Temparature in Celsius is:%f\n",cel);
return 0;
}
