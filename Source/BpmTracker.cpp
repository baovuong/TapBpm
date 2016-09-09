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
		tapDurations.clearQuick();
	}
	tapDurations.add(currentTap - previousTap);
	previousTap = currentTap;
}

int BpmTracker::getBpm()
{
	if (tapDurations.size() > 1) {
		// calculate milliseconds per note
		double averageTapDuration = 0;
		for (int i = 0; i < tapDurations.size(); i++) {
			averageTapDuration += tapDurations[i];
		}
		averageTapDuration /= tapDurations.size();

		// convert milliseconds per note to bpm
		double bpm = 60000 / averageTapDuration;
		return (int)bpm;
	}
	return 0;
}