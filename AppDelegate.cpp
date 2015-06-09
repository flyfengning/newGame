#include "AppDelegate.h"
#include "HelloWorldScene.h"

USING_NS_CC;

AppDelegate::AppDelegate() {

}

AppDelegate::~AppDelegate() 
{
}

//if you want a different context,just modify the value of glContextAttrs
//it will takes effect on all platforms
void AppDelegate::initGLContextAttrs()
{
    //set OpenGL context attributions,now can only set six attributions:
    //red,green,blue,alpha,depth,stencil
    GLContextAttrs glContextAttrs = {8, 8, 8, 8, 24, 8};

    GLView::setGLContextAttrs(glContextAttrs);
}

bool AppDelegate::applicationDidFinishLaunching()
{
    auto director = Director::getInstance();
    auto glview = director->getOpenGLView();
    if(!glview) {
        glview = GLViewImpl::create("My Game");
        director->setOpenGLView(glview);
    }
    
    /*
    Size size =  Director::getInstance()->getWinSize();
    std::vector<std::string> v;
    if(size.width > 480)
    {
        v.push_back("large");
    }
    else
    {
        v.push_back("small");
    }
    FileUtils::getInstance()->setSearchPaths(v);
    */
    //让资源分辨率和设计分辨率一样大小，
    //Director::getInstance()->setContentScaleFactor(资源的高/设计的高)
    glview->setDesignResolutionSize(800, 480, ResolutionPolicy::FIXED_HEIGHT);
    //
    //800 * 480
    //480*320 = 1.5
    //480*1.5 = 720
    // 720  * 480
    
   
    director->setDisplayStats(true);
    director->setAnimationInterval(1.0 / 60);
    
    auto scene = HelloWorld::createScene();
    director->runWithScene(scene);

    return true;
}


// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground() {
    Director::getInstance()->stopAnimation();

    // if you use SimpleAudioEngine, it must be pause
    // SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground() {
    Director::getInstance()->startAnimation();

    // if you use SimpleAudioEngine, it must resume here
    // SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
}
