/*
  ==============================================================================

    BpmTracker.cpp
    Created: 8 Sep 2016 12:47:28pm
    Author:  bvuong

  ==============================================================================
*/

#include "BpmTracker.h"

#define DEVIATION_CAP 60

BpmTracker::BpmTracker()
{
	previousTap = Time::currentTimeMillis();
    tapDurations = new StatisticsAccumulator<int64>();
}

BpmTracker::~BpmTracker()
{
    tapDurations = nullptr;
}


void BpmTracker::tap()
{
	int64 currentTap = Time::currentTimeMillis();

    if (tapDurations->getStandardDeviation() >= DEVIATION_CAP) {
        tapDurations->reset();
    }
    tapDurations->addValue(currentTap - previousTap);

    previousTap = currentTap;
    Logger::writeToLog("sd: "+String(tapDurations->getStandardDeviation()));
}

int BpmTracker::getBpm()
{
	if (tapDurations->getCount() > 1) {

		// convert milliseconds per note to bpm
		double bpm = 60000.0 / tapDurations->getAverage();
        Logger::writeToLog("bpm: "+String(bpm) + " -> " + String(roundDoubleToInt(bpm)));
		return roundDoubleToInt(bpm);

	}
	return 0;
}
