 

/*
Title- 1. Write a C program to read and print a RXC matrix, R and C must be given by
 user.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h>
void main()
{
    int i,j,m,n,a[10][10];
    printf("enter the no. of rows: ");
    scanf("%d",&m);
    printf("enter the no. of columns: ");
    scanf("%d",&n);
    printf("enter the elements: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Your matrix is: \n\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}




/*
Title- 2. Write a C Program to Read a Matrix and find Sum of all elements
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/ 
#include<stdio.h>
void main()
{
    int a[10][10],i,j,r1,c1,sum=0;
    printf("How many rows do you want to take in array 1: ");
    scanf("%d",&r1);
    printf("How many columns do you want to take in array 1: ");
    scanf("%d",&c1);
    if(r1<=10 && c1<=10)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
            sum+=a[i][j];  
            }
        }
        printf("sum of elements in matrix is: %d\n",sum);
    }
    else
    {
        printf("enter the elements less than 10\n");
    }
}



/*
Title- 3. Write a C Program to Read a Matrix and find Product of all elements.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,r,c,mult=1;
    printf("How many rows do you want to take in array: ");
    scanf("%d",&r);
    printf("How many columns do you want to take in array: ");
    scanf("%d",&c);
    if(r<=10&&c<=10)
    {
        printf("Enter the elements: \n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                mult*=a[i][j];
            }
        }
        printf("multiplication of elements is: %d\n",mult);
    }
    else
    {
        printf("enter the elements less than 10\n");
    }
}



/*
Title- 4. Write a C Program to find Sum of all elements of each row of a matrix.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,r,c,sum;
    printf("How many rows do you want to take in array: ");
    scanf("%d",&r);
    printf("How many columns do you want to take in array: ");
    scanf("%d",&c);
    printf("Enter the elements: \n");
    if(r<=10 && c<=10)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<r;i++)
        {
            sum=0;
            for(j=0;j<c;j++)
            {
                sum+=a[i][j];
            }
            printf("Addition of elements in row %d is: %d\n",i+1,sum);
        }
    }
    else
    {
        printf("enter the elements less than 10\n");
    }
} 



/*
Title- 5. Write a C program to transpose a matrix.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,r,c;
    printf("How many rows do you want to take in array: ");
    scanf("%d",&r);
    printf("How many columns do you want to take in array: ");
    scanf("%d",&c);
    if(r<=10 && c<=10)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                b[j][i]=a[i][j];
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("enter the elements less than 10\n");
    }
    
}



/*
Title- 6. Write a C program to accept a matrix and print diagonal elements
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,n;
    printf("How many rows & cloumns do you want to take in array: ");
    scanf("%d",&n);
   
    if(n<=10)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Digonal elements are: [");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                {
                    printf("%d , ",a[i][j]);
                }
            }
        }
        printf("]\n");
    }
    else
    {
        printf("enter the elements less than 10\n");
    }
    
}
 
 
 
 

/*
Title- 7. Write a C program to fidn multiplication matrix of two matrices.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],r1,c1,r2,c2,i,j,k,c[10][10],flag=0;
    printf("enter the no. of rows in 1st array: ");
    scanf("%d",&r1);
    printf("enter the no. of columns in 1st array: ");
    scanf("%d",&c1);
    printf("enter the elements: \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the no. of rows in 2nd array: ");
    scanf("%d",&r2);
    printf("enter the no. of columns in 2nd array: ");
    scanf("%d",&c2);
    printf("enter the elements: \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(r1<=10 && c1<=10 && r2<=10 && c2<=10)
    {
        if(c1==r2)
        {
            for(k=0;k<r1;k++)
            {
                for(i=0;i<c2;i++)
                {
                    c[k][i]=0;
                    for(j=0;j<c1;j++)
                    {
                        c[k][i]+=a[k][j]*b[j][i];
                    }
                }
            }
            printf("Multiplication of two matrices is: \n");
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
            printf("Invalid sizes of matrices for multiplication\n");
        }
    }
    else
    {
        printf("please enter sizes of matrix less than 10\n");
    }
    
    
}
    
  
  


/*
Title- 8. Write a C program to print lower diagonal elements of matrix.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,n;
    printf("How many rows & cloumns do you want to take in array: ");
    scanf("%d",&n);
   
    if(n<=10)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Digonal elements are: [");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i>j)
                {
                    printf("%d , ",a[i][j]);
                }
            }
        }
        printf("]\n");
    }
    else
    {
        printf("enter the elements less than 10\n");
    }
    
}
 
 

/*
Title- 9. Write a C program to check whether given matrix is square or not
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int a[10][10],i,j,r,c;
    printf("How many rows do you want to take in array: ");
    scanf("%d",&r);
    printf("How many columns do you want to take in array: ");
    scanf("%d",&c);
    printf("Enter the elements: \n");
    if(r<=10 && c<=10)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        if(r==c)
        {
            printf("given matrix is a square matrix \n");
        }
        else
        {
            printf("given matrix is not a square matrix \n");
        }
    }
    else
    {
        printf("enter the elements less than 10\n");
    }
} 
 

 
 
/*
Title- 10. Write a C program to check whether given matrix is symmetric or not.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int a[10][10],i,j,r,c,flag=0;
    printf("How many rows do you want to take in array: ");
    scanf("%d",&r);
    printf("How many columns do you want to take in array: ");
    scanf("%d",&c);
    printf("Enter the elements: \n");
    if(r<=10 && c<=10)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
               if(a[i][j]!=a[j][i])
               {
                   flag=1;
                   break;
               }
            }
            if(flag==1)
            {
                break;
            }
        }
        if(flag==1)
        {
            printf("matrix is not symmetric \n");
        }
        else
        {
            printf("matrix is symmetric \n");
        }
    }
    else
    {
        printf("enter the elements less than 10\n");
    }
}  




/*
Title- 11. Write a C program to check whether given matrix is upper traingular or not.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int a[10][10],i,j,r,c,flag=0;
    printf("How many rows do you want to take in array: ");
    scanf("%d",&r);
    printf("How many columns do you want to take in array: ");
    scanf("%d",&c);
    printf("Enter the elements: \n");
    if(r<=10 && c<=10)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
               if(j<i)
               {
                   if(a[i][j]!=0)
                   {
                       flag=1;
                       break;
                   }
               }
            }
            if(flag==1)
            {
                break;
            }
        }
        if(flag==1)
        {
            printf("matrix is not upper triangular \n");
        }
        else
        {
            printf("matrix is upper triangular \n");
        }
    }
    else
    {
        printf("enter the elements less than 10\n");
    }
} 




/*
Title- 12. Write a C program to check whether given matrix is unit or not.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int matrix[10][10],i,j,r,c,flag=0;
    printf("How many rows do you want to enter in matrix: ");
    scanf("%d",&r);
    printf("How many columns do you want to enter in matrix: ");
    scanf("%d",&c);
    if(r<=10 && c<=10)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&matrix[i][j]);
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i==j)
                {
                    if(matrix[i][j]!=1)
                    {
                        flag=1;
                        break;
                    }
                }
                else
                {
                    if(matrix[i][j]!=0)
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        if(flag==1)
        {
            printf("Matrix is not an unit matrix \n");
        }
        else
        {
            printf("Matrix is an unit matrix \n");
        }
    }
    else
    {
        printf("Please enter the proper no. of columns and rows\n");
    }
}




/*
Title- 13. Write a C program to check whether given matrix is Identity or not.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int matrix[10][10],i,j,r,c,flag=0;
    printf("How many rows do you want to enter in matrix: ");
    scanf("%d",&r);
    printf("How many columns do you want to enter in matrix: ");
    scanf("%d",&c);
    if(r<=10 && c<=10)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&matrix[i][j]);
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i==j)
                {
                    if(matrix[i][j]!=1)
                    {
                        flag=1;
                        break;
                    }
                }
                else
                {
                    if(matrix[i][j]!=0)
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        if(flag==1)
        {
            printf("Matrix is not an identity matrix \n");
        }
        else
        {
            printf("Matrix is an identity matrix \n");
        }
    }
    else
    {
        printf("Please enter the proper no. of columns and rows\n");
    }
}
 

/*
Title- 14. Write a C program to check whether given matrix is diagonal or not.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int matrix[10][10],i,j,r,c,flag=0;
    printf("how many rows do you want to enter in matrix: ");
    scanf("%d",&r);
    printf("how many columns do you want to enter in matrix: ");
    scanf("%d",&c);
    if(r<=10 && c<=10)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&matrix[i][j]);
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i==j)
                {
                    if(matrix[i][j]==0)
                    {
                        flag=1;
                        break;
                    }
                }
                else
                {
                    if(matrix[i][j]!=0)
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        if(flag==0)
        {
            printf("Matrix is a diagonal matrix \n");
        }
        else
        {
            printf("Matrix is not a diagonal matrix \n");
        }
    }
    else
    {
        printf("Please enter the rows and colum less than 10\n");
    }
}




/*
Title-15. Write a C program to check whether given matrix is equal or not
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],r1,c1,r2,c2,i,j,c[10][10],flag=0;
    printf("enter the no. of rows in 1st array: ");
    scanf("%d",&r1);
    printf("enter the no. of columns in 1st array: ");
    scanf("%d",&c1);
    printf("enter the elements: \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the no. of rows in 2nd array: ");
    scanf("%d",&r2);
    printf("enter the no. of columns in 2nd array: ");
    scanf("%d",&c2);
    printf("enter the elements: \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(r1==r2 && c1==c2)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                if(a[i][j]!=b[i][j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        if(flag==1)
        {
            printf("Matrices are not same \n");
        }
        else
        {
            printf("Matrices are same \n");
        }
    }
    else
    {
        printf("Matrices are not same \n");
    }
    
}
    
  

/*
Title- 16. Write a C program to check whether given matrix is sparse or not.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int matrix[10][10],i,j,r,c,zeroc=0,nzeroc=0;
    printf("how many rows do you want to enter in matrix: ");
    scanf("%d",&r);
    printf("how many columns do you want to enter in matrix: ");
    scanf("%d",&c);
    if(r<=10 && c<=10)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&matrix[i][j]);
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(matrix[i][j]==0)
                {
                    zeroc++;
                }
                else
                {
                    nzeroc++;
                }
            }  
        }
        if(zeroc>nzeroc)
        {
            printf("Matrix is a sparse matrix \n");
        }
        else
        {
            printf("Matrix is not a sparse matrix \n");
        }
    }
    else
    {
        printf("Please enter the rows and colum less than 10\n");
    }
}
    
 
