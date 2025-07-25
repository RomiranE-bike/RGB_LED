/***************************************************************************************************************
This program was produced by the
CodeWizardAVR V1.24.8d Professional
Automatic Program Generator
© Copyright 1998-2006 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : RGB_LED
Version : 89_11_01
Date    : 21/01/2011
Author  : mahmoud esmaeili                            
Company : Pardazeh                           
Comments: 


Chip type           : ATmega8
Program type        : Application
Clock frequency     : 16.000000 MHz
Memory model        : Small
External SRAM size  : 0
Data Stack size     : 256
****************************************************************************************************************/

#include <mega8.h>
#include <stdlib.h>
#include <delay.h>


 //**************************************************************************************************************
#include "RGB_LED_blinking_89_10_26_.h"
#include "RGB_LED_shift_89_10_26_.h"
#include "RGB_LED_feed_89_10_26_.h"
#include "RGB_LED_efect_89_10_26_.h"
 //************************************************************************************************************** 
#define  s1  PINC.0
#define  s2  PINC.1
#define  s3  PINC.2
#define  s4  PINC.3
#define  s5  PINC.4
#define  s6  PINC.5


Rblinking(int,int);
Gblinking(int,int);
Bblinking(int,int);

RGblinking(int,int);
GBblinking(int,int);
RBblinking(int,int);

RGBblinking(int,int);
 //**************************************************************************************************************
shiftzeroleft(int);
shiftzeroright(int);
shiftzeroleftright(int);

shiftoneleft(int);
shiftoneright(int);
shiftoneleftright(int);

shiftleftzero(int);
shiftrightzero(int);
shiftleftrightzero(int); 

shiftleftone(int);
shiftrightone(int);
shiftleftrightone(int);

shiftleftright(int);

 //**************************************************************************************************************
Rfeedin(int,int);
Rfeedout(int,int);

Gfeedin(int,int);
Gfeedout(int,int);

Bfeedin(int,int);
Bfeedout(int,int);

RGfeedin(int,int);
RGfeedout(int,int);

RBfeedin(int,int);
RBfeedout(int,int);

GBfeedin(int,int);
GBfeedout(int,int);

RGBfeedin(int,int);
RGBfeedout(int,int);
 //**************************************************************************************************************
 Rpwm_fade_in(int);
 Rpwm_fade_out(int);
 Gpwm_fade_in(int);
 Gpwm_fade_out(int);
 Bpwm_fade_in(int);
 Bpwm_fade_out(int);
 RGpwm_fade_in(int);
 RGpwm_fade_out(int);
 GBpwm_fade_in(int);
 GBpwm_fade_out(int);
 RBpwm_fade_in(int);
 RBpwm_fade_out(int);
 RGBpwm_fade_in(int);
 RGBpwm_fade_out(int);
 //**************************************************************************************************************
 blinkingefect1(int,int,int);   //one blink
 blinkingefect2(int,int,int);   //two blink
 blinkingefect3(int,int,int);   //all blink
 //************************************************************************************************************** 
 shiftefect1(int,int);           //<<0
 shiftefect2(int,int);           //>>0
 shiftefect3(int,int);           //<<1
 shiftefect4(int,int);           //>>1
 shiftefect5(int,int);           //<<000
 shiftefect6(int,int);           //>>000
 shiftefect7(int,int);           //<<111
 shiftefect8(int,int);           //>>111
 shiftefect9(int,int);
 shiftefect10(int,int);
 shiftefect11(int,int);
 shiftefect12(int,int);
 shiftefect13(int,int);
 shiftefect14(int,int);
 shiftefect15(int,int);
 shiftefect16(int,int);
 shiftefect17(int,int);
 //**************************************************************************************************************
  
  bcdefect(int,int);
 //**************************************************************************************************************
 feedefect1(int,int);
 feedefect2(int,int);
 feedefect3(int,int);
 feedefect4(int,int);
 feedefect5(int,int);
  //**************************************************************************************************************
 pwm_efect1(int,int);
 pwm_efect2(int,int);
 pwm_efect3(int,int);
 pwm_efect4(int,int);
 pwm_efect5(int,int);


 //**************************************************************************************************************
 
process(int,int,int,int,int,int);
process1(int,int,int);
process2(int,int);
process3(int,int);
process4(int,int);
process5(int,int);

 //**************************************************************************************************************

