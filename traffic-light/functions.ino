void stoplight () {
  while ()
  digitalWrite(north_green, HIGH);
  digitalWrite(south_red, HIGH);

  digitalWrite(north_green, LOW);
  digitalWrite(north_yellow, HIGH);
  delay(1000);
  digitalWrite(north_yellow, LOW);
  digitalWrite(north_red, HIGH);
  digitalWrite(south_green, HIGH);
  
  
  }
}

