/* #include<stdio.h>
#include<stdlib.h>
int main(){
	// Declaring pointers
	int *a,*b,*sum;
	// allocate the memory
	a=(int*)malloc(sizeof(int));
	b=(int*)malloc(sizeof(int));
	sum=(int*)malloc(sizeof(int));
	//check whether memory allocated successfully
	if (a==NULL||b==NULL|| sum==NULL){
		printf("Memory allocation failed");
		free(a);
		free(b);
		free(sum);
		return 1;
	}
	// take input of a and b from the user 
	printf("Enter the numbers :");
	scanf("%d %d",a,b);
	// add the numbers
	*sum=*a+*b;
	printf("Sum is: %d",*sum);
	//Release memory
	free(a);
	free(b);
	free(sum);
	return 0;
	
	
} */

/*#include<stdio.h>
#include<stdlib.h>
//helper function to allocate memory for a 2D matrix
int**allocatematrix(int r,int c){
	int **matrix= (int **)malloc(r*sizeof(int*));
//check whether memory was allocated successfully
if(matrix==NULL){
	printf("Memory allocation failed.");
	return 1;
}
int i;
for(i=0;i<r;i++){
	matrix[i]=(int*)malloc(c*sizeof(int));
if(matrix[i]==NULL){
	printf("Memory allocation failed");
	return 1;
}
}
return matrix;
	
}
//helper function to free allocated memory for 2D matrix
void freematrix(int**matrix,int r){
	int i;
	for(i=0;i<r;i++){
		free(matrix[i]);
	}
	free(matrix);
}
int main(){
	int r1,r2,c1,c2;
	//take input from user
	printf("Enter rows and columns for matrix A:");
	scanf("%d %d",&r1,&c1);
	printf("Enter rows and columns for matrix B:");
	scanf("%d %d",&r2,&c2);
	//check if multiplication is possible
	if(c1!=r2){
		printf("Matrix multiplication not possible");
		return 1;
	}
	//Allocate memory dynamically for matrices
	int**A=allocatematrix(r1,c1);
	int**B=allocatematrix(r2,c2);
	int**C=allocatematrix(r1,c2);// multiplied matrix
	//input elements for matrix A
	printf("\nEnter elements for matrix A( %d x %d):\n",r1,c1);
	int i,j;
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&A[i][j]);
		}
	}
	//input elements for matrix B
	printf("\nEnter elements for matrix B( %d x %d):\n",r2,c2);
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			scanf("%d",&B[i][j]);
		}
	}
	//Perform matrix multiplication
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			C[i][j]=0;
			int k;
			for(k=0;k<c1;k++){
				C[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
	//Display the resulting matrix
	printf("\nMatrix C (%d x %d):\n",r1,c2);
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}
	// free memory 
	freematrix(A,r1);
	freematrix(B,r2);
	freematrix(C,r1);
return 0;
*/

	
	
	
	
	
}


