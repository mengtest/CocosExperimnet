#ifndef __BaseWorld_SCENE_H__
#define __BaseWorld_SCENE_H__

#include "cocos2d.h"

class BaseWorld : public cocos2d::LayerGradient
{
private:
    cocos2d::Action* moveWallAction;
    cocos2d::Action* moveHeadAction;
    cocos2d::Sprite* hero;
    cocos2d::Sprite* ground;
    cocos2d::Sprite* ceiling;
    cocos2d::Label* labelNode;
    cocos2d::Label* tapToStart;
    bool isGameOver;
    bool contactBegin;
    bool musicPlaying;
    bool contentCreated;
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    void hextodec(std::string hex, std::vector<unsigned char>& rgb);
    int convertFromHex(std::string hex);
    // implement the "static create()" method manually
    CREATE_FUNC(BaseWorld);
};

#endif // __BaseWorld_SCENE_H__
