//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHDoubleLineTableViewCell.h"

@class CNAvatarViewController, NSLayoutConstraint, NSString, UIImageView, UILayoutGuide;

@interface PHContactTableViewCell : PHDoubleLineTableViewCell
{
    NSString *_actionType;
    CNAvatarViewController *_avatarViewController;
    UILayoutGuide *_avatarLayoutGuide;
    UIImageView *_subtitleImageView;
    NSLayoutConstraint *_avatarLayoutGuideCenterYAnchorLayoutConstraint;
    NSLayoutConstraint *_avatarLayoutGuideHeightAnchorLayoutConstraint;
    NSLayoutConstraint *_avatarLayoutGuideLeadingAnchorLayoutConstraint;
    NSLayoutConstraint *_avatarLayoutGuideWidthAnchorLayoutConstraint;
    NSLayoutConstraint *_subtitleImageViewCenterYAnchorLayoutConstraint;
    NSLayoutConstraint *_subtitleImageViewHeightAnchorLayoutConstraint;
    NSLayoutConstraint *_subtitleImageViewLeadingAnchorLayoutConstraint;
    NSLayoutConstraint *_subtitleImageViewWidthAnchorLayoutConstraint;
}

+ (double)avatarLayoutGuideLeadingAnchorLayoutConstraintConstantForContentCategorySize:(id)arg1;
+ (double)avatarLayoutGuideWidthAnchorLayoutConstraintConstant:(id)arg1;
+ (id)imageForActionType:(id)arg1;
+ (struct UIEdgeInsets)separatorInsetForContentSizeCategory:(id)arg1;
+ (double)titleLabelLeadingAnchorLayoutConstraintConstantForContentCategorySize:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) UILayoutGuide *avatarLayoutGuide; // @synthesize avatarLayoutGuide=_avatarLayoutGuide;
@property(retain, nonatomic) NSLayoutConstraint *avatarLayoutGuideCenterYAnchorLayoutConstraint; // @synthesize avatarLayoutGuideCenterYAnchorLayoutConstraint=_avatarLayoutGuideCenterYAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *avatarLayoutGuideHeightAnchorLayoutConstraint; // @synthesize avatarLayoutGuideHeightAnchorLayoutConstraint=_avatarLayoutGuideHeightAnchorLayoutConstraint;
@property(readonly, nonatomic) double avatarLayoutGuideHeightAnchorLayoutConstraintConstant;
@property(retain, nonatomic) NSLayoutConstraint *avatarLayoutGuideLeadingAnchorLayoutConstraint; // @synthesize avatarLayoutGuideLeadingAnchorLayoutConstraint=_avatarLayoutGuideLeadingAnchorLayoutConstraint;
@property(readonly, nonatomic) double avatarLayoutGuideLeadingAnchorLayoutConstraintConstant;
@property(retain, nonatomic) NSLayoutConstraint *avatarLayoutGuideWidthAnchorLayoutConstraint; // @synthesize avatarLayoutGuideWidthAnchorLayoutConstraint=_avatarLayoutGuideWidthAnchorLayoutConstraint;
@property(readonly, nonatomic) double avatarLayoutGuideWidthAnchorLayoutConstraintConstant;
@property(retain, nonatomic) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
- (void)commonInit;
- (void)layoutSubviews;
- (void)loadConstraints;
- (void)loadContentView;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) NSLayoutConstraint *subtitleImageViewCenterYAnchorLayoutConstraint; // @synthesize subtitleImageViewCenterYAnchorLayoutConstraint=_subtitleImageViewCenterYAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleImageViewHeightAnchorLayoutConstraint; // @synthesize subtitleImageViewHeightAnchorLayoutConstraint=_subtitleImageViewHeightAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleImageViewLeadingAnchorLayoutConstraint; // @synthesize subtitleImageViewLeadingAnchorLayoutConstraint=_subtitleImageViewLeadingAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleImageViewWidthAnchorLayoutConstraint; // @synthesize subtitleImageViewWidthAnchorLayoutConstraint=_subtitleImageViewWidthAnchorLayoutConstraint;
@property(readonly, nonatomic) UIImageView *subtitleImageView; // @synthesize subtitleImageView=_subtitleImageView;
- (double)subtitleLabelLeadingLayoutConstraintConstant;
- (void)unloadConstraints;
- (void)updateConstraintsConstants;

@end

