#include<reg52.h>
#include<intrins.h>
sbit led=P2^0;
int i;
void delay()
{
	  while(i--);
}
void main()
{
	P1=0xfe;
	for(i=0;i<=6;i--){
	P1=_crol_(led,1);
	delay(50000); }
}