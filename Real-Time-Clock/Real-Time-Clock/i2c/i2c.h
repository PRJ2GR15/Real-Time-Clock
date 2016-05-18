#ifndef i2c_H_
#define i2c_H_

class i2c 
{
public:
	i2c(bool isMaster, int clock); // clock can be 100 or 400 and represents the SCL value in kHz
	void start();
	void stop();
	void write(unsigned char data);
	unsigned char read(bool isLast);

private:

};

#endif