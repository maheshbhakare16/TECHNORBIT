

/*
Title- 1.Accept the array from user and print it
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>

void main()
{
    int array[20],no_of_elements,i;
    printf("enter how many elements do you want to enter into the array(must be < 20): ");
    scanf("%d",&no_of_elements);
    if(no_of_elements>0 && no_of_elements <=20)
    {
        printf("Enter array elements:\n");
        for(i=0;i<no_of_elements;i++)
        {
            scanf("%d",&array[i]);
        }
        printf("array elements are: [");
        for(i=0;i<no_of_elements;i++)
        {
            printf("%d, ",array[i]);
        }
        printf("]\n");
    }
    else
    {
        printf("sorry, you have entered wrong no_of_elements.\n" );
    }
}


/*
Title- 2. Accept the array from user and print it in reverse
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int array[20],no_of_elements,i;
    printf("enter how many elements do you want to enter into the array(must be < 20): ");
    scanf("%d",&no_of_elements);
    if(no_of_elements>0 && no_of_elements <=20)
    {
        printf("Enter array elements:\n");
        for(i=0;i<no_of_elements;i++)
        {
            scanf("%d",&array[i]);
        }
        no_of_elements--;
        printf("array elements in reverse are: [");
        for(;no_of_elements>=0;no_of_elements--)
        {
            printf("%d, ",array[no_of_elements]);
        }
        printf("]\n");
    }
    else
    {
        printf("sorry, you have entered wrong no_of_elements.\n" );
    }
}


/*
Title- 3. Search the given element in the array.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>

void main()
{
    int array[17]={1,2,3,4,5,6,7,45,12,23,42,123,345,675,0,9,8},element,i,flag=1;
    printf("enter the element to search the element in array: ");
    scanf("%d",&element);
    for(i=0;i<17;i++)
    {
        if(array[i]==element)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        printf("element found in array \n");
    }
    else
    {
        printf("element not found in array \n");
    }
}
 

/*
Title- 4. Find maximum  element from the array
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>

void main()
{
    int array[20],no_of_elements,i,max;
    printf("enter how many elements do you want to enter into the array(must be < 20): ");
    scanf("%d",&no_of_elements);
    if(no_of_elements>0 && no_of_elements <=20)
    {
        printf("Enter array elements:\n");
        for(i=0;i<no_of_elements;i++)
        {
            scanf("%d",&array[i]);
        }
        max=array[0];
        for(i=0;i<no_of_elements;i++)
        {
            if(array[i]>max)
            {
                max=array[i];
            }
        }
        printf("maximum element is: %d\n",max);
    }
    else
    {
        printf("sorry, you have entered wrong no_of_elements.\n" );
    }
}



/*
Title- 5. Sort the array in ascending or descending order
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int array[]={1,3,2,4,6,5,7},i,j,k=-1,pos,x,temp,min;
    for(j=0;j<7;j++)
    {
        i=k+1;
        pos=-1;
        k=i;
        min=array[i];
        for(i;i<7;i++)
        {
            if(array[i]<min)
            {
                min=array[i];
            }
        }
        for(x=0;x<7;x++)
        {
            if(array[x]==min)
            {
                pos++;
                break;
            }
            pos++;
        }
            temp=array[pos];
            array[pos]=array[k];
            array[k]=temp;
    }
    printf("sorted array elements are: [");
    for(i=0;i<7;i++)
    {
        printf("%d, ",array[i]);
    }
    printf("]\n");
        
}


/*
Title- 6. Find the position of given element in the array
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>

void main()
{
    int array[20],no_of_elements,i,element,pos=0,flag=0;
    printf("enter how many elements do you want to enter into the array(must be < 20): ");
    scanf("%d",&no_of_elements);
    if(no_of_elements>0 && no_of_elements <=20)
    {
        printf("Enter array elements:\n");
        for(i=0;i<no_of_elements;i++)
        {
            scanf("%d",&array[i]);
        }
        printf("enter the element find it's position in array: ");
        scanf("%d",&element);
        for(i=0;i<no_of_elements;i++)
        {
            if(array[i]==element)
            {
                pos++;
                flag=1;
                break;
            }
            pos++;
           
        }
        if(flag==1)
        {
            printf("position of element is: %d\n",pos);
        }
        else
        {
            printf("element not found..\n");
        }
            
        
    }
    else
    {
        printf("sorry, you have entered wrong no_of_elements.\n" );
    }
}
 

/*
Title- 7. Merge two arrays in a single array.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>

void main()
{
    int array1[20],array2[20],array3[40],no_of_elements1,no_of_elements2,i,j=0;
    
    
    printf("enter how many elements do you want to enter into the array1(must be < 20): ");
    scanf("%d",&no_of_elements1);
    
    
    printf("enter how many elements do you want to enter into the array2(must be < 20): ");
    scanf("%d",&no_of_elements2);
    
    
    if((no_of_elements1>0 && no_of_elements1<=20) && (no_of_elements2>0 && no_of_elements2<=20))
    {
        
        printf("Enter array1 elements:\n");
        for(i=0;i<no_of_elements1;i++)
        {
            scanf("%d",&array1[i]);
        }
        
        
        printf("Enter array2 elements:\n");
        for(i=0;i<no_of_elements2;i++)
        {
            scanf("%d",&array2[i]);
        }
        
        
        for(i=0;i<no_of_elements1;i++)
        {
            array3[j++]=array1[i];
        }
        
        
        for(i=0;i<no_of_elements2;i++)
        {
            array3[j++]=array2[i];
        }
        
        
        printf("merged elements are: [");
        for(i=0;i<j;i++)
        {
            printf("%d, ",array3[i]);
        }
        printf("]\n");
     
    }
    else
    {
        printf("sorry, you have entered wrong no_of_elements.\n" );
    }
    
}

