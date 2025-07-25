                                                //blinking efect
  //**************************************************************************************************************
 blinkingefect1(int n,int on,int off)
 {
 int i;
   for(i=1;i<=n;i++){Rblinking(on,off);}
   
   for(i=1;i<=n;i++){Gblinking(on,off);}
   
   for(i=1;i<=n;i++){Bblinking(on,off);}
   }
  //**************************************************************************************************************   
 blinkingefect2(int n,int on,int off)
 {
 int i;
   for(i=1;i<=n;i++){RGblinking(on,off);}
   
   for(i=1;i<=n;i++){GBblinking(on,off);}
   
   for(i=1;i<=n;i++){RBblinking(on,off);}
   } 
   
  //**************************************************************************************************************
 
 blinkingefect3(int n,int on,int off)
 {
 int i;
   for (i=1;i<=n;i++){RGBblinking(on,off);}
   }
                                                  //shift  efect
  //**************************************************************************************************************
 shiftefect1(int n,int step)
 {     
 int i;
    for(i=1;i<=n;i++)
       {
       shiftzeroright(step);
       shiftzeroleft(step);
         }
    }
  //**************************************************************************************************************
 shiftefect2(int n,int step)
 {     
 int i;
    for(i=1;i<=n;i++)
       {
       shiftoneright(step);
       shiftoneleft(step);
       
         }
    }   
  //**************************************************************************************************************
 
 shiftefect3(int n,int step)
 {     
 int i;
    for(i=1;i<=n;i++){shiftzeroright(step);}
    }
  //**************************************************************************************************************
 shiftefect4(int n,int step)
 {     
 int i;
    for(i=1;i<=n;i++){shiftzeroleft(step);}
    }
  //**************************************************************************************************************

 shiftefect5(int n,int step)
 {     
 int i;
        for(i=1;i<=n;i++){shiftoneright(step);}
    }
  //**************************************************************************************************************  
  shiftefect6(int n,int step)
 {     
 int i;
    for(i=1;i<=n;i++){shiftoneleft(step);}
    }
    
  //**************************************************************************************************************
  shiftefect7(int n,int step)
 {     
 int i;
        for(i=1;i<=n;i++)
        { 
          shiftrightzero(step);
          shiftleftzero(step);
        }
    }
  //************************************************************************************************************** 
 shiftefect8(int n,int step)
 {     
 int i;
        for(i=1;i<=n;i++)
        { 
          shiftrightone(step);
          shiftleftone(step);
        }
    }
  //**************************************************************************************************************           
  shiftefect9(int n,int step)
 {     
 int i;
     for(i=1;i<=n;i++){shiftrightzero(step);}
    }
  //**************************************************************************************************************  
 
 shiftefect10(int n,int step)
 {     
 int i;
     for(i=1;i<=n;i++){shiftleftzero(step);}
    }
    
   //************************************************************************************************************** 
 shiftefect11(int n,int step)
 {     
 int i;
     for(i=1;i<=n;i++){shiftrightone(step);}
    }
    
  //**************************************************************************************************************
     
 shiftefect12(int n,int step)
 {     
 int i;
     for(i=1;i<=n;i++){shiftleftone(step);}
    } 
  //**************************************************************************************************************   
  shiftefect13(int n,int step)
 {     
 int i;
     for(i=1;i<=n;i++){shiftzeroleftright(step);}
    } 
  //**************************************************************************************************************
    
   shiftefect14(int n,int step)
 {     
 int i;
     for(i=1;i<=n;i++){shiftoneleftright(step);}
    } 
  //**************************************************************************************************************
       shiftefect15(int n,int step)
 {     
 int i;
     for(i=1;i<=n;i++){shiftleftrightzero(step);}
    } 
  //**************************************************************************************************************
    
   shiftefect16(int n,int step)
 {     
 int i;
     for(i=1;i<=n;i++){shiftleftrightone(step);}
    } 
    
  //**************************************************************************************************************
    shiftefect17(int n,int step)
 {     
 int i;
     for(i=1;i<=n;i++){shiftleftright(step);}
    }    
      
    
                                               //BCDefect
 //**************************************************************************************************************
   
   bcdefect(int n,int step)
{ 
  int i;
  for(i=1;i<=n;i++)
  {

  PORTB=0x00;        //0000       0
  delay_ms(step);                  
  PORTB=0x02;        //0010       1  
  delay_ms(step);                    
  PORTB=0x04;        //0100       2    
  delay_ms(step);                     
  PORTB=0x06;        //0110       3
  delay_ms(step); 
  PORTB=0x08;        //1000       4
  delay_ms(step);
  PORTB=0x0A;        //1010       5
  delay_ms(step);
  PORTB=0x0C;        //1100       6
  delay_ms(step);
  PORTB=0x0E;        //1110       7
  delay_ms(step);
  PORTB=0x0C;        //1100       6
  delay_ms(step);
  PORTB=0x0A;        //1010       5
  delay_ms(step);
  PORTB=0x08;        //1000       4
  delay_ms(step);
  PORTB=0x06;        //0110       3
  delay_ms(step);
  PORTB=0x04;        //0100       2
  delay_ms(step); 
  PORTB=0x02;        //0010       1
  delay_ms(step);
  PORTB=0x00;        //0000       0
  delay_ms(step);
  }
}    
                                             //feede efect
 //**************************************************************************************************************
        
 //**************************************************************************************************************    
 feedefect1(int n,int pwm)
 {
   Rfeedin(n,pwm);
   Gfeedin(n,pwm);
   Bfeedin(n,pwm);
   
   Rfeedout(n,pwm);
   Gfeedout(n,pwm);
   Bfeedout(n,pwm);
      
      
 }
 
  //**************************************************************************************************************
   feedefect2(int n,int pwm)
 {
   RGfeedin(n,pwm);
   RGfeedout(n,pwm);
   GBfeedin(n,pwm);
   GBfeedout(n,pwm);
   RBfeedout(n,pwm);
   RBfeedin(n,pwm);
  
 }

  //**************************************************************************************************************
 
  feedefect3(int n,int pwm)                     //all led bright then dark
 { 
 
      RGBfeedin(n,pwm);
      RGBfeedout(n,pwm);
      RGBfeedin(n,pwm);
      RGBfeedout(n,pwm);
      RGBfeedin(n,pwm);
      RGBfeedout(n,pwm);
 }
 
  //**************************************************************************************************************
 
   feedefect4(int n,int pwm)                    //all led on and one led dark then bright
 {
        int i,j=0;
        PORTB=0x0F;
          for(i=pwm;i>1;i--)            //red led feed out
	    {    
	        for(j=1;j<=n;j++)      
	        {
	        PORTB.1=1;
		delay_ms(i);
		PORTB.1=0;
		delay_ms(pwm-i);
	        }
	   }     
	
	 for(i=1;i<pwm;i++)            //red led feed in
	     {    
	        for(j=1;j<=n;j++)     
	        {
	        PORTB.1=1;
		delay_ms(i);
		PORTB.1=0;
		delay_ms(pwm-i);
	        }
	        
	      }
	      
	      PORTB=0x0F;
	      
	 for(i=pwm;i>1;i--)                  //blue led feed out
	  {    
	        for(j=1;j<=n;j++)
	        {
	        PORTB.2=1;
		delay_ms(i);
		PORTB.2=0;
		delay_ms(pwm-i);
	        }
	   }     
	                                    //blue led feed in
	 for(i=1;i<pwm;i++)
	     {    
	        for(j=1;j<=n;j++)
	        {
	        PORTB.2=1;
		delay_ms(i);
		PORTB.2=0;
		delay_ms(pwm-i);
	        }
	        
	      }
	      
	      PORTB=0x0F;
	                                  
	 for(i=pwm;i>1;i--)                //green led feed out
	  {    
	        for(j=1;j<=n;j++)
	        {
	        PORTB.3=1;
		delay_ms(i);
		PORTB.3=0;
		delay_ms(pwm-i);
	        }
	   }     
	                                
	 for(i=1;i<pwm;i++)              //green led feed in
	     {    
	        for(j=1;j<=n;j++)
	        {
	        PORTB.3=1;
		delay_ms(i);
		PORTB.3=0;
		delay_ms(pwm-i);
	        }
	        
	      }
	      
	      PORTB=0x00;

 } 
 
  //************************************************************************************************************** 
   feedefect5(int n,int pwm)                     //all led on and two led dark then bright
 {
        int i,j=0;
        PORTB=0x0F;
      for(i=pwm;i>1;i--)                        //red-green led`s feed out
	  {    
	        for(j=1;j<=n;j++)
	        {
	        PORTB.1=1;
	        PORTB.2=1;
		delay_ms(i);
		PORTB.1=0;
		PORTB.2=0;
		delay_ms(pwm-i);
	        }
	   }     
	
	 for(i=1;i<pwm;i++)                      //red-green led`s feed in
	     {    
	        for(j=1;j<=n;j++)
	        {
	        PORTB.1=1;
	        PORTB.2=1;
		delay_ms(i);
		PORTB.1=0; 
		PORTB.2=0;
		delay_ms(pwm-i);
	        }
	        
	      }
	      
	      PORTB=0x0F;
	      
	 for(i=pwm;i>1;i--)                     //green-blue led`s feedou
	  {    
	        for(j=1;j<=n;j++)
	        {
	        PORTB.2=1;
	        PORTB.3=1;
		delay_ms(i);
		PORTB.2=0;
		PORTB.3=0;
		delay_ms(pwm-i);
	        }
	   }     
	
	 for(i=1;i<pwm;i++)                   // green-blue led`s feed in
	     {    
	        for(j=1;j<=n;j++)
	        {
	        PORTB.2=1;
	        PORTB.3=1;
		delay_ms(i);
		PORTB.2=0; 
		PORTB.3=0;
		delay_ms(pwm-i);
	        }
	        
	      }
	      
	      PORTB=0x0F;
	      
	      for(i=pwm;i>1;i--)              //red-blue led`s feed out
	  {    
	        for(j=1;j<=n;j++)
	        {
	        PORTB.1=1;
	        PORTB.3=1;
		delay_ms(i);
		PORTB.1=0;
		PORTB.3=0;
		delay_ms(pwm-i);
	        }
	   }     
	
	 for(i=1;i<pwm;i++)                    //red-blue led`s feed in
	     {    
	        for(j=1;j<=n;j++)
	        {
	        PORTB.1=1;
	        PORTB.3=1;
		delay_ms(i);
		PORTB.1=0; 
		PORTB.3=0;
		delay_ms(pwm-i);
	        }
	        
	      }
	      
	      PORTB=0x00;
 }
 
                                                 //pwm efect
  //**************************************************************************************************************
 pwm_efect1(int n,int scope)
 { 
              int j=0;
              for(j=1;j<=n;j++)
              {
                 Rpwm_fade_in(scope);
                 Rpwm_fade_out(scope);
                 
                 Gpwm_fade_in(scope);
                 Gpwm_fade_out(scope);
                 
                 Bpwm_fade_in(scope);
                 Bpwm_fade_out(scope);
                 
                 Gpwm_fade_in(scope);
                 Gpwm_fade_out(scope);
                
                 Rpwm_fade_in(scope);
                 Rpwm_fade_out(scope);
                 
                 Bpwm_fade_in(scope);
                 Bpwm_fade_out(scope);
                 }
 }
  //**************************************************************************************************************
 pwm_efect2(int n,int scope)
 {              
                 int j=0;
              for(j=1;j<=n;j++)
              {
                 Gpwm_fade_in(scope);
                 RBpwm_fade_out(scope);
                 
                 Rpwm_fade_in(scope);
                 GBpwm_fade_out(scope);
                 
                 Bpwm_fade_in(scope);
                 RGpwm_fade_out(scope);
                } 
                 
 }
 
  //**************************************************************************************************************
 pwm_efect3(int n,int scope)
 {      
                int j=0;
              for(j=1;j<=n;j++)
              {
                 Bpwm_fade_in(scope);                                                     
                 Gpwm_fade_in(scope);
                 Rpwm_fade_in(scope);
                 Bpwm_fade_out(scope);
                 Gpwm_fade_out(scope);         
                 Rpwm_fade_out(scope);
                 
                 Bpwm_fade_in(scope);                                                     
                 Gpwm_fade_in(scope);
                 Rpwm_fade_in(scope);
                 Rpwm_fade_out(scope);
                 Gpwm_fade_out(scope);
                 Bpwm_fade_out(scope);
                 }
 } 
 
  //**************************************************************************************************************
 pwm_efect4(int n,int scope)
 {            
                int j=0;
              for(j=1;j<=n;j++)
              {
                 RGpwm_fade_in(scope);
                 RGpwm_fade_out(scope);

                 GBpwm_fade_in(scope);
                 GBpwm_fade_out(scope);

                 RBpwm_fade_in(scope);
                 RBpwm_fade_out(scope);
                }
 }
  //**************************************************************************************************************
 pwm_efect5(int n,int scope)
 {
                int j=0;
              for(j=1;j<=n;j++)
              {
                 RGBpwm_fade_in(scope);
                 RGBpwm_fade_out(scope);
                 RGBpwm_fade_in(scope);
                 RGBpwm_fade_out(scope);
                 RGBpwm_fade_in(scope);
                 RGBpwm_fade_out(scope);
               }  
 }
  //**************************************************************************************************************