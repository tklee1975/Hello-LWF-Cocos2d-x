#include "lua_cocos2dx_studio_auto.hpp"
#include "CocoStudio.h"
#include "tolua_fix.h"
#include "LuaBasicConversions.h"



int lua_cocos2dx_studio_ActionObject_setCurrentTime(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ActionObject* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ActionObject",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ActionObject*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ActionObject_setCurrentTime'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setCurrentTime(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setCurrentTime",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ActionObject_setCurrentTime'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ActionObject_pause(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ActionObject* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ActionObject",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ActionObject*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ActionObject_pause'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->pause();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "pause",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ActionObject_pause'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ActionObject_setName(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ActionObject* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ActionObject",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ActionObject*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ActionObject_setName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ActionObject_setName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ActionObject_setUnitTime(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ActionObject* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ActionObject",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ActionObject*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ActionObject_setUnitTime'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setUnitTime(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setUnitTime",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ActionObject_setUnitTime'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ActionObject_getTotalTime(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ActionObject* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ActionObject",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ActionObject*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ActionObject_getTotalTime'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getTotalTime();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTotalTime",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ActionObject_getTotalTime'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ActionObject_getName(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ActionObject* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ActionObject",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ActionObject*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ActionObject_getName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const char* ret = cobj->getName();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ActionObject_getName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ActionObject_stop(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ActionObject* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ActionObject",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ActionObject*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ActionObject_stop'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->stop();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "stop",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ActionObject_stop'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ActionObject_play(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ActionObject* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ActionObject",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocostudio::ActionObject*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ActionObject_play'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            cocos2d::CallFunc* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"CallFunc",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::CallFunc*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cobj->play(arg0);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 0) {
            cobj->play();
            return 0;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "play",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ActionObject_play'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ActionObject_getCurrentTime(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ActionObject* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ActionObject",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ActionObject*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ActionObject_getCurrentTime'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getCurrentTime();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCurrentTime",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ActionObject_getCurrentTime'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ActionObject_removeActionNode(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ActionObject* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ActionObject",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ActionObject*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ActionObject_removeActionNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::ActionNode* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"ActionNode",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::ActionNode*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->removeActionNode(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeActionNode",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ActionObject_removeActionNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ActionObject_getLoop(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ActionObject* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ActionObject",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ActionObject*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ActionObject_getLoop'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->getLoop();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getLoop",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ActionObject_getLoop'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ActionObject_addActionNode(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ActionObject* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ActionObject",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ActionObject*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ActionObject_addActionNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::ActionNode* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"ActionNode",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::ActionNode*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addActionNode(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addActionNode",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ActionObject_addActionNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ActionObject_getUnitTime(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ActionObject* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ActionObject",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ActionObject*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ActionObject_getUnitTime'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getUnitTime();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getUnitTime",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ActionObject_getUnitTime'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ActionObject_isPlaying(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ActionObject* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ActionObject",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ActionObject*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ActionObject_isPlaying'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isPlaying();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isPlaying",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ActionObject_isPlaying'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ActionObject_updateToFrameByTime(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ActionObject* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ActionObject",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ActionObject*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ActionObject_updateToFrameByTime'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->updateToFrameByTime(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateToFrameByTime",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ActionObject_updateToFrameByTime'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ActionObject_setLoop(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ActionObject* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ActionObject",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ActionObject*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ActionObject_setLoop'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setLoop(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setLoop",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ActionObject_setLoop'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ActionObject_simulationActionUpdate(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ActionObject* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ActionObject",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ActionObject*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ActionObject_simulationActionUpdate'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->simulationActionUpdate(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "simulationActionUpdate",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ActionObject_simulationActionUpdate'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ActionObject_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ActionObject* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::ActionObject();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ActionObject");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ActionObject");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ActionObject",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ActionObject_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_ActionObject_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ActionObject)");
    return 0;
}

int lua_register_cocos2dx_studio_ActionObject(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ActionObject");
    tolua_cclass(tolua_S,"ActionObject","ActionObject","",NULL);

    tolua_beginmodule(tolua_S,"ActionObject");
        tolua_function(tolua_S,"setCurrentTime",lua_cocos2dx_studio_ActionObject_setCurrentTime);
        tolua_function(tolua_S,"pause",lua_cocos2dx_studio_ActionObject_pause);
        tolua_function(tolua_S,"setName",lua_cocos2dx_studio_ActionObject_setName);
        tolua_function(tolua_S,"setUnitTime",lua_cocos2dx_studio_ActionObject_setUnitTime);
        tolua_function(tolua_S,"getTotalTime",lua_cocos2dx_studio_ActionObject_getTotalTime);
        tolua_function(tolua_S,"getName",lua_cocos2dx_studio_ActionObject_getName);
        tolua_function(tolua_S,"stop",lua_cocos2dx_studio_ActionObject_stop);
        tolua_function(tolua_S,"play",lua_cocos2dx_studio_ActionObject_play);
        tolua_function(tolua_S,"getCurrentTime",lua_cocos2dx_studio_ActionObject_getCurrentTime);
        tolua_function(tolua_S,"removeActionNode",lua_cocos2dx_studio_ActionObject_removeActionNode);
        tolua_function(tolua_S,"getLoop",lua_cocos2dx_studio_ActionObject_getLoop);
        tolua_function(tolua_S,"addActionNode",lua_cocos2dx_studio_ActionObject_addActionNode);
        tolua_function(tolua_S,"getUnitTime",lua_cocos2dx_studio_ActionObject_getUnitTime);
        tolua_function(tolua_S,"isPlaying",lua_cocos2dx_studio_ActionObject_isPlaying);
        tolua_function(tolua_S,"updateToFrameByTime",lua_cocos2dx_studio_ActionObject_updateToFrameByTime);
        tolua_function(tolua_S,"setLoop",lua_cocos2dx_studio_ActionObject_setLoop);
        tolua_function(tolua_S,"simulationActionUpdate",lua_cocos2dx_studio_ActionObject_simulationActionUpdate);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_ActionObject_constructor);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::ActionObject).name();
    g_luaType[typeName] = "ActionObject";
    return 1;
}

int lua_cocos2dx_studio_ActionManagerEx_playActionByName(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ActionManagerEx* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ActionManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocostudio::ActionManagerEx*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ActionManagerEx_playActionByName'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 3) {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

            if (!ok) { break; }
            const char* arg1;
            std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();

            if (!ok) { break; }
            cocos2d::CallFunc* arg2;
            do {
				if (!luaval_is_usertype(tolua_S,4,"CallFunc",0)){
					ok = false;
					break;
				}
				if (ok){
					arg2 = (cocos2d::CallFunc*)tolua_tousertype(tolua_S,4,0);
					if (nullptr == arg2){
						LUA_PRECONDITION( arg2, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cocostudio::ActionObject* ret = cobj->playActionByName(arg0, arg1, arg2);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ActionObject";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::ActionObject*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

            if (!ok) { break; }
            const char* arg1;
            std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();

            if (!ok) { break; }
            cocostudio::ActionObject* ret = cobj->playActionByName(arg0, arg1);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ActionObject";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::ActionObject*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "playActionByName",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ActionManagerEx_playActionByName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ActionManagerEx_getActionByName(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ActionManagerEx* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ActionManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ActionManagerEx*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ActionManagerEx_getActionByName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        const char* arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        if(!ok)
            return 0;
        cocostudio::ActionObject* ret = cobj->getActionByName(arg0, arg1);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ActionObject";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::ActionObject*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getActionByName",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ActionManagerEx_getActionByName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ActionManagerEx_releaseActions(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ActionManagerEx* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ActionManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ActionManagerEx*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ActionManagerEx_releaseActions'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->releaseActions();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "releaseActions",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ActionManagerEx_releaseActions'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ActionManagerEx_destroyInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ActionManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::ActionManagerEx::destroyInstance();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "destroyInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ActionManagerEx_destroyInstance'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ActionManagerEx_getInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ActionManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::ActionManagerEx* ret = cocostudio::ActionManagerEx::getInstance();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ActionManagerEx";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::ActionManagerEx*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "getInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ActionManagerEx_getInstance'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_studio_ActionManagerEx_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ActionManagerEx)");
    return 0;
}

int lua_register_cocos2dx_studio_ActionManagerEx(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ActionManagerEx");
    tolua_cclass(tolua_S,"ActionManagerEx","ActionManagerEx","",NULL);

    tolua_beginmodule(tolua_S,"ActionManagerEx");
        tolua_function(tolua_S,"playActionByName",lua_cocos2dx_studio_ActionManagerEx_playActionByName);
        tolua_function(tolua_S,"getActionByName",lua_cocos2dx_studio_ActionManagerEx_getActionByName);
        tolua_function(tolua_S,"releaseActions",lua_cocos2dx_studio_ActionManagerEx_releaseActions);
        tolua_function(tolua_S,"destroyInstance", lua_cocos2dx_studio_ActionManagerEx_destroyInstance);
        tolua_function(tolua_S,"getInstance", lua_cocos2dx_studio_ActionManagerEx_getInstance);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::ActionManagerEx).name();
    g_luaType[typeName] = "ActionManagerEx";
    return 1;
}

int lua_cocos2dx_studio_BaseData_getColor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::BaseData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"BaseData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::BaseData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_BaseData_getColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Color4B ret = cobj->getColor();
        color4b_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getColor",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_BaseData_getColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_BaseData_setColor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::BaseData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"BaseData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::BaseData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_BaseData_setColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Color4B arg0;
        ok &=luaval_to_color4b(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setColor(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setColor",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_BaseData_setColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_BaseData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"BaseData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::BaseData* ret = cocostudio::BaseData::create();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "BaseData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::BaseData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_BaseData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_BaseData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::BaseData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::BaseData();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"BaseData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"BaseData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "BaseData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_BaseData_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_BaseData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (BaseData)");
    return 0;
}

int lua_register_cocos2dx_studio_BaseData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"BaseData");
    tolua_cclass(tolua_S,"BaseData","BaseData","",NULL);

    tolua_beginmodule(tolua_S,"BaseData");
        tolua_function(tolua_S,"getColor",lua_cocos2dx_studio_BaseData_getColor);
        tolua_function(tolua_S,"setColor",lua_cocos2dx_studio_BaseData_setColor);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_BaseData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_BaseData_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::BaseData).name();
    g_luaType[typeName] = "BaseData";
    return 1;
}

int lua_cocos2dx_studio_DisplayData_copy(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::DisplayData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"DisplayData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::DisplayData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_DisplayData_copy'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::DisplayData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"DisplayData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::DisplayData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->copy(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "copy",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayData_copy'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_DisplayData_changeDisplayToTexture(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DisplayData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        const std::string ret = cocostudio::DisplayData::changeDisplayToTexture(arg0);
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "changeDisplayToTexture",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayData_changeDisplayToTexture'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_DisplayData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DisplayData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::DisplayData* ret = cocostudio::DisplayData::create();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "DisplayData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::DisplayData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_DisplayData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::DisplayData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::DisplayData();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"DisplayData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"DisplayData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "DisplayData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayData_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_DisplayData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (DisplayData)");
    return 0;
}

int lua_register_cocos2dx_studio_DisplayData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"DisplayData");
    tolua_cclass(tolua_S,"DisplayData","DisplayData","",NULL);

    tolua_beginmodule(tolua_S,"DisplayData");
        tolua_function(tolua_S,"copy",lua_cocos2dx_studio_DisplayData_copy);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_DisplayData_constructor);
        tolua_function(tolua_S,"changeDisplayToTexture", lua_cocos2dx_studio_DisplayData_changeDisplayToTexture);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_DisplayData_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::DisplayData).name();
    g_luaType[typeName] = "DisplayData";
    return 1;
}

int lua_cocos2dx_studio_SpriteDisplayData_copy(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::SpriteDisplayData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SpriteDisplayData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::SpriteDisplayData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_SpriteDisplayData_copy'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::DisplayData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"DisplayData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::DisplayData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->copy(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "copy",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_SpriteDisplayData_copy'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_SpriteDisplayData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"SpriteDisplayData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::SpriteDisplayData* ret = cocostudio::SpriteDisplayData::create();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "SpriteDisplayData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::SpriteDisplayData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_SpriteDisplayData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_SpriteDisplayData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::SpriteDisplayData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::SpriteDisplayData();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"SpriteDisplayData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"SpriteDisplayData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "SpriteDisplayData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_SpriteDisplayData_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_SpriteDisplayData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (SpriteDisplayData)");
    return 0;
}

int lua_register_cocos2dx_studio_SpriteDisplayData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"SpriteDisplayData");
    tolua_cclass(tolua_S,"SpriteDisplayData","SpriteDisplayData","DisplayData",NULL);

    tolua_beginmodule(tolua_S,"SpriteDisplayData");
        tolua_function(tolua_S,"copy",lua_cocos2dx_studio_SpriteDisplayData_copy);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_SpriteDisplayData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_SpriteDisplayData_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::SpriteDisplayData).name();
    g_luaType[typeName] = "SpriteDisplayData";
    return 1;
}

