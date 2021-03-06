#include "mbed.h"

AnalogOut Aout(D7);
AnalogIn Ain(A0);

int sample = 200;
int i;

float ADCdata[200];

int main(){
  for (i = 0; i < sample; i++){
    Aout = Ain;
    ADCdata[i] = Ain;
    ThisThread::sleep_for(1000ms/sample);
  }
  for (i = 0; i < sample; i++){
    printf("%f\r\n", ADCdata[i]);
    ThisThread::sleep_for(100ms);
  }
}
