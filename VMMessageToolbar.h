//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TPView.h"

@class UIButton;

@interface VMMessageToolbar : TPView
{
    id <VMMessageToolbarDelegate> _delegate;
    UIButton *_audioRouteButton;
    UIButton *_dialRequestButton;
    UIButton *_trashButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *audioRouteButton; // @synthesize audioRouteButton=_audioRouteButton;
- (void)commonInit;
@property(nonatomic) __weak id <VMMessageToolbarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *dialRequestButton; // @synthesize dialRequestButton=_dialRequestButton;
- (void)handleActionForButtonSender:(id)arg1 event:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)loadConstraints;
- (void)setButtonType:(unsigned long long)arg1 enabled:(_Bool)arg2;
@property(retain, nonatomic) UIButton *trashButton; // @synthesize trashButton=_trashButton;
- (void)updateFonts;

@end
