#include<reg52.h>
sbit led1=P2^2;
sbit led2=P2^3;
sbit led3=P2^4;
sbit led4=P2^5;
void main()
{
   while(1)
   {
   led1=1;
   led2=0;
   led3=1;
   led4=0;
   }





}