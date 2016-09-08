/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.2.3

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "TapBpmCompontent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
TapBpmCompontent::TapBpmCompontent ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (tapButton = new TextButton ("tap button"));
    tapButton->setButtonText (TRANS("Tap"));
    tapButton->addListener (this);

    addAndMakeVisible (bpmTextEditor = new TextEditor ("bpm text editor"));
    bpmTextEditor->setMultiLine (false);
    bpmTextEditor->setReturnKeyStartsNewLine (false);
    bpmTextEditor->setReadOnly (false);
    bpmTextEditor->setScrollbarsShown (true);
    bpmTextEditor->setCaretVisible (true);
    bpmTextEditor->setPopupMenuEnabled (true);
    bpmTextEditor->setText (String());

    addAndMakeVisible (getBpmButton = new TextButton ("get bpm button"));
    getBpmButton->setButtonText (TRANS("Get"));
    getBpmButton->addListener (this);

    addAndMakeVisible (setBpmButton = new TextButton ("set bpm button"));
    setBpmButton->setButtonText (TRANS("Set"));
    setBpmButton->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (480, 480);


    //[Constructor] You can add your own custom stuff here..
    bpmTextEditor->setInputRestrictions(3, "0123456789");
	bpmTextEditor->setFont(Font(bpmTextEditor->getHeight()));


    //[/Constructor]
}

TapBpmCompontent::~TapBpmCompontent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    tapButton = nullptr;
    bpmTextEditor = nullptr;
    getBpmButton = nullptr;
    setBpmButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void TapBpmCompontent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff505050));

    g.setColour (Colour (0xff8dd634));
    g.drawRoundedRectangle (5.0f, 5.0f, 470.0f, 470.0f, 4.000f, 5.000f);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void TapBpmCompontent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    tapButton->setBounds (16, 88, 448, 320);
    bpmTextEditor->setBounds (160, 15, 160, 56);
    getBpmButton->setBounds (16, 15, 136, 56);
    setBpmButton->setBounds (328, 15, 136, 56);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void TapBpmCompontent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == tapButton)
    {
        //[UserButtonCode_tapButton] -- add your button handler code here..
        //[/UserButtonCode_tapButton]
    }
    else if (buttonThatWasClicked == getBpmButton)
    {
        //[UserButtonCode_getBpmButton] -- add your button handler code here..
        //[/UserButtonCode_getBpmButton]
    }
    else if (buttonThatWasClicked == setBpmButton)
    {
        //[UserButtonCode_setBpmButton] -- add your button handler code here..
        //[/UserButtonCode_setBpmButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="TapBpmCompontent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="480" initialHeight="480">
  <BACKGROUND backgroundColour="ff505050">
    <ROUNDRECT pos="5 5 470 470" cornerSize="4" fill="solid: 3e3f3e" hasStroke="1"
               stroke="5, mitered, butt" strokeColour="solid: ff8dd634"/>
  </BACKGROUND>
  <TEXTBUTTON name="tap button" id="77c38d7fdb95c278" memberName="tapButton"
              virtualName="" explicitFocusOrder="0" pos="16 88 448 320" buttonText="Tap"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="bpm text editor" id="8c19f9405ac908c9" memberName="bpmTextEditor"
              virtualName="" explicitFocusOrder="0" pos="160 15 160 56" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTBUTTON name="get bpm button" id="53a18679a300d131" memberName="getBpmButton"
              virtualName="" explicitFocusOrder="0" pos="16 15 136 56" buttonText="Get"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="set bpm button" id="fddc3f3871d6b9db" memberName="setBpmButton"
              virtualName="" explicitFocusOrder="0" pos="328 15 136 56" buttonText="Set"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
