#include <stdio.h>
void main()
{


    // printf("# # # #\n");
    // printf("#     #\n");
    // printf("#     #\n");
    // printf("# # # #\n");

    int row, col;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of cols: ");
        scanf("%d", &col);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if(i==1 || i== row || j==1 || j==col){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

}