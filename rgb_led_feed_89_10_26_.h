 //************************************************************************************************************** 
Rpwm_fade_in(int scope) {
    int d = 0;
    int bright = 0;
    TCCR1A=0xA1;
    TCCR1B=0x01;
	//gradually increase duty cycle
       
	for(d=0;d<scope;d++) {
		bright++;
		OCR1A = bright;
		delay_ms(10);
	} 

} 
 //**************************************************************************************************************
Rpwm_fade_out(int scope) {
    int d = 0;
    int bright = 0;
    TCCR1A=0xA1;
    TCCR1B=0x01;
	//gradually decrease duty cycle
	for(d=0;d<scope;d++) {
		bright--;
		OCR1A = bright;
		delay_ms(10);
	}

} 

 //**************************************************************************************************************

Gpwm_fade_in(int scope) { 

            //gradually increase duty cycle
     int d = 0;
     int bright = 0;
     TCCR1A=0xA1;
     TCCR1B=0x01;     
	for(d=0;d<scope;d++) {
		bright++;
		OCR1B = bright;
		delay_ms(10);
	} 

}
 //**************************************************************************************************************
Gpwm_fade_out(int scope) {
   int d = 0;
   int bright = 0;
   TCCR1A=0xA1;
   TCCR1B=0x01;
	//gradually decrease duty cycle
	for(d=0;d<scope;d++) {
		bright--;
		OCR1B = bright;
		delay_ms(10);
	}

} 
 //**************************************************************************************************************
Bpwm_fade_in(int scope) {

	//gradually increase duty cycle
   int d = 0; 
   int bright = 0;
   TCCR2=0x61;
	for(d=0;d<scope;d++) {
		bright++;
		OCR2 = bright;
		delay_ms(10);
	}

}
 //**************************************************************************************************************
Bpwm_fade_out(int scope) {
  int d = 0;
  int bright = 0;
  TCCR2=0x61;
	//gradually decrease duty cycle
	for(d=0;d<scope;d++) {
		bright--;
		OCR2 = bright;
		delay_ms(10);
	}

} 

 //**************************************************************************************************************

RGpwm_fade_in(int scope)
{
  	//gradually increase duty cycle
   int d = 0; 
   int bright = 0;
   
   TCCR1A=0xA1;
   TCCR1B=0x01;

   
	for(d=0;d<scope;d++) {
		bright++;
		OCR1A=bright;
		OCR1B=bright;
	        delay_ms(10);
	        }
}
 //**************************************************************************************************************
RGpwm_fade_out(int scope)
{ 
   int d = 0;
   int bright = 0;
   TCCR1A=0xA1;
   TCCR1B=0x01;
   
	//gradually decrease duty cycle
	for(d=0;d<scope;d++) {
		bright--;
		OCR1A=bright;
		OCR1B=bright;
		delay_ms(10);
		}	
}

 //**************************************************************************************************************
GBpwm_fade_in(int scope)
{
  	//gradually increase duty cycle
   int d = 0; 
   int bright = 0;
   
   TCCR1A=0xA1;
   TCCR1B=0x01;
   TCCR2=0x61;

   
	for(d=0;d<scope;d++) {
		bright++;
		//OCR1A=bright;
		OCR1B=bright;
		OCR2=bright;
	        delay_ms(10);
	        }
}
 //**************************************************************************************************************
GBpwm_fade_out(int scope)
{ 
   int d = 0;
   int bright = 0;
   TCCR1A=0xA1;
   TCCR1B=0x01;
   TCCR2=0x61;
   
	//gradually decrease duty cycle
	for(d=0;d<scope;d++) {
		bright--;
		//OCR1A=bright;
		OCR1B=bright;
		OCR2=bright;
		delay_ms(10);
		}	
}

 //**************************************************************************************************************
RBpwm_fade_in(int scope)
{
  	//gradually increase duty cycle
   int d = 0; 
   int bright = 0;
   
   TCCR1A=0xA1;
   TCCR1B=0x01;
   TCCR2=0x61;

   
	for(d=0;d<scope;d++) {
		bright++;
		OCR1A=bright;
		//OCR1B=bright;
		OCR2=bright;
	        delay_ms(10);
	        }
}
 //**************************************************************************************************************
RBpwm_fade_out(int scope)
{ 
   int d = 0;
   int bright = 0;
   TCCR1A=0xA1;
   TCCR1B=0x01;
   TCCR2=0x61;
   
	//gradually decrease duty cycle
	for(d=0;d<scope;d++) {
		bright--;
		OCR1A=bright;
		//OCR1B=bright;
		OCR2=bright;
		delay_ms(10);
		}	
}
  
 //**************************************************************************************************************
RGBpwm_fade_in(int scope) 
{

	//gradually increase duty cycle
   int d = 0; 
   int bright = 0;
   
   TCCR1A=0xA1;
   TCCR1B=0x01;
   TCCR2=0x61;
   
	for(d=0;d<scope;d++) {
		bright++;
		OCR1A=bright;
		OCR1B=bright;
		OCR2 = bright;
		delay_ms(10);
	}

}
 //**************************************************************************************************************
 RGBpwm_fade_out(int scope) 
{
  int d = 0;
  int bright = 0;
   TCCR1A=0xA1;
   TCCR1B=0x01;
   TCCR2=0x61;
	//gradually decrease duty cycle
	for(d=0;d<scope;d++) {
		bright--;
		OCR1A=bright;
		OCR1B=bright;
		OCR2 = bright;
		delay_ms(10);
	}

} 


 //**************************************************************************************************************

