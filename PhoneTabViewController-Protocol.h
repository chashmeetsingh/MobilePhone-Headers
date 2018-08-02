//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "PhoneBadgeable.h"

@class NSString, NSURL, UIImage, UITabBarController;

@protocol PhoneTabViewController <NSObject, PhoneBadgeable>
+ (NSString *)defaultPNGName;
+ (NSString *)tabBarIconName;
+ (int)tabViewType;
- (void)prepareForSnapshot;
- (_Bool)shouldSnapshot;

@optional
+ (_Bool)requiresNavigationControllerContainer;
+ (UIImage *)tabBarIconImage;
+ (NSString *)tabBarIconImageName;
+ (long long)tabBarSystemItem;
- (void)handleURL:(NSURL *)arg1;
- (_Bool)tabBarControllerShouldSelectViewController:(UITabBarController *)arg1;
@end

