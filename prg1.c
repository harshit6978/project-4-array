#include<stdio.h>
#include<conio.h>
int main(){
	
	int n;
	
	printf("enter size of array:");
	scanf("%d",&n);
	
	int a[n],i;
	
	for(i=0; i<n; i++){
		printf("enter a element:");
		scanf("%d",&a[i]);
		
	}
	
	for(i=0; i<n ; i++){
		if(a[i]<0){
			printf("negative number is a %d",a[i]);
		}	
	}
	return 0;
}
