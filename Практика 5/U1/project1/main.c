#include <8051.h>
void main(){
unsigned char arr[12]={'0','1', '2', '3', '4', '5', '6', '+', '-', '=', '*', '?'};
while (1) {
P3 = 0x80;
P1 = 0x3;
P1 = 0x2;
P3 = 0x01;
P1 = 0x1;
P1 = 0x0;
P2 = 7;

if (P0==254)
{
P3=arr[0];
P1=0x3;
P1=0x2;
}

}



}