// Declare your global variables here
//int i,b,d,e,s,f,r;
int r=0;         //rand value
/*int n=0;           //repeat number
int on=0;           //led on time
int off=0;         //led off time
int step=0;         //shift cycle 
int pwm=0;          //pwm duty cydle 0....pwm
int scope=0;        //timer1 and timer2 devision 10MHz/scope*/
 //**************************************************************************************************************
/*const int n=2;  //blinking delay ms
const int on=400;    //on time ms
const int off=400;   //off time ms

const int n=1; //shift repeat time ms
const int step-time=300;    //shift step time ms

const int n=1;   //feed time ms
const int pwm=50;    //duty cycle us 1-100 */
 //**************************************************************************************************************
void main(void)
{
/* disable interrupts */
//#asm("cli")


// Declare your local variables here

// Input/Output Ports initialization
// Port B initialization
// Func7=Out Func6=Out Func5=Out Func4=Out Func3=Out Func2=Out Func1=Out Func0=Out 
// State7=0 State6=0 State5=0 State4=0 State3=0 State2=0 State1=0 State0=0 
PORTB=0x00;
DDRB=0xFF;

// Port C initialization
// Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In 
// State6=T State5=T State4=T State3=T State2=T State1=T State0=T 
PORTC=0x00;
DDRC=0x00;

// Port D initialization
// Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In 
// State7=T State6=T State5=T State4=T State3=T State2=T State1=T State0=T 
PORTD=0x00;
DDRD=0x00;

// Timer/Counter 0 initialization
// Clock source: System Clock
// Clock value: 16000.000 kHz
TCCR0=0x00;
TCNT0=0x00;

// Timer/Counter 1 initialization
// Clock source: System Clock
// Clock value: 16000.000 kHz
// Mode: Ph. correct PWM top=00FFh
// OC1A output: Non-Inv.
// OC1B output: Non-Inv.
// Noise Canceler: Off
// Input Capture on Falling Edge
// Timer 1 Overflow Interrupt: Off
// Input Capture Interrupt: Off
// Compare A Match Interrupt: Off
// Compare B Match Interrupt: Off
TCCR1A=0x00;
TCCR1B=0x00;
TCNT1H=0x00;
TCNT1L=0x00;
ICR1H=0x00;
ICR1L=0x00;
OCR1AH=0x00;
OCR1AL=0x00;
OCR1BH=0x00;
OCR1BL=0x00;

// Timer/Counter 2 initialization
// Clock source: System Clock
// Clock value: 16000.000 kHz
// Mode: Phase correct PWM top=FFh
// OC2 output: Non-Inverted PWM
ASSR=0x00;
TCCR2=0x00;
TCNT2=0x00;
OCR2=0x00;

// External Interrupt(s) initialization
// INT0: Off
// INT1: Off
MCUCR=0x00;

// Timer(s)/Counter(s) Interrupt(s) initialization
TIMSK=0x00;

// Analog Comparator initialization
// Analog Comparator: Off
// Analog Comparator Input Capture by Timer/Counter 1: Off
ACSR=0x80;
SFIOR=0x00;

while (1)
      {
       
           
      //Place your code here
          /* int i;
           int n;
           int on;
           int off;
           int step;
           int pwm;
           int scope;*/ 
           
 //**************************************************************************************************************
            if(s6==0 && s5==0 && s4==0 && s3==0 && s2==0 && s1==0)     // state default mode1 : 000000 
                  {
                
                    r=((rand() % 100));
               while(r !=(7||27||57||47||87||17||53||90||75||18||97||32||12||91))
                   {
                   r=((rand() % 100));
	            switch(r)
	         {      
	          
                  case  7 :  process(1,400,400,400,50,255);break;        //n,on,off,step,pwm,scope
                  case 27 :  process(1,200,200,200,30,128);break;
                  case 57 :  process(1,400,400,400,50,255);break;        //n,on,off,step,pwm,scope
                  case 47 :  process(1,200,200,200,30,128);break;
                  case 87 :  process(1,400,400,400,50,255);break;        //n,on,off,step,pwm,scope
                  case 17 :  process(1,200,200,200,30,128);break;
                  case 53 :  process(1,400,400,400,50,255);break;        //n,on,off,step,pwm,scope
                  case 90 :  process(1,200,200,200,30,128);break;
                  case 75 :  bcdefect(1,400);break;
                  case 18 :  process1(1,400,400);break;
                  case 97 :  process2(1,400);break;
                  case 32:   process3(1,400);break;
                  case 44:   process4(1,50);break;
                  case 91:   process5(1,255);break;
                  /*default :  
                  { 
                         pwm_efect1(1,255);
                         pwm_efect2(1,255);
                         pwm_efect3(1,255);
                         pwm_efect4(1,255);
                         pwm_efect5(1,255);
                         
                         TCCR1A=0x00;
                         TCCR1B=0x00;
                         TCCR2=0x00;
                         
                         feedefect1(1,50);
                         feedefect2(1,50);
                         feedefect3(1,50);
                         feedefect4(1,50);
                         feedefect5(1,50);
                             }break; 
                             //end of default */
                   
             } // end of switch 
              
             if(r ==(7||27||57||47||87||17||53||90||75||18||97||32||12||91))
             r=0;
             break;
             
             }; //end of while
                          
             } //end of  if
             
 //**************************************************************************************************************
   if(s6==1 && s5==1 && s4==1 && s3==1 && s2==1 && s1==1)     // state default mode2 : 111111 
                  {
                
                    r=((rand() % 100));
               while(r !=(7||27||57||47||87||17||53||90||75||18||97||32||12||91))
                   {
                   r=((rand() % 100));
	            switch(r)
	         {      
	          
                  case  7 :  process(1,400,400,400,50,255);break;        //n,on,off,step,pwm,scope
                  case 27 :  process(1,200,200,200,30,128);break;
                  case 57 :  process(1,400,400,400,50,255);break;        //n,on,off,step,pwm,scope
                  case 47 :  process(1,200,200,200,30,128);break;
                  case 87 :  process(1,400,400,400,50,255);break;        //n,on,off,step,pwm,scope
                  case 17 :  process(1,200,200,200,30,128);break;
                  case 53 :  process(1,400,400,400,50,255);break;        //n,on,off,step,pwm,scope
                  case 90 :  process(1,200,200,200,30,128);break;
                  case 75 :  bcdefect(3,400);break;
                  case 18 :  process1(3,700,700);break;
                  case 97 :  process2(3,700);break;
                  case 32:   process3(3,700);break;
                  case 44:   process4(1,70);break;
                  case 91:   process5(1,255);break;
                  /*default :  
                  { 
                         pwm_efect1(1,255);
                         pwm_efect2(1,255);
                         pwm_efect3(1,255);
                         pwm_efect4(1,255);
                         pwm_efect5(1,255);
                         
                         TCCR1A=0x00;
                         TCCR1B=0x00;
                         TCCR2=0x00;
                         
                         feedefect1(1,50);
                         feedefect2(1,50);
                         feedefect3(1,50);
                         feedefect4(1,50);
                         feedefect5(1,50);
                             }break; 
                             //end of default */
                   
             } // end of switch 
              
             if(r ==(7||27||57||47||87||17||53||90||75||18||97||32||12||91))
             r=0;
             break;
             
             }; //end of while
                          
             } //end of  if
 //**************************************************************************************************************
             
 //**************************************************************************************************************        
           
                   else if(s6==0 && s5==0 && s4==0 && s3==0 && s2==0 && s1==1)            //state1 : 000001
                     {
           
                       process1(1,400,400);
 
                      }
 //**************************************************************************************************************
               else if(s6==0 && s5==0 && s4==0 && s3==0 && s2==1 && s1==0)          // state2 : 000010 
                  {
           
                      process2(1,400);
 
                  }
  //**************************************************************************************************************
               else if(s6==0 && s5==0 && s4==0 && s3==0 && s2==1 && s1==1)          // state3 : 000011 
                  {
           
                      process3(1,400);
 
                   }
        
 //**************************************************************************************************************
             else if(s6==0 && s5==0 && s4==0 && s3==1 && s2==0 && s1==0)           // state4 : 000100 
                  {
           
                     process4(1,50);
 
                   }
                   
 //**************************************************************************************************************
              else if(s6==0 && s5==0 && s4==0 && s3==1 && s2==0 && s1==1)         // state5 : 000101 
                  {
           
                     process5(1,255);
 
                   }
                   
                   
 //************************************************************************************************************** 
                   else if(s6==0 && s5==0 && s4==0 && s3==1 && s2==1 && s1==0)     // state6 : 000110 
                  {
           
                     shiftefect1(1,300);
 
                   }
  //**************************************************************************************************************
                   else if(s6==0 && s5==0 && s4==0 && s3==1 && s2==1 && s1==1)     // state7 : 000111 
                  {
           
                      shiftefect2(1,300);
 
                   }
  //**************************************************************************************************************
                    else if(s6==0 && s5==0 && s4==1 && s3==0 && s2==0 && s1==0)     // state8 : 001000 
                  {
           
                      shiftefect3(1,300);
 
                   }
  //**************************************************************************************************************
                   else if(s6==0 && s5==0 && s4==1 && s3==0 && s2==0 && s1==1)     // state9 : 001001 
                  {
           
                      shiftefect4(1,300);
 
                   }
  //**************************************************************************************************************
                   else if(s6==0 && s5==0 && s4==1 && s3==0 && s2==1 && s1==0)     // state10 : 001010 
                  {
           
                    shiftefect5(1,300);
 
                   }
  //**************************************************************************************************************
                   else if(s6==0 && s5==0 && s4==1 && s3==0 && s2==1 && s1==1)     // state11 : 001011 
                  {
           
                      shiftefect6(1,300);
 
                   }
  //**************************************************************************************************************
                   else if(s6==0 && s5==0 && s4==1 && s3==1 && s2==0 && s1==0)     // state12 : 001100 
                  {
           
                     shiftefect7(1,300);
 
                   }
  //**************************************************************************************************************
                   else if(s6==0 && s5==0 && s4==1 && s3==1 && s2==0 && s1==1)     // state13 : 001101 
                  {
           
                    shiftefect8(1,300);
 
                   }
  //**************************************************************************************************************
  
                   else if(s6==0 && s5==0 && s4==1 && s3==1 && s2==1 && s1==0)     // state14 : 001110 
                  {
           
                      shiftefect9(1,300);
 
                   }
  //**************************************************************************************************************
                   else if(s6==0 && s5==0 && s4==1 && s3==1 && s2==1 && s1==1)     // state15 : 001111 
                  {
           
                      shiftefect10(1,300);
 
                   }
  //**************************************************************************************************************
                   else if(s6==0 && s5==1 && s4==0 && s3==0 && s2==0 && s1==0)     // state16 : 010000 
                  {
           
                    shiftefect11(1,300);
 
                   }
  //**************************************************************************************************************
                   else if(s6==0 && s5==1 && s4==0 && s3==0 && s2==0 && s1==1)     // state17 : 010001 
                  {
           
                      shiftefect12(1,300);
 
                   }
  //**************************************************************************************************************
                  else if(s6==0 && s5==1 && s4==0 && s3==0 && s2==1 && s1==0)     // state18 : 010010 
                  {
           
                       shiftefect13(1,300);
 
                   }
  //**************************************************************************************************************
                    else if(s6==0 && s5==1 && s4==0 && s3==0 && s2==1 && s1==1)     // state19 : 010011 
                  {
           
                       shiftefect14(1,300);
 
                   }
  //**************************************************************************************************************
                   else if(s6==0 && s5==1 && s4==0 && s3==1 && s2==0 && s1==0)     // state20 : 010100 
                  {
           
                      shiftefect15(1,300);
 
                   }
  //**************************************************************************************************************
                   else if(s6==0 && s5==1 && s4==0 && s3==1 && s2==0 && s1==1)     // state21 : 010101
                  {
           
                     shiftefect16(1,300);
 
                   }
  //**************************************************************************************************************
                   else if(s6==0 && s5==1 && s4==0 && s3==1 && s2==1 && s1==0)     // state22 : 010110 
                  {
           
                     shiftefect17(1,300);
 
                   }
  //**************************************************************************************************************
                   else if(s6==0 && s5==1 && s4==0 && s3==1 && s2==1 && s1==1)     // state23 : 010111
                  {
           
                     bcdefect(1,300);
 
                   }
  //**************************************************************************************************************
                   else if(s6==0 && s5==1 && s4==1 && s3==0 && s2==0 && s1==0)     // state24 : 011000 
                  {
           
                     blinkingefect1(1,300,300);
 
                   }
  //**************************************************************************************************************
  
                   else if(s6==0 && s5==1 && s4==1 && s3==0 && s2==0 && s1==1)     // state25 : 011001 
                  {
           
                     blinkingefect2(1,300,300);
 
                   }
  //**************************************************************************************************************
                   else if(s6==0 && s5==1 && s4==1 && s3==0 && s2==1 && s1==0)     // state26 : 011010 
                  {
           
                    blinkingefect3(1,300,300);
 
                   }
  //**************************************************************************************************************
                   else if(s6==0 && s5==1 && s4==1 && s3==0 && s2==1 && s1==1)     // state27 : 011011 
                  {
           
                    pwm_efect1(1,255);TCCR1A=0x00;TCCR1B=0x00;TCCR2=0x00;
 
                   }
  //**************************************************************************************************************
                   else if(s6==0 && s5==1 && s4==1 && s3==1 && s2==0 && s1==0)     // state28 : 011100 
                  {
           
                     pwm_efect2(1,255);TCCR1A=0x00;TCCR1B=0x00;TCCR2=0x00;
 
                   }
  //**************************************************************************************************************
                   else if(s6==0 && s5==1 && s4==1 && s3==1 && s2==0 && s1==1)     // state29 : 011101 
                  {
           
                      pwm_efect3(1,255);TCCR1A=0x00;TCCR1B=0x00;TCCR2=0x00;
 
                   }
  //**************************************************************************************************************
                    else if(s6==0 && s5==1 && s4==1 && s3==1 && s2==1 && s1==0)     // state30 : 011110 
                  {
           
                     pwm_efect4(1,255);TCCR1A=0x00;TCCR1B=0x00;TCCR2=0x00;
 
                   }
  //**************************************************************************************************************
                   else if(s6==0 && s5==1 && s4==1 && s3==1 && s2==1 && s1==1)     // state31 : 011111 
                  {
           
                     pwm_efect5(1,255);TCCR1A=0x00;TCCR1B=0x00;TCCR2=0x00;
 
                   }
  //**************************************************************************************************************
                   else if(s6==1 && s5==0 && s4==0 && s3==0 && s2==0 && s1==0)     // state32 : 100000 
                  {
           
                     feedefect1(1,50);
 
                   }
  //**************************************************************************************************************
                   else if(s6==1 && s5==0 && s4==0 && s3==0 && s2==0 && s1==0)     // state33 : 100001 
                  {
           
                     feedefect2(1,50);
 
                   }
  //**************************************************************************************************************
                   else if(s6==1 && s5==0 && s4==0 && s3==0 && s2==1 && s1==0)     // state34 : 100010 
                  {
           
                     feedefect3(1,50);
 
                   }
  //**************************************************************************************************************
                   else if(s6==1 && s5==0 && s4==0 && s3==0 && s2==1 && s1==1)     // state35 : 100011 
                  {
           
                     feedefect4(1,50);
 
                   }
  //**************************************************************************************************************
  
                   else if(s6==1 && s5==0 && s4==0 && s3==1 && s2==0 && s1==0)     // state36 : 100100 
                  {
           
                     feedefect5(1,50);
 
                   }

                
 //************************************************************************************************************** 
              
          
 
      }; //end of while
          
      
/* enable interrupts */
//#asm("sei")


} 
 //**************************************************************************************************************

