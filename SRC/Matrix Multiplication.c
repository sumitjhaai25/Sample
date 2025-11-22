#include <stdio.h>
int main()
{
    int row1,col1,row2,col2,i,j,k;

    // taking order of two matrices from user
    printf("Enter the order for first matrix (m x n) : \n");
    scanf("%d %d",&row1,&col1);
    printf("Enter the order for second matrix (m x n) : \n");
    scanf("%d %d",&row2,&col2);

    // checking necessary conditions for multiplication of two matrices
    if(row1==col2)
    {
        int mat1[row1][col1],mat2[row2][col2],mat3[row1][col2];
        printf("------------------------------\n");

        // taking values for two matrices from user
        printf("Enter Values for Matrix 1:\n");
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col1;j++)
                scanf("%d",&mat1[i][j]);
        }

        printf("Enter Values for Matrix 2:\n");
        for(i=0;i<row2;i++)
        {
            for(j=0;j<col2;j++)
                scanf("%d",&mat2[i][j]);
        }

        //Calculating Product
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                mat3[i][j]=0;
                for(k=0;k<col1;k++)
                    mat3[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }

        //Displaying Product
        printf("------------------------------\n");
        printf("The product is : \n");
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
                printf("%d\t",mat3[i][j]);
            printf("\n");
        }

    }

    else
    {
        printf("------------------------------\n");
        printf("INVALID!");
        printf("For Matrix Multiplication number of rows of first matrix must be equal to number of columns of other");
    }

    return 0;
}
