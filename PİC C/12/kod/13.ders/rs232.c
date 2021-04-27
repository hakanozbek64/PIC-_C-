#include <16f877a.h>
#fuses  xt,nowdt,nobrownout,noput,noprotect,nodebug,nolvp,nocpd,nowrt
#use delay(clock=4M)
#use rs232(baud=9600,xmit=pin_c6,rcv=pin_c7,parity=N,stop=1)
int veri;
void main()
{
while(1)
{
veri=getch();
if(veri=='b')
{
output_high(pin_B0);
}
if(veri=='i')
{
output_high(pin_B1);
}
if(veri=='s')
{
output_low(pin_B0);
output_low(pin_B1);
}
}

}
