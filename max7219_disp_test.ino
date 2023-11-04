// Include the required Arduino libraries:
#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>

// Define hardware type, size, and output pins:
#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 1
#define CS_PIN 9
#define DATA_PIN 8
#define CLK_PIN 10
MD_Parola mdisp = MD_Parola(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES);

void setup() {
  // Intialize the object:
  mdisp.begin();
  // Set the intensity (brightness) of the display (0-15):
  mdisp.setIntensity(5);
  // Clear the display:
  mdisp.displayClear();
}

void clrd() {
  mdisp.displayClear();
}

void loop() {
  mdisp.setTextAlignment(PA_CENTER);
  mdisp.print("(=");
  exit(0);
}