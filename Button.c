// When button press the led will ON
//CODE Wirtten by "Nilesh Sharma"
//This code is for MS51PC0AE 8051 mcu

#include "MS51_32K.H"

unsigned char temp _at_ 0x08;
unsigned char idata itemp _at_ 0x90;
unsigned char xdata xtemp _at_ 0x80;

//----------------------------------------------------------------------------------------------//
sbit button = P0^5;
sbit led = P3^4;


void main (void)
{
  //ALL_GPIO_PUSHPULL_MODE;
	P34_PUSHPULL_MODE;    // o/p mode
	P05_INPUT_MODE;       // i/p mode
  
	while(1)             //loop function
 {
   if(button ==1)
	 {
	   led=1;
	 }
	 else
	 {
	   led =0;
	 }
 }
}

  
