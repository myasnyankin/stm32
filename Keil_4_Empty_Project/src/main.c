#include "CMSIS/stm32f10x.h"
#include "stdint.h"

int8_t a8;
int16_t a16;
int32_t a32;
int64_t a64;

uint8_t b8;
uint16_t b16;
uint32_t b32;
uint64_t b64;

int8_t a[6];
int16_t b[6];

float f;
double d;

int main(void)
{

	while(1)
	{
		a8=7;
    a8=0xfff;
    a8=0x78000;
    a8=0x78100;
    a8=-1;
    a8=2.1;		
    
    a16=7;
    a16=0xfff;
    a16=0x78000;
    a16=0x78100;
    a16=-1;
    a16=2.1;		
    
		a32=7;
    a32=0xfff;
    a32=0x78000;
    a32=0x78100;
    a32=-1;
    a32=2.1;		
    
		a64=7;
    a64=0xfff;
    a64=0x78000;
    a64=0x78100;
    a64=-1;
    a64=2.1;		
    
		b8=7;
    b8=0xfff;
    b8=0x78000;
    b8=0x78100;
    b8=-1;
    b8=2.1;		
    
		b16=7;
    b16=0xfff;
    b16=0x78000;
    b16=0x78100;
    b16=-1;
    b16=2.1;

		b32=7;
    b32=0xfff;
    b32=0x78000;
    b32=0x78100;
    b32=-1;
    b32=2.1;

		b64=7;
    b64=0xfff;
    b64=0x78000;
    b64=0x78100;
    b64=-1;
    b64=2.1;		

    for (int i=0; i<7; i++)
      {
       a[i]=7;
       b[i]=7;
      }   
    f=3.3;
    d=3.3;
    int8_t *p;
    p=&a8;
    *p=6;
	}
	
	return 0;
}
