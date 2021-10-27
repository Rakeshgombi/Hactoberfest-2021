#include<stdio.h>
#include<conio.h>
int main()
{
    int mat[3][3], i, j, matTrans[3][3];
    printf("Enter 3*3 Matrix Elements: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &mat[i][j]);
    }
    // Transposing the Matrix...
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            matTrans[j][i] = mat[i][j];
    }
    printf("\nTranspose of given Matrix is:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d  ", matTrans[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}
