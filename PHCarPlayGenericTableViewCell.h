//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView;

@interface PHCarPlayGenericTableViewCell : UITableViewCell
{
    _Bool _showsChevron;
    _Bool _hidesChevronWhenUnhighlighted;
    UIImageView *_chevronImageView;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain) UIImageView *chevronImageView; // @synthesize chevronImageView=_chevronImageView;
@property(nonatomic) _Bool hidesChevronWhenUnhighlighted; // @synthesize hidesChevronWhenUnhighlighted=_hidesChevronWhenUnhighlighted;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) _Bool showsChevron; // @synthesize showsChevron=_showsChevron;

@end

