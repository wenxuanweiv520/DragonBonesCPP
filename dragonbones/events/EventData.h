﻿#ifndef __EVENTS_EVENT_DATA_H__
#define __EVENTS_EVENT_DATA_H__

#include "../DragonBones.h"

NAME_SPACE_DRAGON_BONES_BEGIN

class Armature;
class Bone;
class AnimationState;

class EventData
{
public:
    static const String Z_ORDER_UPDATED;
    static const String ANIMATION_FRAME_EVENT;
    static const String BONE_FRAME_EVENT;
    static const String SOUND;
    static const String FADE_IN;
    static const String FADE_OUT;
    static const String START;
    static const String COMPLETE;
    static const String LOOP_COMPLETE;
    static const String FADE_IN_COMPLETE;
    static const String FADE_OUT_COMPLETE;
    
    static const String _ERROR;
    
    enum class EventDataType
    {
        Z_ORDER_UPDATED,
        ANIMATION_FRAME_EVENT,
        BONE_FRAME_EVENT,
        SOUND,
        FADE_IN, FADE_OUT, START, COMPLETE, LOOP_COMPLETE, FADE_IN_COMPLETE, FADE_OUT_COMPLETE
    };
    
public:
    String frameLabel;
    String sound;
    
    Armature *armature;
    Bone *bone;
    AnimationState *animationState;
    
private:
    EventDataType _type;
    
public:
    EventDataType getType() const;
    
    const String &getStringType() const;
    
public:
    EventData(EventDataType type, Armature *armatureTarget);
    virtual ~EventData();
    void dispose();
    
private:
    DRAGON_BONES_DISALLOW_COPY_AND_ASSIGN(EventData);
};
NAME_SPACE_DRAGON_BONES_END
#endif  // __EVENTS_EVENT_DATA_H__
