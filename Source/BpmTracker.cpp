/*
  ==============================================================================

    BpmTracker.cpp
    Created: 8 Sep 2016 12:47:28pm
    Author:  bvuong

  ==============================================================================
*/

#include "BpmTracker.h"

#define TIMEOUT 2000 // 2 seconds


BpmTracker::BpmTracker()
{
	previousTap = Time::currentTimeMillis();
}

BpmTracker::~BpmTracker()
{
}


void BpmTracker::tap()
{
	int64 currentTap = Time::currentTimeMillis();
	if (currentTap - previousTap >= TIMEOUT) {
		// clear samples
		tapDurations.reset();
	}
	tapDurations.addValue(currentTap - previousTap);
	previousTap = currentTap;
}

int BpmTracker::getBpm()
{
	if (tapDurations.getCount() > 1) {
		// calculate milliseconds per note
		int64 averageTapDuration = tapDurations.getAverage();

		// convert milliseconds per note to bpm
		int64 bpm = 60000 / averageTapDuration;
		return (int)bpm;
	}
	return 0;
}