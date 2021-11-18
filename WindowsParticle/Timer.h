#pragma once
#include <Windows.h>
class Timer
{
private:
	DWORD start;
public:
	Timer(void);
	void reset(void);
	double get(void);
	virtual ~Timer(void);
};
