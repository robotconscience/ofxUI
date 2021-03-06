/**********************************************************************************
 
 Copyright (C) 2012 Syed Reza Ali (www.syedrezaali.com)
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of
 this software and associated documentation files (the "Software"), to deal in
 the Software without restriction, including without limitation the rights to
 use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 of the Software, and to permit persons to whom the Software is furnished to do
 so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.
 
 **********************************************************************************/

#pragma once

#include "ofxUICanvas.h"
#include "ofxUIScrollableCanvas.h"
#include "ofxUIToggle.h"

class ofxUITabBar : public ofxUICanvas
{
public:
    ofxUITabBar();
    ~ofxUITabBar();
    ofxUITabBar(float x, float y, float w, float h);
    void initTabBar();
    void addCanvas(ofxUICanvas *_canvas);
    void addCanvas(ofxUIScrollableCanvas *_canvas);
    void mainUiEvent(ofxUIEventArgs &event);
    void enable();
    void disable();
    void toggleVisible();
    ofxUICanvas* getActiveCanvas();
    void setActiveCanvas( ofxUICanvas *_canvas );
    bool isHit(int x, int y);
    void saveSettings(string pathToSaveTo, string fileNamePrefix);
    void loadSettings(string pathToLoadFrom, string fileNamePrefix);
    
protected:
    map<ofxUIToggle*, ofxUICanvas*> canvases;
    ofxUICanvas *active;
};