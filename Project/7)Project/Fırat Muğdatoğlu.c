#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 4
typedef int matrix[ARRAY_SIZE][ARRAY_SIZE];

void fillMatrix(matrix m) {

	int i,j;
	for(i=0;i<ARRAY_SIZE;i++){
		for(j=0;j<ARRAY_SIZE;j++){
			printf("Row: %d, Column: %d ...",i+1,j+1);
			scanf("%d",&m[i][j]);
		//	m[i][j] = rand() % 10;
		}
	}
}

void printMatrix(matrix m) {
	
	
	int i,j;
	for(i=0;i<ARRAY_SIZE;i++){
		for(j=0;j<ARRAY_SIZE;j++){
			printf("%5d",m[i][j]);
		}
		printf("\n");
	}
}

/*
 * operation = 'a'  ->  matrix addition
 * operation = 's'  ->  matrix substraction
 * operation = 'h'  *>  hadamard product
 */
void matrixOperation(matrix s, matrix a, matrix b, char operation) {

if(operation == 'a'){
	int i,j;
	for(i=0;i<ARRAY_SIZE;i++){
		for(j=0;j<ARRAY_SIZE;j++){
			s[i][j] = a[i][j] + b[i][j];
			printf("%5d",s[i][j]);
		}
		printf("\n");
	}
	
}
else if(operation == 's'){
	int i,j;
	for(i=0;i<ARRAY_SIZE;i++){
		for(j=0;j<ARRAY_SIZE;j++){
			s[i][j] = a[i][j] - b[i][j];
			printf("%5d",s[i][j]);
		}
		printf("\n");
	}
	
}
else if(operation == 'h'){
	
	int i,j;
	for(i=0;i<ARRAY_SIZE;i++){
		for(j=0;j<ARRAY_SIZE;j++){
			s[i][j] = a[i][j] * b[i][j];
			printf("%5d",s[i][j]);
		}
		printf("\n");
	}
	
}

}

void matrixMultiplication(matrix s, matrix a, matrix b) {
	int i,j,k;
	
		for(i=0;i<ARRAY_SIZE;i++){
		for(j=0;j<ARRAY_SIZE;j++){
			s[i][j]=0;
			for(k=0;k<ARRAY_SIZE;k++){
				s[i][j]+=a[i][k]*b[k][j]; 
			}
			
			
		
	}		
	}
	
	for(i=0;i<ARRAY_SIZE;i++)    
{    
for(j=0;j<ARRAY_SIZE;j++)    
{    
printf("%d\t",s[i][j]);    
}    
printf("\n");    
}   
	
	}


int main() {
	matrix a, b, add, sub, hmd, mul;
	
	printf("Fill the first matrix:\n");
	fillMatrix(a);
	printMatrix(a);
	printf("\n---------------\n");
	
	printf("\nFill the second matrix:\n");
	fillMatrix(b);
	printMatrix(b);
	printf("\n---------------\n");
	

	matrixOperation(add, a, b, 'a');
		printf("\n---------------\n");
		
	matrixOperation(sub, a, b, 's');
	printf("\n---------------\n");
	matrixOperation(hmd, a, b, 'h');
	printf("\n---------------\n");
	
	matrixMultiplication(mul, a, b);

	printf("\nMatrix Addition:\n");
	printMatrix(add);
	printf("\nMatrix Subtraction:\n");
	printMatrix(sub);
	printf("\nHamadard product:\n");
	printMatrix(hmd);
	
	printf("\nMatrix multiplication:\n");
	printMatrix(mul);
	
	return 0;
}
