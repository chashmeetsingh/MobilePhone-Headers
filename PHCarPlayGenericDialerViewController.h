//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHCarPlayGenericViewController.h"

@class AVExternalDevice, DialerController, PHCarPlayNoContentBannerView;

@interface PHCarPlayGenericDialerViewController : PHCarPlayGenericViewController
{
    _Bool _limitedSoftPhoneKeypad;
    _Bool _handlingKeypadPress;
    DialerController *_dialerController;
    long long _currentHighlightedControlIndex;
    PHCarPlayNoContentBannerView *_noContentBannerView;
    AVExternalDevice *_carPlayExternalDevice;
}

- (void).cxx_destruct;
@property(retain) AVExternalDevice *carPlayExternalDevice; // @synthesize carPlayExternalDevice=_carPlayExternalDevice;
@property long long currentHighlightedControlIndex; // @synthesize currentHighlightedControlIndex=_currentHighlightedControlIndex;
@property(retain) DialerController *dialerController; // @synthesize dialerController=_dialerController;
@property(nonatomic) _Bool handlingKeypadPress; // @synthesize handlingKeypadPress=_handlingKeypadPress;
@property(nonatomic) _Bool limitedSoftPhoneKeypad; // @synthesize limitedSoftPhoneKeypad=_limitedSoftPhoneKeypad;
@property(retain) PHCarPlayNoContentBannerView *noContentBannerView; // @synthesize noContentBannerView=_noContentBannerView;

@end

