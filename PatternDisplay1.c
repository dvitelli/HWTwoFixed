/*
 ============================================================================
 Name        : PatternDisplay1.c
 Author      : Dominick Vitelli
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

		printf("Pattern A\n");

		for(int i = 0; i < 10; i++){

				if(i == 0){

					printf("\n+");
				} if(i == 1){

					printf("\n++");
				} if(i == 2){

					printf("\n+++");
				} if(i == 3){

					printf("\n++++");
				} if(i == 4){

					printf("\n+++++");
				} if(i == 5){

					printf("\n++++++");
				} if(i == 6){

					printf("\n+++++++");
				} if(i == 7){

					printf("\n++++++++");
				} if(i == 8){

					printf("\n+++++++++");
				} if(i == 9){

					printf("\n++++++++++");
				}
		}


		printf("\n\nPattern B\n");

		for(int i = 0; i < 10; i++){

					if(i == 0){

						printf("\n++++++++++");
					} if(i == 1){

						printf("\n+++++++++");
					} if(i == 2){

						printf("\n++++++++");
					} if(i == 3){

						printf("\n+++++++");
					} if(i == 4){

						printf("\n++++++");
					} if(i == 5){

						printf("\n+++++");
					} if(i == 6){

						printf("\n++++");
					} if(i == 7){

						printf("\n+++");
					} if(i == 8){

						printf("\n++");
					} if(i == 9){

						printf("\n+");
					}


		}

		return EXIT_SUCCESS;


}
