int led1 = 8;             // Pin del primer LED
int led2 = 9;              // Pin del segundo LED
int led3 = 10;             // Pin del tercer LED
int led4 = 13;             // Pin del cuarto LED
int valorLDR1 = 0;         // Valor del primer LDR
int valorLDR2 = 0;         // Valor del segundo LDR
int valorLDR3 = 0;         // Valor del tercer LDR
int valorLDR4 = 0;         // Valor del cuarto LDR

void setup() {
  pinMode(led1, OUTPUT);   // Configurar el primer LED como salida
  pinMode(led2, OUTPUT);   // Configurar el segundo LED como salida
  pinMode(led3, OUTPUT);   // Configurar el tercer LED como salida
  pinMode(led4, OUTPUT);   // Configurar el cuarto LED como salida
  Serial.begin(9600);      // Inicializar el monitor serial
}

void loop() {
  // Leer valores de los LDRs
  valorLDR1 = analogRead(A4);  // LDR conectado a A4
  valorLDR2 = analogRead(A1);  // LDR conectado a A1
  valorLDR3 = analogRead(A3);  // LDR conectado a A3
  valorLDR4 = analogRead(A2);  // LDR conectado a A2 
  // Mostrar valores en el monitor serial
  Serial.print("LDR1: ");
  Serial.print(valorLDR1);
  Serial.print(" | LDR2: ");
  Serial.print(valorLDR2);
  Serial.print(" | LDR3: ");
  Serial.print(valorLDR3);
  Serial.print(" | LDR4: ");
  Serial.println(valorLDR4);

  // Control del primer LED
  if (valorLDR1 < 270) {
    digitalWrite(led1, LOW);  // Apagar el primer LED
  } else if (valorLDR1 >= 400 && valorLDR1 <= 790) {
    digitalWrite(led1, HIGH); // Encender el primer LED
  }

  // Control del segundo LED
  if (valorLDR2 < 270) {
    digitalWrite(led2, LOW);  // Apagar el segundo LED
  } else if (valorLDR2 >= 400 && valorLDR2 <= 790) {
    digitalWrite(led2, HIGH); // Encender el segundo LED
  }

  // Control del tercer LED
  if (valorLDR3 < 270) {
    digitalWrite(led3, LOW);  // Apagar el tercer LED
  } else if (valorLDR3 >= 400 && valorLDR3 <= 790) {
    digitalWrite(led3, HIGH); // Encender el tercer LED
  }

  // Control del cuarto LED
  if (valorLDR4 < 270) {
    digitalWrite(led4, LOW);  // Apagar el cuarto LED
  } else if (valorLDR4 >= 400 && valorLDR4 <= 790) {
    digitalWrite(led4, HIGH); // Encender el cuarto LED
  }

  delay(100); // Pausa entre lecturas
}
