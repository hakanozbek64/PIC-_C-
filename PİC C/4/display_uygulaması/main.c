#include "E:\DONANIM_PROJE\PÝC C\4\display_uygulamasý\main.h"


#define SIZE 10

#use fast_io(b)

const int display[16]={0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7C, 0x07, 0x7F, 0x6F, 0x77, 0x7C, 0x39, 0x5E, 0x79, 0x71};

int i;

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
   
   set_tris_b(0x00);
   output_b(0x00);
   
   while(1)
   {
    for(i=0;i<16;i++)
    {
    output_b(display[i]);
    delay_ms(SÝZE);
    }
   
   
   }
  
} 

