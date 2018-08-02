//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UIButton;

@interface PHVoicemailGreetingPlaybackCell : UITableViewCell
{
    _Bool _accessibilityConstraintsEnabled;
    _Bool _builtConstraints;
    UIButton *_playStopButton;
    UIButton *_recordStopButton;
    id <PHVoicemailGreetingPlaybackCellDelegate> _delegate;
    NSLayoutConstraint *_playStopYConstraint;
    NSLayoutConstraint *_recordStopXConstraint;
    NSLayoutConstraint *_recordStopYConstraint;
}

+ (double)rowHeight;
- (void).cxx_destruct;
- (void)_buildConstraints;
- (void)_playStopButtonTapped:(id)arg1;
- (void)_recordStopButtonTapped:(id)arg1;
- (void)_updateConstraints;
- (void)_updateConstraintsConstants;
- (void)_updateFonts;
- (void)_updateRecordStopXConstraints;
@property(nonatomic) _Bool accessibilityConstraintsEnabled; // @synthesize accessibilityConstraintsEnabled=_accessibilityConstraintsEnabled;
@property(nonatomic) _Bool builtConstraints; // @synthesize builtConstraints=_builtConstraints;
- (void)dealloc;
@property(nonatomic) __weak id <PHVoicemailGreetingPlaybackCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) UIButton *playStopButton; // @synthesize playStopButton=_playStopButton;
@property(retain, nonatomic) NSLayoutConstraint *playStopYConstraint; // @synthesize playStopYConstraint=_playStopYConstraint;
@property(retain, nonatomic) UIButton *recordStopButton; // @synthesize recordStopButton=_recordStopButton;
@property(retain, nonatomic) NSLayoutConstraint *recordStopXConstraint; // @synthesize recordStopXConstraint=_recordStopXConstraint;
@property(retain, nonatomic) NSLayoutConstraint *recordStopYConstraint; // @synthesize recordStopYConstraint=_recordStopYConstraint;
- (void)setEnabled:(_Bool)arg1;

@end

