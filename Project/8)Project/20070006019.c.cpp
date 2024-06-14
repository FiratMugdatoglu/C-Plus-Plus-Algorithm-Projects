#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 20

typedef int matrix[ARRAY_SIZE][ARRAY_SIZE];
typedef int cordi[2];

drawMatrix(matrix m){
		int i,j;
		for(i=0;i<ARRAY_SIZE;i++){
			for(j=0;j<ARRAY_SIZE;j++){
				printf("%2d",m[i][j]);
				
			}
			printf("\n");
		}
		
	}
	
void EmptyMatrix(matrix m) {
	
	int i,j;
	for(i=0;i<ARRAY_SIZE;i++){
	for(j=0;j<ARRAY_SIZE;j++){
	m[i][j]=0;							
	}
	}
	drawMatrix(m);
    }
    
    drawVLine(matrix m,cordi a,int lenght) {
    	int i,j;
    	int r=a[0],c=a[1];
    	for(i=0;i<lenght;i++){
    		m[r][c]=1;
    		r++;	
	}

		drawMatrix(m);
	}
	
	
	
	
	drawHLine(matrix m,cordi a,int lenght) {
    	int i,j;
    	int r=a[0],c=a[1];
    	for(i=0;i<lenght;i++){
    		m[r][c]=1;
    		c++;
    		
		}
		drawMatrix(m);
		
	}
	
	drawRectangle(matrix m,cordi a,int w,int h) {
    int i,j;
	int r=a[0],c=a[1];
	for(i=0;i<h;i++){
		c=a[1];
		for(j=0;j<w;j++){
			if(i==0 || j==0 || j==(w-1) || i==(h-1)){
			m[r][c]=1;
			c=c+1;
			}
			else{
			m[r][c]=0;
			c++;	
			}
			
		}
		r++;
	}
	drawMatrix(m);
	}
	
	
	
	fillRectangle(matrix m,cordi a,int w,int h){
	int i,j;
	int r=a[0],c=a[1];
	for(i=0;i<h;i++){
		c=a[1];
		for(j=0;j<w;j++){
			m[r][c]=1;
			c++;
		}
		r++;
	}
	drawMatrix(m);
	}
	
	
	printScreen(matrix m){
		int i,j;
		for(i=0;i<21;i++){
			for(j=0;j<21;j++){
				if(i==0 || i==20){
					printf("- ");
				}
				
				else if(j==0 || j==20){
					printf("|  ");
				}
				else if(m[i-1][j-1]==1){
					printf("* ");
				}
				else if(m[i-1][j-1]==0){
					printf("  ");
				}
				
				
			}
				printf("\n");
		}
		
		
		
		
		
	}
	

	
	
	
	
int main() {
	matrix a;
	cordi x={5,2};
	cordi y={6,4};
	cordi z={0,0};
	cordi c={10,2};
	
	
	
	
	EmptyMatrix(a);
	
	printf("\n---------------\n");
	
	drawVLine(a,x,4);
	
	printf("\n---------------\n");
	
	drawHLine(a,y,6);
	
	printf("\n---------------\n");
	
	fillRectangle(a,z,3,4);
	
	printf("\n---------------\n");
	
	 drawRectangle(a,c,5,6);
	 
	 printf("\n---------------\n");
	 
	 printScreen(a);
	
	
	
	
	

	
	return 0;
}
