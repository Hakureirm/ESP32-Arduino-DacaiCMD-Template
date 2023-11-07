#ifndef _HMI_USER_UART_H
#define _HMI_USER_UART_H

#include <Arduino.h>

#define uchar unsigned char
#define uint8 unsigned char
#define uint16 unsigned short int
#define uint32 unsigned long
#define int16 short int
#define int32 long

/****************************************************************************
* 名    称： UartInit()
* 功    能： 串口初始化
* 入口参数： Baudrate - 波特率设置
* 出口参数： 无
****************************************************************************/
// void UartInit(uint32_t Baudrate);

/*****************************************************************
* 名    称： SendChar()
* 功    能： 发送1个字节
* 入口参数： t - 发送的字节
* 出口参数： 无
*****************************************************************/
void SendChar(uchar t);

#endif
