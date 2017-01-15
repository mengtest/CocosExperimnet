//
//  RestartLabel.cpp
//  Prafull_Cocos_Base
//
//  Created by prafull kumar on 15/01/17.
//
//

#include "RestartLabel.hpp"

bool RestartLabel::initWithColor(cocos2d::Color3B color, cocos2d::Size size){
//    if (self = [super initWithColor:color size:size]) {
//        self.userInteractionEnabled = YES;
//        self.button = [SKSpriteNode spriteNodeWithColor:[UIColor colorWithRed:0.608 green:0.349 blue:0.714 alpha:1] size:CGSizeMake(100, 50)];
//        _button.position = CGPointMake(size.width / 2.0f, size.height - 350);
//        _button.name = NODENAME_BUTTON;
//        [self addChild:_button];
//        self.labelNode = [SKLabelNode labelNodeWithFontNamed:@"AmericanTypewriter-Bold"];
//        _labelNode.text = @"Restart";
//        _labelNode.fontSize = 20.0f;
//        _labelNode.horizontalAlignmentMode = SKLabelHorizontalAlignmentModeCenter;
//        _labelNode.verticalAlignmentMode = SKLabelVerticalAlignmentModeCenter;
//        _labelNode.position = CGPointMake(0, 0);
//        _labelNode.fontColor = [UIColor whiteColor];
//        [_button addChild:_labelNode];
//        self.gameCenterNode = [SKSpriteNode spriteNodeWithColor:[UIColor colorWithRed:0.608 green:0.349 blue:0.714 alpha:1]size:CGSizeMake(150, 50)];
//        _gameCenterNode.position = CGPointMake(size.width / 2.0f, size.height - 280);
//        [self addChild:_gameCenterNode];
//        self. gameCenterLabel=[SKLabelNode labelNodeWithFontNamed:@"AmericanTypewriter-Bold"];
//        _gameCenterLabel.text = @"Leaderboard";
//        _gameCenterLabel.fontSize = 20.0f;
//        _gameCenterLabel.horizontalAlignmentMode = SKLabelHorizontalAlignmentModeCenter;
//        _gameCenterLabel.verticalAlignmentMode = SKLabelVerticalAlignmentModeCenter;
//        _gameCenterLabel.position = CGPointMake(0, 0);
//        _gameCenterLabel.fontColor = [UIColor whiteColor];
//        [_gameCenterNode addChild:_gameCenterLabel];
//        
//    }
//    return self;
}


bool RestartLabel::onTouchBegan(Touch *touch, Event *unused_event){
    return  Layer::onTouchBegan(touch, unused_event);
}

void RestartLabel::onTouchMoved(Touch *touch, Event *unused_event){
    
}

void RestartLabel::onTouchEnded(Touch *touch, Event *unused_event){
    
}

void RestartLabel::onTouchCancelled(Touch *touch, Event *unused_event){
    
}
