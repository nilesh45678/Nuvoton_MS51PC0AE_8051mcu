#include "MS51_32K.H"

unsigned char temp _at_ 0x08;
unsigned char idata itemp _at_ 0x90;
unsigned char xdata xtemp _at_ 0x80;

//----------------------------------------------------------------------------------------------//
void main (void)
{
  ALL_GPIO_PUSHPULL_MODE;
  while(1)
{
                                                       
   P3 = 0x7f ;
   Timer0_Delay(16000000,200,1000);;
   P3= 0xBF;
   Timer0_Delay(16000000,200,1000);;
   P3 = 0xDF ;
   Timer0_Delay(16000000,200,1000);;
   P3= 0xEF;
   Timer0_Delay(16000000,200,1000);;
   P3 = 0xf7 ;
   Timer0_Delay(16000000,200,1000);;
   P3= 0xFB;
   Timer0_Delay(16000000,200,1000);;
   P3 = 0xFD ;
   Timer0_Delay(16000000,200,1000);;
   P3= 0xFE;
   Timer0_Delay(16000000,200,1000);;

	// Reverse led runing
		
   P3= 0xFE;
   Timer0_Delay(16000000,200,1000);;
   P3 = 0xFD ;
   Timer0_Delay(16000000,200,1000);;
   P3= 0xFB;
   Timer0_Delay(16000000,200,1000);;
   P3 = 0xf7 ;
   Timer0_Delay(16000000,200,1000);;
   P3= 0xEF;
   Timer0_Delay(16000000,200,1000);;
   P3 = 0xDF ;
   Timer0_Delay(16000000,200,1000);;
   P3= 0xBF;
   Timer0_Delay(16000000,200,1000);;
   P3 = 0x7f ;
   Timer0_Delay(16000000,200,1000);;
  }
}
