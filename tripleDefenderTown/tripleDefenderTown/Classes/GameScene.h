#ifndef _GAMESCENE__H_
#define _GAMESCENE__H_
#define NOTIFY_MAP_TOUCH "notify_map_touch"
#define NOTIFY_MAP_MOVE "notify_map_move"
#define NOTIFY_MAP_END "notify_map_end"
#define NOTIFY_MAP_CANCEL "notify_map_cancel"
#include "GameDefine.h"
#include "Basic.h"
#include "Defender.h"
#include "Map.h"
class GameScene : public cocos2d::CCLayer
{
public: 
virtual bool init();    
virtual void onEnter(); 
static  void Show();
private:
Defender *moveDefender;
void menuCallbackTest(CCObject *sender);
void onClickTest(CCObject* obj);
void onMapTouch(CCObject* obj);
void onMapMove(CCObject* obj);
void onMapEnd(CCObject* obj);
void onMapCancel(CCObject* obj);
void setMoveDefenderPosition(int px,int py);
void setNextMoveDefender();
CREATE_FUNC(GameScene);
};

#endif
