//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PhoneViewController.h"

#import "CNAvatarCardControllerDelegate.h"
#import "CNContactViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDataSourcePrefetching.h"
#import "UITableViewDelegate.h"

@class CNAvatarCardController, MPRecentsController, NSArray, NSMutableArray, NSOperationQueue, NSString, TUMetadataCache, UIBarButtonItem, UISegmentedControl, UITableView, _UIContentUnavailableView;

@interface MPRecentsTableViewController : PhoneViewController <CNAvatarCardControllerDelegate, CNContactViewControllerDelegate, UITableViewDataSourcePrefetching, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _dataSourceNeedsReload;
    _Bool _tableViewNeedsReload;
    _Bool _contentUnavailable;
    NSOperationQueue *_dataSourcePrefetchingOperationQueue;
    NSMutableArray *_recentCalls;
    TUMetadataCache *_metadataCache;
    MPRecentsController *_recentsController;
    CNAvatarCardController *_avatarCardController;
    UIBarButtonItem *_clearButtonItem;
    _UIContentUnavailableView *_contentUnavailableView;
    NSString *_contentUnavailableViewTitle;
    UISegmentedControl *_tableViewDisplayModeSegmentedControl;
    UITableView *_tableView;
    NSArray *_indexPathsForMissedCalls;
    NSArray *_indexPathsForNormalCalls;
    long long _tableViewDisplayMode;
}

+ (CDStruct_5ec447a9)badge;
+ (void)initialize;
+ (_Bool)requiresNavigationControllerContainer;
+ (id)tabBarIconName;
+ (long long)tabBarSystemItem;
+ (int)tabViewType;
- (void).cxx_destruct;
- (id)_indexPathsForCallsWithStatus:(unsigned int)arg1 includeUnknown:(_Bool)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
@property(retain, nonatomic) CNAvatarCardController *avatarCardController; // @synthesize avatarCardController=_avatarCardController;
- (long long)avatarCardController:(id)arg1 presentationResultForLocation:(struct CGPoint)arg2;
- (void)clearButtonAction:(id)arg1;
@property(retain, nonatomic) UIBarButtonItem *clearButtonItem; // @synthesize clearButtonItem=_clearButtonItem;
- (void)commonInit;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (id)contactViewControllerForRecentCall:(id)arg1;
- (id)contactViewControllerForRecentCall:(id)arg1 contact:(id)arg2;
- (void)contentSizeCategoryDidChange;
@property(nonatomic) _Bool contentUnavailable; // @synthesize contentUnavailable=_contentUnavailable;
@property(retain, nonatomic) _UIContentUnavailableView *contentUnavailableView; // @synthesize contentUnavailableView=_contentUnavailableView;
@property(copy, nonatomic) NSString *contentUnavailableViewTitle; // @synthesize contentUnavailableViewTitle=_contentUnavailableViewTitle;
@property(nonatomic) _Bool dataSourceNeedsReload; // @synthesize dataSourceNeedsReload=_dataSourceNeedsReload;
@property(readonly, nonatomic) NSOperationQueue *dataSourcePrefetchingOperationQueue; // @synthesize dataSourcePrefetchingOperationQueue=_dataSourcePrefetchingOperationQueue;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)handlePHRecentsControllerRecentCallsDidChangeNotification:(id)arg1;
- (void)handlePHRecentsControllerUnreadCallCountDidChangeNotification:(id)arg1;
@property(retain, nonatomic) NSArray *indexPathsForMissedCalls; // @synthesize indexPathsForMissedCalls=_indexPathsForMissedCalls;
@property(retain, nonatomic) NSArray *indexPathsForNormalCalls; // @synthesize indexPathsForNormalCalls=_indexPathsForNormalCalls;
- (id)indexPathsForRecentCalls;
- (id)init;
- (void)loadView;
- (void)makeUIForDefaultPNG;
@property(retain, nonatomic) TUMetadataCache *metadataCache; // @synthesize metadataCache=_metadataCache;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)phoneApplicationDidChangeTabBarSelection:(id)arg1;
- (id)presentingViewControllerForAvatarCardController:(id)arg1;
- (id)recentCallAtTableViewIndex:(long long)arg1;
@property(retain, nonatomic) NSMutableArray *recentCalls; // @synthesize recentCalls=_recentCalls;
@property(readonly, nonatomic) MPRecentsController *recentsController; // @synthesize recentsController=_recentsController;
- (void)refreshTabBarItemBadge;
- (void)refreshView;
- (void)reloadDataSource;
- (void)reloadTableView;
- (void)removeAllRecentCalls;
- (void)removeRecentCallsAtIndexPaths:(id)arg1;
- (long long)rowCountForCurrentTableMode;
- (void)savePreferences;
- (void)selectedSegmentDidChangeForSender:(id)arg1;
- (void)setContentUnavailable:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setNavigationItemsForEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long tableViewDisplayMode; // @synthesize tableViewDisplayMode=_tableViewDisplayMode;
@property(retain, nonatomic) UISegmentedControl *tableViewDisplayModeSegmentedControl; // @synthesize tableViewDisplayModeSegmentedControl=_tableViewDisplayModeSegmentedControl;
@property(nonatomic) _Bool tableViewNeedsReload; // @synthesize tableViewNeedsReload=_tableViewNeedsReload;
- (_Bool)shouldSnapshot;
- (void)showRecentCallDetailsViewControllerForRecentCall:(id)arg1 animated:(_Bool)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 cancelPrefetchingForRowsAtIndexPaths:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
