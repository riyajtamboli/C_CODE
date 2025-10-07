#include<stdio.h>
void main(){
  int fstmatchRun, scdmatchRun, trdmatchRun, frthmatchRun, fthmatchRun, match;
  float average;
  int total;
  printf("Enter the match played by cricketer : ");
  scanf("%d", &match);  
  printf("Enter the run scored in match : ");
  scanf("%d %d %d %d %d", &fstmatchRun, &scdmatchRun, &trdmatchRun, &frthmatchRun, &fthmatchRun); 

  (match==5)
  ?((fstmatchRun>0 && scdmatchRun>0 && trdmatchRun>0 && frthmatchRun>0 && fthmatchRun>0)
  ? (total = fstmatchRun+ scdmatchRun+trdmatchRun+frthmatchRun+fthmatchRun,
    printf("total runs = %d\n", total),
        average = (float)total/match,
        printf("Average = %.2f\n", average),
          (average>=90 && average<=100)?printf("Ranking = Excellent\n"):
          (average>=70 && average<=89)?printf("Ranking = Very Good\n"):
          (average>=50 && average<=69)?printf("Ranking = Good\n"):
          (average>=30 && average<=49)?printf("Ranking = Average\n"):
          printf("Ranking = poor\n"))
    :printf("Invalid run"))
  :printf("Invalid Match");

 
}