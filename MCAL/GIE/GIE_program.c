/****************************************************************/
/****************************************************************/
/***********************   YEHIA SHAHIN   ***********************/
/***********************   Layer :MCAL   ***********************/
/***********************   SWC (DRIVER):GIE *********************/
/***********************   DATA : 14-9-2020 *********************/
/***********************   VERSION : 1.00   *********************/
/****************************************************************/
/****************************************************************/


#include "STD_TYPES.h"
#include "BIT_MATH"

void GIE_voidEnableGlobal(void)
{
	SET_BIT(SREG,SREG_I);
}
void GIE_voidDisableGlobal(void)
{
	
	CLR_BIT(SREG,SREG_I);
}