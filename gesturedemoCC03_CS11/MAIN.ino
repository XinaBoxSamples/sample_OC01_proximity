void main_code(void) {
  apds.readProximity(proximity_data);
  OD01.println("Move your hand to");
  OD01.println("and away from");
  OD01.println("the sensor");
  int y = map(proximity_data, 0, 255, 0, 500);
  if ((y > 0) && (y < 125)) {
    OC01.write(OUT0, HIGH);
    OC01.write(OUT1, LOW);
    OC01.write(OUT2, LOW);
    OC01.write(OUT3, LOW);
  } else   if ((y > 125) && (y < 250)) {
    OC01.write(OUT0, HIGH);
    OC01.write(OUT1, HIGH);
    OC01.write(OUT2, LOW);
    OC01.write(OUT3, LOW);
  }
  else if ((y > 250) && (y < 375)) {
    OC01.write(OUT0, HIGH);
    OC01.write(OUT1, HIGH);
    OC01.write(OUT2, HIGH);
    OC01.write(OUT3, LOW);
  }
  else if ((y > 375) && (y < 500)) {
    OC01.write(OUT0, HIGH);
    OC01.write(OUT1, HIGH);
    OC01.write(OUT2, HIGH);
    OC01.write(OUT3, HIGH);
  } else if (y == 0) {
    OC01.write(OUT0, LOW);
    OC01.write(OUT1, LOW);
    OC01.write(OUT2, LOW);
    OC01.write(OUT3, LOW);
  }
  OD01.println(y);
}

