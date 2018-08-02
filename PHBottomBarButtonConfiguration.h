//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIImage;

@interface PHBottomBarButtonConfiguration : NSObject
{
    long long _action;
    long long _callState;
    double _diameter;
    NSString *_title;
    UIImage *_icon;
    UIImage *_selectedIcon;
    UIColor *_backgroundColor;
    UIColor *_highlightedColor;
    UIColor *_selectedColor;
}

+ (double)defaultHeight;
+ (double)defaultWidth;
+ (id)imageColorForState:(unsigned long long)arg1;
+ (id)imageForAction:(long long)arg1 callState:(long long)arg2;
+ (double)smallHeight;
+ (double)smallWidth;
+ (id)systemTintColor;
+ (id)voipTintColor;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long action; // @synthesize action=_action;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) long long callState; // @synthesize callState=_callState;
@property(readonly, nonatomic) double diameter; // @synthesize diameter=_diameter;
@property(readonly, nonatomic) UIColor *highlightedColor; // @synthesize highlightedColor=_highlightedColor;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (id)initWithAction:(long long)arg1;
- (id)initWithAction:(long long)arg1 diameter:(double)arg2 callState:(long long)arg3;
@property(readonly, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(readonly, nonatomic) UIImage *selectedIcon; // @synthesize selectedIcon=_selectedIcon;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;

@end
