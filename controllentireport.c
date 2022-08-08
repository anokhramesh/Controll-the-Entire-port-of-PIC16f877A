/*
 * File:   controllentireport.c
 * Author:Anokhautomation
 *
 * Created on August 8, 2022, 7:47 PM
 */


#include <xc.h>
#define _XTAL_FREQ 20000000
__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_OFF & BOREN_OFF & LVP_ON & CPD_OFF & WRT_OFF & CP_OFF);
void main(void) {
    TRISD =0x00;// entire pins of port D set as output
    TRISB =0x00;// entire pins of port B set as output
    TRISC =0x00;// entire pins of port C set as output
    
    while(1) 
    {
        PORTD =0xff;// turn the entire portD HIGH
        __delay_ms(500);//wait 1/2 second
        PORTB =0xff;// turn the entire portB HIGH
        PORTC =0x00;// turn the entire portC LOW
    __delay_ms(500);//wait 1/2 second
       PORTD =0x00;// turn the entire portD LOW
       __delay_ms(500);//wait 1/2 second
       PORTB =0x00;// turn the entire portB LOW
       PORTC =0xff;// turn the entire portC HIGH
    __delay_ms(500);//wait 1/2 second
    }
     return;
}