int lua_cocos2dx_studio_ArmatureDisplayData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ArmatureDisplayData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::ArmatureDisplayData* ret = cocostudio::ArmatureDisplayData::create();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ArmatureDisplayData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::ArmatureDisplayData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDisplayData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDisplayData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDisplayData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::ArmatureDisplayData();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ArmatureDisplayData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ArmatureDisplayData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ArmatureDisplayData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDisplayData_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_ArmatureDisplayData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ArmatureDisplayData)");
    return 0;
}

int lua_register_cocos2dx_studio_ArmatureDisplayData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ArmatureDisplayData");
    tolua_cclass(tolua_S,"ArmatureDisplayData","ArmatureDisplayData","DisplayData",NULL);

    tolua_beginmodule(tolua_S,"ArmatureDisplayData");
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_ArmatureDisplayData_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::ArmatureDisplayData).name();
    g_luaType[typeName] = "ArmatureDisplayData";
    return 1;
}

int lua_cocos2dx_studio_ParticleDisplayData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ParticleDisplayData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::ParticleDisplayData* ret = cocostudio::ParticleDisplayData::create();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ParticleDisplayData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::ParticleDisplayData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ParticleDisplayData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ParticleDisplayData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ParticleDisplayData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::ParticleDisplayData();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ParticleDisplayData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ParticleDisplayData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ParticleDisplayData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ParticleDisplayData_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_ParticleDisplayData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ParticleDisplayData)");
    return 0;
}

int lua_register_cocos2dx_studio_ParticleDisplayData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ParticleDisplayData");
    tolua_cclass(tolua_S,"ParticleDisplayData","ParticleDisplayData","DisplayData",NULL);

    tolua_beginmodule(tolua_S,"ParticleDisplayData");
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_ParticleDisplayData_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::ParticleDisplayData).name();
    g_luaType[typeName] = "ParticleDisplayData";
    return 1;
}

int lua_cocos2dx_studio_BoneData_getDisplayData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::BoneData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"BoneData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::BoneData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_BoneData_getDisplayData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cocostudio::DisplayData* ret = cobj->getDisplayData(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "DisplayData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::DisplayData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDisplayData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_BoneData_getDisplayData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_BoneData_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::BoneData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"BoneData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::BoneData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_BoneData_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_BoneData_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_BoneData_addDisplayData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::BoneData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"BoneData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::BoneData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_BoneData_addDisplayData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::DisplayData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"DisplayData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::DisplayData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addDisplayData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addDisplayData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_BoneData_addDisplayData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_BoneData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"BoneData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::BoneData* ret = cocostudio::BoneData::create();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "BoneData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::BoneData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_BoneData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_BoneData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::BoneData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::BoneData();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"BoneData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"BoneData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "BoneData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_BoneData_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_BoneData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (BoneData)");
    return 0;
}

int lua_register_cocos2dx_studio_BoneData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"BoneData");
    tolua_cclass(tolua_S,"BoneData","BoneData","BaseData",NULL);

    tolua_beginmodule(tolua_S,"BoneData");
        tolua_function(tolua_S,"getDisplayData",lua_cocos2dx_studio_BoneData_getDisplayData);
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_BoneData_init);
        tolua_function(tolua_S,"addDisplayData",lua_cocos2dx_studio_BoneData_addDisplayData);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_BoneData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_BoneData_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::BoneData).name();
    g_luaType[typeName] = "BoneData";
    return 1;
}

int lua_cocos2dx_studio_ArmatureData_addBoneData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureData_addBoneData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::BoneData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"BoneData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::BoneData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addBoneData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addBoneData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureData_addBoneData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureData_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureData_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureData_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureData_getBoneData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureData_getBoneData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocostudio::BoneData* ret = cobj->getBoneData(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "BoneData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::BoneData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBoneData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureData_getBoneData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ArmatureData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::ArmatureData* ret = cocostudio::ArmatureData::create();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ArmatureData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::ArmatureData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::ArmatureData();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ArmatureData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ArmatureData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ArmatureData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureData_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_ArmatureData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ArmatureData)");
    return 0;
}

int lua_register_cocos2dx_studio_ArmatureData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ArmatureData");
    tolua_cclass(tolua_S,"ArmatureData","ArmatureData","",NULL);

    tolua_beginmodule(tolua_S,"ArmatureData");
        tolua_function(tolua_S,"addBoneData",lua_cocos2dx_studio_ArmatureData_addBoneData);
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_ArmatureData_init);
        tolua_function(tolua_S,"getBoneData",lua_cocos2dx_studio_ArmatureData_getBoneData);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_ArmatureData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_ArmatureData_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::ArmatureData).name();
    g_luaType[typeName] = "ArmatureData";
    return 1;
}

int lua_cocos2dx_studio_FrameData_copy(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::FrameData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FrameData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::FrameData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_FrameData_copy'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const cocostudio::BaseData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"BaseData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (const cocostudio::BaseData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->copy(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "copy",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_FrameData_copy'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_FrameData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"FrameData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::FrameData* ret = cocostudio::FrameData::create();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "FrameData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::FrameData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_FrameData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_FrameData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::FrameData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::FrameData();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"FrameData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"FrameData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "FrameData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_FrameData_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_FrameData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (FrameData)");
    return 0;
}

int lua_register_cocos2dx_studio_FrameData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"FrameData");
    tolua_cclass(tolua_S,"FrameData","FrameData","BaseData",NULL);

    tolua_beginmodule(tolua_S,"FrameData");
        tolua_function(tolua_S,"copy",lua_cocos2dx_studio_FrameData_copy);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_FrameData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_FrameData_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::FrameData).name();
    g_luaType[typeName] = "FrameData";
    return 1;
}

int lua_cocos2dx_studio_MovementBoneData_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::MovementBoneData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MovementBoneData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::MovementBoneData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_MovementBoneData_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_MovementBoneData_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_MovementBoneData_getFrameData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::MovementBoneData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MovementBoneData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::MovementBoneData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_MovementBoneData_getFrameData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cocostudio::FrameData* ret = cobj->getFrameData(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "FrameData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::FrameData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getFrameData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_MovementBoneData_getFrameData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_MovementBoneData_addFrameData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::MovementBoneData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MovementBoneData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::MovementBoneData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_MovementBoneData_addFrameData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::FrameData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"FrameData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::FrameData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addFrameData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addFrameData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_MovementBoneData_addFrameData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_MovementBoneData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"MovementBoneData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::MovementBoneData* ret = cocostudio::MovementBoneData::create();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "MovementBoneData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::MovementBoneData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_MovementBoneData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_MovementBoneData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::MovementBoneData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::MovementBoneData();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"MovementBoneData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"MovementBoneData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "MovementBoneData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_MovementBoneData_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_MovementBoneData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (MovementBoneData)");
    return 0;
}

int lua_register_cocos2dx_studio_MovementBoneData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"MovementBoneData");
    tolua_cclass(tolua_S,"MovementBoneData","MovementBoneData","",NULL);

    tolua_beginmodule(tolua_S,"MovementBoneData");
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_MovementBoneData_init);
        tolua_function(tolua_S,"getFrameData",lua_cocos2dx_studio_MovementBoneData_getFrameData);
        tolua_function(tolua_S,"addFrameData",lua_cocos2dx_studio_MovementBoneData_addFrameData);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_MovementBoneData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_MovementBoneData_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::MovementBoneData).name();
    g_luaType[typeName] = "MovementBoneData";
    return 1;
}

int lua_cocos2dx_studio_MovementData_getMovementBoneData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::MovementData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MovementData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::MovementData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_MovementData_getMovementBoneData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocostudio::MovementBoneData* ret = cobj->getMovementBoneData(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "MovementBoneData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::MovementBoneData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMovementBoneData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_MovementData_getMovementBoneData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_MovementData_addMovementBoneData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::MovementData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MovementData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::MovementData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_MovementData_addMovementBoneData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::MovementBoneData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"MovementBoneData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::MovementBoneData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addMovementBoneData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addMovementBoneData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_MovementData_addMovementBoneData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_MovementData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"MovementData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::MovementData* ret = cocostudio::MovementData::create();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "MovementData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::MovementData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_MovementData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_MovementData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::MovementData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::MovementData();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"MovementData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"MovementData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "MovementData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_MovementData_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_MovementData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (MovementData)");
    return 0;
}

int lua_register_cocos2dx_studio_MovementData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"MovementData");
    tolua_cclass(tolua_S,"MovementData","MovementData","",NULL);

    tolua_beginmodule(tolua_S,"MovementData");
        tolua_function(tolua_S,"getMovementBoneData",lua_cocos2dx_studio_MovementData_getMovementBoneData);
        tolua_function(tolua_S,"addMovementBoneData",lua_cocos2dx_studio_MovementData_addMovementBoneData);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_MovementData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_MovementData_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::MovementData).name();
    g_luaType[typeName] = "MovementData";
    return 1;
}

int lua_cocos2dx_studio_AnimationData_getMovement(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::AnimationData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AnimationData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::AnimationData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_AnimationData_getMovement'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocostudio::MovementData* ret = cobj->getMovement(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "MovementData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::MovementData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMovement",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_AnimationData_getMovement'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_AnimationData_getMovementCount(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::AnimationData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AnimationData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::AnimationData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_AnimationData_getMovementCount'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        ssize_t ret = cobj->getMovementCount();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMovementCount",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_AnimationData_getMovementCount'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_AnimationData_addMovement(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::AnimationData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AnimationData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::AnimationData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_AnimationData_addMovement'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::MovementData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"MovementData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::MovementData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addMovement(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addMovement",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_AnimationData_addMovement'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_AnimationData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"AnimationData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::AnimationData* ret = cocostudio::AnimationData::create();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "AnimationData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::AnimationData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_AnimationData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_AnimationData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::AnimationData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::AnimationData();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"AnimationData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"AnimationData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "AnimationData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_AnimationData_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_AnimationData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (AnimationData)");
    return 0;
}

int lua_register_cocos2dx_studio_AnimationData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"AnimationData");
    tolua_cclass(tolua_S,"AnimationData","AnimationData","",NULL);

    tolua_beginmodule(tolua_S,"AnimationData");
        tolua_function(tolua_S,"getMovement",lua_cocos2dx_studio_AnimationData_getMovement);
        tolua_function(tolua_S,"getMovementCount",lua_cocos2dx_studio_AnimationData_getMovementCount);
        tolua_function(tolua_S,"addMovement",lua_cocos2dx_studio_AnimationData_addMovement);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_AnimationData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_AnimationData_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::AnimationData).name();
    g_luaType[typeName] = "AnimationData";
    return 1;
}

