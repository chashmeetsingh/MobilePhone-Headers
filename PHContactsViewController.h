//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CNContactNavigationController.h"

#import "CNContactNavigationControllerDelegate.h"
#import "PhoneTabViewController.h"

@class CNContact, NSString;

@interface PHContactsViewController : CNContactNavigationController <CNContactNavigationControllerDelegate, PhoneTabViewController>
{
    _Bool _disableContactsWithoutHandles;
    _Bool _shouldFetchTelephoneNumber;
    _Bool _checkedForFacebookContacts;
    id <PHContactsControllerDelegate> _contactsControllerDelegate;
    NSString *_telephoneNumber;
}

+ (CDStruct_5ec447a9)badge;
+ (id)defaultPNGName;
+ (id)tabBarIconName;
+ (long long)tabBarSystemItem;
+ (int)tabViewType;
- (void).cxx_destruct;
- (void)_restoreState;
- (void)addNotificationObservers;
@property _Bool checkedForFacebookContacts; // @synthesize checkedForFacebookContacts=_checkedForFacebookContacts;
- (_Bool)contactNavigationController:(id)arg1 canSelectContact:(id)arg2;
- (_Bool)contactNavigationController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (_Bool)contactNavigationController:(id)arg1 shouldShowCardForContact:(id)arg2;
- (void)contactNavigationControllerDidCancel:(id)arg1;
@property(nonatomic) id <PHContactsControllerDelegate> contactsControllerDelegate; // @synthesize contactsControllerDelegate=_contactsControllerDelegate;
- (void)dealloc;
@property(nonatomic) _Bool disableContactsWithoutHandles; // @synthesize disableContactsWithoutHandles=_disableContactsWithoutHandles;
- (void)fetchPreferences;
- (void)fetchTelephoneNumber;
- (void)handleURL:(id)arg1;
- (id)initWithContactStore:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 allowsLargeTitles:(_Bool)arg2;
- (void)phoneApplicationLocaleChanged:(id)arg1;
- (void)phoneApplicationPreferencesChanged:(id)arg1;
- (void)prepareForSnapshot;
- (void)removeNotificationObservers;
@property(retain) CNContact *savedPerson;
@property(nonatomic) _Bool shouldFetchTelephoneNumber; // @synthesize shouldFetchTelephoneNumber=_shouldFetchTelephoneNumber;
@property(copy, nonatomic) NSString *telephoneNumber; // @synthesize telephoneNumber=_telephoneNumber;
@property(readonly) _Bool shouldSaveAndRestoreState;
- (_Bool)shouldSnapshot;
- (_Bool)tabBarControllerShouldSelectViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
