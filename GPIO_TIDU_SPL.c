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


#define LED    GPIO_Pin_9
#define LED1   GPIO_Pin_8

int main()
{

      GPIO_InitTypeDef Gpio;


    RCC_AHBPeriphClockCmd( RCC_AHBPeriph_GPIOE, ENABLE );


      // Configure port E (LED)
      GPIO_StructInit( &Gpio );

      Gpio.GPIO_Mode = GPIO_Mode_OUT;
      Gpio.GPIO_Pin  = LED;                    // pin 9
      Gpio.GPIO_Pin |= LED1;                // pin 8
      Gpio.GPIO_Speed = GPIO_Speed_50MHz ;
      Gpio.GPIO_PuPd= GPIO_PuPd_DOWN;

      GPIO_Init( GPIOE, &Gpio );


      while(1)
      {
              GPIO_SetBits( GPIOE, LED );

              GPIO_SetBits( GPIOE, LED1 );

      }
}