Rfeedin(int n,int pwm)
{  
int i,j=0;
      
      for(i=1;i<pwm;i++)
	  {    
	      for(j=1;j<=n;j++)
	      {
	        PORTB=0x02;
		delay_ms(i);
     		PORTB=0x00;
		delay_ms(pwm-i);
		}
	  }
}

 //**************************************************************************************************************

Rfeedout(int n,int pwm)
{ 
  int i,j;
      
      for(i=pwm;i>1;i--)
	  {    
	        for(j=1;j<=n;j++)
	        {
	        PORTB=0x02;
		delay_ms(i);
		PORTB=0x00;
		delay_ms(pwm-i);
	        }
	        
	  }
}

 //**************************************************************************************************************


Gfeedin(int n,int pwm)
{
    int i,j=0;
   
      for(i=1;i<pwm;i++)
	  {     
	        for(j=1;j<=n;j++)
	        {
	        PORTB=0x04;
		delay_ms(i);
		PORTB=0x00;
		delay_ms(pwm-i);
	        }
	        
	  }
}

 //**************************************************************************************************************

Gfeedout(int n,int pwm)
{
   int i,j=0;
 
      for(i=pwm;i>1;i--)
	  {     
	        for(j=1;j<=n;j++)
	        {
	        PORTB=0x04;
		delay_ms(i);
		PORTB=0x00;
		delay_ms(pwm-i);
	        }
	        
	  }
}

 //**************************************************************************************************************


Bfeedin(int n,int pwm)
{
   int i,j=0;
      
      for(i=1;i<pwm;i++)
	  {    
	        for(j=1;j<=n;j++)
	        {
	        PORTB=0x08;
		delay_ms(i);
		PORTB=0x00;
		delay_ms(pwm-i);
	        }
	        
	  }
}

 //**************************************************************************************************************

Bfeedout(int n,int pwm)
{
     int i,j=0;
      
      for(i=pwm;i>1;i--)
	  {     
	        for(j=1;j<=n;j++)
	        {
	        PORTB=0x08;
		delay_ms(i);
		PORTB=0x00;
		delay_ms(pwm-i);
	        }
	        
	  }
}

 //**************************************************************************************************************


RGfeedin(int n,int pwm)
{
   int i,j=0;
     
      for(i=1;i<pwm;i++)
	  {    
	        for(j=1;j<=n;j++)
	        {
	        PORTB=0x06;
		delay_ms(i);
		PORTB=0x00;
		delay_ms(pwm-i);
	        }
	        
	  }
}

 //**************************************************************************************************************

RGfeedout(int n,int pwm)
{ 
    int i,j=0;
      
      for(i=pwm;i>1;i--)
	  {    
	        for(j=1;j<=n;j++)
	        {
	        PORTB=0x06;
		delay_ms(i);
		PORTB=0x00;
		delay_ms(pwm-i);
	        }
	        
	  }
}

 //**************************************************************************************************************


RBfeedin(int n,int pwm)
{
    int i,j=0;
     
      for(i=1;i<pwm;i++)
	  {     
	        for(j=1;j<=n;j++)
	        {
	        PORTB=0x0A;
		delay_ms(i);
		PORTB=0x00;
		delay_ms(pwm-i);
	        }
	        
	  }
}

 //**************************************************************************************************************

RBfeedout(int n,int pwm)
{ 
    int i,j=0;
     
      for(i=pwm;i>1;i--)
	  { 
	       for(j=1;j<=n;j++)
	        {
	        PORTB=0x0A;
		delay_ms(i);
		PORTB=0x00;
		delay_ms(pwm-i);
	        }
	        
	  }
}

 //**************************************************************************************************************


GBfeedin(int n,int pwm)
{
   int i,j=0;
     
      for(i=1;i<pwm;i++)
	  {      
	        for(j=1;j<=n;j++)
	        {
	        PORTB=0x0C;
		delay_ms(i);
		PORTB=0x00;
		delay_ms(pwm-i);
	        }
	        
	  }
}

 //**************************************************************************************************************

GBfeedout(int n,int pwm)
{ 
    int i,j=0;
    
      for(i=pwm;i>1;i--)
	  {     
	        for(j=1;j<=n;j++)
	        {
	        PORTB=0x0C;
		delay_ms(i);
		PORTB=0x00;
		delay_ms(pwm-i);
	        }
	        
	  }
}

 //**************************************************************************************************************



RGBfeedin(int n,int pwm)
{ 
    int i,j=0;
   
      for(i=1;i<pwm;i++)
	  {    
	        for(j=1;j<=n;j++)
	        {
	        PORTB=0x0E;
		delay_ms(i);
		PORTB=0x00;
		delay_ms(pwm-i);
	        }
	        
	  }
}

 //**************************************************************************************************************

RGBfeedout(int n,int pwm)
{ 
    int i,j=0;
   
      for(i=pwm;i>1;i--)
	  {    
	        for(j=1;j<=n;j++)
	        {
	        PORTB=0x0E;
		delay_ms(i);
		PORTB=0x00;
		delay_ms(pwm-i);
	        }
	        
	  }
}

