#include <ch32v00x.h>
#include <debug.h>
void GPIO_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStructure = {0};
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1 | GPIO_Pin_2 | GPIO_Pin_3;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_Init(GPIOD, &GPIO_InitStructure);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOC, &GPIO_InitStructure);
}
int main(void)
{
	uint8_t b0, b1, b2;
	uint8_t g0, g1, g2;

	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);
	SystemCoreClockUpdate();
	Delay_Init();
	GPIO_Config();

	while (1)
	{
		b0 = !GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_1);
		b1 = !GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_2);
		b2 = !GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_3);
		g2 = b2;
		g1 = b2 ^ b1;
		g0 = b1 ^ b0;
		GPIO_WriteBit(GPIOC, GPIO_Pin_4, g0 ? SET : RESET);
		GPIO_WriteBit(GPIOC, GPIO_Pin_5, g1 ? SET : RESET);
		GPIO_WriteBit(GPIOC, GPIO_Pin_6, g2 ? SET : RESET);
	}
}