int lua_cocos2dx_studio_ContourData_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ContourData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ContourData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ContourData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ContourData_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ContourData_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ContourData_addVertex(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ContourData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ContourData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ContourData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ContourData_addVertex'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;
        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->addVertex(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addVertex",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ContourData_addVertex'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ContourData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ContourData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::ContourData* ret = cocostudio::ContourData::create();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ContourData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::ContourData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ContourData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ContourData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ContourData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::ContourData();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ContourData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ContourData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ContourData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ContourData_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_ContourData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ContourData)");
    return 0;
}

int lua_register_cocos2dx_studio_ContourData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ContourData");
    tolua_cclass(tolua_S,"ContourData","ContourData","",NULL);

    tolua_beginmodule(tolua_S,"ContourData");
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_ContourData_init);
        tolua_function(tolua_S,"addVertex",lua_cocos2dx_studio_ContourData_addVertex);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_ContourData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_ContourData_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::ContourData).name();
    g_luaType[typeName] = "ContourData";
    return 1;
}

int lua_cocos2dx_studio_TextureData_getContourData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::TextureData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TextureData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::TextureData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_TextureData_getContourData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cocostudio::ContourData* ret = cobj->getContourData(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ContourData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::ContourData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getContourData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_TextureData_getContourData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_TextureData_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::TextureData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TextureData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::TextureData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_TextureData_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_TextureData_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_TextureData_addContourData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::TextureData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TextureData",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::TextureData*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_TextureData_addContourData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::ContourData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"ContourData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::ContourData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addContourData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addContourData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_TextureData_addContourData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_TextureData_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"TextureData",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::TextureData* ret = cocostudio::TextureData::create();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "TextureData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::TextureData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_TextureData_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_TextureData_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::TextureData* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::TextureData();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"TextureData");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"TextureData");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "TextureData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_TextureData_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_TextureData_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (TextureData)");
    return 0;
}

int lua_register_cocos2dx_studio_TextureData(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"TextureData");
    tolua_cclass(tolua_S,"TextureData","TextureData","",NULL);

    tolua_beginmodule(tolua_S,"TextureData");
        tolua_function(tolua_S,"getContourData",lua_cocos2dx_studio_TextureData_getContourData);
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_TextureData_init);
        tolua_function(tolua_S,"addContourData",lua_cocos2dx_studio_TextureData_addContourData);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_TextureData_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_TextureData_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::TextureData).name();
    g_luaType[typeName] = "TextureData";
    return 1;
}

