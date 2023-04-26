/*
 * ADC.h
 *
 * Created: 4/20/2023 6:18:00 AM
 *  Author: acer
 */ 

/*
#ifndef ADC_H_
#define ADC_H_

#include "../../register.h"
#include "../../types.h"
#include "ADC_config.h"

// ADC channels
typedef enum
{
	ADC_CH_0,
	ADC_CH_1,
	ADC_CH_2,
	ADC_CH_3,
	ADC_CH_4,
	ADC_CH_5,
	ADC_CH_6,
	ADC_CH_7
	}ADC_CH_type;

// ADC voltage select
#define ADC_VREF_clr_msk   0b00111111	
#define ADC_VREF_AVCC      0b01000000	
#define ADC_VREF_AREF      0b00000000
#define ADC_VREF_2_56      0b11000000	

// ADC modes
#define ADC_mode_auto_trigger   1
#define ADC_single_conversion   0	

// ADC adjust
#define ADC_right_adjust  0
#define ADC_left_adjust   1

// ADC presecaler 
#define ADC_prescaler_clr_msk   0b11111000
#define ADC_prescaler_2         0b00000000
#define ADC_prescaler_4         0b00000010
#define ADC_prescaler_8         0b00000011
#define ADC_prescaler_16        0b00000100
#define ADC_prescaler_32        0b00000101
#define ADC_prescaler_64        0b00000110
#define ADC_prescaler_128       0b00000111

// ADC auto trigger
#define ADC_auto_trig_clr_msk        0b00011111
#define ADC_auto_trig_free_running   0b00000000
#define ADC_auto_trig_analog_comp    0b00100000
#define ADC_auto_trig_exit0          0b01000000
#define ADC_auto_trig_timer0_comp    0b01100000
#define ADC_auto_trig_timer0_ovf     0b10000000
#define ADC_auto_trig_timer1_comp    0b10100000
#define ADC_auto_trig_timer1_ovf     0b11000000
#define ADC_auto_trig_timer1_capt    0b11100000

//ADC mask to clear channel
#define ADC_CH_selector_clr_msk      0b11100000


void ADC_init(void);
void ADC_start_conversion (ADC_CH_type ADC_CH);

uint16_t ADC_Read(void);



#endif /* ADC_H_ */