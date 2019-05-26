/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f30x.h"
#include "stm32f3_discovery.h"
			

int main(void)
{  long i;
   RCC->AHBENR |=(1<<21);
   GPIOE ->MODER |= (1<<16);
   GPIOE->PUPDR |= (1<<17);
   GPIOE -> OSPEEDR|=(1<<16)|(1<<17);


   while(1)
   {
	   for(i=0;i<500000;i++)
		   GPIOE ->BSRR = (1<<8);
	   for(i=0;i<500000;i++)
		   GPIOE ->BSRR =(1<<24);
   }
}
