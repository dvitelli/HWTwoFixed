/*
 ============================================================================
 Name        : OceanLevelss.c
 Author      : Dominick Vitelli
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ================================================-
 ============================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

		double oceanLevelRisingAmount = 1.5;
		double oceanLevelFiveYears = oceanLevelRisingAmount * 5;
		double oceanLevelSevenYears = oceanLevelRisingAmount * 7;
		double oceanLevelTenYears = oceanLevelRisingAmount * 10;

	printf("In 5 years the ocean level will have risen %.2f mm.\n", oceanLevelFiveYears);
	printf("In 5 years the ocean level will have risen %.2f mm.\n", oceanLevelSevenYears);
	printf("In 5 years the ocean level will have risen %.2f mm.\n", oceanLevelTenYears);

	return EXIT_SUCCESS;
}
