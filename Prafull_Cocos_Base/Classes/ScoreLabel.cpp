//
//  ScoreLabel.cpp
//  Prafull_Cocos_Base
//
//  Created by prafull kumar on 15/01/17.
//
//

#include "ScoreLabel.hpp"
using namespace cocos2d;

std::string ScoreLabel::getFinalPoint(){
    return this->finalPoint;
}
void ScoreLabel::setFinalPoint(std::string finalpoint){
    this->finalPoint = finalPoint;
}


bool ScoreLabel::initWithColor(cocos2d::Color4B color, cocos2d::Size size){
    cocos2d::Layer::init();
    this->setContentSize(size);
    
    
    Label* scoreLabelNode = Label::createWithSystemFont(finalPoint, "helvetica", 20.0f);
    scoreLabelNode->setHorizontalAlignment(cocos2d::TextHAlignment::CENTER);
    scoreLabelNode->setVerticalAlignment(cocos2d::TextVAlignment::CENTER);
    scoreLabelNode->setPosition(Vec2(size.width/2, size.height - 300));
    scoreLabelNode->setColor(cocos2d::Color3B::WHITE);
    addChild(scoreLabelNode);
    return true;
}
