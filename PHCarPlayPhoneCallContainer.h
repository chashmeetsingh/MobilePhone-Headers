//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface PHCarPlayPhoneCallContainer : UIView
{
    _Bool _shouldMerge;
    _Bool _merging;
    id <MPCarPlayPhoneCallContainerDataSource> _dataSource;
    id <MPCarPlayPhoneCallContainerDelegate> _delegate;
    NSMutableArray *_visibleCells;
}

- (void).cxx_destruct;
- (id)_reloadQueue;
- (void)addConstraintsForNewCell:(id)arg1;
- (void)addRelationForLeftOfCell:(id)arg1;
- (void)addRelationForRightOfCell:(id)arg1;
- (void)addRelationForWidthOfCell:(id)arg1;
- (void)animateLayoutOfViewWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)constraintToFillContainerWithLeftOfCell:(id)arg1;
- (id)constraintToFillContainerWithRightOfCell:(id)arg1;
- (void)createVisibleCells:(unsigned long long)arg1;
@property(nonatomic) id <MPCarPlayPhoneCallContainerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)dealloc;
@property(nonatomic) id <MPCarPlayPhoneCallContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
@property(getter=isMerging) _Bool merging; // @synthesize merging=_merging;
- (void)mergeAllCellConstraints;
- (void)mergeVisibleCells;
- (void)phoneCallViewCellTapped:(id)arg1;
- (void)reloadData;
- (void)reloadDataAnimated:(_Bool)arg1;
- (void)removeAllConstraintsForCell:(id)arg1;
- (void)removeVisibleCells:(unsigned long long)arg1;
- (void)setNeedsMerge;
@property _Bool shouldMerge; // @synthesize shouldMerge=_shouldMerge;
@property(retain) NSMutableArray *visibleCells; // @synthesize visibleCells=_visibleCells;
- (_Bool)shouldReloadCellsWithNumberOfCells:(unsigned long long)arg1;
- (void)updateAllCellConstraints;
- (void)updateCell:(id)arg1 atIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)updateLayoutAnimated:(_Bool)arg1;
- (void)updateNumberOfCellsWithNewValue:(unsigned long long)arg1 animated:(_Bool)arg2;

@end
