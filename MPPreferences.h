//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHPreferences.h"

@class NSString;

@interface MPPreferences : PHPreferences
{
    NSString *_domain;
}

+ (id)sharedPreferences;
- (void).cxx_destruct;
- (id)domain;
- (void)setDomain:(id)arg1;
- (void)setPreferencesValue:(id)arg1 forKey:(id)arg2;

@end

