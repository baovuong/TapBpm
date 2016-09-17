/*
  ==============================================================================

    BpmTracker.h
    Created: 8 Sep 2016 12:47:28pm
    Author:  bvuong

  ==============================================================================
*/

#ifndef BPMTRACKER_H_INCLUDED
#define BPMTRACKER_H_INCLUDED
//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
//[/Headers]
class BpmTracker
{
private:
	int64 previousTap;
	ScopedPointer<StatisticsAccumulator<int64>> tapDurations;

public:
	BpmTracker();
	~BpmTracker();
	int getBpm();
	int getPpq();
	void tap();

};



#endif  // BPMTRACKER_H_INCLUDED
