/*
 * i2c.cpp
 *
 * Created: 09-04-2016 05:02:16
 *  Author: Tonni
 */ 
#include <avr/io.h>
#include "i2c.h"

i2c::i2c(bool isMaster, int clock)
{
	if(isMaster == true)
	{
		if(clock == 400)
		{
			TWSR = 0b00000001; // set prescaler
			TWBR = 0x03; // sets SCL to 6,211 kHz
		}
		else if(clock == 100){
			TWSR = 0b00000001; // set prescaler
			TWBR = 0x12; // sets SCL to 6,211 kHz
		}
		else
		{
			TWSR = 0b00000011; // set prescaler
			TWBR = 0x14; // sets SCL to 6,211 kHz
		}
		TWCR = 0x04; // enable the TWI module in mega2560.
	}
}

void i2c::start()
{
	TWCR = (1 << TWINT) | (1 << TWSTA) | (1 << TWEN);
	while (!(TWCR & (1<<TWINT)));
}

void i2c::stop()
{
	TWCR = (1 << TWINT) | (1 << TWEN ) | (1<<TWSTO);
};
void i2c::write(unsigned char data)
{
	TWDR = data;
	TWCR = (1<< TWINT) | (1<<TWEN);
	while (!(TWCR & (1<<TWINT)));
	
};
unsigned char i2c::read(bool isLast)
{
	if ( isLast == 0)
		TWCR = (1<<TWINT) | (1<<TWEN) | (1<<TWEA);
	else
		TWCR = (1<<TWINT) | (1<<TWEN);
	while ((TWCR & (1 <<TWINT)) == 0);
	return TWDR;
};