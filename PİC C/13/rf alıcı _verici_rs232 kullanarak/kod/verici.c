#include <16f877a.h>
#fuses xt,nowrt,nowdt,nobrownout,nolvp,nocpd,nodebug,noprotect,noput
#use delay(clock=4M)
#use rs232(baud=600,parity=N,xmit=pin_c6,rcv=pin_c7,bits=8)
int veri;

void main()
{

while(1)
{
veri=getch();
if(veri=='b')
{
putc(0b01010101);
putc('X');
putc('A');
delay_ms(50);
}
if(veri=='s')
{
putc(0b01010101);
putc('X');
putc('B');
delay_ms(50);
}


}
}



