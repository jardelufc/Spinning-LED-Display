/*
 * lsd.h
 *
 *  Created on: 29 Nov 2017
 *      Author: Mary
 */

#ifndef LSD_H_
#define LSD_H_

/*
 * Top               Bottom
 * 128 64 32 16 8 4 2 1
 *  A7 A6 A5 A4 A3 A2 A1 A0
 * total = 255
 *
 *
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define L0 1
#define L1 2
#define L2 4
#define L3 8
#define L4 16
#define L5 32
#define L6 64
#define L7 128
#define LALL 255

#define DELAY_TIME 1
#define DELAY_SPACE 2

int A[]={255,255,152,152,255,255,0};
int B[]={255,255,153,153,153,102,0};
int C[]={255,255,195,195,195,195,0};
int D[]={255,255,219,219,255,126,0};
int E[]={255,255,219,219,195,195,0};
int F[]={255,255,216,216,192,192,0};
int G[]={126,255,195,133,231,102,0};
int H[]={255,255,24,24,255,255,0};
int I[]={0,195,255,255,195,0,0};
int J[]={6,199,195,255,254,192,0};
int K[]={255,255,24,60,231,195,0};
int L[]={255,255,3,3,3,0,0};
int M[]={255,255,96,48,96,255,255};
int N[]={255,255,96,48,24,255,255};
int O[]={126,255,195,195,255,126,0};
int P[]={255,255,216,216,248,248,0};
int Q[]={126,255,129,131,255,126,0};
int R[]={255,255,216,220,247,99,0};
int S[]={102,247,147,147,223,78,0};
int T[]={192,192,255,255,192,192,0};
int U[]={254,255,3,3,255,254,0};
int V[]={224,252,31,3,31,252,224};
int X[]={195,247,62,24,62,247,195};
int Y[]={192,240,59,63,252,240,0};
int Z[]={0,199,207,219,243,227,0};

void displayLine (int line);
void displayChar (char ch);
void displayString (char* str);

double getSpeed ();

#endif /* LSD_H_ */
