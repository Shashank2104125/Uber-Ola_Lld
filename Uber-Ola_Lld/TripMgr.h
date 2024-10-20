#pragma once
#include "riderMgr.h"
#include "driverMgr.h"
#include "tripMetaData.h"
#include "trip.h"
#include "mutex"
#include "strategyMgr.h"
using namespace std;


class TripMgr {
	static TripMgr* tripMgrInstance;
	static mutex mtx;
	TripMgr() {
		riderMgr = RiderMgr::getRiderMgr();
		driverMgr = DriverMgr::getDriverMgr();
	}
	RiderMgr* riderMgr;
	DriverMgr* driverMgr;
	unordered_map<int, TripMetaData*> tripsMetaDataInfo;
	unordered_map<int, Trip*> tripsInfo;
public:
	static TripMgr* getTripMgr();
	void CreateTrip(Rider* pRider, Location* pSrcLoc, Location* pDstLoc);
	unordered_map<int, Trip*> getTripsMap();
};

