  #include <stdio.h>
    int main ()
    {
 
        int a[10][10];
        int i, j,  n, sum = 0;
 
        printf("Enter the order of the matrix:- ");
        scanf("%d", &n);
 
       
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++) 
            {
            	printf("enter a element: ");
                scanf("%d", &a[i][j]);
            }
        }
        
         for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++) 
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        

        for (j = 0; j < n; ++j) 
        {
            for (i = 0; i < n; ++i)
            {
                sum = sum + a[i][j];
            }
 
            printf("Sum of the %d column is = %d\n", j, sum);
            sum = 0;
 
        }
 		return 0;
    }

