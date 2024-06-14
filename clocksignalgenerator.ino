void setup() {
  pinMode(9, OUTPUT); // Pin 13'ü çıkış olarak ayarla
  Serial.begin(115200); // Seri iletişimi 115200 baud hızında başlat
  // Timer1'i yapılandır
  TCCR1A = _BV(COM1A0);  // Karşılaştırma gerçekleştiğinde OC1A'yı (Pin 9) otomatik olarak geçir
  TCCR1B = _BV(WGM12) | _BV(CS10); // Timer'ı CTC (Karşılaştırmada Zamanlayıcıyı Temizle) moduna ve ölçeklendirmesiz olarak ayarla
  OCR1A = 19999; // 400 Hz oluşturmak için karşılaştırma değerini ayarla
}

void loop() {
}
