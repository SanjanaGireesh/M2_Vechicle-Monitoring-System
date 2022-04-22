#include <mega328.h>

#include <delay.h>
/**
 * @file Vehicle Monitoring System.c
 * @author Sanjana G (malugeee@gmail.com)
 * @brief Vehicle Monitoring System Monitors the Voltage of the Battery
 * @version 0.1
 * @date 2022-04-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */
// Alphanumeric LCD functions
#include <alcd.h>
int T1,T2;

// Declare your global variables here

// Standard Input/Output functions
#include <stdio.h>

// Voltage Reference: AREF pin
#define ADC_VREF_TYPE ((0<<REFS1) | (0<<REFS0) | (0<<ADLAR))


// Read the AD conversion result
unsigned int read_adc(unsigned char adc_input)
{
ADMUX=adc_input | ADC_VREF_TYPE;
// Delay needed for the stabilization of the ADC input voltage
delay_us(10);
// Start the AD conversion
ADCSRA|=(1<<ADSC);
// Wait for the AD conversion to complete
while ((ADCSRA & (1<<ADIF))==0);
ADCSRA|=(1<<ADIF);
return ADCW;
}