process(int n,int on,int off,int step,int pwm,int scope)
{
 
           r=((rand() % 100));
           while (r !=(7||23||27||47||57||67||77||84||94||87||97|| 
                      44||14||24||54||73||12|| 3||33||93|| 5|| 
                      25||45||75||95|| 8||28||48||78||98))
                   {
                   r=((rand() % 100));
	   switch(r)
	     {
	         case  7:shiftefect1(n,step);break;
	         case 17:shiftefect2(n,step);break;
	         case 23:shiftefect3(n,step);break;
	         case 27:shiftefect4(n,step);break;
	         case 47:shiftefect5(n,step);break;
	         case 57:shiftefect6(n,step);break;
	         case 67:shiftefect7(n,step);break;
	         case 77:shiftefect8(n,step);break;
	         case 84:shiftefect9(n,step);break;
	         case 94:shiftefect10(n,step);break;
	         case 87:shiftefect11(n,step);break;
		 case 97:shiftefect12(n,step);break;
		 case 44:shiftefect13(n,step);break;
		 case 14:shiftefect14(n,step);break;
		 case 24:shiftefect15(n,step);break;
		 case 54:shiftefect16(n,step);break;
		 case 73:shiftefect17(n,step);break;
		 
		 
		 case 12: bcdefect(n,step);break;
		 
		 case  3:blinkingefect1(n,on,off);break;
		 case 33:blinkingefect2(n,on,off);break;
		 case 93:blinkingefect3(n,on,off);break;
		      
		 case  5:pwm_efect1(n,scope);TCCR1A=0x00;TCCR1B=0x00;TCCR2=0x00;break;
		 case 25:pwm_efect2(n,scope);TCCR1A=0x00;TCCR1B=0x00;TCCR2=0x00;break;
		 case 45:pwm_efect3(n,scope);TCCR1A=0x00;TCCR1B=0x00;TCCR2=0x00;break;
		 case 75:pwm_efect4(n,scope);TCCR1A=0x00;TCCR1B=0x00;TCCR2=0x00;break;
		 case 95:pwm_efect5(n,scope);TCCR1A=0x00;TCCR1B=0x00;TCCR2=0x00;break;
		 
		 case  8:feedefect1(n,pwm);break;
		 case 28:feedefect2(n,pwm);break;
		 case 48:feedefect3(n,pwm);break;
		 case 78:feedefect4(n,pwm);break;
		 case 98:feedefect5(n,pwm);break;

             } // end of switch 
             if(r ==(7||23||27||47||57||67||77||84||94||87||97|| 
                      44||14||24||54||73||12|| 3||33||93|| 5|| 
                      25||45||75||95|| 8||28||48||78||98))
                      r=0;
                   break;
             } //end of while
}

 //**************************************************************************************************************
