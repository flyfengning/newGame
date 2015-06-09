#include "HelloWorldScene.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    auto scene = Scene::create();
    auto layer = HelloWorld::create();
    scene->addChild(layer);
    return scene;
}

bool HelloWorld::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    Size size = Director::getInstance()->getWinSize();
    Size visiableSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();
    log("winSize = (%f,%f)",size.width,size.height);
    log("visiableSize = (%f,%f)",visiableSize.width,visiableSize.height);
    log("origin = (%f,%f)",origin.x,origin.y);
    
    Sprite *bg = Sprite::create("HelloWorld.png");
    bg->setPosition(Vec2(size.width/2, size.height/2));
    this->addChild(bg);
    
    Sprite *sprite = Sprite::create("Icon-57.png");
    sprite->setAnchorPoint(Vec2(0,0));
    sprite->setPosition(Vec2(0,0));
    this->addChild(sprite);
    return true;
}

