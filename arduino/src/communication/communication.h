/***
 *
 *
 * INPUT - UDP datagrams from client
 * OUTPUT - in_buffer
 *
 * */

#ifndef Communication_h
#define Communication_h

// #define DEBUG // DEBUG = 0 -> DEBUG mode ON, otherwise OFF


#include <ESP8266WiFi.h>
#include <WiFiUdp.h>

#define localUdpPort 4210 // port ESP8266 will be listening
#define remoteUdpPort 4211 // port ESP8266 will be connecting to

// Establishing wifi connection and listening socket for read_data
void communication_init();

/***
 *
 * Checking for inbound messages and storing them inside in_buffer
 * INPUT - UDP datagrams from client
 * OUTPUT - in_buffer
 *
 * */
boolean communication_read_data(char *in_buffer, int bufer_size);

/***
 *
 * Sending messages to remote UDP server and adding signal strength to every message
 * INPUT - out_buffer
 * OUTPUT - UDP datagrams from client
 *
 * */
void communication_send_data(char *out_buffer);

int8_t communication_read_rssi();

#endif