#include<stdio.h>


main()
{
    int mas[100][100];

    int r, c;
    
        printf("ROWS");
        scanf("%i",&r);
    
        printf("COLS");
        scanf("%i",&c);

    
    printf("Enter your numbers\n");
    
    for (int j=0; j<r; j++)
    {
        for(int i=0; i<c; i++)
        {
            scanf("%i",&mas[j][i]);
        }
    }
   
    printf("Starting position\n");

    for (int j=0; j<r; j++)
    {
        for(int i=0; i<c; i++)
        {
            printf("%3i",mas[j][i]);
        }
        printf("\n");
    }

    printf("\n");

    
    int mas2[100][100];

    for (int j=0; j<r; j++)
    {
        for(int i=0; i<c; i++)
        {
            mas2[j][i]=mas[i][j];
        }
    }
    
    printf("Inversion\n");

    for (int j=0; j<c; j++)
    {
        for(int i=0; i<r; i++)
        {
            printf("%3i",mas2[j][i]);
        }
        printf("\n");
    }
    
}
