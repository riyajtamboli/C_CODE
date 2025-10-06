#include<stdio.h>
#include<math.h>
void main(){
    int distance;
    printf("Enter the distance in km: ");
    scanf("%d", &distance);
    int speed;
    printf("Enter speed : ");
    scanf("%d",&speed);

    float time = (float)distance / speed;
    printf("time taken : %.3f", time);

}