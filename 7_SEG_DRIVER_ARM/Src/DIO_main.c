#include	"STD_TYPES.h"
#include	"BIT_MATH.h"

#include	"RCC_interface.h"
#include	"DIO_int.h"
#include  "SSD_init.h"




int	main(void)
{

	MRCC_voidSysClkInit();

	/*	Initialization Part		*/
	

	/*	System Clk init			*/
	

	/*	1- Enable Per Clk "RCC" Port C		*/
	MRCC_voidEnablePerClk(RCC_APB2,2);
	MRCC_voidEnablePerClk(RCC_APB2,4);
	
	H_SSD_void_init();

	//M_GPIO_void_SetPinDir(PORTA_ID, PIN15_ID,OUT_2MHZ_PP);
	//M_GPIO_void_SetPinValue(PORTA_ID, PIN15_ID,HIGH);
	// _delay_ms(500);
	// M_GPIO_void_SetPinValue(PORTA_ID, PIN15_ID,LOW);

	/*	Direction for C13 is output Push Pull */
	//M_DIO_void_setPinDir(PORTA_ID, PIN0, OUT_2MHZ_PP);
	

	while(1)
	{


     H_SSD_void_DisplayNumber(67);
    // _delay_ms(500);

	}
	return 0;
}
