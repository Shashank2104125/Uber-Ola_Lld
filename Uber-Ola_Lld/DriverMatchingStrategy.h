#pragma once
#include "TripMetaData.h"
#include "DriverMgr.h"
using namespace std;

class DriverMatchingStrategy {
public:
	virtual Driver* matchDriver(TripMetaData* pTripMetaData) = 0;
};

