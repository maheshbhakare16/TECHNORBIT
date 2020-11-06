#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,r1,c1,r2,c2;
    printf("How many rows do you want to take in array 1: ");
    scanf("%d",&r1);
    printf("How many columns do you want to take in array 1: ");
    scanf("%d",&c1);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("How many rows do you want to take in array 1: ");
    scanf("%d",&r2);
    printf("How many columns do you want to take in array 1: ");
    scanf("%d",&c2);
     for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
    if(c1==r2 && r1==c2)
    {
        for(k=0;k<r1;k++)
        {
            for(i=0;i<r1;i++)
            {
                c[k][i]=0;
                
                for(j=0;j<c1;j++)
                    {
                        c[k][i]+=a[i][j]*b[j][i];
                        printf("%d\n",c[k][i]);
                    }
                    
            }
        }
        printf("multipliction matrix is: \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("entered sizes of matrices are wrong ....\n");
    }
}
