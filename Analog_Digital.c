#include <16F1847.h>                     //Include 16F1847 header file
#fuses INTRC_IO, NOWDT, NOLVP, PUT, MCLR //Set internal oscillator, no watchdog, 
                                         //external MCLR, no brownout detection
#use delay(clock = 8000000)              //Set delay ref

void main()
{
    while (1)
    {
        output_high(PIN_B4);
        delay_ms(500);
        output_low(PIN_B4);
        delay_ms(500);        
    }
}
