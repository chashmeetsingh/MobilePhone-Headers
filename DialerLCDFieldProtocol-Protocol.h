//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol DialerLCDFieldProtocol <NSObject>
- (void)deleteCharacter;
- (_Bool)highlighted;
- (_Bool)inCallMode;
- (void)insertStringAtCurrentPosition:(NSString *)arg1;
- (void)insertStringAtCurrentPosition:(NSString *)arg1 deletingPreviousCharacter:(_Bool)arg2;
- (void)setDelegate:(id <DialerLCDFieldDelegate>)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setInCallMode:(_Bool)arg1;
- (void)setText:(NSString *)arg1 needsFormat:(_Bool)arg2;
- (NSString *)text;

@optional
- (void)endEditing;
- (void)setName:(NSString *)arg1 numberLabel:(NSString *)arg2;
- (void)setName:(NSString *)arg1 numberLabel:(NSString *)arg2 suggestion:(_Bool)arg3;
- (void)setText:(NSString *)arg1 needsFormat:(_Bool)arg2 name:(NSString *)arg3 label:(NSString *)arg4;
@end

