//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol TPDialerKeypadDelegate <NSObject>

@optional
- (void)phonePad:(id <TPDialerKeypadProtocol>)arg1 appendString:(NSString *)arg2;
- (void)phonePad:(id <TPDialerKeypadProtocol>)arg1 dialerCharacterButtonWasHeld:(unsigned int)arg2;
- (void)phonePad:(id <TPDialerKeypadProtocol>)arg1 keyDown:(BOOL)arg2;
- (void)phonePad:(id <TPDialerKeypadProtocol>)arg1 keyUp:(BOOL)arg2;
- (void)phonePad:(id <TPDialerKeypadProtocol>)arg1 replaceLastDigitWithString:(NSString *)arg2;
- (void)phonePadDeleteLastDigit:(id <TPDialerKeypadProtocol>)arg1;
- (void)phonePadDidEndSounds:(id <TPDialerKeypadProtocol>)arg1;
- (void)phonePadWillBeginSounds:(id <TPDialerKeypadProtocol>)arg1;
@end

