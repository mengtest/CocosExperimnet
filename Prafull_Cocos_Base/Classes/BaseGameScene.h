#ifndef __BaseWorld_SCENE_H__
#define __BaseWorld_SCENE_H__

#include "cocos2d.h"

class BaseWorld : public cocos2d::LayerGradient
{
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
