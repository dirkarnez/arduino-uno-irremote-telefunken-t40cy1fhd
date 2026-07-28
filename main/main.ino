// #include <IRremote.hpp>
// #define IR_RECEIVE_PIN 7

// void setup()
// {
//   Serial.begin(9600);
//   IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK); // Start the receiver
// }

// void loop() {
//   if (IrReceiver.decode()) {
//       Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX); // Print "old" raw data
//       IrReceiver.printIRResultShort(&Serial); // Print complete received data in one line
//       IrReceiver.printIRSendUsage(&Serial);   // Print the statement required to send this data
//       IrReceiver.resume(); // Enable receiving of the next value
//   }
// }

// tv
// 01:00:45.908 -> E31C5FA0
// 01:00:45.908 -> Protocol=NEC Address=0xA0, Command=0x1C, Raw-Data=0xE31C5FA0, 32 bits, LSB first, Gap=3276750us, Duration=67450us
// 01:00:46.042 -> Send with: IrSender.sendNEC(0xA0, 0x1C, <numberOfRepeats>);

// down
// 01:01:02.720 -> AE515FA0
// 01:01:02.828 -> Protocol=NEC Address=0xA0, Command=0x51, Raw-Data=0xAE515FA0, 32 bits, LSB first, Gap=3276750us, Duration=67200us
// 01:01:02.849 -> Send with: IrSender.sendNEC(0xA0, 0x51, <numberOfRepeats>);

// ok
// 01:01:07.218 -> AA555FA0
// 01:01:07.250 -> Protocol=NEC Address=0xA0, Command=0x55, Raw-Data=0xAA555FA0, 32 bits, LSB first, Gap=3276750us, Duration=68000us
// 01:01:07.348 -> Send with: IrSender.sendNEC(0xA0, 0x55, <numberOfRepeats>);

// exit
// 01:01:12.273 -> E51A5FA0
// 01:01:12.273 -> Protocol=NEC Address=0xA0, Command=0x1A, Raw-Data=0xE51A5FA0, 32 bits, LSB first, Gap=3276750us, Duration=67500us
// 01:01:12.408 -> Send with: IrSender.sendNEC(0xA0, 0x1A, <numberOfRepeats>);

uint8_t tSendPin = 3;
void setup()  
{  
  pinMode(tSendPin, OUTPUT);
  IrSender.begin(tSendPin, ENABLE_LED_FEEDBACK, USE_DEFAULT_FEEDBACK_LED_PIN); // Specify send pin and enable feedback LED at default feedback LED pin
}  
                               
void loop()  
{  
  IrSender.sendNECRaw(0xE51A5FA0, 0);
  delay(100);
  IrSender.sendNECRaw(0xE51A5FA0, 0);
  delay(100);
  IrSender.sendNECRaw(0xE51A5FA0, 0);
  delay(100);
  IrSender.sendNECRaw(0xE51A5FA0, 0);
  delay(100);

  
  IrSender.sendNECRaw(0xE31C5FA0, 0);
  delay(100);
  
  IrSender.sendNECRaw(0xAE515FA0, 0);
  delay(100);
  
  IrSender.sendNECRaw(0xAE515FA0, 0);
  delay(100);
  
  IrSender.sendNECRaw(0xAE515FA0, 0);
  delay(100);
  
  IrSender.sendNECRaw(0xAA555FA0, 0);
  delay(100);
  
  delay(5000);
}  

