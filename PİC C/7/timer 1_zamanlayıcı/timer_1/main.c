#include "E:\DONANIM_PROJE\P�C C\7\timer 1_zamanlay�c�\timer_1\main.h"





#use fast_io(b)

int i=0;
#int_timer1 //timer1 kesmesi
void timer1_kesme()
{
 set_timer1(64286); //timer0 degeri belirleniyor projeye gore hseplan�r.
 i++;
 
if(i==50)
 output_high(pin_b0);
 if(i==100)
 {
 output_low(pin_b0);
 
 i=0;
}
}
void main()
{

   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
  
   
   setup_timer_2(T2_DISABLED,0,1);
   setup_comparator(NC_NC_NC_NC);
   setup_vref(FALSE);
   
   
   set_tris_b(0x00);
   output_b(0x00);
   
  
   
   setup_timer_1(T1_INTERNAL | T1_DIV_BY_4);
   set_timer1(64286);
  
   enable_interrupts(INT_timer1); //int_timer1 kesmesi aktif edilyor
   enable_interrupts(GLOBAL);
   
   while(1);
}

