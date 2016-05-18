//========================================================================
// FILENAME : rtc.cpp
// CREATED : 18-05-2016
// AUTHOR : Tonni Nybo Follmann
// DESCR. : implementation of the rtc driver module for the ds3231 rtc
//
//------------------------------------------------------------------------
//
// REV. DATE/AUTHOR CHANGE DESCRIPTION
// 1.0 08-04-2016/Tonni Nybo Follmann created the initial working version
//========================================================================
#include "rtc/rtc.h"
//=====================================
// CLASS : rtc
// DESCR. : represents the real time clock module ds3231
//=====================================

//=============================================================
// METHOD : rtc
// DESCR. : constructor that initiates the rtc module and sets the adress to adress,
// as well as initializing the i2c to a requested frequency which must be either 100 
// or 400 kHz
//=============================================================
rtc::rtc(unsigned char adress, int clock) : i2c_obj(1, clock)
{
	 this->adress = adress;
}
//=============================================================
// METHOD : setTime
// DESCR. : sets up the RTC to the time passed through as parameters
//=============================================================
void rtc::setTime( unsigned char hours, unsigned char minuts, unsigned char seconds )
{
	
}
//=============================================================
// METHOD : setTime
// DESCR. : sets up the RTC to the date info passed through as parameters.
//=============================================================
void rtc::setDate( unsigned char date, unsigned char month, unsigned char year, unsigned char dayOfWeek )
{
	
}
//=============================================================
// METHOD : getHours
// DESCR. : returns current hours from the RTC module
//=============================================================
int rtc::getHours()
{
	
}
//=============================================================
// METHOD : getMinuts
// DESCR. : returns current minuts from the RTC module
//=============================================================
int rtc::getMinuts()
{
	
}
//=============================================================
// METHOD : getSeconds
// DESCR. : returns current seconds from the RTC module
//=============================================================
int rtc::GetSeconds()
{
	
}
//=============================================================
// METHOD : getDayOfWeek
// DESCR. : returns current Day of the week from the RTC module
//=============================================================
int rtc::getDayOfWeek()
{
	
}
//=============================================================
// METHOD : getDate
// DESCR. : returns current minuts from the RTC module
//=============================================================
int rtc::getDate()
{
	
}
//=============================================================
// METHOD : getMonth
// DESCR. : returns current month from the RTC module
//=============================================================
int rtc::getMonth()
{
	
}
//=============================================================
// METHOD : getYear
// DESCR. : returns current Year from the RTC module
//=============================================================
int rtc::getYear()
{
	
}
//=============================================================
// METHOD : intToBCD
// DESCR. : converts an 8 bit unsigned value to the binary coded decimal format
//=============================================================
unsigned char rtc::intToBCD( unsigned char val )
{
	unsigned char tens = val/10 << 4;
	unsigned char ones = val % 10;
	return tens + ones;
}
//=============================================================
// METHOD : bcdToInt
// DESCR. : converts from 8 bit binary coded decimal to int.
//=============================================================
int rtc::bcdToInt( unsigned char BCDval )
{
	
}












 