#include "E:\DONANIM_PROJE\P�C C\2\buton_uygulamas�\main.h"


void main()
{

   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_psp(PSP_DISABLED);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   setup_comparator(NC_NC_NC_NC);
   setup_vref(FALSE);

 set_tris_a(0x01);
 set_tris_b(0x00);
 
 output_b(0x00);
 while(1)
 {
 if (input(pin_a0))
 output_high(pin_b0);
 
 else
 output_low(pin_b0);
 }
 
 
 
}
