#include<stdio.h>
#define row 3
#define column 2
main()
{
    int matrix[row][column];
    int i;
    int j;
    int biggest = 0;
    int average = 0;
    int smallest;
    int total;
    
    printf("Enter numbers into the array\n");
    //outer loop that deals with rows
    
    for(i = 0;i < row; i++)
    {
        //inner for loop that deals with columns
        for(j=0;j<column;j++)
        {
            scanf("%d",&matrix[i][j]);//entering numbers
        }
    }
    smallest=matrix[0][0];//initializing to find smallest
    biggest=matrix[0][0];//initializing to find biggest
    printf("These are the numbers you entered\n");
     for(i=0;i<row;i++)
    {
        
        for(j=0;j<column;j++)
        {
            printf("%d\n",matrix[i][j]);//displaying numbers
            total = total+matrix[i][j];//get total to find average
            if (matrix[i][j] > biggest)//tests the array to find biggest
            { 
                biggest = matrix[i][j];
            }
            if(matrix[i][j] < smallest)//tests the array to find smallest
            {
                smallest = matrix[i][j];
            }
            average = total / (column*row);//find average
        }//end inner for for colum
    }//end outer for for row
  
    printf("Biggest is %d\n",biggest);
    printf("Smallest is %d\n",smallest);
    printf("Average is %d\n",average);
    getchar();
    getchar();
    
}//end main