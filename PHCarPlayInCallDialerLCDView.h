//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "DialerLCDFieldProtocol.h"

@class NSString, UILabel;

@interface PHCarPlayInCallDialerLCDView : UIView <DialerLCDFieldProtocol>
{
    UILabel *_mainNumberLabel;
}

- (void).cxx_destruct;
- (void)deleteCharacter;
- (_Bool)highlighted;
- (_Bool)inCallMode;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)insertStringAtCurrentPosition:(id)arg1;
- (void)insertStringAtCurrentPosition:(id)arg1 deletingPreviousCharacter:(_Bool)arg2;
- (struct CGSize)intrinsicContentSize;
@property(retain) UILabel *mainNumberLabel; // @synthesize mainNumberLabel=_mainNumberLabel;
- (id)name;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setInCallMode:(_Bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setText:(id)arg1 needsFormat:(_Bool)arg2;
- (id)text;
- (id)viewForLastBaselineLayout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

