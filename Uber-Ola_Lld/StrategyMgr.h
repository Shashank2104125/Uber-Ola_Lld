#pragma once
#include "All_Headers.h"
#include "TripMetaData.h"
#include "PricingStrategy.h"
#include "DriverMatchingStrategy.h"
#include "leastTimeBasedMatchingStrategy.h"
#include "defaultPricingStrategy.h" 

using namespace std;

class StrategyMgr{
	StrategyMgr() {};
	static StrategyMgr* strategyMgrInstance;
	static mutex mtx;
public:
	static StrategyMgr* getStrategyMgr();
	PricingStrategy* determinePricingStrategy(TripMetaData* metaData);
	DriverMatchingStrategy* determineMatchingStrategy(TripMetaData* metaData);
};

