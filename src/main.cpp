// ============================================
// Includes - Auto-generated from blocks
// ============================================
#include "ky023.h"

#include "serial.h"

#include "servos.h"

// ============================================
// Arduino Entry Points
// ============================================

void setup()
{
  // Initialize hardware and peripherals
  initSerial(115200);  // Initialize Serial communication at 115200 baud
  // initJoyLeft(0, 0, 0);  // JoyLeft: X=null, Y=null, SW=null
  // initJoyRight(0, 0, 0);  // JoyRight: X=null, Y=null, SW=null
  initKY023(2, 1, 10);
}

void loop()
{
  // Main program loop
  serialPrintln(readKY023Y());
    serialPrintln(readKY023Y());
  //   if (readKY023Y() > 0) {
  //   serialPrintln("forwards");

  // }
  // if (readKY023X() < 0) {
  //   serialPrintln("backwards");

  // }
  // if (readKY023Y() > 0) {
  //   setServoAngle(SERVO1, 180);

  // }
  // if (readKY023X() < 0) {
  //   setServoAngle(SERVO1, 0);
  // }
  delay(200);
  }

