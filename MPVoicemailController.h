//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContactFormatter, CNContactStore, NSArray, NSCache, NSObject<OS_dispatch_queue>, TUCallProviderManager, TUMetadataCache, VMVoicemailManager;

@interface MPVoicemailController : NSObject
{
    _Bool _setupRequired;
    TUCallProviderManager *_callProviderManager;
    CNContactStore *_contactStore;
    NSArray *_contactKeyDescriptors;
    NSArray *_messages;
    TUMetadataCache *_metadataCache;
    unsigned long long _unreadMessageCount;
    VMVoicemailManager *_voicemailManager;
    NSObject<OS_dispatch_queue> *_completionDispatchQueue;
    NSObject<OS_dispatch_queue> *_concurrentDispatchQueue;
    NSCache *_contactCache;
    NSCache *_localizedSubtitleCache;
    NSCache *_localizedTitleCache;
    CNContactFormatter *_contactFormatter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TUCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue; // @synthesize completionDispatchQueue=_completionDispatchQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *concurrentDispatchQueue; // @synthesize concurrentDispatchQueue=_concurrentDispatchQueue;
@property(readonly, nonatomic) NSCache *contactCache; // @synthesize contactCache=_contactCache;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(readonly, copy, nonatomic) NSArray *contactKeyDescriptors; // @synthesize contactKeyDescriptors=_contactKeyDescriptors;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void)dealloc;
- (void)deleteMessages:(id)arg1;
- (void)handleCNContactStoreDidChangeNotification:(id)arg1;
- (void)handleNSCurrentLocaleDidChangeNotification:(id)arg1;
- (void)handleTUMetadataCacheDidFinishUpdatingNotification:(id)arg1;
- (void)handleUIApplicationSignificantTimeChangeNotification:(id)arg1;
- (void)handleUIApplicationWillEnterForegroundNotification:(id)arg1;
- (void)handleVMVoicemailVoicemailsChangedNotification:(id)arg1;
- (id)init;
- (id)initWithManager:(id)arg1 contactStore:(id)arg2;
@property(readonly, nonatomic, getter=isSetupRequired) _Bool setupRequired; // @synthesize setupRequired=_setupRequired;
- (void)loadLocalizedTitlesForMessages:(id)arg1;
@property(readonly, nonatomic) NSCache *localizedSubtitleCache; // @synthesize localizedSubtitleCache=_localizedSubtitleCache;
- (id)localizedSubtitleForMessage:(id)arg1;
@property(readonly, nonatomic) NSCache *localizedTitleCache; // @synthesize localizedTitleCache=_localizedTitleCache;
- (id)localizedTitleForMessage:(id)arg1;
- (void)markMessagesAsRead:(id)arg1;
- (id)messageForIdentifier:(long long)arg1;
@property(copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (id)messagesPassingTest:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) TUMetadataCache *metadataCache; // @synthesize metadataCache=_metadataCache;
- (void)moveMessagesToInbox:(id)arg1;
- (id)mutableSenderContactForMessage:(id)arg1;
- (void)postMPVoicemailControllerMessagesDidChangeNotification;
- (void)postMPVoicemailControllerUnreadMessageCountDidChangeNotification;
- (id)senderContactForMessage:(id)arg1 keyDescriptors:(id)arg2;
- (id)senderContactsForMessage:(id)arg1 keyDescriptors:(id)arg2;
@property(nonatomic) unsigned long long unreadMessageCount; // @synthesize unreadMessageCount=_unreadMessageCount;
- (void)trashMessages:(id)arg1;
@property(readonly, nonatomic) VMVoicemailManager *voicemailManager; // @synthesize voicemailManager=_voicemailManager;

@end

