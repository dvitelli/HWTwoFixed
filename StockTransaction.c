/*
 ============================================================================
 Name        : StockTransaction.c
 Author      : Dominick Vitelli
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int firstStock = 1000;
	double firstStockPrice = 45.50;
	double firstStockTotal = firstStock * firstStockPrice;
	double firstBrokerCommission = firstStockTotal * .02;

	int secondStock = 1000;
	double secondStockSellPrice = 56.90;
	double secondStockTotal = secondStock * secondStockSellPrice;
	double secondBrokerCommission = secondStockTotal * .02;

	double profit = (secondStockTotal - secondBrokerCommission) - (firstStockTotal - firstBrokerCommission);

	printf("Joey bought %d stocks at $%.2f for a total of: $%.2f", firstStock, firstStockPrice, firstStockTotal);
	printf("\nJoey paid $%.2f to his stock broker for commission.", firstBrokerCommission);
	printf("\n\nJoey sold %d stocks at $%.2f for a total of: $%.2f", secondStock, secondStockSellPrice, secondStockTotal);
	printf("\nJoey paid $%.2f to his stock broker for commission.", secondBrokerCommission);
	printf("\n\nJoey made a profit of $%.2f.", profit);



	return EXIT_SUCCESS;
}
