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
	Array<int64> tapDurations;
	int64 previousTap;

public:
	BpmTracker();
	~BpmTracker();
	int getBpm();
	int getPpq();
	void tap();

};



#endif  // BPMTRACKER_H_INCLUDED
