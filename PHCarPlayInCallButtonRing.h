//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface PHCarPlayInCallButtonRing : UIView
{
    _Bool _dimmed;
    _Bool _selected;
    _Bool _highlighted;
    _Bool _toggledOn;
    UIColor *_fillColor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool dimmed; // @synthesize dimmed=_dimmed;
- (void)drawRect:(struct CGRect)arg1;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (struct CGSize)intrinsicContentSize;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool toggledOn; // @synthesize toggledOn=_toggledOn;

@end

