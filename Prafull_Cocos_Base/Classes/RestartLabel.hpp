//
//  RestartLabel.hpp
//  Prafull_Cocos_Base
//
//  Created by prafull kumar on 15/01/17.
//
//

#ifndef RestartLabel_hpp
#define RestartLabel_hpp

#include "cocos2d.h"
using namespace cocos2d;

class RestartViewDelegate{
    
public:
    virtual void restartViewDidPressRestartButton(Layer* ,Layer*) = 0;
    virtual void restartViewDidPressLeaderboardButton(Layer* ,Layer*) = 0;
};


class RestartLabel :  public Layer{
    RestartViewDelegate* delegate;
    std::string finalPoint;
    Node* button;
    Node* labelNode;
    Node* scoreLabelNode;
    Node* highestLabelNode;
    Node* gameCenterNode;
    Node* gameCenterLabel;
    
public:
    static RestartLabel* getInstanceWithSize(Size,std::string);
    void dismiss();
    void showInScene(Layer*);
};





#endif /* RestartLabel_hpp */
