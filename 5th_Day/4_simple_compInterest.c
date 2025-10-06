#include<stdio.h>
#include<math.h>
void main(){
    float principal, interest, time;
    char choice;
    printf("Enter the choice :");
    // choice = getChar();
    scanf("%c", &choice);
    
    printf("Enter the principal interest : ");
    scanf("%f",&principal);
    printf("Enter the interest : ");
    scanf("%f",&interest);
    printf("Enter the time : ");
    scanf("%f", &time);

    (choice == 'S' || choice == 's')?printf("simple interest : %f",(principal * interest * time)/100):
    (choice == 'C'|| choice =='c')?printf("Compound interest : %f",(principal* (pow((1+interest/100),time)-1))):
    printf("enter valid character");

}