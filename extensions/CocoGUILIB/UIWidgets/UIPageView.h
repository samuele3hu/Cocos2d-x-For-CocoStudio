/****************************************************************************
 Copyright (c) 2013 cocos2d-x.org
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#ifndef __UIPAGEVIEW_H__
#define __UIPAGEVIEW_H__

#include "UIPanel.h"

NS_CC_EXT_BEGIN

class UIPageView : public UIPanel{
    
public:
    UIPageView();
    virtual ~UIPageView();
    static UIPageView* create();
    void addWidgetToPage(UIWidget* widget, int pageIdx, bool forceCreate);
    void addPage(UIContainerWidget* page);
    void insertPage(UIContainerWidget* page, int idx);
    void removePage(UIContainerWidget* page, bool cleanup);
    
    virtual bool removeChild(UIWidget* widget, bool cleanup);
    virtual void removeAllChildrenAndCleanUp(bool cleanup);
    virtual void onTouchBegan(cocos2d::CCPoint &touchPoint);
    virtual void onTouchMoved(cocos2d::CCPoint &touchPoint);
    virtual void onTouchEnded(cocos2d::CCPoint &touchPoint);
    virtual void onTouchCancelled(cocos2d::CCPoint &touchPoint);
protected:
    virtual bool addChild(UIWidget* widget);
    virtual bool init();
protected:
    int m_nCurPageIdx;
    CCArray* m_pages;
};

NS_CC_EXT_END

#endif /* defined(__UIPageView__) */
