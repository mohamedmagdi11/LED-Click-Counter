// C++ code
//
int RED = 13;
int YELLOW = 12;
int GREEN = 11;
int botton =7;
int Reading =0;
int count =0;

void setup()
{
  pinMode(RED,OUTPUT);
  pinMode(YELLOW,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(botton,INPUT);

    
}

void loop()
{
        
  
  
  
  
  Reading = digitalRead(botton);

  if(Reading==1)
  {
        count++;

    
    
     if(count==1)
    {
              digitalWrite(RED,HIGH);
              digitalWrite(YELLOW,LOW);
              digitalWrite(GREEN,LOW);
                      delay(250);

    }
    
    else if(count==2)
      {
              digitalWrite(RED,HIGH);
              digitalWrite(YELLOW,HIGH);
              digitalWrite(GREEN,LOW);
                      delay(250);

      }
    else if(count==3)
    {
              digitalWrite(RED,HIGH);
              digitalWrite(YELLOW,HIGH);
              digitalWrite(GREEN,HIGH);
                      delay(250);

    }
    
    else 
    {
       digitalWrite(RED,LOW);
        digitalWrite(YELLOW,LOW);
        digitalWrite(GREEN,LOW);
    count = 0;
    delay(250);
    }
  }
}  
    
    
    
  
  
 
