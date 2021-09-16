#include <arduinio.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  cout << "Wat is je naam? ";
  String naam;
  cin >> naam;
  if (naam == "Wouter") {
    cout << "Hey, Wout! Leuk om je weer te zien." << endl;
  } else if (naam == "Mathijs") {
    cout << "Hallo Mathijs! Dit is je reminder om je kamer schoon te maken." << endl; 
  } else {
    cout << "Hallo " << naam << ", aangenaam kennis te maken." << endl;
  }
  
  cout << "Hoe oud ben je? ";
  int leeftijd;
  cin >> leeftijd;
  // verder aanvullen
  if (leeftijd < 16) {
    cout << "Nog geen alcohol voor jou." << endl;
  } else if (leeftijd > 16 && leeftijd < 18) {
    cout << "In Duitsland mag je al een biertje drinken." << endl;
  } else {
    cout << "Zonder na te denken mag je overal een drankje halen" << endl;
  }

  cout <<"Welke opleiding volg je? ";
  String opleiding;
  cin >> opleiding;
  if (opleiding == "TI") {
    cout <<"Lekker bezig." << endl;
  } else {
    cout <<"Ik ben het niet eens met je keus voor " << opleiding << ". Ik ga je adviseren om over te stappen naar TI" << endl;
  }

  cout <<"Woon je al op kamers? ";
  bool antwoord;
  cin >> antwoord;
  if (antwoord == true) {
    cout <<"Het is fijn hé om zelf je bedtijd te bepalen." << endl;
  } else if (antwoord != true) {
    cout <<"Je bent echt wat aan het missen." <<  endl;
  }

  exit(0);
}
