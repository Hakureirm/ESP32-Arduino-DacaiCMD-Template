#ifndef _CMD_QUEUE_H
#define _CMD_QUEUE_H

#include <Arduino.h>
#include "hmi_driver.h"

typedef unsigned char qdata;
typedef unsigned short qsize;

/*! 
*  \brief  清空指令数据
*/
void queue_reset();

/*! 
* \brief  添加指令数据
* \detial 串口接收的数据，通过此函数放入指令队列 
*  \param  _data 指令数据
*/
void queue_push(qdata _data);

/*! 
*  \brief  从指令队列中取出一条完整的指令
*  \param  cmd 指令接收缓存区
*  \param  buf_len 指令接收缓存区大小
*  \return  指令长度，0表示队列中无完整指令
*/
qsize queue_find_cmd(qdata *cmd, qsize buf_len);

#endif
