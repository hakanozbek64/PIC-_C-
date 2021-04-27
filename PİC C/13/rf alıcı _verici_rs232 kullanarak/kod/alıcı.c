#include <16f877a.h>
#fuses xt,nowrt,nowdt,nobrownout,nolvp,nocpd,nodebug,noprotect,noput
#use delay(clock=4M)
#use rs232(baud=600,parity=N,rcv=pin_c7,bits=8)

char e;

void main()
{
set_tris_b(0x00);
output_b(0x00);
while(1)
{
if(getch()=='X')
{
e=getch();
if(e=='A')
{
output_high(pin_B0);
}
if(e=='B')
{
output_low(pin_b0);
}
}
}
}
