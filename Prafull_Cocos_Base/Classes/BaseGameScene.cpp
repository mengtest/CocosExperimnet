#include "BaseGameScene.h"
#include "SimpleAudioEngine.h"
#include <vector>
USING_NS_CC;

Scene* BaseWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = BaseWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool BaseWorld::init()
{
    
    std::string hexColor1 = "4ECDC4";
    std::string hexColor2 = "556270";
    
    std::vector<unsigned char> rgbColor1(3);
    std::vector<unsigned char> rgbColor2(3);
    
    hextodec(hexColor1, rgbColor1);
    hextodec(hexColor2, rgbColor2);
    Color4B color1 =Color4B(int(rgbColor1[0]),int(rgbColor1[1]),int(rgbColor1[2]),255);
    Color4B color2 = Color4B(int(rgbColor2[0]),int(rgbColor2[1]),int(rgbColor2[2]),255);
    if(LayerGradient::initWithColor(color1, color2, Vec2(0, -1))){
        return true;
    }
    return false;
}


void BaseWorld::menuCloseCallback(Ref* pSender)
{
    //Close the cocos2d-x game scene and quit the application
    Director::getInstance()->end();

    #if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
    
    /*To navigate back to native iOS screen(if present) without quitting the application  ,do not use Director::getInstance()->end() and exit(0) as given above,instead trigger a custom event created in RootViewController.mm as below*/
    
    //EventCustom customEndEvent("game_scene_close_event");
    //_eventDispatcher->dispatchEvent(&customEndEvent);
    
    
}


void BaseWorld::hextodec(std::string hex, std::vector<unsigned char>& rgb)

{
    
    
    std::string redString = hex.substr(0, 2);
    
    std::string greenString = hex.substr(2, 2);
    
    std::string blueString = hex.substr(4, 2);

    unsigned char red = (unsigned char)(convertFromHex(redString));
    
    unsigned char green = (unsigned char)(convertFromHex(greenString));
    
    unsigned char blue = (unsigned char)(convertFromHex(blueString));
    
    
    
    rgb[0] = red;
    
    rgb[1] = green;
    
    rgb[2] = blue;
    
}


int BaseWorld::convertFromHex(std::string hex)

{
    
    int value = 0;
    
    
    
    int a = 0;
    
    int b = hex.length() - 1;
    
    for (; b >= 0; a++, b--)
        
    {
        
        if (hex[b] >= '0' && hex[b] <= '9')
            
        {
            
            value += (hex[b] - '0') * (1 << (a * 4));
            
        }
        
        else
            
        {
            
            switch (hex[b])
            
            {
                    
                case 'A':
                    
                case 'a':
                    
                    value += 10 * (1 << (a * 4));
                    
                    break;
                    
                    
                    
                case 'B':
                    
                case 'b':
                    
                    value += 11 * (1 << (a * 4));
                    
                    break;
                    
                    
                    
                case 'C':
                    
                case 'c':
                    
                    value += 12 * (1 << (a * 4));
                    
                    break;
                    
                    
                    
                case 'D':
                    
                case 'd':
                    
                    value += 13 * (1 << (a * 4));
                    
                    break;
                    
                    
                    
                case 'E':
                    
                case 'e':
                    
                    value += 14 * (1 << (a * 4));
                    
                    break;
                    
                    
                    
                case 'F':
                    
                case 'f':
                    
                    value += 15 * (1 << (a * 4));
                    
                    break;
                    
                    
                    
                default:

                    
                    break;
                    
            }
            
        }
        
    }
    
    
    
    return value;
    
}
