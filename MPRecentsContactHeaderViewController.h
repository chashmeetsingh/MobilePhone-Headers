//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PHRecentCallDetailsViewDelegate.h"

@class CHRecentCall, NSDictionary, NSString, PHRecentCallDetailsView;

@interface MPRecentsContactHeaderViewController : UIViewController <PHRecentCallDetailsViewDelegate>
{
    PHRecentCallDetailsView *_detailsView;
    CHRecentCall *_recentCall;
    NSDictionary *_ttyConversations;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PHRecentCallDetailsView *detailsView; // @synthesize detailsView=_detailsView;
- (id)generateDetailsView;
- (void)loadLayoutConstraints;
- (void)loadTTYConversations;
- (void)loadView;
- (void)presentConversationForUUID:(id)arg1;
@property(retain, nonatomic) CHRecentCall *recentCall; // @synthesize recentCall=_recentCall;
- (long long)recentCallTTYType;
@property(retain, nonatomic) NSDictionary *ttyConversations; // @synthesize ttyConversations=_ttyConversations;
- (id)ttyConversationForUUID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

