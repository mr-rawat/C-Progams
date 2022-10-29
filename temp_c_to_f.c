// Temperature from C to F //
#include<stdio.h>
int main(){
    float c,f;
    printf("\n TYPE CELSIUS:");
    scanf("%f",&c);
    f=(9*c/5)+32;
    printf("Temp=%f",f);
    return 0;
}
// Temperature from F to C //
#include<stdio.h>
int main(){
    float c,f;
    printf("\n TYPE F:");
    scanf("%f",&f);
    c=0.555556*(f-32);
    printf("Temp=%f",c);
    return 0;
}