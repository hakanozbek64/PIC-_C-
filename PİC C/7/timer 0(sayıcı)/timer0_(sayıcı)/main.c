#include "E:\DONANIM_PROJE\PÝC C\7\timer0_(sayýcý)\main.h"




#use fast_io(b)

int i=0;
#int_timer0 //timer0 kesmesi
void timer0_kesme()
{
 set_timer0(255); //timer0 degeri belirleniyor
 i++;
 
if(i<3);
 output_b(i);
 
 if(i==3)// 2 kez basýlmasýndan
 { 
  
  i=0;
 }
 
 
}
void main()
{

   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
  
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   setup_comparator(NC_NC_NC_NC);
   setup_vref(FALSE);
   
   set_tris_a(0x10);// RA 4. PÝN giriþ ayarladým.
   set_tris_b(0x00);
   output_b(0x00);
   
   setup_timer_0(RTCC_ext_H_to_L | RTCC_DIV_2); //timer0 ayarlarý yapýlýyor
   set_timer0(255);
  
   enable_interrupts(INT_timer0); //int_timer0 kesmesi aktif edilyor
   enable_interrupts(GLOBAL);
   
   while(1);
}

