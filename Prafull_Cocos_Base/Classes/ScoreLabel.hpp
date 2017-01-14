//
//  ScoreLabel.hpp
//  Prafull_Cocos_Base
//
//  Created by prafull kumar on 15/01/17.
//
//

#ifndef ScoreLabel_hpp
#define ScoreLabel_hpp

#include "cocos2d.h"

class ScoreLabel : public cocos2d::Layer{
private:
    std::string finalPoint;
public:
    std::string getFinalPoint();
    void setFinalPoint(std::string);
    bool initWithColor(cocos2d::Color4B,cocos2d::Size);
};

#endif /* ScoreLabel_hpp */
