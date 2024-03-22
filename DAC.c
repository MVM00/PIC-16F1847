/* Code to write the value 7 to the DAC using function dac_write () 
and record the value measured at the output pin (A2) using a multimeter. */

#include <16F1847.h>  //Include 16F1847 header file
#fuses INTRC_IO, NOWDT, NOPROTECT, MCLR, NOBROWNOUT
#use delay(clock = 8000000) //Set delay ref

void setup_DAC()
{
    setup_dac(DAC_VSS_VDD | DAC_OUTPUT);
}

void main()
{

    setup_DAC();

    dac_write(7);
    
}
