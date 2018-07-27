#include <xCore.h> //find @ https://github.com/xinabox/xCore
#include <xOD01.h> //find @ https://github.com/xinabox/xOD01
#include <xOC01.h> //find @ https://github.com/xinabox/xOC01
#include <SparkFun_APDS9960.h> //find @ https://github.com/sparkfun/SparkFun_APDS-9960_Sensor_Arduino_Library
#include <ESP8266WiFi.h>
#include "TIMER_CTRL.h"

xOC01 OC01;

SparkFun_APDS9960 apds = SparkFun_APDS9960();
uint8_t proximity_data = 0;

unsigned long currentMilli = 0;
int ledID = 0;
bool fade_flag1 =true;
unsigned long previousMilli1 = 0;    // timing variable for LEDS
int LED_state1 = 0;
bool fade_flag2 = true;
unsigned long previousMilli2 = 0;    // timing variable for LEDS
int LED_state2 = 0;
bool fade_flag3 = true;
unsigned long previousMilli3 = 0;    // timing variable for LEDS
int LED_state3 = 0;


void setup() {
  // put your setup code here, to run once:
  setup_program();
}

void loop() {
  // put your main code here, to run repeatedly:
  main_program();
}
