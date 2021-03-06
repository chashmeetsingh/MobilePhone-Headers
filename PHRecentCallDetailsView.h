//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PHRecentCallDetailsItemViewDelegate.h"

@class CHRecentCall, NSArray, NSCalendar, NSDateFormatter, NSNumberFormatter, NSString;

@interface PHRecentCallDetailsView : UIView <PHRecentCallDetailsItemViewDelegate>
{
    CHRecentCall *_recentCall;
    id <PHRecentCallDetailsViewDelegate> _delegate;
    NSArray *_summaries;
    double _intrinsicContentHeight;
}

- (void).cxx_destruct;
- (void)addNotificationObservers;
@property(readonly, nonatomic) NSCalendar *calendar;
- (id)callOccurrences;
@property(readonly, nonatomic) NSDateFormatter *dateFormatter;
- (void)dealloc;
@property(nonatomic) __weak id <PHRecentCallDetailsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleFormattersDidChangeNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property double intrinsicContentHeight; // @synthesize intrinsicContentHeight=_intrinsicContentHeight;
- (struct CGSize)intrinsicContentSize;
- (void)loadSubviews;
@property(readonly, nonatomic) NSNumberFormatter *numberFormatter;
- (void)presentConversationForUUID:(id)arg1;
@property(retain, nonatomic) CHRecentCall *recentCall; // @synthesize recentCall=_recentCall;
- (long long)recentCallTTYType;
@property(retain) NSArray *summaries; // @synthesize summaries=_summaries;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)stringForDataUsage:(id)arg1;
- (id)stringForTimeInterval:(double)arg1;
@property(readonly, nonatomic) NSDateFormatter *timeFormatter;
- (id)ttyConversationForUUID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

