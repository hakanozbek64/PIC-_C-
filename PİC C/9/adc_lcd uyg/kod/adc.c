#include <16f877a.h>
#device adc=10
#fuses XT,NOLVP,NOBROWNOUT,NOWDT,NOPROTECT,NODEBUG,NOPUT,NOWRT,NOCPD
#use delay(clock=4000000)
#use fast_io(a)
#use fast_io(b)
#define use_portb_lcd TRUE
#include <lcd.c>

unsigned long int dijital;
float volt;

void main()
{
set_tris_a(0x01); //0000 0001
set_tris_b(0x00);

setup_adc(adc_clock_div_32);
setup_adc_ports(all_analog);

lcd_init();
printf(lcd_putc," by  hakan ozbek \n");

delay_ms(1000);
printf(lcd_putc,"adc uygulamalari");

delay_ms(1000);

while(1)
{
set_adc_channel(0);
delay_us(50); //muhakkak verilmeli

dijital=read_adc();
volt=0.0048828*dijital;

printf(lcd_putc,"\fdijital=%lu",dijital);
lcd_gotoxy(1,2);
printf(lcd_putc,"analog=%.2fV",volt);
delay_ms(1000);



}
}
