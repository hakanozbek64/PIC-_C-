#include <16f877a.h>
#device ADC=10
#fuses XT,NOWRT,NOPROTECT,NOWDT,NOLVP,NOCPD,NODEBUG,NOPUT,NOBROWNOUT
#use delay(clock=4M)
#use fast_io(a)
#define use_portb_lcd TRUE
#include <lcd.c>

int dijital;
float sicaklik,Mvolt;

void main()
{
set_tris_a(0x01); //ra0 aktif
setup_adc(adc_clock_div_32);
setup_adc_ports(AN0);
lcd_init();
set_adc_channel(0);
delay_us(50);
printf(lcd_putc,"\fSicaklik=");

while(1)
{
dijital=read_adc();
Mvolt=(0.0048828412*dijital)*1000;
sicaklik=(Mvolt/10)+2;

lcd_gotoxy(10,1);
printf(lcd_putc,"%f%cC",sicaklik,223);
lcd_gotoxy(1,2);
printf(lcd_putc,"Mvolt=%f",Mvolt);
delay_ms(1000);
}

}
