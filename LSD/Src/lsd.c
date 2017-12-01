/*
 * lsd.c
 *
 *  Created on: 29 Nov 2017
 *      Author: Mary
 */

#include "../Inc/lsd.h"
#include "stm32f1xx_hal.h"
#include "gpio.h"
#include <time.h>

double getSpeed () {
    double freq = 0;
    //time begin
    //time end
    int cur_state = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_0);
    
    while (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_0) == cur_state) {
        //time begin update
    }
    
    while (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_0) != cur_state) {
        //time end
    }
    
    //freq = 1/(end - begin) 
    return freq;
}

void displayLine (int line)
{
	if (line>=L7) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_BIT_SET);
		line -=L7;
	} else {HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_BIT_RESET);}

	if (line>=L6) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_BIT_SET);
		line -=L6;
	} else {HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_BIT_RESET);}

	if (line>=L5) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_BIT_SET);
		line -=L5;
	} else {HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_BIT_RESET);}

	if (line>=L4) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_BIT_SET);
		line -=L4;
	} else {HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_BIT_RESET);}

	if (line>=L3) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_BIT_SET);
		line -=L3;
	} else {HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_BIT_RESET);}

	if (line>=L2) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_BIT_SET);
		line -=L2;
	} else {HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_BIT_RESET);}

	if (line>=L1) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_BIT_SET);
		line -=L1;
	} else {HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_BIT_RESET);}

	if (line>=L0) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_BIT_SET);
		line -=L0;
	} else {HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_BIT_RESET);}

}

void displayChar(char ch)
{

	int aux;
	if (ch == 'A') {
		for (aux=0; aux<(7); aux++) {
			displayLine(A[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'B') {
		for (aux=0; aux<(7); aux++) {
			displayLine(B[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'C') {
		for (aux=0; aux<(7); aux++) {
			displayLine(C[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'D') {
		for (aux=0; aux<(7); aux++) {
			displayLine(D[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'E') {
		for (aux=0; aux<(7); aux++) {
			displayLine(E[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'F') {
		for (aux=0; aux<(7); aux++) {
			displayLine(F[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'G') {
		for (aux=0; aux<(7); aux++) {
			displayLine(G[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'H') {
		for (aux=0; aux<(7); aux++) {
			displayLine(H[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'I') {
		for (aux=0; aux<(7); aux++) {
			displayLine(I[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'J') {
		for (aux=0; aux<(7); aux++) {
			displayLine(J[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'K') {
		for (aux=0; aux<(7); aux++) {
			displayLine(K[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}


	if (ch == 'L') {
		for (aux=0; aux<(7); aux++) {
			displayLine(L[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'M') {
		for (aux=0; aux<(7); aux++) {
			displayLine(M[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}


	if (ch == 'N') {
		for (aux=0; aux<(7); aux++) {
			displayLine(N[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'O') {
		for (aux=0; aux<(7); aux++) {
			displayLine(O[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'P') {
		for (aux=0; aux<(7); aux++) {
			displayLine(P[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'Q') {
		for (aux=0; aux<(7); aux++) {
			displayLine(Q[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'R') {
		for (aux=0; aux<(7); aux++) {
			displayLine(R[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'S') {
		for (aux=0; aux<(7); aux++) {
			displayLine(S[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'T') {
		for (aux=0; aux<(7); aux++) {
			displayLine(T[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'U') {
		for (aux=0; aux<(7); aux++) {
			displayLine(U[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'V') {
		for (aux=0; aux<(7); aux++) {
			displayLine(V[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'W') {
		for (aux=0; aux<(7); aux++) {
			displayLine(W[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'X') {
		for (aux=0; aux<(7); aux++) {
			displayLine(X[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'Y') {
		for (aux=0; aux<(7); aux++) {
			displayLine(Y[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

	if (ch == 'Z') {
		for (aux=0; aux<(7); aux++) {
			displayLine(Z[aux]);
			HAL_Delay(DELAY_TIME);
			displayLine(0);
		}
		return;
	}

    HAL_Delay(DELAY_SPACE);
    
    
}

void displayString (char* str)
{
    for (int aux = 0; aux < strlen(str); aux++) {
        displayChar(str[aux]);
    }   
}


