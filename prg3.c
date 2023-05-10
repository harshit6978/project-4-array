#include<stdio.h>
#include<conio.h>
int  main(){
	
	int i,j,sum=0,r,c;
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int b[3][3]={1,2,3,4,5,6,7,8,9};
	
	
		printf("First array\n");
	for(i=0; i<=2; i++){
		for(j=0; j<=2; j++){
		
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("second array");
	printf("\n\n");
	
	for(r=2; r>=0; r--){
		for(c=2; c>=0; c--){
			
			printf("%d ",b[r][c]);
		}
		printf("\n");
	}
	
	printf("sum of array");
	printf("\n\n");
	
	for(i=r; i<=r; i++){
		for(j=c; j<=c; j++){
		
			sum=a[i][j] + b[r][c];
		}
	}

	 for (i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d ", sum);
        }
        printf("\n");
    }	
	return 0;
}
