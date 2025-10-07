#include<stdio.h>

void main(){
    int hindi, eng, math, history, sci;
    float avg;
    int total;
    printf("Enter the marks of subject : ");
    scanf("%d%d%d%d%d",&hindi,&eng, &math, &history,&sci);

    ((hindi>=0 && hindi<=100) && (eng>=0 && eng<=100) && (math>=0 && math<=100) && (history>=0 && history<=100) && (sci>=0 && sci<=100))
        ?(total = hindi+eng+math+history+sci,
            printf("Total Marks = %d\n",total),
            avg = (float)total / 5,
            printf("Average = %.2f\n", avg), 
            (avg>=90 && avg<= 100)?printf("Grade = A\n"):
            (avg>=75 && avg<= 89)?printf("Grade = B\n"):
            (avg>=60 && avg<= 74)?printf("Grade = C\n"):
            (avg>=45 && avg<= 59)?printf("Grade = D\n"):
            printf("Grade = F\n"))
    :printf("Invalid marks\n");

}
