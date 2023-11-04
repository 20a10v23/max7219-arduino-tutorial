// Include the required Arduino libraries (can be installed via library manager in Arduino IDE)
#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>

// Define hardware type, size, and output pins
#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 1 // set how many displays are in use
#define CS_PIN 9 // set CS pin
// These last two are for software SPI (recommended)
#define DATA_PIN 8 // set data pin
#define CLK_PIN 10 // set serial clock pin
MD_Parola mdisp = MD_Parola(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES); // if you want, you can replace `mdisp` with your own display name

void setup() {
  mdisp.begin(); // Initialize the display
  mdisp.setIntensity(5); // Set the intensity (brightness) of the display (0-15)
  mdisp.displayClear(); // Clear the display
}

void clrd() { // Custom command to make clearing the display easier (you don't need to do this)
  mdisp.displayClear();
}

void loop() {
  clrd();
  mdisp.setTextAlignment(PA_CENTER); // set text alignment
  mdisp.print("Hi"); // print text!
  exit(0); // Exit the loop because the code only needs to run once
}
