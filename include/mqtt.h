#pragma once

/* I N C L U D E S ****************************************************/ 
#include <config.h>
#include <Arduino.h>
#include <language.h>
#include <PubSubClient.h>


/* P R O T O T Y P E S ********************************************************/ 
const char * addTopic(const char *suffix);
void mqttSetup();
void mqttCyclic();
void mqttPublish(const char* sendtopic, const char* payload, boolean retained);
