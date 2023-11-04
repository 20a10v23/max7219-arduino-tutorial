// Include the required Arduino libraries (can be installed via library manager in Arduino IDE)
#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>

// Define hardware type, size, and output pins
#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 1
#define CS_PIN 9
// These last two are for software SPI (recommended)
#define DATA_PIN 8
#define CLK_PIN 10
MD_Parola mdisp = MD_Parola(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES);

void setup() {
  mdisp.begin(); // Initialize the display
  mdisp.setIntensity(5); // Set the intensity (brightness) of the display (0-15):
  mdisp.displayClear(); // Clear the display
}

void clrd() { // Custom command to make clearing the display easier (optional)
  mdisp.displayClear();
}

void loop() {
  mdisp.setTextAlignment(PA_CENTER);
  mdisp.print("Hi");
  exit(0); // Exit the loop because the code only needs to run once
}
