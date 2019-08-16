#include "stm32f10x.h"
#include "led.h"
#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "time.h"

int main()
{
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	delay_init();
	LED_Init();
	TIM3_Int_Init(19999,7199);//Tout= ((arr+1)*(psc+1))/Tclk
	while(1);
	
}