int lua_cocos2dx_studio_Tween_getAnimation(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Tween* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Tween",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Tween*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Tween_getAnimation'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::ArmatureAnimation* ret = cobj->getAnimation();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ArmatureAnimation";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::ArmatureAnimation*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnimation",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Tween_getAnimation'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Tween_gotoAndPause(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Tween* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Tween",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Tween*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Tween_gotoAndPause'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->gotoAndPause(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "gotoAndPause",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Tween_gotoAndPause'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Tween_play(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Tween* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Tween",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Tween*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Tween_play'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 5) 
    {
        cocostudio::MovementBoneData* arg0;
        int arg1;
        int arg2;
        int arg3;
        int arg4;
        do {
				if (!luaval_is_usertype(tolua_S,2,"MovementBoneData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::MovementBoneData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2);
        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3);
        ok &= luaval_to_int32(tolua_S, 6,(int *)&arg4);
        if(!ok)
            return 0;
        cobj->play(arg0, arg1, arg2, arg3, arg4);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "play",argc, 5);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Tween_play'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Tween_gotoAndPlay(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Tween* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Tween",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Tween*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Tween_gotoAndPlay'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->gotoAndPlay(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "gotoAndPlay",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Tween_gotoAndPlay'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Tween_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Tween* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Tween",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Tween*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Tween_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::Bone* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Bone*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->init(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Tween_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Tween_setAnimation(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Tween* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Tween",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Tween*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Tween_setAnimation'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::ArmatureAnimation* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"ArmatureAnimation",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setAnimation(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAnimation",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Tween_setAnimation'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Tween_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Tween",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocostudio::Bone* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Bone*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocostudio::Tween* ret = cocostudio::Tween::create(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Tween";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::Tween*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Tween_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Tween_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Tween* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::Tween();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"Tween");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"Tween");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "Tween",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Tween_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_Tween_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Tween)");
    return 0;
}

int lua_register_cocos2dx_studio_Tween(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"Tween");
    tolua_cclass(tolua_S,"Tween","Tween","",NULL);

    tolua_beginmodule(tolua_S,"Tween");
        tolua_function(tolua_S,"getAnimation",lua_cocos2dx_studio_Tween_getAnimation);
        tolua_function(tolua_S,"gotoAndPause",lua_cocos2dx_studio_Tween_gotoAndPause);
        tolua_function(tolua_S,"play",lua_cocos2dx_studio_Tween_play);
        tolua_function(tolua_S,"gotoAndPlay",lua_cocos2dx_studio_Tween_gotoAndPlay);
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_Tween_init);
        tolua_function(tolua_S,"setAnimation",lua_cocos2dx_studio_Tween_setAnimation);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_Tween_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_Tween_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::Tween).name();
    g_luaType[typeName] = "Tween";
    return 1;
}

int lua_cocos2dx_studio_DisplayManager_getDisplayRenderNode(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::DisplayManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"DisplayManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::DisplayManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_DisplayManager_getDisplayRenderNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Node* ret = cobj->getDisplayRenderNode();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Node";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Node*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDisplayRenderNode",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayManager_getDisplayRenderNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_DisplayManager_getAnchorPointInPoints(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::DisplayManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"DisplayManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::DisplayManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_DisplayManager_getAnchorPointInPoints'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getAnchorPointInPoints();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnchorPointInPoints",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayManager_getAnchorPointInPoints'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_DisplayManager_getDisplayRenderNodeType(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::DisplayManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"DisplayManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::DisplayManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_DisplayManager_getDisplayRenderNodeType'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = (int)cobj->getDisplayRenderNodeType();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDisplayRenderNodeType",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayManager_getDisplayRenderNodeType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_DisplayManager_removeDisplay(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::DisplayManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"DisplayManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::DisplayManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_DisplayManager_removeDisplay'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->removeDisplay(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeDisplay",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayManager_removeDisplay'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_DisplayManager_setForceChangeDisplay(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::DisplayManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"DisplayManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::DisplayManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_DisplayManager_setForceChangeDisplay'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setForceChangeDisplay(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setForceChangeDisplay",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayManager_setForceChangeDisplay'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_DisplayManager_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::DisplayManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"DisplayManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::DisplayManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_DisplayManager_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::Bone* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Bone*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->init(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayManager_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_DisplayManager_getContentSize(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::DisplayManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"DisplayManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::DisplayManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_DisplayManager_getContentSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Size ret = cobj->getContentSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getContentSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayManager_getContentSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_DisplayManager_getBoundingBox(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::DisplayManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"DisplayManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::DisplayManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_DisplayManager_getBoundingBox'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Rect ret = cobj->getBoundingBox();
        rect_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBoundingBox",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayManager_getBoundingBox'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_DisplayManager_addDisplay(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::DisplayManager* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"DisplayManager",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocostudio::DisplayManager*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_DisplayManager_addDisplay'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            cocos2d::Node* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);

            if (!ok) { break; }
            cobj->addDisplay(arg0, arg1);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            cocostudio::DisplayData* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"DisplayData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::DisplayData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);

            if (!ok) { break; }
            cobj->addDisplay(arg0, arg1);
            return 0;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addDisplay",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayManager_addDisplay'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_DisplayManager_containPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::DisplayManager* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"DisplayManager",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocostudio::DisplayManager*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_DisplayManager_containPoint'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            double arg0;
            ok &= luaval_to_number(tolua_S, 2,&arg0);

            if (!ok) { break; }
            double arg1;
            ok &= luaval_to_number(tolua_S, 3,&arg1);

            if (!ok) { break; }
            bool ret = cobj->containPoint(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            cocos2d::Point arg0;
            ok &= luaval_to_point(tolua_S, 2, &arg0);

            if (!ok) { break; }
            bool ret = cobj->containPoint(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "containPoint",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayManager_containPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_DisplayManager_changeDisplayWithIndex(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::DisplayManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"DisplayManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::DisplayManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_DisplayManager_changeDisplayWithIndex'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        int arg0;
        bool arg1;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->changeDisplayWithIndex(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "changeDisplayWithIndex",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayManager_changeDisplayWithIndex'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_DisplayManager_changeDisplayWithName(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::DisplayManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"DisplayManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::DisplayManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_DisplayManager_changeDisplayWithName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        bool arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->changeDisplayWithName(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "changeDisplayWithName",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayManager_changeDisplayWithName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_DisplayManager_isForceChangeDisplay(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::DisplayManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"DisplayManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::DisplayManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_DisplayManager_isForceChangeDisplay'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isForceChangeDisplay();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isForceChangeDisplay",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayManager_isForceChangeDisplay'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_DisplayManager_getCurrentDisplayIndex(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::DisplayManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"DisplayManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::DisplayManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_DisplayManager_getCurrentDisplayIndex'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getCurrentDisplayIndex();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCurrentDisplayIndex",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayManager_getCurrentDisplayIndex'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_DisplayManager_getAnchorPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::DisplayManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"DisplayManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::DisplayManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_DisplayManager_getAnchorPoint'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getAnchorPoint();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnchorPoint",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayManager_getAnchorPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_DisplayManager_getDecorativeDisplayList(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::DisplayManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"DisplayManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::DisplayManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_DisplayManager_getDecorativeDisplayList'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Vector<cocostudio::DecorativeDisplay *>& ret = cobj->getDecorativeDisplayList();
        ccvector_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDecorativeDisplayList",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayManager_getDecorativeDisplayList'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_DisplayManager_isVisible(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::DisplayManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"DisplayManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::DisplayManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_DisplayManager_isVisible'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isVisible();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isVisible",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayManager_isVisible'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_DisplayManager_setVisible(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::DisplayManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"DisplayManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::DisplayManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_DisplayManager_setVisible'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setVisible(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setVisible",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayManager_setVisible'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_DisplayManager_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DisplayManager",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocostudio::Bone* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Bone*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocostudio::DisplayManager* ret = cocostudio::DisplayManager::create(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "DisplayManager";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::DisplayManager*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayManager_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_DisplayManager_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::DisplayManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::DisplayManager();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"DisplayManager");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"DisplayManager");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "DisplayManager",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_DisplayManager_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_DisplayManager_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (DisplayManager)");
    return 0;
}

int lua_register_cocos2dx_studio_DisplayManager(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"DisplayManager");
    tolua_cclass(tolua_S,"DisplayManager","DisplayManager","",NULL);

    tolua_beginmodule(tolua_S,"DisplayManager");
        tolua_function(tolua_S,"getDisplayRenderNode",lua_cocos2dx_studio_DisplayManager_getDisplayRenderNode);
        tolua_function(tolua_S,"getAnchorPointInPoints",lua_cocos2dx_studio_DisplayManager_getAnchorPointInPoints);
        tolua_function(tolua_S,"getDisplayRenderNodeType",lua_cocos2dx_studio_DisplayManager_getDisplayRenderNodeType);
        tolua_function(tolua_S,"removeDisplay",lua_cocos2dx_studio_DisplayManager_removeDisplay);
        tolua_function(tolua_S,"setForceChangeDisplay",lua_cocos2dx_studio_DisplayManager_setForceChangeDisplay);
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_DisplayManager_init);
        tolua_function(tolua_S,"getContentSize",lua_cocos2dx_studio_DisplayManager_getContentSize);
        tolua_function(tolua_S,"getBoundingBox",lua_cocos2dx_studio_DisplayManager_getBoundingBox);
        tolua_function(tolua_S,"addDisplay",lua_cocos2dx_studio_DisplayManager_addDisplay);
        tolua_function(tolua_S,"containPoint",lua_cocos2dx_studio_DisplayManager_containPoint);
        tolua_function(tolua_S,"changeDisplayWithIndex",lua_cocos2dx_studio_DisplayManager_changeDisplayWithIndex);
        tolua_function(tolua_S,"changeDisplayWithName",lua_cocos2dx_studio_DisplayManager_changeDisplayWithName);
        tolua_function(tolua_S,"isForceChangeDisplay",lua_cocos2dx_studio_DisplayManager_isForceChangeDisplay);
        tolua_function(tolua_S,"getCurrentDisplayIndex",lua_cocos2dx_studio_DisplayManager_getCurrentDisplayIndex);
        tolua_function(tolua_S,"getAnchorPoint",lua_cocos2dx_studio_DisplayManager_getAnchorPoint);
        tolua_function(tolua_S,"getDecorativeDisplayList",lua_cocos2dx_studio_DisplayManager_getDecorativeDisplayList);
        tolua_function(tolua_S,"isVisible",lua_cocos2dx_studio_DisplayManager_isVisible);
        tolua_function(tolua_S,"setVisible",lua_cocos2dx_studio_DisplayManager_setVisible);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_DisplayManager_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_DisplayManager_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::DisplayManager).name();
    g_luaType[typeName] = "DisplayManager";
    return 1;
}

int lua_cocos2dx_studio_Bone_isTransformDirty(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_isTransformDirty'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isTransformDirty();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isTransformDirty",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_isTransformDirty'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_isIgnoreMovementBoneData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_isIgnoreMovementBoneData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isIgnoreMovementBoneData();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isIgnoreMovementBoneData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_isIgnoreMovementBoneData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_updateZOrder(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_updateZOrder'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->updateZOrder();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateZOrder",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_updateZOrder'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getDisplayRenderNode(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getDisplayRenderNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Node* ret = cobj->getDisplayRenderNode();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Node";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Node*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDisplayRenderNode",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getDisplayRenderNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_isBlendDirty(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_isBlendDirty'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isBlendDirty();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isBlendDirty",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_isBlendDirty'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_addChildBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_addChildBone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::Bone* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Bone*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addChildBone(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addChildBone",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_addChildBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getWorldInfo(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getWorldInfo'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::BaseData* ret = cobj->getWorldInfo();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "BaseData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::BaseData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getWorldInfo",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getWorldInfo'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getTween(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getTween'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::Tween* ret = cobj->getTween();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Tween";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::Tween*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTween",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getTween'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getParentBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getParentBone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::Bone* ret = cobj->getParentBone();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Bone";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::Bone*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getParentBone",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getParentBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_updateColor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_updateColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->updateColor();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateColor",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_updateColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getName(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const std::string ret = cobj->getName();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_setTransformDirty(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_setTransformDirty'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setTransformDirty(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTransformDirty",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_setTransformDirty'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getDisplayRenderNodeType(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getDisplayRenderNodeType'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = (int)cobj->getDisplayRenderNodeType();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDisplayRenderNodeType",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getDisplayRenderNodeType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_removeDisplay(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_removeDisplay'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->removeDisplay(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeDisplay",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_removeDisplay'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_setBoneData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_setBoneData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::BoneData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"BoneData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::BoneData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setBoneData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBoneData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_setBoneData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_init'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0);

            if (!ok) { break; }
            bool ret = cobj->init(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 0) {
            bool ret = cobj->init();
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_setParentBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_setParentBone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::Bone* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Bone*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setParentBone(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setParentBone",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_setParentBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_addDisplay(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_addDisplay'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            cocos2d::Node* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);

            if (!ok) { break; }
            cobj->addDisplay(arg0, arg1);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            cocostudio::DisplayData* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"DisplayData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::DisplayData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);

            if (!ok) { break; }
            cobj->addDisplay(arg0, arg1);
            return 0;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addDisplay",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_addDisplay'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_setName(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_setName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_setName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_removeFromParent(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_removeFromParent'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->removeFromParent(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeFromParent",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_removeFromParent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getColliderDetector(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getColliderDetector'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::ColliderDetector* ret = cobj->getColliderDetector();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ColliderDetector";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::ColliderDetector*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getColliderDetector",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getColliderDetector'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getChildArmature(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getChildArmature'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::Armature* ret = cobj->getChildArmature();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Armature";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::Armature*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getChildArmature",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getChildArmature'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getTweenData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getTweenData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::FrameData* ret = cobj->getTweenData();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "FrameData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::FrameData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTweenData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getTweenData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_changeDisplayWithIndex(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_changeDisplayWithIndex'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        int arg0;
        bool arg1;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->changeDisplayWithIndex(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "changeDisplayWithIndex",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_changeDisplayWithIndex'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_changeDisplayWithName(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_changeDisplayWithName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        bool arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->changeDisplayWithName(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "changeDisplayWithName",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_changeDisplayWithName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_setArmature(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_setArmature'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::Armature* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Armature",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Armature*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setArmature(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setArmature",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_setArmature'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_setBlendDirty(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_setBlendDirty'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setBlendDirty(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBlendDirty",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_setBlendDirty'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_removeChildBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_removeChildBone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocostudio::Bone* arg0;
        bool arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Bone*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->removeChildBone(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeChildBone",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_removeChildBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_setChildArmature(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_setChildArmature'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::Armature* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Armature",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Armature*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setChildArmature(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setChildArmature",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_setChildArmature'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getNodeToArmatureTransform(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getNodeToArmatureTransform'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        kmMat4 ret = cobj->getNodeToArmatureTransform();
        #pragma warning NO CONVERSION FROM NATIVE FOR kmMat4;
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getNodeToArmatureTransform",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getNodeToArmatureTransform'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getDisplayManager(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getDisplayManager'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::DisplayManager* ret = cobj->getDisplayManager();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "DisplayManager";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::DisplayManager*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDisplayManager",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getDisplayManager'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getArmature(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getArmature'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::Armature* ret = cobj->getArmature();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Armature";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::Armature*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getArmature",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getArmature'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getBoneData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getBoneData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::BoneData* ret = cobj->getBoneData();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "BoneData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::BoneData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBoneData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getBoneData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 1)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0);
            if (!ok) { break; }
            cocostudio::Bone* ret = cocostudio::Bone::create(arg0);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Bone";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::Bone*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 0)
        {
            cocostudio::Bone* ret = cocostudio::Bone::create();
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Bone";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::Bone*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::Bone();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"Bone");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"Bone");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "Bone",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_Bone_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Bone)");
    return 0;
}

int lua_register_cocos2dx_studio_Bone(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"Bone");
    tolua_cclass(tolua_S,"Bone","Bone","Node",NULL);

    tolua_beginmodule(tolua_S,"Bone");
        tolua_function(tolua_S,"isTransformDirty",lua_cocos2dx_studio_Bone_isTransformDirty);
        tolua_function(tolua_S,"isIgnoreMovementBoneData",lua_cocos2dx_studio_Bone_isIgnoreMovementBoneData);
        tolua_function(tolua_S,"updateZOrder",lua_cocos2dx_studio_Bone_updateZOrder);
        tolua_function(tolua_S,"getDisplayRenderNode",lua_cocos2dx_studio_Bone_getDisplayRenderNode);
        tolua_function(tolua_S,"isBlendDirty",lua_cocos2dx_studio_Bone_isBlendDirty);
        tolua_function(tolua_S,"addChildBone",lua_cocos2dx_studio_Bone_addChildBone);
        tolua_function(tolua_S,"getWorldInfo",lua_cocos2dx_studio_Bone_getWorldInfo);
        tolua_function(tolua_S,"getTween",lua_cocos2dx_studio_Bone_getTween);
        tolua_function(tolua_S,"getParentBone",lua_cocos2dx_studio_Bone_getParentBone);
        tolua_function(tolua_S,"updateColor",lua_cocos2dx_studio_Bone_updateColor);
        tolua_function(tolua_S,"getName",lua_cocos2dx_studio_Bone_getName);
        tolua_function(tolua_S,"setTransformDirty",lua_cocos2dx_studio_Bone_setTransformDirty);
        tolua_function(tolua_S,"getDisplayRenderNodeType",lua_cocos2dx_studio_Bone_getDisplayRenderNodeType);
        tolua_function(tolua_S,"removeDisplay",lua_cocos2dx_studio_Bone_removeDisplay);
        tolua_function(tolua_S,"setBoneData",lua_cocos2dx_studio_Bone_setBoneData);
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_Bone_init);
        tolua_function(tolua_S,"setParentBone",lua_cocos2dx_studio_Bone_setParentBone);
        tolua_function(tolua_S,"addDisplay",lua_cocos2dx_studio_Bone_addDisplay);
        tolua_function(tolua_S,"setName",lua_cocos2dx_studio_Bone_setName);
        tolua_function(tolua_S,"removeFromParent",lua_cocos2dx_studio_Bone_removeFromParent);
        tolua_function(tolua_S,"getColliderDetector",lua_cocos2dx_studio_Bone_getColliderDetector);
        tolua_function(tolua_S,"getChildArmature",lua_cocos2dx_studio_Bone_getChildArmature);
        tolua_function(tolua_S,"getTweenData",lua_cocos2dx_studio_Bone_getTweenData);
        tolua_function(tolua_S,"changeDisplayWithIndex",lua_cocos2dx_studio_Bone_changeDisplayWithIndex);
        tolua_function(tolua_S,"changeDisplayWithName",lua_cocos2dx_studio_Bone_changeDisplayWithName);
        tolua_function(tolua_S,"setArmature",lua_cocos2dx_studio_Bone_setArmature);
        tolua_function(tolua_S,"setBlendDirty",lua_cocos2dx_studio_Bone_setBlendDirty);
        tolua_function(tolua_S,"removeChildBone",lua_cocos2dx_studio_Bone_removeChildBone);
        tolua_function(tolua_S,"setChildArmature",lua_cocos2dx_studio_Bone_setChildArmature);
        tolua_function(tolua_S,"getNodeToArmatureTransform",lua_cocos2dx_studio_Bone_getNodeToArmatureTransform);
        tolua_function(tolua_S,"getDisplayManager",lua_cocos2dx_studio_Bone_getDisplayManager);
        tolua_function(tolua_S,"getArmature",lua_cocos2dx_studio_Bone_getArmature);
        tolua_function(tolua_S,"getBoneData",lua_cocos2dx_studio_Bone_getBoneData);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_Bone_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_Bone_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::Bone).name();
    g_luaType[typeName] = "Bone";
    return 1;
}

int lua_cocos2dx_studio_BatchNode_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::BatchNode* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"BatchNode",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::BatchNode*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_BatchNode_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_BatchNode_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_BatchNode_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"BatchNode",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::BatchNode* ret = cocostudio::BatchNode::create();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "BatchNode";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::BatchNode*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_BatchNode_create'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_studio_BatchNode_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (BatchNode)");
    return 0;
}

int lua_register_cocos2dx_studio_BatchNode(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"BatchNode");
    tolua_cclass(tolua_S,"BatchNode","BatchNode","Node",NULL);

    tolua_beginmodule(tolua_S,"BatchNode");
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_BatchNode_init);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_BatchNode_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::BatchNode).name();
    g_luaType[typeName] = "BatchNode";
    return 1;
}

int lua_cocos2dx_studio_ArmatureAnimation_getSpeedScale(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_getSpeedScale'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getSpeedScale();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSpeedScale",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_getSpeedScale'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_pause(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_pause'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->pause();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "pause",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_pause'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_setSpeedScale(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_setSpeedScale'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setSpeedScale(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setSpeedScale",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_setSpeedScale'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::Armature* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Armature",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Armature*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->init(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_playWithIndexes(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_playWithIndexes'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::vector<int> arg0;
        ok &= luaval_to_std_vector_int(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->playWithIndexes(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        std::vector<int> arg0;
        int arg1;
        ok &= luaval_to_std_vector_int(tolua_S, 2, &arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->playWithIndexes(arg0, arg1);
        return 0;
    }
    if (argc == 3) 
    {
        std::vector<int> arg0;
        int arg1;
        bool arg2;
        ok &= luaval_to_std_vector_int(tolua_S, 2, &arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        ok &= luaval_to_boolean(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cobj->playWithIndexes(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "playWithIndexes",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_playWithIndexes'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_play(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_play'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->play(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        std::string arg0;
        int arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->play(arg0, arg1);
        return 0;
    }
    if (argc == 3) 
    {
        std::string arg0;
        int arg1;
        int arg2;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2);
        if(!ok)
            return 0;
        cobj->play(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "play",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_play'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_gotoAndPause(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_gotoAndPause'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->gotoAndPause(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "gotoAndPause",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_gotoAndPause'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_resume(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_resume'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->resume();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "resume",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_resume'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_stop(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_stop'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->stop();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "stop",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_stop'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_update(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_update'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->update(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "update",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_update'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_getAnimationData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_getAnimationData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::AnimationData* ret = cobj->getAnimationData();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "AnimationData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::AnimationData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnimationData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_getAnimationData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_playWithIndex(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_playWithIndex'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->playWithIndex(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        int arg0;
        int arg1;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->playWithIndex(arg0, arg1);
        return 0;
    }
    if (argc == 3) 
    {
        int arg0;
        int arg1;
        int arg2;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2);
        if(!ok)
            return 0;
        cobj->playWithIndex(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "playWithIndex",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_playWithIndex'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_getCurrentMovementID(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_getCurrentMovementID'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        std::string ret = cobj->getCurrentMovementID();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCurrentMovementID",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_getCurrentMovementID'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_setAnimationData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_setAnimationData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::AnimationData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"AnimationData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::AnimationData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setAnimationData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAnimationData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_setAnimationData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_gotoAndPlay(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_gotoAndPlay'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->gotoAndPlay(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "gotoAndPlay",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_gotoAndPlay'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_playWithNames(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_playWithNames'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::vector<std::string> arg0;
        ok &= luaval_to_std_vector_string(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->playWithNames(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        std::vector<std::string> arg0;
        int arg1;
        ok &= luaval_to_std_vector_string(tolua_S, 2, &arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->playWithNames(arg0, arg1);
        return 0;
    }
    if (argc == 3) 
    {
        std::vector<std::string> arg0;
        int arg1;
        bool arg2;
        ok &= luaval_to_std_vector_string(tolua_S, 2, &arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        ok &= luaval_to_boolean(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cobj->playWithNames(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "playWithNames",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_playWithNames'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_getMovementCount(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_getMovementCount'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        ssize_t ret = cobj->getMovementCount();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMovementCount",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_getMovementCount'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocostudio::Armature* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Armature",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Armature*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocostudio::ArmatureAnimation* ret = cocostudio::ArmatureAnimation::create(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ArmatureAnimation";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::ArmatureAnimation*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::ArmatureAnimation();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ArmatureAnimation");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ArmatureAnimation");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ArmatureAnimation",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_ArmatureAnimation_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ArmatureAnimation)");
    return 0;
}

int lua_register_cocos2dx_studio_ArmatureAnimation(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ArmatureAnimation");
    tolua_cclass(tolua_S,"ArmatureAnimation","ArmatureAnimation","",NULL);

    tolua_beginmodule(tolua_S,"ArmatureAnimation");
        tolua_function(tolua_S,"getSpeedScale",lua_cocos2dx_studio_ArmatureAnimation_getSpeedScale);
        tolua_function(tolua_S,"pause",lua_cocos2dx_studio_ArmatureAnimation_pause);
        tolua_function(tolua_S,"setSpeedScale",lua_cocos2dx_studio_ArmatureAnimation_setSpeedScale);
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_ArmatureAnimation_init);
        tolua_function(tolua_S,"playWithIndexes",lua_cocos2dx_studio_ArmatureAnimation_playWithIndexes);
        tolua_function(tolua_S,"play",lua_cocos2dx_studio_ArmatureAnimation_play);
        tolua_function(tolua_S,"gotoAndPause",lua_cocos2dx_studio_ArmatureAnimation_gotoAndPause);
        tolua_function(tolua_S,"resume",lua_cocos2dx_studio_ArmatureAnimation_resume);
        tolua_function(tolua_S,"stop",lua_cocos2dx_studio_ArmatureAnimation_stop);
        tolua_function(tolua_S,"update",lua_cocos2dx_studio_ArmatureAnimation_update);
        tolua_function(tolua_S,"getAnimationData",lua_cocos2dx_studio_ArmatureAnimation_getAnimationData);
        tolua_function(tolua_S,"playWithIndex",lua_cocos2dx_studio_ArmatureAnimation_playWithIndex);
        tolua_function(tolua_S,"getCurrentMovementID",lua_cocos2dx_studio_ArmatureAnimation_getCurrentMovementID);
        tolua_function(tolua_S,"setAnimationData",lua_cocos2dx_studio_ArmatureAnimation_setAnimationData);
        tolua_function(tolua_S,"gotoAndPlay",lua_cocos2dx_studio_ArmatureAnimation_gotoAndPlay);
        tolua_function(tolua_S,"playWithNames",lua_cocos2dx_studio_ArmatureAnimation_playWithNames);
        tolua_function(tolua_S,"getMovementCount",lua_cocos2dx_studio_ArmatureAnimation_getMovementCount);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_ArmatureAnimation_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_ArmatureAnimation_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::ArmatureAnimation).name();
    g_luaType[typeName] = "ArmatureAnimation";
    return 1;
}

int lua_cocos2dx_studio_ArmatureDataManager_getAnimationDatas(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_getAnimationDatas'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Map<std::string, cocostudio::AnimationData *>& ret = cobj->getAnimationDatas();
        ccmap_string_key_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnimationDatas",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_getAnimationDatas'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_removeAnimationData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_removeAnimationData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->removeAnimationData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeAnimationData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_removeAnimationData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_addArmatureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_addArmatureData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        cocostudio::ArmatureData* arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"ArmatureData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocostudio::ArmatureData*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addArmatureData(arg0, arg1);
        return 0;
    }
    if (argc == 3) 
    {
        std::string arg0;
        cocostudio::ArmatureData* arg1;
        std::string arg2;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"ArmatureData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocostudio::ArmatureData*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_std_string(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cobj->addArmatureData(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addArmatureData",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_addArmatureData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_addArmatureFileInfo(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_addArmatureFileInfo'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 3) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0);

            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1);

            if (!ok) { break; }
            std::string arg2;
            ok &= luaval_to_std_string(tolua_S, 4,&arg2);

            if (!ok) { break; }
            cobj->addArmatureFileInfo(arg0, arg1, arg2);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0);

            if (!ok) { break; }
            cobj->addArmatureFileInfo(arg0);
            return 0;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addArmatureFileInfo",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_addArmatureFileInfo'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_removeArmatureFileInfo(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_removeArmatureFileInfo'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->removeArmatureFileInfo(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeArmatureFileInfo",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_removeArmatureFileInfo'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_getTextureDatas(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_getTextureDatas'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Map<std::string, cocostudio::TextureData *>& ret = cobj->getTextureDatas();
        ccmap_string_key_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTextureDatas",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_getTextureDatas'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_getTextureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_getTextureData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocostudio::TextureData* ret = cobj->getTextureData(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "TextureData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::TextureData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTextureData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_getTextureData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_getArmatureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_getArmatureData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocostudio::ArmatureData* ret = cobj->getArmatureData(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ArmatureData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::ArmatureData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getArmatureData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_getArmatureData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_getAnimationData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_getAnimationData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocostudio::AnimationData* ret = cobj->getAnimationData(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "AnimationData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::AnimationData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnimationData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_getAnimationData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_addAnimationData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_addAnimationData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        cocostudio::AnimationData* arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"AnimationData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocostudio::AnimationData*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addAnimationData(arg0, arg1);
        return 0;
    }
    if (argc == 3) 
    {
        std::string arg0;
        cocostudio::AnimationData* arg1;
        std::string arg2;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"AnimationData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocostudio::AnimationData*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_std_string(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cobj->addAnimationData(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addAnimationData",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_addAnimationData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_removeArmatureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_removeArmatureData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->removeArmatureData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeArmatureData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_removeArmatureData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_getArmatureDatas(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_getArmatureDatas'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Map<std::string, cocostudio::ArmatureData *>& ret = cobj->getArmatureDatas();
        ccmap_string_key_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getArmatureDatas",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_getArmatureDatas'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_removeTextureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_removeTextureData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->removeTextureData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeTextureData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_removeTextureData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_addTextureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_addTextureData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        cocostudio::TextureData* arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"TextureData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocostudio::TextureData*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addTextureData(arg0, arg1);
        return 0;
    }
    if (argc == 3) 
    {
        std::string arg0;
        cocostudio::TextureData* arg1;
        std::string arg2;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"TextureData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocostudio::TextureData*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_std_string(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cobj->addTextureData(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addTextureData",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_addTextureData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_isAutoLoadSpriteFile(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_isAutoLoadSpriteFile'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isAutoLoadSpriteFile();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isAutoLoadSpriteFile",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_isAutoLoadSpriteFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_addSpriteFrameFromFile(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_addSpriteFrameFromFile'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        std::string arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->addSpriteFrameFromFile(arg0, arg1);
        return 0;
    }
    if (argc == 3) 
    {
        std::string arg0;
        std::string arg1;
        std::string arg2;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
        ok &= luaval_to_std_string(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cobj->addSpriteFrameFromFile(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addSpriteFrameFromFile",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_addSpriteFrameFromFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_destroyInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::ArmatureDataManager::destroyInstance();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "destroyInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_destroyInstance'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_getInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::ArmatureDataManager* ret = cocostudio::ArmatureDataManager::getInstance();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ArmatureDataManager";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::ArmatureDataManager*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "getInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_getInstance'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_studio_ArmatureDataManager_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ArmatureDataManager)");
    return 0;
}

int lua_register_cocos2dx_studio_ArmatureDataManager(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ArmatureDataManager");
    tolua_cclass(tolua_S,"ArmatureDataManager","ArmatureDataManager","",NULL);

    tolua_beginmodule(tolua_S,"ArmatureDataManager");
        tolua_function(tolua_S,"getAnimationDatas",lua_cocos2dx_studio_ArmatureDataManager_getAnimationDatas);
        tolua_function(tolua_S,"removeAnimationData",lua_cocos2dx_studio_ArmatureDataManager_removeAnimationData);
        tolua_function(tolua_S,"addArmatureData",lua_cocos2dx_studio_ArmatureDataManager_addArmatureData);
        tolua_function(tolua_S,"addArmatureFileInfo",lua_cocos2dx_studio_ArmatureDataManager_addArmatureFileInfo);
        tolua_function(tolua_S,"removeArmatureFileInfo",lua_cocos2dx_studio_ArmatureDataManager_removeArmatureFileInfo);
        tolua_function(tolua_S,"getTextureDatas",lua_cocos2dx_studio_ArmatureDataManager_getTextureDatas);
        tolua_function(tolua_S,"getTextureData",lua_cocos2dx_studio_ArmatureDataManager_getTextureData);
        tolua_function(tolua_S,"getArmatureData",lua_cocos2dx_studio_ArmatureDataManager_getArmatureData);
        tolua_function(tolua_S,"getAnimationData",lua_cocos2dx_studio_ArmatureDataManager_getAnimationData);
        tolua_function(tolua_S,"addAnimationData",lua_cocos2dx_studio_ArmatureDataManager_addAnimationData);
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_ArmatureDataManager_init);
        tolua_function(tolua_S,"removeArmatureData",lua_cocos2dx_studio_ArmatureDataManager_removeArmatureData);
        tolua_function(tolua_S,"getArmatureDatas",lua_cocos2dx_studio_ArmatureDataManager_getArmatureDatas);
        tolua_function(tolua_S,"removeTextureData",lua_cocos2dx_studio_ArmatureDataManager_removeTextureData);
        tolua_function(tolua_S,"addTextureData",lua_cocos2dx_studio_ArmatureDataManager_addTextureData);
        tolua_function(tolua_S,"isAutoLoadSpriteFile",lua_cocos2dx_studio_ArmatureDataManager_isAutoLoadSpriteFile);
        tolua_function(tolua_S,"addSpriteFrameFromFile",lua_cocos2dx_studio_ArmatureDataManager_addSpriteFrameFromFile);
        tolua_function(tolua_S,"destroyInstance", lua_cocos2dx_studio_ArmatureDataManager_destroyInstance);
        tolua_function(tolua_S,"getInstance", lua_cocos2dx_studio_ArmatureDataManager_getInstance);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::ArmatureDataManager).name();
    g_luaType[typeName] = "ArmatureDataManager";
    return 1;
}

int lua_cocos2dx_studio_Armature_getBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getBone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocostudio::Bone* ret = cobj->getBone(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Bone";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::Bone*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBone",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_changeBoneParent(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_changeBoneParent'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocostudio::Bone* arg0;
        std::string arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Bone*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->changeBoneParent(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "changeBoneParent",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_changeBoneParent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_setAnimation(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_setAnimation'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::ArmatureAnimation* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"ArmatureAnimation",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setAnimation(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAnimation",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_setAnimation'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_getBoneAtPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getBoneAtPoint'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        double arg1;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        ok &= luaval_to_number(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cocostudio::Bone* ret = cobj->getBoneAtPoint(arg0, arg1);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Bone";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::Bone*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBoneAtPoint",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getBoneAtPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_getArmatureTransformDirty(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getArmatureTransformDirty'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->getArmatureTransformDirty();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getArmatureTransformDirty",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getArmatureTransformDirty'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_setVersion(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_setVersion'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setVersion(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setVersion",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_setVersion'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_updateOffsetPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_updateOffsetPoint'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->updateOffsetPoint();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateOffsetPoint",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_updateOffsetPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_getParentBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getParentBone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::Bone* ret = cobj->getParentBone();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Bone";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::Bone*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getParentBone",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getParentBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_setArmatureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_setArmatureData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::ArmatureData* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"ArmatureData",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::ArmatureData*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setArmatureData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setArmatureData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_setArmatureData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_removeBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_removeBone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocostudio::Bone* arg0;
        bool arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Bone*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->removeBone(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeBone",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_removeBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_getBatchNode(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getBatchNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::BatchNode* ret = cobj->getBatchNode();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "BatchNode";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::BatchNode*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBatchNode",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getBatchNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_getName(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const std::string& ret = cobj->getName();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_init'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0);

            if (!ok) { break; }
            bool ret = cobj->init(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 0) {
            bool ret = cobj->init();
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0);

            if (!ok) { break; }
            cocostudio::Bone* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocostudio::Bone*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            bool ret = cobj->init(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_setParentBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_setParentBone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::Bone* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Bone*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setParentBone(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setParentBone",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_setParentBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_drawContour(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_drawContour'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->drawContour();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "drawContour",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_drawContour'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_setBatchNode(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_setBatchNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::BatchNode* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"BatchNode",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::BatchNode*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setBatchNode(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBatchNode",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_setBatchNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_setName(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_setName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_setName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_addBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_addBone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocostudio::Bone* arg0;
        std::string arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Bone*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->addBone(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addBone",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_addBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_getArmatureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getArmatureData'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::ArmatureData* ret = cobj->getArmatureData();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ArmatureData";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::ArmatureData*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getArmatureData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getArmatureData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_getVersion(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getVersion'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getVersion();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getVersion",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getVersion'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_getAnimation(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getAnimation'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::ArmatureAnimation* ret = cobj->getAnimation();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ArmatureAnimation";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::ArmatureAnimation*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnimation",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getAnimation'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_getBoneDic(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getBoneDic'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Map<std::string, cocostudio::Bone *>& ret = cobj->getBoneDic();
        ccmap_string_key_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBoneDic",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getBoneDic'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 1)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0);
            if (!ok) { break; }
            cocostudio::Armature* ret = cocostudio::Armature::create(arg0);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Armature";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::Armature*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 0)
        {
            cocostudio::Armature* ret = cocostudio::Armature::create();
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Armature";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::Armature*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 2)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0);
            if (!ok) { break; }
            cocostudio::Bone* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocostudio::Bone*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocostudio::Armature* ret = cocostudio::Armature::create(arg0, arg1);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Armature";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::Armature*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "create",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::Armature();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"Armature");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"Armature");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "Armature",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_Armature_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Armature)");
    return 0;
}

int lua_register_cocos2dx_studio_Armature(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"Armature");
    tolua_cclass(tolua_S,"Armature","Armature","Node",NULL);

    tolua_beginmodule(tolua_S,"Armature");
        tolua_function(tolua_S,"getBone",lua_cocos2dx_studio_Armature_getBone);
        tolua_function(tolua_S,"changeBoneParent",lua_cocos2dx_studio_Armature_changeBoneParent);
        tolua_function(tolua_S,"setAnimation",lua_cocos2dx_studio_Armature_setAnimation);
        tolua_function(tolua_S,"getBoneAtPoint",lua_cocos2dx_studio_Armature_getBoneAtPoint);
        tolua_function(tolua_S,"getArmatureTransformDirty",lua_cocos2dx_studio_Armature_getArmatureTransformDirty);
        tolua_function(tolua_S,"setVersion",lua_cocos2dx_studio_Armature_setVersion);
        tolua_function(tolua_S,"updateOffsetPoint",lua_cocos2dx_studio_Armature_updateOffsetPoint);
        tolua_function(tolua_S,"getParentBone",lua_cocos2dx_studio_Armature_getParentBone);
        tolua_function(tolua_S,"setArmatureData",lua_cocos2dx_studio_Armature_setArmatureData);
        tolua_function(tolua_S,"removeBone",lua_cocos2dx_studio_Armature_removeBone);
        tolua_function(tolua_S,"getBatchNode",lua_cocos2dx_studio_Armature_getBatchNode);
        tolua_function(tolua_S,"getName",lua_cocos2dx_studio_Armature_getName);
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_Armature_init);
        tolua_function(tolua_S,"setParentBone",lua_cocos2dx_studio_Armature_setParentBone);
        tolua_function(tolua_S,"drawContour",lua_cocos2dx_studio_Armature_drawContour);
        tolua_function(tolua_S,"setBatchNode",lua_cocos2dx_studio_Armature_setBatchNode);
        tolua_function(tolua_S,"setName",lua_cocos2dx_studio_Armature_setName);
        tolua_function(tolua_S,"addBone",lua_cocos2dx_studio_Armature_addBone);
        tolua_function(tolua_S,"getArmatureData",lua_cocos2dx_studio_Armature_getArmatureData);
        tolua_function(tolua_S,"getVersion",lua_cocos2dx_studio_Armature_getVersion);
        tolua_function(tolua_S,"getAnimation",lua_cocos2dx_studio_Armature_getAnimation);
        tolua_function(tolua_S,"getBoneDic",lua_cocos2dx_studio_Armature_getBoneDic);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_Armature_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_Armature_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::Armature).name();
    g_luaType[typeName] = "Armature";
    return 1;
}

int lua_cocos2dx_studio_Skin_getBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Skin*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Skin_getBone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::Bone* ret = cobj->getBone();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Bone";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::Bone*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBone",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_getBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Skin_getNodeToWorldTransformAR(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Skin*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Skin_getNodeToWorldTransformAR'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        kmMat4 ret = cobj->getNodeToWorldTransformAR();
        #pragma warning NO CONVERSION FROM NATIVE FOR kmMat4;
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getNodeToWorldTransformAR",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_getNodeToWorldTransformAR'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Skin_initWithFile(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Skin*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Skin_initWithFile'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        bool ret = cobj->initWithFile(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithFile",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_initWithFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Skin_getDisplayName(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Skin*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Skin_getDisplayName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const std::string& ret = cobj->getDisplayName();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDisplayName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_getDisplayName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Skin_updateArmatureTransform(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Skin*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Skin_updateArmatureTransform'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->updateArmatureTransform();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateArmatureTransform",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_updateArmatureTransform'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Skin_initWithSpriteFrameName(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Skin*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Skin_initWithSpriteFrameName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        bool ret = cobj->initWithSpriteFrameName(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithSpriteFrameName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_initWithSpriteFrameName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Skin_setBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Skin*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Skin_setBone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::Bone* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Bone",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocostudio::Bone*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setBone(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBone",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_setBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Skin_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 1)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0);
            if (!ok) { break; }
            cocostudio::Skin* ret = cocostudio::Skin::create(arg0);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Skin";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::Skin*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 0)
        {
            cocostudio::Skin* ret = cocostudio::Skin::create();
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Skin";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::Skin*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Skin_createWithSpriteFrameName(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocostudio::Skin* ret = cocostudio::Skin::createWithSpriteFrameName(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Skin";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::Skin*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "createWithSpriteFrameName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_createWithSpriteFrameName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Skin_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::Skin();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"Skin");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"Skin");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "Skin",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_Skin_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Skin)");
    return 0;
}

int lua_register_cocos2dx_studio_Skin(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"Skin");
    tolua_cclass(tolua_S,"Skin","Skin","Sprite",NULL);

    tolua_beginmodule(tolua_S,"Skin");
        tolua_function(tolua_S,"getBone",lua_cocos2dx_studio_Skin_getBone);
        tolua_function(tolua_S,"getNodeToWorldTransformAR",lua_cocos2dx_studio_Skin_getNodeToWorldTransformAR);
        tolua_function(tolua_S,"initWithFile",lua_cocos2dx_studio_Skin_initWithFile);
        tolua_function(tolua_S,"getDisplayName",lua_cocos2dx_studio_Skin_getDisplayName);
        tolua_function(tolua_S,"updateArmatureTransform",lua_cocos2dx_studio_Skin_updateArmatureTransform);
        tolua_function(tolua_S,"initWithSpriteFrameName",lua_cocos2dx_studio_Skin_initWithSpriteFrameName);
        tolua_function(tolua_S,"setBone",lua_cocos2dx_studio_Skin_setBone);
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_Skin_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_Skin_create);
        tolua_function(tolua_S,"createWithSpriteFrameName", lua_cocos2dx_studio_Skin_createWithSpriteFrameName);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::Skin).name();
    g_luaType[typeName] = "Skin";
    return 1;
}

int lua_cocos2dx_studio_ComAttribute_getFloat(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAttribute* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAttribute",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAttribute*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAttribute_getFloat'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        double ret = cobj->getFloat(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    if (argc == 2) 
    {
        std::string arg0;
        double arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        ok &= luaval_to_number(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        double ret = cobj->getFloat(arg0, arg1);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getFloat",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAttribute_getFloat'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAttribute_getString(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAttribute* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAttribute",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAttribute*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAttribute_getString'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        std::string ret = cobj->getString(arg0);
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    if (argc == 2) 
    {
        std::string arg0;
        std::string arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        std::string ret = cobj->getString(arg0, arg1);
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getString",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAttribute_getString'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAttribute_setFloat(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAttribute* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAttribute",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAttribute*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAttribute_setFloat'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        double arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        ok &= luaval_to_number(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->setFloat(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setFloat",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAttribute_setFloat'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAttribute_setString(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAttribute* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAttribute",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAttribute*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAttribute_setString'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        std::string arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->setString(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setString",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAttribute_setString'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAttribute_getBool(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAttribute* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAttribute",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAttribute*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAttribute_getBool'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        bool ret = cobj->getBool(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 2) 
    {
        std::string arg0;
        bool arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        bool ret = cobj->getBool(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBool",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAttribute_getBool'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAttribute_setInt(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAttribute* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAttribute",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAttribute*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAttribute_setInt'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        int arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setInt(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setInt",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAttribute_setInt'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAttribute_parse(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAttribute* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAttribute",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAttribute*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAttribute_parse'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        bool ret = cobj->parse(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "parse",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAttribute_parse'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAttribute_getInt(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAttribute* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAttribute",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAttribute*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAttribute_getInt'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        int ret = cobj->getInt(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    if (argc == 2) 
    {
        std::string arg0;
        int arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        int ret = cobj->getInt(arg0, arg1);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getInt",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAttribute_getInt'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAttribute_setBool(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAttribute* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAttribute",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAttribute*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAttribute_setBool'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        bool arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->setBool(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBool",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAttribute_setBool'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAttribute_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ComAttribute",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::ComAttribute* ret = cocostudio::ComAttribute::create();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ComAttribute";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::ComAttribute*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAttribute_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ComAttribute_createInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ComAttribute",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::Object* ret = cocostudio::ComAttribute::createInstance();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Object";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Object*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "createInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAttribute_createInstance'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_studio_ComAttribute_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ComAttribute)");
    return 0;
}

int lua_register_cocos2dx_studio_ComAttribute(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ComAttribute");
    tolua_cclass(tolua_S,"ComAttribute","ComAttribute","Component",NULL);

    tolua_beginmodule(tolua_S,"ComAttribute");
        tolua_function(tolua_S,"getFloat",lua_cocos2dx_studio_ComAttribute_getFloat);
        tolua_function(tolua_S,"getString",lua_cocos2dx_studio_ComAttribute_getString);
        tolua_function(tolua_S,"setFloat",lua_cocos2dx_studio_ComAttribute_setFloat);
        tolua_function(tolua_S,"setString",lua_cocos2dx_studio_ComAttribute_setString);
        tolua_function(tolua_S,"getBool",lua_cocos2dx_studio_ComAttribute_getBool);
        tolua_function(tolua_S,"setInt",lua_cocos2dx_studio_ComAttribute_setInt);
        tolua_function(tolua_S,"parse",lua_cocos2dx_studio_ComAttribute_parse);
        tolua_function(tolua_S,"getInt",lua_cocos2dx_studio_ComAttribute_getInt);
        tolua_function(tolua_S,"setBool",lua_cocos2dx_studio_ComAttribute_setBool);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_ComAttribute_create);
        tolua_function(tolua_S,"createInstance", lua_cocos2dx_studio_ComAttribute_createInstance);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::ComAttribute).name();
    g_luaType[typeName] = "ComAttribute";
    return 1;
}

int lua_cocos2dx_studio_ComAudio_stopAllEffects(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_stopAllEffects'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->stopAllEffects();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "stopAllEffects",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_stopAllEffects'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_getEffectsVolume(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_getEffectsVolume'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getEffectsVolume();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getEffectsVolume",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_getEffectsVolume'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_stopEffect(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_stopEffect'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        unsigned int arg0;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->stopEffect(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "stopEffect",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_stopEffect'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_getBackgroundMusicVolume(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_getBackgroundMusicVolume'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getBackgroundMusicVolume();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBackgroundMusicVolume",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_getBackgroundMusicVolume'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_willPlayBackgroundMusic(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_willPlayBackgroundMusic'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->willPlayBackgroundMusic();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "willPlayBackgroundMusic",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_willPlayBackgroundMusic'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_setBackgroundMusicVolume(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_setBackgroundMusicVolume'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setBackgroundMusicVolume(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBackgroundMusicVolume",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_setBackgroundMusicVolume'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_end(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_end'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->end();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "end",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_end'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_stopBackgroundMusic(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_stopBackgroundMusic'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 0) {
            cobj->stopBackgroundMusic();
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            bool arg0;
            ok &= luaval_to_boolean(tolua_S, 2,&arg0);

            if (!ok) { break; }
            cobj->stopBackgroundMusic(arg0);
            return 0;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "stopBackgroundMusic",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_stopBackgroundMusic'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_pauseBackgroundMusic(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_pauseBackgroundMusic'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->pauseBackgroundMusic();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "pauseBackgroundMusic",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_pauseBackgroundMusic'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_isBackgroundMusicPlaying(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_isBackgroundMusicPlaying'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isBackgroundMusicPlaying();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isBackgroundMusicPlaying",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_isBackgroundMusicPlaying'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_isLoop(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_isLoop'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isLoop();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isLoop",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_isLoop'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_resumeAllEffects(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_resumeAllEffects'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->resumeAllEffects();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "resumeAllEffects",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_resumeAllEffects'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_pauseAllEffects(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_pauseAllEffects'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->pauseAllEffects();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "pauseAllEffects",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_pauseAllEffects'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_preloadBackgroundMusic(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_preloadBackgroundMusic'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->preloadBackgroundMusic(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "preloadBackgroundMusic",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_preloadBackgroundMusic'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_playBackgroundMusic(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_playBackgroundMusic'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

            if (!ok) { break; }
            cobj->playBackgroundMusic(arg0);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

            if (!ok) { break; }
            bool arg1;
            ok &= luaval_to_boolean(tolua_S, 3,&arg1);

            if (!ok) { break; }
            cobj->playBackgroundMusic(arg0, arg1);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 0) {
            cobj->playBackgroundMusic();
            return 0;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "playBackgroundMusic",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_playBackgroundMusic'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_playEffect(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_playEffect'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

            if (!ok) { break; }
            unsigned int ret = cobj->playEffect(arg0);
            tolua_pushnumber(tolua_S,(lua_Number)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

            if (!ok) { break; }
            bool arg1;
            ok &= luaval_to_boolean(tolua_S, 3,&arg1);

            if (!ok) { break; }
            unsigned int ret = cobj->playEffect(arg0, arg1);
            tolua_pushnumber(tolua_S,(lua_Number)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 0) {
            unsigned int ret = cobj->playEffect();
            tolua_pushnumber(tolua_S,(lua_Number)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "playEffect",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_playEffect'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_preloadEffect(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_preloadEffect'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->preloadEffect(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "preloadEffect",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_preloadEffect'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_setLoop(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_setLoop'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setLoop(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setLoop",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_setLoop'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_unloadEffect(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_unloadEffect'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->unloadEffect(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "unloadEffect",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_unloadEffect'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_rewindBackgroundMusic(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_rewindBackgroundMusic'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->rewindBackgroundMusic();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "rewindBackgroundMusic",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_rewindBackgroundMusic'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_pauseEffect(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_pauseEffect'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        unsigned int arg0;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->pauseEffect(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "pauseEffect",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_pauseEffect'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_resumeBackgroundMusic(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_resumeBackgroundMusic'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->resumeBackgroundMusic();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "resumeBackgroundMusic",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_resumeBackgroundMusic'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_setFile(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_setFile'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setFile(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setFile",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_setFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_setEffectsVolume(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_setEffectsVolume'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setEffectsVolume(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setEffectsVolume",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_setEffectsVolume'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_getFile(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_getFile'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const char* ret = cobj->getFile();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getFile",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_getFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_resumeEffect(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComAudio* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComAudio*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComAudio_resumeEffect'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        unsigned int arg0;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->resumeEffect(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "resumeEffect",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_resumeEffect'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComAudio_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::ComAudio* ret = cocostudio::ComAudio::create();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ComAudio";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::ComAudio*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ComAudio_createInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ComAudio",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::Object* ret = cocostudio::ComAudio::createInstance();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Object";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Object*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "createInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComAudio_createInstance'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_studio_ComAudio_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ComAudio)");
    return 0;
}

int lua_register_cocos2dx_studio_ComAudio(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ComAudio");
    tolua_cclass(tolua_S,"ComAudio","ComAudio","Component",NULL);

    tolua_beginmodule(tolua_S,"ComAudio");
        tolua_function(tolua_S,"stopAllEffects",lua_cocos2dx_studio_ComAudio_stopAllEffects);
        tolua_function(tolua_S,"getEffectsVolume",lua_cocos2dx_studio_ComAudio_getEffectsVolume);
        tolua_function(tolua_S,"stopEffect",lua_cocos2dx_studio_ComAudio_stopEffect);
        tolua_function(tolua_S,"getBackgroundMusicVolume",lua_cocos2dx_studio_ComAudio_getBackgroundMusicVolume);
        tolua_function(tolua_S,"willPlayBackgroundMusic",lua_cocos2dx_studio_ComAudio_willPlayBackgroundMusic);
        tolua_function(tolua_S,"setBackgroundMusicVolume",lua_cocos2dx_studio_ComAudio_setBackgroundMusicVolume);
        tolua_function(tolua_S,"end",lua_cocos2dx_studio_ComAudio_end);
        tolua_function(tolua_S,"stopBackgroundMusic",lua_cocos2dx_studio_ComAudio_stopBackgroundMusic);
        tolua_function(tolua_S,"pauseBackgroundMusic",lua_cocos2dx_studio_ComAudio_pauseBackgroundMusic);
        tolua_function(tolua_S,"isBackgroundMusicPlaying",lua_cocos2dx_studio_ComAudio_isBackgroundMusicPlaying);
        tolua_function(tolua_S,"isLoop",lua_cocos2dx_studio_ComAudio_isLoop);
        tolua_function(tolua_S,"resumeAllEffects",lua_cocos2dx_studio_ComAudio_resumeAllEffects);
        tolua_function(tolua_S,"pauseAllEffects",lua_cocos2dx_studio_ComAudio_pauseAllEffects);
        tolua_function(tolua_S,"preloadBackgroundMusic",lua_cocos2dx_studio_ComAudio_preloadBackgroundMusic);
        tolua_function(tolua_S,"playBackgroundMusic",lua_cocos2dx_studio_ComAudio_playBackgroundMusic);
        tolua_function(tolua_S,"playEffect",lua_cocos2dx_studio_ComAudio_playEffect);
        tolua_function(tolua_S,"preloadEffect",lua_cocos2dx_studio_ComAudio_preloadEffect);
        tolua_function(tolua_S,"setLoop",lua_cocos2dx_studio_ComAudio_setLoop);
        tolua_function(tolua_S,"unloadEffect",lua_cocos2dx_studio_ComAudio_unloadEffect);
        tolua_function(tolua_S,"rewindBackgroundMusic",lua_cocos2dx_studio_ComAudio_rewindBackgroundMusic);
        tolua_function(tolua_S,"pauseEffect",lua_cocos2dx_studio_ComAudio_pauseEffect);
        tolua_function(tolua_S,"resumeBackgroundMusic",lua_cocos2dx_studio_ComAudio_resumeBackgroundMusic);
        tolua_function(tolua_S,"setFile",lua_cocos2dx_studio_ComAudio_setFile);
        tolua_function(tolua_S,"setEffectsVolume",lua_cocos2dx_studio_ComAudio_setEffectsVolume);
        tolua_function(tolua_S,"getFile",lua_cocos2dx_studio_ComAudio_getFile);
        tolua_function(tolua_S,"resumeEffect",lua_cocos2dx_studio_ComAudio_resumeEffect);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_ComAudio_create);
        tolua_function(tolua_S,"createInstance", lua_cocos2dx_studio_ComAudio_createInstance);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::ComAudio).name();
    g_luaType[typeName] = "ComAudio";
    return 1;
}

int lua_cocos2dx_studio_ComController_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ComController",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::ComController* ret = cocostudio::ComController::create();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ComController";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::ComController*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComController_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ComController_createInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ComController",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::Object* ret = cocostudio::ComController::createInstance();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Object";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Object*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "createInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComController_createInstance'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ComController_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComController* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::ComController();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ComController");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ComController");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ComController",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComController_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_ComController_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ComController)");
    return 0;
}

int lua_register_cocos2dx_studio_ComController(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ComController");
    tolua_cclass(tolua_S,"ComController","ComController","Component",NULL);

    tolua_beginmodule(tolua_S,"ComController");
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_ComController_create);
        tolua_function(tolua_S,"createInstance", lua_cocos2dx_studio_ComController_createInstance);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::ComController).name();
    g_luaType[typeName] = "ComController";
    return 1;
}

int lua_cocos2dx_studio_ComRender_setNode(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComRender* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComRender",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComRender*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComRender_setNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Node* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setNode(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setNode",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComRender_setNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComRender_getNode(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ComRender* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ComRender",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ComRender*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ComRender_getNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Node* ret = cobj->getNode();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Node";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Node*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getNode",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComRender_getNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ComRender_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ComRender",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 2)
        {
            cocos2d::Node* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            const char* arg1;
            std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
            if (!ok) { break; }
            cocostudio::ComRender* ret = cocostudio::ComRender::create(arg0, arg1);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ComRender";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::ComRender*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 0)
        {
            cocostudio::ComRender* ret = cocostudio::ComRender::create();
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ComRender";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::ComRender*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComRender_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ComRender_createInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ComRender",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::Object* ret = cocostudio::ComRender::createInstance();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Object";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Object*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "createInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ComRender_createInstance'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_studio_ComRender_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ComRender)");
    return 0;
}

int lua_register_cocos2dx_studio_ComRender(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ComRender");
    tolua_cclass(tolua_S,"ComRender","ComRender","Component",NULL);

    tolua_beginmodule(tolua_S,"ComRender");
        tolua_function(tolua_S,"setNode",lua_cocos2dx_studio_ComRender_setNode);
        tolua_function(tolua_S,"getNode",lua_cocos2dx_studio_ComRender_getNode);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_ComRender_create);
        tolua_function(tolua_S,"createInstance", lua_cocos2dx_studio_ComRender_createInstance);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::ComRender).name();
    g_luaType[typeName] = "ComRender";
    return 1;
}

int lua_cocos2dx_studio_GUIReader_widgetFromJsonFile(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::GUIReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GUIReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::GUIReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_GUIReader_widgetFromJsonFile'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cocos2d::gui::Widget* ret = cobj->widgetFromJsonFile(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Widget";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::gui::Widget*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "widgetFromJsonFile",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_GUIReader_widgetFromJsonFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_GUIReader_getVersionInteger(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::GUIReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GUIReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::GUIReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_GUIReader_getVersionInteger'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        int ret = cobj->getVersionInteger(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getVersionInteger",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_GUIReader_getVersionInteger'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_GUIReader_destroyInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"GUIReader",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::GUIReader::destroyInstance();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "destroyInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_GUIReader_destroyInstance'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_GUIReader_getInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"GUIReader",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::GUIReader* ret = cocostudio::GUIReader::getInstance();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "GUIReader";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::GUIReader*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "getInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_GUIReader_getInstance'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_studio_GUIReader_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (GUIReader)");
    return 0;
}

int lua_register_cocos2dx_studio_GUIReader(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"GUIReader");
    tolua_cclass(tolua_S,"GUIReader","GUIReader","",NULL);

    tolua_beginmodule(tolua_S,"GUIReader");
        tolua_function(tolua_S,"widgetFromJsonFile",lua_cocos2dx_studio_GUIReader_widgetFromJsonFile);
        tolua_function(tolua_S,"getVersionInteger",lua_cocos2dx_studio_GUIReader_getVersionInteger);
        tolua_function(tolua_S,"destroyInstance", lua_cocos2dx_studio_GUIReader_destroyInstance);
        tolua_function(tolua_S,"getInstance", lua_cocos2dx_studio_GUIReader_getInstance);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::GUIReader).name();
    g_luaType[typeName] = "GUIReader";
    return 1;
}

int lua_cocos2dx_studio_SceneReader_setTarget(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::SceneReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SceneReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::SceneReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_SceneReader_setTarget'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::function<void (cocos2d::Object *, void *)> arg0;
        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
            return 0;
        cobj->setTarget(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTarget",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_SceneReader_setTarget'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_SceneReader_createNodeWithSceneFile(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::SceneReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SceneReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::SceneReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_SceneReader_createNodeWithSceneFile'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocos2d::Node* ret = cobj->createNodeWithSceneFile(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Node";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Node*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "createNodeWithSceneFile",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_SceneReader_createNodeWithSceneFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_SceneReader_getNodeByTag(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::SceneReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SceneReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::SceneReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_SceneReader_getNodeByTag'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cocos2d::Node* ret = cobj->getNodeByTag(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Node";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Node*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getNodeByTag",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_SceneReader_getNodeByTag'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_SceneReader_destroyInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"SceneReader",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::SceneReader::destroyInstance();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "destroyInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_SceneReader_destroyInstance'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_SceneReader_sceneReaderVersion(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"SceneReader",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        const char* ret = cocostudio::SceneReader::sceneReaderVersion();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "sceneReaderVersion",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_SceneReader_sceneReaderVersion'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_SceneReader_getInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"SceneReader",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::SceneReader* ret = cocostudio::SceneReader::getInstance();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "SceneReader";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocostudio::SceneReader*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "getInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_SceneReader_getInstance'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_studio_SceneReader_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (SceneReader)");
    return 0;
}

int lua_register_cocos2dx_studio_SceneReader(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"SceneReader");
    tolua_cclass(tolua_S,"SceneReader","SceneReader","",NULL);

    tolua_beginmodule(tolua_S,"SceneReader");
        tolua_function(tolua_S,"setTarget",lua_cocos2dx_studio_SceneReader_setTarget);
        tolua_function(tolua_S,"createNodeWithSceneFile",lua_cocos2dx_studio_SceneReader_createNodeWithSceneFile);
        tolua_function(tolua_S,"getNodeByTag",lua_cocos2dx_studio_SceneReader_getNodeByTag);
        tolua_function(tolua_S,"destroyInstance", lua_cocos2dx_studio_SceneReader_destroyInstance);
        tolua_function(tolua_S,"sceneReaderVersion", lua_cocos2dx_studio_SceneReader_sceneReaderVersion);
        tolua_function(tolua_S,"getInstance", lua_cocos2dx_studio_SceneReader_getInstance);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::SceneReader).name();
    g_luaType[typeName] = "SceneReader";
    return 1;
}
TOLUA_API int register_all_cocos2dx_studio(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"ccs",0);
	tolua_beginmodule(tolua_S,"ccs");

	lua_register_cocos2dx_studio_Tween(tolua_S);
	lua_register_cocos2dx_studio_ContourData(tolua_S);
	lua_register_cocos2dx_studio_SceneReader(tolua_S);
	lua_register_cocos2dx_studio_ComAudio(tolua_S);
	lua_register_cocos2dx_studio_DisplayData(tolua_S);
	lua_register_cocos2dx_studio_ArmatureDisplayData(tolua_S);
	lua_register_cocos2dx_studio_MovementData(tolua_S);
	lua_register_cocos2dx_studio_ArmatureDataManager(tolua_S);
	lua_register_cocos2dx_studio_ArmatureData(tolua_S);
	lua_register_cocos2dx_studio_BaseData(tolua_S);
	lua_register_cocos2dx_studio_FrameData(tolua_S);
	lua_register_cocos2dx_studio_ComController(tolua_S);
	lua_register_cocos2dx_studio_BoneData(tolua_S);
	lua_register_cocos2dx_studio_ComRender(tolua_S);
	lua_register_cocos2dx_studio_ParticleDisplayData(tolua_S);
	lua_register_cocos2dx_studio_BatchNode(tolua_S);
	lua_register_cocos2dx_studio_ActionObject(tolua_S);
	lua_register_cocos2dx_studio_Skin(tolua_S);
	lua_register_cocos2dx_studio_MovementBoneData(tolua_S);
	lua_register_cocos2dx_studio_DisplayManager(tolua_S);
	lua_register_cocos2dx_studio_GUIReader(tolua_S);
	lua_register_cocos2dx_studio_ArmatureAnimation(tolua_S);
	lua_register_cocos2dx_studio_Armature(tolua_S);
	lua_register_cocos2dx_studio_SpriteDisplayData(tolua_S);
	lua_register_cocos2dx_studio_ActionManagerEx(tolua_S);
	lua_register_cocos2dx_studio_Bone(tolua_S);
	lua_register_cocos2dx_studio_ComAttribute(tolua_S);
	lua_register_cocos2dx_studio_TextureData(tolua_S);
	lua_register_cocos2dx_studio_AnimationData(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

