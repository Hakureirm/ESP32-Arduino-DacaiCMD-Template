
#include <Arduino.h>
#include <Wire.h>
#include <ArduinoJson.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <freertos/queue.h>
#include "hmi_user_uart.h"

// SendChar 函数在其他文件中定义
void SendChar(uchar t) {
    Serial.write(t);  // 发送一个字节
}

void setup() {
  Serial.begin(115200);
  Wire.begin();

}

void loop() {

}

