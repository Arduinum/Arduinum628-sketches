// Объявляем переменные для LEDS и присваиваем числа с номером пинов
int LED_RED = 4;
int LED_GREEN = 2;

void setup() {
  // Выставляем режим выхода для пинов LEDS
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
}

void loop() {
  digitalWrite(LED_RED, HIGH); // включаем красный LED
  digitalWrite(LED_GREEN, LOW); // выключаем зелёный LED
  delay(1000); // задержка 1 сек

  digitalWrite(LED_RED, LOW); // выключаем красный LED
  digitalWrite(LED_GREEN, HIGH); // включаем зелёный LED
  delay(1000); // задержка 1 сек
}