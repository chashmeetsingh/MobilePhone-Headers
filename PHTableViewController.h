//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "PHTableViewDataSourcePrefetching.h"
#import "PHTableViewDelegate.h"

@class NSCache, NSOperationQueue, NSString, _UIContentUnavailableView;

@interface PHTableViewController : UITableViewController <PHTableViewDataSourcePrefetching, PHTableViewDelegate>
{
    _Bool _needsReloadData;
    _Bool _reloadingData;
    _Bool _contentUnavailable;
    NSOperationQueue *_dataSourcePrefetchingOperationQueue;
    _UIContentUnavailableView *_contentUnavailableView;
    NSString *_contentUnavailableViewTitle;
    NSCache *_rowHeightCache;
    long long _whitePointAdaptivityStyle;
}

- (void).cxx_destruct;
- (void)commonInit;
@property(nonatomic) _Bool contentUnavailable; // @synthesize contentUnavailable=_contentUnavailable;
@property(retain, nonatomic) _UIContentUnavailableView *contentUnavailableView; // @synthesize contentUnavailableView=_contentUnavailableView;
@property(copy, nonatomic) NSString *contentUnavailableViewTitle; // @synthesize contentUnavailableViewTitle=_contentUnavailableViewTitle;
@property(readonly, nonatomic) NSOperationQueue *dataSourcePrefetchingOperationQueue; // @synthesize dataSourcePrefetchingOperationQueue=_dataSourcePrefetchingOperationQueue;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)handleUIApplicationDidBecomeActiveNotification:(id)arg1;
- (void)handleUIApplicationDidEnterBackgroundNotification:(id)arg1;
- (void)handleUIApplicationWillEnterForegroundNotification:(id)arg1;
- (void)handleUIContentSizeCategoryDidChangeNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
@property(readonly, nonatomic, getter=isForceTouchAvailable) _Bool forceTouchAvailable;
@property(nonatomic, getter=isReloadingData) _Bool reloadingData; // @synthesize reloadingData=_reloadingData;
- (void)makeUIForDefaultPNG;
@property(nonatomic) _Bool needsReloadData; // @synthesize needsReloadData=_needsReloadData;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)reloadDataIfNeeded;
@property(retain, nonatomic) NSCache *rowHeightCache; // @synthesize rowHeightCache=_rowHeightCache;
- (void)setContentUnavailable:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) long long whitePointAdaptivityStyle; // @synthesize whitePointAdaptivityStyle=_whitePointAdaptivityStyle;
- (void)tableView:(id)arg1 cancelPrefetchingForRowsAtIndexPaths:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 performReloadRowsAtIndexPaths:(id)arg2 withRowAnimation:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableViewCanPerformReloadData:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
