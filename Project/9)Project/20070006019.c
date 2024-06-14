#include <stdio.h>

void printAddressOfVariable(int a) {
	// TODO: Fill this block.
	printf("%d\n",&a);
}

void printValueOfAddress(int *a) {
	// TODO: Fill this block.
	printf("%d\n",*a);
}

int add_v1(int a, int b) {
	// TODO: Fill this block.
	return a+b;
}

void add_v2(int *s, int a, int b) {
	// TODO: Fill this block.
	*s = a + b;
	
}

void add_v3(int *s, int *a, int *b) {
	// TODO: Fill this block.
	*s = *a + *b;
}

void swap(int *a, int *b) {
	// TODO: Fill this block.
	int temp = *a;
	*a = *b;
	*b = temp;
	
}

void labwork6(int *max, int *min, int *avg, int arr[], int size) {
	// TODO: Fill this block then test this function in the main function.
	// This is the labwork.
	int i;
	
	*max=arr[0];
	*min=arr[0];
	*avg=0;
	for(i=0;i<size;i++)
	{	
	if(arr[i]>*max)
	{
	*max=arr[i];
	}
	if(arr[i]<*min)
	{
	*min=arr[i];
	}
	*avg = *avg + arr[i];
	}
	printf("%d\n",*max);
	printf("%d\n",*min);
	*avg = *avg / size;
	printf("%d\n",*avg);		
}

int main() {
	
	int max,min,avg,i;
	
	int arr[20];
	
	for(i=0;i<20;i++){
		printf("%d. arreyi giriniz.",i+1);
		scanf("%d",&arr[i]);
	}
	
labwork6(&max, &min, &avg, arr, 20);
printf("Max:%d  Min:%d  Avg:%d",max,min,avg);




	
	
	
	printf("Testing printAddressOfVariable function ...\n");
	int a = 10;
	printf("The value of the variable is %d\n", a);
	printf("The address of the variable is ");
	printAddressOfVariable(a);
	printf("\n");
	
	
	
	printf("Testing printValueOfAddress function ...\n");
	int b = 20;
	int *c = &b;
	printf("The address of the variable is %d\n", c);
	printf("The value of the variable is ");
	printValueOfAddress(c);
	printf("\n");
	
	
	int res_v1 = add_v1(3,5);
	printf("add_v1: %d\n",res_v1);
	
	int sum;
	add_v2(&sum,3,5);
	printf("add_v2: %d\n", sum);
	
	int sum2;
	int a=3;
	int b=5;
	add_v3(&sum2,&a,&b);
	printf("add_v3: %d\n", sum2);
	

	
	
	// TODO: Write test codes for all add functions
	
	printf("Testing swap function ...\n");
	int g = 45;
	int h = -7;
	printf("The first number is %d and the second one is %d\n", g, h);
	swap(&g, &h);
	printf("Swapping ...\n");
	printf("The first number is %d and the second one is %d\n", g, h);
		
	return 0;
}
