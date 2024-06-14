#include <stdio.h>


 //You are selling 3 different coffee Latte(1),Mocha(2),Ice Chocolate Mocha(3) and White Chocolate Mocha(4)
 //There are 3 different size for your coffees Tall(1),Grande(2) and Vetti(3)
 //Base prices for coffees are 2 TL, 4 TL,5 TL and 6 TL
 //Based on size, prices are multiplied by 1, 2 or 3
 //If customer want to add sugar, it costs 1 TL
 //Ask user to what would he/she want to buy, with the choice of size and if he/she wants sugar?
 //P.S : User will only enter the valid inputs

void welcome(){
        //Print a welcome message to the user
        printf("Welcome to the Yasar Coffee Shop\n 1 TL Discount On Credit Card Payments\n");
}
 
int coffee_type(){
        //Ask user to select a coffee type
        printf("Please select a coffee type (Latte(1), Mocha(2), Ice Chocolate Mocha(3),White Chocolate Mocha(4),Cappuccino(5)):\n");
        int coffee;
        scanf("%d",&coffee);
        return coffee;
       
        
}
 
int coffee_size(){
        //Ask user to select a coffee size
    
        printf("Please select a coffee size (Tall(1), Grande(2), Vetti(3)):\n");
        int size;
        scanf("%d",&size);
        return size;
}
int coffee_cream(){
        //Ask if user would like to add sugar
        printf("Do you want cream  in your coffee(Yes(1), No(0)):\n");
        int cream;
        scanf("%d",&cream);
        return cream;
}

int coffee_sugar(){
        //Ask if user would like to add sugar
        printf("Do you want sugar in your coffee(Yes(1), No(0)):\n");
        int sugar;
        scanf("%d",&sugar);
        return sugar;
}
    int coffee_payment(){
    	printf("Your Payment Method(Cash(0),Credi Card(1)):\n");
	    int payment;
        scanf("%d",&payment);
        return payment;
	   }
	   
       

void cost(int coffeeType, int coffeeSize,int cream,int sugar,int payment){
        //Print the price of the coffee acording to user's choices.
        int price;
   
        
       
	if	(coffeeType == 1){
            price = 2;
        }
        else if(coffeeType == 2){
            price = 4;
        }
        else if(coffeeType == 3){
            price = 5;
        }
         else if(coffeeType == 4){
               price = 6;
        }
          else if(coffeeType == 5){
               price =3;
        }
      
        
     
        if(coffeeSize == 1){
            price = price * 1;
        }
        else if(coffeeSize == 2){
            price = price * 2;
        }
        else if(coffeeSize == 3){
            price = price * 3;
        }
       
        if(cream == 1){
        	price = price + 2;
		}
      
        
       if(sugar == 1){
            price = price + 1;
        }
        if(payment == 1){
        	price=price-1;
     
		}
   
        printf("The price of your coffee is %d TL\n", price);
        
 
        
}

void goodbye(){
        //Print a goodbye message for the user
        printf("Thank you for choosing us!\n");
}
void main(){
        //Welcome the user, take their order, calculate the price and say goodbye
        int coffee;
        int size;
        int cream;
        int sugar;
        int payment;
        
      
        welcome();
        
        coffee = coffee_type();
        if(coffee>5 ){
        printf("Wrong Choice Please Try Again\n");
		 coffee = coffee_type();		
		}
		  if(coffee<1 ){
        printf("Wrong Choice Please Try Again\n");
		 coffee = coffee_type();		
		}
		
		
        size = coffee_size();
          if(size>3 ){
        printf("Wrong Choice Please Try Again\n");
		 size = coffee_size();		
		}
		  if(size<1 ){
        printf("Wrong Choice Please Try Again\n");
		 size = coffee_size();		
		}
		
		
        cream = coffee_cream();
          if(cream>1 ){
        printf("Wrong Choice Please Try Again\n");
		cream = coffee_cream();		
		}
		if(cream<0 ){
        printf("Wrong Choice Please Try Again\n");
		cream = coffee_cream();		
		}
		
		
        sugar = coffee_sugar();
          if(sugar>1 ){
        printf("Wrong Choice Please Try Again\n");
		sugar = coffee_sugar();		
		}
		  if(sugar<0 ){
        printf("Wrong Choice Please Try Again\n");
		sugar = coffee_sugar();		
		}
		
		
        cost(coffee,size,cream,sugar,payment);
        
         payment=coffee_payment();
       if(payment>1 ){
        printf("Wrong Choice Please Try Again\n");
	    payment=coffee_payment();	
		}
		if(payment<0 ){
        printf("Wrong Choice Please Try Again\n");
	    payment=coffee_payment();	
		}
         if(payment==1){
         	cost(coffee,size,cream,sugar,payment);
		 }
         
   
        
        goodbye();
                        
}

