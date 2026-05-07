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
  initJoyLeft(0, 0, 0);  // JoyLeft: X=null, Y=null, SW=null
  initJoyRight(0, 0, 0);  // JoyRight: X=null, Y=null, SW=null
}

void loop()
{
  // Main program loop
  serialPrintln(readJoyLeftY());
  if (readJoyLeftY() > 0) {
    serialPrintln("forwards");

  }
  if (readJoyLeftX() < 0) {
    serialPrintln("backwards");

  }
  if (readJoyLeftY() > 0) {
    setServoAngle(SERVO1, 180);

  }
  if (readJoyLeftX() < 0) {
    setServoAngle(SERVO1, 0);

  }
  }

