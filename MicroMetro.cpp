

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include "MicroMetro.h"

MicroMetro::MicroMetro()    {

	this->interval_micros = 1000;

}


MicroMetro::MicroMetro(unsigned long interval){

	this->interval_micros = interval;

}


void MicroMetro::setInterval(unsigned long interval){
  this->interval_micros = interval;
}

uint8_t MicroMetro::bang()    {
  now = micros();

  if ( interval_micros == 0 ){
    previous_micros = now;
    return 1;
  }

  if ( (now - previous_micros) >= interval_micros) {
	    #ifdef NOCATCH_UP
	    previous_micros = now ;
	    #else
	    previous_micros += interval_micros ;
	    #endif

      return 1;
  }

  return 0;

}

uint8_t MicroMetro::check() {
 return this->bang();
}

void MicroMetro::reset(){
  this->previous_micros = micros();
}


