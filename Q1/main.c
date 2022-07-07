#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare Variables
    int i,n;
    n=1;
    while(n==1) // odd loop don’t know how many times loop executes
    {
        printf("\nEnter a number more than 5:\n");
        scanf("%d",&n);

        if (n<=5)
            printf("Please insert number that more than 5 \n");
        else
        //List all the odd number that more than 5
            printf("\nOdd number than more than 5 are: \n");
            for(i=7;i<=n;i+=2)
            {
                printf("%d ",i);
            }
        printf("\nDo you want to test any number\n");
        printf("\nIf yes then press '1'\n");// if press 1 loop executes again
        printf("Else press '0'\n");//if press 0 exist from loop
        scanf("%d",&n);
    }

    // End Of Program
    return 0;
}
