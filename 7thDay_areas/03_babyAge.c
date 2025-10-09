#include<stdio.h>
void main(){
   int ageInDay, year, month, week;
   printf("Enter day of baby from birth : ");
   scanf("%d", &ageInDay);

    (ageInDay >= 365)&&
    ( year = ageInDay / 365, ageInDay%= 365,
    printf("Age in year : %d\n", year));

    (ageInDay >= 30)&&
    (month = ageInDay / 30, ageInDay %=30,
    printf("Age in Month = %d\n", month));

    (ageInDay >= 7)&&
    (week = ageInDay / 7, ageInDay %= 7,
    printf("Age in week : %d\n", week) ); 
    
    printf("Age in Day : %d\n", ageInDay); 
}