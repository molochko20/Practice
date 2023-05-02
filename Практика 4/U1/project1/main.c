#include "8051.h"

void msec (int x){
	while(x-->0){
		TH0 = (-1000)>>8;
		TL0=-1000;
		TR0=1;
		do;
		while(TF0==0 && P30);
		TF0=0;
		TR0=0;
	}
}

void main(){
	int i = 0;
	int j = 0;
	unsigned char array[9];
	TMOD=0x1;
	array[0]=0x0;
	array[1]=0x1;
	array[2]=0x2;
	array[3]=0x4;
	array[4]=0x8;
	array[5]=0x10;
	array[6]=0x20;
	array[7]=0x40;
	array[8]=0x80;
	P1=array[0];
	msec(2);
	while(1){
       P1=array[1]+array[8];
       msec(800);
 	P1=array[2]+array[7];
msec(1600);	
P1=array[3]+array[6];
msec(2400);
P1=array[4]+array[5];
msec(3200);



/*if(!P30){
			j = (j + 1) % 3;
		}4 6 9 11
		switch(j){
			case 0:
				P1=array[i];
				break;
			case 1:
				P1=array[9-i];
				break;
			case 2:
				P1=array[(rand() % 7) + 1];
				break;
		}
		msec(4);
		i = (i % 7) + 1;*/
	}
}