int semaforo1Rojo = 4;
int semaforo1Ambar = 5;
int semaforo1Verde = 6;

int semaforo2Rojo = 7;
int semaforo2Ambar = 8;
int semaforo2Verde = 9;

void setup() {
  // Configurar los pines como salidas
  pinMode(semaforo1Rojo, OUTPUT);
  pinMode(semaforo1Ambar, OUTPUT);
  pinMode(semaforo1Verde, OUTPUT);
  
  pinMode(semaforo2Rojo, OUTPUT);
  pinMode(semaforo2Ambar, OUTPUT);
  pinMode(semaforo2Verde, OUTPUT);
}

void loop() {
  // Secuencia 1: Rojo 3 segundos - Verde 2 segundos
  digitalWrite(semaforo1Rojo, HIGH);
  delay(3000);
  digitalWrite(semaforo1Rojo, LOW);
  
  digitalWrite(semaforo1Verde, HIGH);
  delay(2000);
  digitalWrite(semaforo1Verde, LOW);
  
  // Secuencia 2: Rojo 1 segundo - Ámbar 500 ms
  digitalWrite(semaforo1Rojo, HIGH);
  delay(1000);
  digitalWrite(semaforo1Rojo, LOW);
  
  digitalWrite(semaforo1Ambar, HIGH);
  delay(500);
  digitalWrite(semaforo1Ambar, LOW);
  
  // Secuencia 3: Verde 1 segundo - Rojo 3 segundos
  digitalWrite(semaforo1Verde, HIGH);
  delay(1000);
  digitalWrite(semaforo1Verde, LOW);
  
  digitalWrite(semaforo1Rojo, HIGH);
  delay(3000);
  digitalWrite(semaforo1Rojo, LOW);
  
  // Secuencia 4: Ámbar 500 ms - Rojo 2 segundos
  digitalWrite(semaforo1Ambar, HIGH);
  delay(500);
  digitalWrite(semaforo1Ambar, LOW);
  
  digitalWrite(semaforo1Rojo, HIGH);
  delay(2000);
  digitalWrite(semaforo1Rojo, LOW);
  
  // Repetir la misma secuencia para el segundo semáforo (semaforo2)
  digitalWrite(semaforo2Rojo, HIGH);
  delay(3000);
  digitalWrite(semaforo2Rojo, LOW);
  
  digitalWrite(semaforo2Verde, HIGH);
  delay(2000);
  digitalWrite(semaforo2Verde, LOW);
  
  digitalWrite(semaforo2Rojo, HIGH);
  delay(1000);
  digitalWrite(semaforo2Rojo, LOW);
  
  digitalWrite(semaforo2Ambar, HIGH);
  delay(500);
  digitalWrite(semaforo2Ambar, LOW);
  
  digitalWrite(semaforo2Verde, HIGH);
  delay(1000);
  digitalWrite(semaforo2Verde, LOW);
  
  digitalWrite(semaforo2Rojo, HIGH);
  delay(3000);
  digitalWrite(semaforo2Rojo, LOW);
  
  digitalWrite(semaforo2Ambar, HIGH);
  delay(500);
  digitalWrite(semaforo2Ambar, LOW);
  
  digitalWrite(semaforo2Rojo, HIGH);
  delay(2000);
  digitalWrite(semaforo2Rojo, LOW);
}