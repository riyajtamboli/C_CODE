#include<stdio.h>
void main(){
    int salary = 50000;
    int increment = (salary*10)/100;
    int newSalary = salary + increment;
    printf("New salary : %d", newSalary);
}