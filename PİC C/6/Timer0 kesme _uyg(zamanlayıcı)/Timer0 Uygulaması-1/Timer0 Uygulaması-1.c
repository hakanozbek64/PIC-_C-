#include "C:\Users\rclk\Desktop\pic  c denemeleri\Timer0 Uygulamasý-1\Timer0 Uygulamasý-1.h"

#use fast_io(b)

int i=0;
#int_timer0 //timer0 kesmesi
void timer0_kesme()
{
 set_timer0(60); //timer0 degeri belirleniyor
 i++;
 
 if(i==10)
 output_high(pin_b0);
 
 if(i==20)
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
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   setup_comparator(NC_NC_NC_NC);
   setup_vref(FALSE);
   
   set_tris_b(0x00);
   output_b(0x00);
   
   setup_timer_0(RTCC_INTERNAL | RTCC_DIV_256); //timer0 ayarlarý yapýlýyor
   set_timer0(60);
  
   enable_interrupts(INT_timer0); //int_timer0 kesmesi aktif edilyor
   enable_interrupts(GLOBAL);
   
   while(1);
}
