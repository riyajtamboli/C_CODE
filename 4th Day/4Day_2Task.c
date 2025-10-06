#include <stdio.h>
void main()
{
    int machine, engine;
    printf("Enter the value for machine : ");
    scanf("%d", &machine);
    printf("Enter the value for engine : ");
    scanf("%d", &engine);

    // (machine==1 && engine== 1)? printf("Machine is ready for operation")?(machine ==1 && engine ==0)?printf("Engine problem detected")?(machine!=1 && engine ==1)?printf("machine structure is not reddy"):printf("Both not working");
    (machine <= 1 && engine >= 0)?
    (machine>0 && engine>0)?printf("Machine is ready for operation"):
    (machine<=0 && engine>=1)?printf("Machine structure not ready"):
    (machine>=1 && engine <=0 )?printf("Engine problem detected")
    :printf("Both not working well")
    : printf("num not valid");
}