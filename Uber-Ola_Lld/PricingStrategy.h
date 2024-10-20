#pragma once

#include "TripMetaData.h"
using namespace std;
class PricingStrategy {
public:
	virtual double calculatePrice(TripMetaData* pTripMetaData) = 0;
};

