
int threshold_touch =1500; 
void setup() {
   Serial.begin(9600);
}

void loop(){
  long val=0;
val=touchRead(0);
 if (val > threshold_touch)
    {
      Serial.println("a");
      Serial.println(val);
    }
   val=touchRead(1);
 if (val > threshold_touch)
    {
       Serial.println("b");
      Serial.println(val);
    }
    val=touchRead(22);
 if (val > (threshold_touch+200))
    {
       Serial.println("c");
      Serial.println(val);
    }
   val=touchRead(19);
 if (val > (threshold_touch+300))
    {
       Serial.println("d");
      Serial.println(val);
    }
   val=touchRead(23);
 if (val > (threshold_touch+200))
    {
       Serial.println("e");
      Serial.println(val);
    }
    val=touchRead(17);
 if (val > (threshold_touch+120))
    {
       Serial.println("f");
      Serial.println(val);
    }
     val=touchRead(16);
 if (val > threshold_touch)
    {
       Serial.println("g");
      Serial.println(val);
    }
    val=touchRead(15);
 if (val > threshold_touch)
    {
       Serial.println("h");
      Serial.println(val);
    }
    

}
   

