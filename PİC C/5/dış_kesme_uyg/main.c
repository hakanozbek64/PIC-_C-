#include "E:\DONANIM_PROJE\PÝC C\5\dýþ_kesme_uyg\main.h"

#use fast_io(b)

int i;

#int_ext
void kesme()
{
 output_high(pin_b1);
 delay_ms(100);
 output_low(pin_b1);
 delay_ms(100);
 
 for(i=0;i<10;i++)
  {
  output_high(pin_b1);
  delay_ms(25);
  output_low(pin_b1);
  delay_ms(25);
  }
}
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

   set_tris_b(0x01);
   output_b(0x00);
   
   ext_int_edge(H_TO_L); 
   
   enable_interrupts(INT_EXT);
   enable_interrupts(GLOBAL); 
   
   while(1)
   {}
}
