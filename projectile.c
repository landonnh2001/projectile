#include <stdio.h>
#include <math.h>

int main (void)
{
    float Vix;
    float X;
    float Viy;
    float Y;
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
    time=(Viy*-2)/ay;
    float Time=0.5*time;
    Y=-(0.5*ay*(Time*Time));
    X=Vix*time;
printf("max height is:%f m\n",Y);
printf("max distance is:%f m\n",X);
printf("airtime=%f s\n",time);
}


    
