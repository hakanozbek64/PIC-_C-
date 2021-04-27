//recepcelikkaya.com
#include <16f877a.h>
#device adc=8
#fuses xt,nowrt,nowdt,nodebug,nobrownout,nolvp,nocpd,noput,noprotect
#use delay(clock=4M)
#use fast_io(e)
#use fast_io(c)
#use fast_io(b)
#define use_portb_lcd TRUE
#include <lcd.c>

unsigned int digital;


void main()
{
setup_timer_2(T2_DIV_BY_16,250,1);
setup_CCP1(CCP_PWM);
setup_CCP2(CCP_OFF);
setup_adc(adc_clock_div_2);
setup_adc_ports(ALL_ANALOG);

set_tris_c(0x00);
set_tris_e(0xFF);
set_tris_b(0x00);
output_c(0x00);

set_adc_channel(5); //an5 
delay_us(20);

lcd_init();
printf(lcd_putc,"\fpwm ile dc \n kontrolu");
delay_ms(1000);

set_pwm1_duty(0);

while(1)
{
digital=read_adc();
delay_us(20);

output_high(pin_c3);
output_low(pin_c4);

if(digital>250)
digital=250;

set_pwm1_duty(digital);

printf(lcd_putc,"\fdigital=%u"digital);
delay_ms(50);

}

}
