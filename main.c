#include "SPI.h"
#include "delay.h"

int main(void){
	SPI_Master_init();
	
	while(1){
		SPI_SendData('M');
		delayMsec(1000);
		SPI_SendData('o');
		delayMsec(1000);
		SPI_SendData('H');
		delayMsec(1000);
		SPI_SendData('a');
		delayMsec(1000);
		SPI_SendData('N');
		delayMsec(1000);
		SPI_SendData('a');
		delayMsec(1000);
		SPI_SendData('D');
		delayMsec(1000);
		SPI_SendData(' ');
		delayMsec(1000);
	}
	
}
