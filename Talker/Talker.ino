#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("Add-Type -AssemblyName System.speech");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  // Descomentar para usar uma voz feminina
  //DigiKeyboard.print("$speak.SelectVoice('Microsoft Zira Desktop')");
  //DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //DigiKeyboard.delay(500);
  DigiKeyboard.print("$speak.Speak(\"Here's a joke. Why do Java programmers wear glasses? Because they can't C#.\")");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_N);
  for (;;) {
    /*empty*/
  }

}
