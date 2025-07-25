 
  //**************************************************************************************************************

shiftzeroleft(int step)
{
  PORTB=0x0F;      //1111
  delay_ms(step);
  PORTB=0x0D;      //1101
  delay_ms(step);
  PORTB=0x0B;      //1011
  delay_ms(step);
  PORTB=0x07;      //0111
  delay_ms(step);
  PORTB=0x0F;      //1111
  delay_ms(step);
  
}


 //**************************************************************************************************************

shiftzeroright(int step)
{
  PORTB=0x0F;        //1111
  delay_ms(step);
  PORTB=0x07;        //0111
  delay_ms(step);
  PORTB=0x0B;        //1011
  delay_ms(step);
  PORTB=0x0D;        //1101
  delay_ms(step);
  PORTB=0x0F;        //1111
  delay_ms(step);
}

 //**************************************************************************************************************
 
 shiftzeroleftright(int step)
 {
  PORTB=0x0F;         //1111
  delay_ms(step);
  PORTB=0x0D;         //1101
  delay_ms(step);
  PORTB=0x0B;         //1011
  delay_ms(step);
  PORTB=0x07;         //0111
  delay_ms(step);
  PORTB=0x0F;         //1111
  delay_ms(step);
  PORTB=0x07;         //0111
  delay_ms(step);
  PORTB=0x0B;         //1011
  delay_ms(step);
  PORTB=0x0D;         //1101
  delay_ms(step);
  PORTB=0x0F;         //1111
 }

 //**************************************************************************************************************

shiftoneleft(int step)
{
  PORTB=0x00;        //0000
  delay_ms(step);
  PORTB=0x02;        //0010
  delay_ms(step);
  PORTB=0x04;        //0100
  delay_ms(step);
  PORTB=0x08;        //1000
  delay_ms(step);
  PORTB=0x00;        //0000
  delay_ms(step);
}


 //**************************************************************************************************************

shiftoneright(int step)
{
  PORTB=0x00;         //0000
  delay_ms(step);
  PORTB=0x08;         //1000
  delay_ms(step);
  PORTB=0x04;         //0100
  delay_ms(step);
  PORTB=0x02;         //0010
  delay_ms(step);
  PORTB=0x00;         //0000
  delay_ms(step);
}

 //**************************************************************************************************************
 
shiftoneleftright(int step)
{
  PORTB=0x00;        //0000
  delay_ms(step);
  PORTB=0x02;        //0010
  delay_ms(step);
  PORTB=0x04;        //0100
  delay_ms(step);
  PORTB=0x08;        //1000
  delay_ms(step);
  PORTB=0x00;        //0000
  delay_ms(step);
  PORTB=0x08;        //1000
  delay_ms(step);
  PORTB=0x04;        //0100
  delay_ms(step);
  PORTB=0x02;        //0010
  delay_ms(step);
  PORTB=0x00;        //0000
  delay_ms(step);
}


 //**************************************************************************************************************


shiftleftzero(int step)
{
  PORTB=0x0F;         //1111
  delay_ms(step);
  PORTB=0x0D;         //1101
  delay_ms(step);
  PORTB=0x09;         //1001
  delay_ms(step);
  PORTB=0x01;         //0001
  delay_ms(step);
  PORTB=0x00;         //0000                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      0F;         //1111
  delay_ms(step);
}


 //**************************************************************************************************************

shiftrightzero(int step)
{
  PORTB=0x0F;        //1111
  delay_ms(step);
  PORTB=0x07;        //0111
  delay_ms(step);
  PORTB=0x03;        //0011
  delay_ms(step);
  PORTB=0x01;        //0001
  delay_ms(step);
  PORTB=0x0F;        //1111
  delay_ms(step);
}

 //**************************************************************************************************************
 
 shiftleftrightzero(int step)
 {
  PORTB=0x0F;         //1111
  delay_ms(step);
  PORTB=0x0D;         //1101
  delay_ms(step);
  PORTB=0x09;         //1001
  delay_ms(step);
  PORTB=0x01;         //0001
  delay_ms(step);
  PORTB=0x0F;         //1111
  delay_ms(step);
  PORTB=0x07;         //0111
  delay_ms(step);
  PORTB=0x03;         //0011
  delay_ms(step);
  PORTB=0x01;         //0001
  delay_ms(step);
  PORTB=0x0F;         //1111
  delay_ms(step);
 }

 //**************************************************************************************************************

shiftleftone(int step)
{
  PORTB=0x00;        //0000
  delay_ms(step);
  PORTB=0x02;        //0010
  delay_ms(step);
  PORTB=0x06;        //0110
  delay_ms(step);
  PORTB=0x0E;        //1110
  delay_ms(step);
  PORTB=0x00;        //0000
  delay_ms(step);
}


 //**************************************************************************************************************

shiftrightone(int step)
{
  PORTB=0x00;        //0000
  delay_ms(step);
  PORTB=0x08;        //1000
  delay_ms(step);
  PORTB=0x0C;        //1100
  delay_ms(step);
  PORTB=0x0E;        //1110
  delay_ms(step);
  PORTB=0x00;        //0000
  delay_ms(step);
}


 //**************************************************************************************************************
 
shiftleftrightone(int step)
{
  PORTB=0x00;        //0000
  delay_ms(step);
  PORTB=0x02;        //0010
  delay_ms(step);
  PORTB=0x06;        //0110
  delay_ms(step);
  PORTB=0x0E;        //1110
  delay_ms(step); 
  PORTB=0x00;        //0000
  delay_ms(step);
  PORTB=0x08;        //1000
  delay_ms(step);
  PORTB=0x0C;        //1100
  delay_ms(step);
  PORTB=0x0E;        //1110
  delay_ms(step);
  PORTB=0x00;        //0000
  delay_ms(step);
}


 //**************************************************************************************************************
 
shiftleftright(int step)
{
  PORTB=0x00;        //0000
  delay_ms(step);
  PORTB=0x04;        //0100
  delay_ms(step);
  PORTB=0x0A;        //1010
  delay_ms(step);
  PORTB=0x0E;        //1110
  delay_ms(step); 
  PORTB=0x0A;        //1010
  delay_ms(step);
  PORTB=0x04;        //0100
  delay_ms(step);
  PORTB=0x00;        //0000
  delay_ms(step);
  PORTB=0x04;        //0100
  delay_ms(step);
  PORTB=0x0A;        //1010
  delay_ms(step);
  PORTB=0x0E;        //1110
  delay_ms(step);
  PORTB=0x0A;        //1010
  delay_ms(step);
  PORTB=0x04;        //0100
  delay_ms(step);
  PORTB=0x00;        //0000
  delay_ms(step);
}

 //**************************************************************************************************************
