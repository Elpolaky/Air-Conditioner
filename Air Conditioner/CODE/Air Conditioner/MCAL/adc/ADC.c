/*
 * ADC.h
 *
 * Created: 4/20/2023 6:18:15 AM
 *  Author: acer
 */ 


#include "ADC.h"
/*

void ADC_init(void)
{
// slecting voltage ref
ADMUX &=  ADC_VREF_clr_msk;
ADMUX |=  ADC_volatge_ref_selector; 
// select ADC mode
#if  ADC_mode_selector ==  ADC_mode_auto_trigger 
     ADCSRA   |= (1<<5);
	 SFIOR &= ADC_auto_trig_clr_msk;
	 SFIOR |= ADC_auto_trig_source_selector;
#elif  ADC_mode_selector ==  ADC_single_conversion  
     ADCSRA &= ~(1<<5);
#endif
// select adjustement
#if     ADC_adjust_selector ==  ADC_right_adjust
        ADMUX &= ~(1<<5);
#elif   ADC_adjust_selector ==  ADC_left_adjust
        ADMUX |=  (1<<5);
#endif
// clear interrupt flag
ADCSRA |= (1<<4);

//enabling ADC
ADCSRA |= (1<<7);	
}


void ADC_start_conversion (ADC_CH_type ADC_CH)
{
// selecting ADC channel
ADMUX &= ADC_CH_selector_clr_msk;
ADMUX |= ADC_CH;
// ADC start conversion
ADCSRA |= (1<<6);
// wait until conversion is done
while((ADCSRA & (1<<6))==0);

}

uint16_t ADC_Read(void)
{
 
 return ADCLH;	
}
*/