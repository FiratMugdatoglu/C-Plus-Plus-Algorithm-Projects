#include <stdio.h>

int readArrey(int Arrey[]){
	int i;
	for(i=0 ; i<10 ; i++){
		printf("Enter Numbers:");
		scanf("%d",&Arrey[i]);	
	}
    }
 
   
    
int weirdSort(int Arrey[]){

	int temp,i,j;
	
	for(i=0;i<10;i++){
	for(j=0;j<10;j++){
	if(i % 2 == 0 && j % 2 == 0){
	    if(Arrey[i]<Arrey[j]){
			temp=Arrey[i];
			Arrey[i]=Arrey[j];
			Arrey[j]=temp;
	}	
	}
	if(i % 2 == 1 && j % 2 == 1){
		if(Arrey[i]>Arrey[j]){
			temp=Arrey[i];
			Arrey[i]=Arrey[j];
			Arrey[j]=temp;
	}		
	}
	}
	}	
	}
	
	
int printArray(int Arrey[]){
	
	int i;
	for(i=0 ; i<10 ; i++){
		    printf("%d ",Arrey[i]);			
    }
		    printf("\n");
    }

	
	
int weirdPrint(int Arrey[]){
		
	
	int i;
	for(i=0;i<10;i=i+2){
	        printf("%d ",Arrey[i]);
	}
		    printf("\n");
				
	for(i=1;i<10;i=i+2){
	        printf("%d ",Arrey[i]);
	}
    }
    

    
int main(){
	int Arrey[10];
readArrey(Arrey);
weirdSort(Arrey);
weirdPrint(Arrey);

	
    }
    
    
    

    
