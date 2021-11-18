#include "Timer.h"

Timer::Timer(void)
{
	reset();
}

void Timer::reset(void)
{
	start = GetTickCount64();
}

double Timer::get(void)
{
	return(GetTickCount64() - start) / 1000.;
}

Timer::~Timer(void){}
