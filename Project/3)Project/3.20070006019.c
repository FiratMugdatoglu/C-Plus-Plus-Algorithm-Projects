#include <stdio.h>

int perfectNumber(int number){
	int i;
	for(i = 0 ; i<number;i++){
		if(i*i>number){
			return 0;
		}
		if(i*i == number){
			return 1;
		}
	}
}  

 
int main()
{
	int number,sayi, rakam, toplam = 0;
	        number=sayi;
	        printf("Bir Sayi Giriniz : ");
	        scanf("%d", &sayi);
	int i;

	for(i = 0 ; sayi>i ; i++){
	int x=i;
		    toplam=0;
	while(x > 0) {
			rakam = x % 10;
			toplam = toplam + rakam;
			x = x / 10;

		}
   int perfect = perfectNumber(toplam);
   if(perfect == 1){
   		   
   
   printf("%d\t",i);
		x=i;
   while(x>0){
	rakam=x%10;
	x=x/10;
	printf("%d:",rakam);
}
    printf("\t%d\n",toplam);
 
		}
	}	
	
	
	return 0;
}
