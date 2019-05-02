#include <stdio.h>
#include <math.h>

int main (void)
{
    float Vix;
    float X;
    float Viy;
    float Y;
    float Vfy=-Viy;
    float ay=-9.8;
    float ax=0;
    float VI;
    float time;
    float angle,givenangle;
    printf("what is the initial velocity?\n");
        scanf("%f",&VI);
    printf("angle of launch?\n");
        scanf("%f",&givenangle);
    angle=((givenangle*3.14159)/180);
    Vix=VI*cos(angle);
    Viy=VI*sin(angle);
    time=(Vfy-Viy)/ay;
    Y=(Viy*time)+(.5*ay*(pow(time, 2)));
    X=Vix*time;
printf("max height is:%f\n",Y);
printf("max distance is:%f\n",X);
printf("airtime=%f\n",time);
}


    
