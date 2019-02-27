#include<stdio.h>
#include<stdlib.h>

void maxMatrix(int**,int,int,int,int);

int main()
{
    int i = 0,j = 0;
    int row = 0,col = 0;
    int **arr = NULL;
    int no1 = 0,no2 = 0;

    printf("Enter the number of rows and columns \n");
    scanf("%d%d",&row,&col);

    arr = (int**)malloc(row * sizeof(int*));

    if(arr == NULL)
    {
    	printf("MEMORY NOT ALLOCATED\n");
    }
    
    for(i = 0 ; i < row ; i++)
    {
    	arr[i] = (int*)malloc(row * sizeof(int));
    }
    
    printf("Enter the %d elements\n",(row * col));
    for(i = 0 ; i < row ; i++)
    {
    	for(j = 0 ; j < col ; j++)
    	{
    		scanf("%d",&arr[i][j]);
    	}
    }
    
    printf("Enter the row and columns to print matrix\n");
    scanf("%d",&no1);

    no2 = no1;
    
    maxMatrix(arr,row,col,no1,no2);

    return 0;
}

void maxMatrix(int **arr,int row,int col,int no1,int no2)
{
	int start = 0,end = 0;
        int col1 = 0,row1 = 0;
	int i = 0,j = 0;
	int max = 0,sum = 0;
              
        if((no1 <= row) && (no2 <= col))
        {
                for(i = 0 ; i < row ; i++)
                {
                    for(j = 0 ; j < col ; j++)
                    {
                        printf("%d ",arr[i][j]);
                    }
                    printf("\n");
                }
              
                printf("\n\n");

                while(row1 <= (row - no1))
                {  
                    while(col1 <= (col - no2))
                    {
                        for(i = (0 + row1) ; i < (no1 + row1) ; i++)
                        {
                            for(j = (0 + col1) ; j < (no2 + col1) ; j++)
                            {
                                sum += arr[i][j];  
                            }
                        }
                  
                        if(max < sum)
                        {
                            max	  = sum;
                            start = i;
                            end	  = j;
                        }

                        sum = 0;
                        col1++;
                    }
                    row1++;
                    col1 = 0;
                }
        }
        else
        {
            printf("YOU ENTER INVALID INPUT\n");
        }

	if((no1  <= row) && (no2 <= col))
	{
       		printf("MAXIMUM SUM MATRIX\n\n");
        	for(i = start - no1 ; i < start ; i++)
        	{
        	    for(j = end - no2 ; j < end ; j++)
        	    {
        	        printf("%d ",arr[i][j]);
        	    }
        	    printf("\n");
        	}
        	
       	      	printf("\nSUM = %d\n",max);

	}
}

