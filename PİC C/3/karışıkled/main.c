#include "E:\DONANIM_PROJE\PÝC C\3\karýþýkled\main.h"

int btsyc=0;
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


set_tris_a(0x001);
set_tris_b(0x00);

output_b(0x00);

while(1){

if(input(pin_a0))
{
btsyc++;

while(input(pin_a0));
}
 if(btsyc==1)
{
delay_ms(150);
output_high(pin_b0);
}

if(btsyc==2){

delay_ms(150);

output_high(pin_b1);

}

if(btsyc==3)
{

delay_ms(150);

output_high(pin_b2);
}
if(btsyc==4){

delay_ms(150);

output_toggle(pin_b0);

delay_ms(150);

output_toggle(pin_b1);

delay_ms(150);
output_toggle(pin_b2);

delay_ms(150);
}

if(btsyc==5)

btsyc==0;
}
}
