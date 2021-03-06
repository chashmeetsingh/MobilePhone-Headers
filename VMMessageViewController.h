//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VMViewController.h"

@class CNContact, CNContactFormatter, CNContactStore, NSDateFormatter, VMMessageHeaderView, VMMessageView, VMPlayerControlsViewController, VMVoicemail, VMVoicemailManager;

@interface VMMessageViewController : VMViewController
{
    VMVoicemail *_voicemailMessage;
    VMVoicemailManager *_voicemailManager;
    CNContact *_contact;
    CNContactFormatter *_contactFormatter;
    CNContactStore *_contactStore;
    NSDateFormatter *_dateFormatter;
    VMPlayerControlsViewController *_playerControlsViewController;
    VMMessageHeaderView *_headerView;
    VMMessageView *_messageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (void)dealloc;
- (void)handleContactStoreDidChangeNotification:(id)arg1;
- (void)handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)handleCurrentLocaleDidChangeNotification:(id)arg1;
- (void)handleSystemTimeZoneDidChangeNotification:(id)arg1;
- (void)handleVoicemailManagerVoicemailsDidChangeNotification:(id)arg1;
@property(retain, nonatomic) VMMessageHeaderView *headerView; // @synthesize headerView=_headerView;
- (id)initWithContactStore:(id)arg1;
- (id)initWithManager:(id)arg1;
- (id)labeledValueForPhoneNumber:(id)arg1;
- (void)loadView;
@property(retain, nonatomic) VMMessageView *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) VMPlayerControlsViewController *playerControlsViewController; // @synthesize playerControlsViewController=_playerControlsViewController;
- (void)reloadData;
@property(retain, nonatomic) VMVoicemailManager *voicemailManager; // @synthesize voicemailManager=_voicemailManager;
@property(retain, nonatomic) VMVoicemail *voicemailMessage; // @synthesize voicemailMessage=_voicemailMessage;
- (void)viewDidLoad;

@end

