/* 
 * Dieses Mal nutzen wir auch den ersten Programmabschnitt. Hier werden Variablen eingetragen. Das bedeutet, dass sich hinter einem Buchstaben oder einem Wort eine Zahl verbirgt.
 * Bei uns ist die LED an Pin 4 angeschlossen und der Piezo-Speaker an Pin 5. Damit man die beiden Pins später nicht verwechselt, benennen wir Pin4 und Pin5 einfach um. 
 */

int LED=4;  // Das Wort „LED“ steht jetzt für die Zahl „4“.
int Pieps=5;  // Das Wort „Pieps“ steht jetzt für die Zahl „5“.

// Hier beginnt das Setup
void setup(){
  pinMode(LED, OUTPUT);  // Pin 4 (Pin „LED“) ist ein Ausgang.
  pinMode(Pieps,OUTPUT);  // Pin 5 (Pin „Pieps“) ist ein Ausgang.
}

// Hier beginnt das Hauptprogramm
void loop() {
  digitalWrite(LED, HIGH);  // Schalte die LED an.
  digitalWrite(Pieps, HIGH);  // Schalte den Piezo-Lautsprecher an.
  delay(1000);  // Warte 1000 Millisekunden. (Es piepst und leuchtet.)
  digitalWrite(LED, LOW);  // Schalte die LED aus.
  digitalWrite(Pieps, LOW);  // Schalte den Piezo aus.
  delay(1000);  // Warte 1000 Millisekunden. (kein Lärm, kein Licht)
}


// Hier am Ende springt das Programm an den Start des Loop-Teils, also wird es gleich wieder piepsen und leuchten. Wenn man die Pause (delay) verkleinert oder vergrößert, piepst und leuchtet es schneller oder langsamer.
