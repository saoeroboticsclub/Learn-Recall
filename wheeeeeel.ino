
void mapwheels(int my_yaw)
{   
  if(my_yaw>0)
  {
 
    speed2 = map(my_yaw,3,90,maxspeed-1,0);
    speed1 = maxspeed;
  
 }

  if(my_yaw<0)
  {
 
    speed2 = maxspeed;
    speed1 = map(my_yaw,-3,-90,maxspeed-1,0);
  }
  Serial.print("Yaw ");Serial.print(my_yaw);
  Serial.print(" Speed 1  ");Serial.print(speed1);
    Serial.print("  Speed 2   ");Serial.println(speed2);
  runwheels();
}


void runwheels()
{
  if(speed1<0)
   speed1=0;
   if(speed2<0)
   speed2=0; 
  analogWrite(pwm1,speed1);
  digitalWrite(dir1,HIGH);
  analogWrite(pwm2,speed2);
  digitalWrite(dir2,LOW);
}