process1(int n,int on,int off)
{         
   int i;
 
           for(i=on;i>=100;i=i-100)
           {
           
           on=i;
           off=i;
           blinkingefect1(n,on,off);   //one blink
           blinkingefect2(n,on,off);   //two blink
           blinkingefect3(n,on,off);   //all blink 
           }                              

}
 //**************************************************************************************************************
process2(int n,int step)
 {
 
 int i;
  for(i=step;i>=100;i=i-100)
           {
           
           step=i;
          
             shiftefect1(n,step);           //<<0
             shiftefect2(n,step);           //>>0
             shiftefect3(n,step);           //<<1
             shiftefect4(n,step);           //>>1
             shiftefect5(n,step);           //<<000
             shiftefect6(n,step);           //>>000
             shiftefect7(n,step);           //<<111
             shiftefect8(n,step);           //>>111
             shiftefect9(n,step);
             shiftefect10(n,step);
             shiftefect11(n,step);
             shiftefect12(n,step);
             shiftefect13(n,step);
             shiftefect14(n,step);
             shiftefect15(n,step);
             shiftefect16(n,step);
             shiftefect17(n,step);
           }
 }
 //**************************************************************************************************************
process3(int n,int step)
 {
 int i;
  for(i=step;i>=100;i=i-100)
                      {
                        
                        step=i;
          
                        bcdefect(n,step);
           
                    }
 }
 //**************************************************************************************************************
process4(int n,int pwm)
 { 
 int i;
  for(i=pwm;i>=10;i=i-10)
                      {
                        
                        pwm=i;
          
                        feedefect1(n,pwm);
                        feedefect2(n,pwm);
                        feedefect3(n,pwm);
                        feedefect4(n,pwm);
                        feedefect5(n,pwm);
           
                    } 
 } 
 //**************************************************************************************************************
process5(int n,int scope)
  { 
  int i;
    for(i=scope;i>=128;i=i/2)
                      {
                        
                         scope=i;
                         pwm_efect1(n,scope);
                         pwm_efect2(n,scope);
                         pwm_efect3(n,scope);
                         pwm_efect4(n,scope);
                         pwm_efect5(n,scope);
                         
                         TCCR1A=0x00;
                         TCCR1B=0x00;
                         TCCR2=0x00;
                                 
                    }
  }
 //************************************************************************************************************** 
