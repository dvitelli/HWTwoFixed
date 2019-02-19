/*
 ============================================================================
 Name        : RestaurantBill1.c
 Author      : Dominick Vitelli
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

		double mealCost = 88.67;
		double tax = mealCost * .0675;
		double tip = (mealCost + tax) * .2 ;
		double total = mealCost + tax + tip;


		printf("Cost of meal: $%.2f", mealCost);
		printf("\nTax on meal: $%.2f", tax);
		printf("\nTip on meal: $%.2f",tip);
		printf("\nThe total due is:$%.2f",total);


	return EXIT_SUCCESS;
}
