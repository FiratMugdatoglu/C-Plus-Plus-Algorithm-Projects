#include <stdio.h>
int power(int m, int n)
{
	int result = 1;
	
	int c;
	for (c = 0 ; c < n; c = c +1)
	{
		result = result * m;
	}

	return result;
}

int main() {
   int num, originalNum, remainder, n = 0;
   
    int result=0 ;

   printf("Enter Number:");
   scanf("%d", &num);

   originalNum = num;

   
   for (; originalNum>0; ++n) {
       originalNum =originalNum/ 10;
   }
   
   originalNum = num;
   
   for (; originalNum>0; originalNum = originalNum/10) {
       remainder = originalNum % 10;

     
      result =result+ power(remainder, n);
   }
   
   
   if (result == num)
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
   return 0;
}
