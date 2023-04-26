#include "APP.h"

/***********************************************************************************************************************
                                    GLOBAL VARIABLES 
*****************************************************************************************************************************/
uint8_t g_tempValue = 20 ; // default value

uint8_t g_flagStage ;
uint8_t g_flagTimer ;
/***********************************************************************************************************************
                                   FUNCTION IMPLMENTATION
****************************************************************************************************************************/

void adjust_Welcome(void){

	LCD_GoTo(1,0);
	LCD_Write_String("MAX TEMP IS 35");
	LCD_GoTo(2,0);
	LCD_Write_String("MIN TEMP IS 18");
	TIMER_0_DELAY_MS(500);
	LCD_Clear();
	
	
	LCD_GoTo(1,0);
	LCD_Write_String("PLEASE CHOOSE ");
	LCD_GoTo(2,0);
	LCD_Write_String("REQUIRED TEMP ");
	TIMER_0_DELAY_MS(500);
	LCD_Clear();
}


void adjust_stage(void){
uint8_t key = 0;
	 while (key != '3' && g_flagStage != 2)
	 {
		key = KEYPAD_getKey() ;
		TIMER_0_DELAY_MS(50);
			switch(key){
				case '1' :
				g_tempValue++;
				g_flagTimer = 0;
				break;
				
				case '2' :
				g_tempValue--;
				LCD_Clear();
				g_flagTimer = 0;
				break;
				
				default :
				g_flagTimer = 1;
				break;
				
			}
	
			
			LCD_GoTo(1,7);
			LCD_Write_Number(g_tempValue);
			LCD_GoTo(2,0);
			for (uint8_t i= 18 ; i <= g_tempValue ; i++)
			{
				LCD_Write_Charecter('|');
			}
			
	
	}
	g_flagStage = 2 ;
}



void app_Init(void){
	
	KEYPAD_init();
	TIMER_2_INT();
	LCD_INIT();
}

void app_Start(void){
	
	if (g_flagStage == 0 ){
		//starting 
		
		g_flagStage = 1 ;
	}
	
	
	if (g_flagStage == 1 ){
	
		 adjust_Welcome();
		 adjust_stage();
			
		
	 
	}
	
		
	 if (g_flagStage == 2 ){
			//set
			
		 LCD_Clear();
			
			
	}
	

}

