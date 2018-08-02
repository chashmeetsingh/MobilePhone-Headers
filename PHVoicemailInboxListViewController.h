//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPVoicemailTableViewController.h"

#import "PHVoicemailGreetingViewControllerDelegate.h"
#import "PHVoicemailListProtocol.h"

@class NSArray, NSString, UIBarButtonItem;

@interface PHVoicemailInboxListViewController : MPVoicemailTableViewController <PHVoicemailGreetingViewControllerDelegate, PHVoicemailListProtocol>
{
    _Bool _isSwipeToDelete;
    UIBarButtonItem *_readButton;
    UIBarButtonItem *_deleteButton;
    NSArray *_trashVoicemails;
    NSArray *_blockedVoicemails;
}

+ (CDUnknownBlockType)voicemailPredicate;
- (void).cxx_destruct;
- (void)_delete:(id)arg1;
- (void)_markAsRead:(id)arg1;
- (_Bool)_selectionContainsUnreadVoicemail;
- (void)_updateGreetingButtonAllowed;
@property(copy, nonatomic) NSArray *blockedVoicemails; // @synthesize blockedVoicemails=_blockedVoicemails;
- (id)cellDetailDestructiveActionText;
@property(retain, nonatomic) UIBarButtonItem *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(readonly, copy, nonatomic) NSString *folderName;
- (void)greetingButtonTapped;
@property(readonly, nonatomic) _Bool hasContentToDisplay;
- (id)initWithNavigationController:(id)arg1 voicemailController:(id)arg2;
@property(nonatomic) _Bool isSwipeToDelete; // @synthesize isSwipeToDelete=_isSwipeToDelete;
- (id)navigationBarText;
- (void)performTableViewDestructiveActionAtIndexPath:(id)arg1;
@property(retain, nonatomic) UIBarButtonItem *readButton; // @synthesize readButton=_readButton;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSArray *trashVoicemails; // @synthesize trashVoicemails=_trashVoicemails;
- (_Bool)shouldShowBlockedSubFolder;
- (_Bool)shouldShowTrashSubFolder;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)viewControllerAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (void)voicemailGreetingViewControllerFinished:(id)arg1;
- (void)willShowVoicemails:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *messageCountText;

@end

