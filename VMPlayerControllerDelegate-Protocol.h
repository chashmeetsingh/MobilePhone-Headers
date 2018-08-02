//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VMPlayerController;

@protocol VMPlayerControllerDelegate <NSObject>

@optional
- (void)playerController:(VMPlayerController *)arg1 didChangeToCurrentTime:(float)arg2;
- (void)playerController:(VMPlayerController *)arg1 didChangeToDuration:(double)arg2;
- (void)playerController:(VMPlayerController *)arg1 didChangeToRate:(float)arg2;
- (void)playerController:(VMPlayerController *)arg1 didChangeToStatus:(long long)arg2;
- (void)playerController:(VMPlayerController *)arg1 didChangeToTimeControlStatus:(long long)arg2;
- (void)playerController:(VMPlayerController *)arg1 didSeekToTime:(float)arg2;
- (void)playerController:(VMPlayerController *)arg1 willChangeToDuration:(double)arg2;
- (void)playerController:(VMPlayerController *)arg1 willChangeToRate:(float)arg2;
- (void)playerController:(VMPlayerController *)arg1 willChangeToStatus:(long long)arg2;
- (void)playerController:(VMPlayerController *)arg1 willChangeToTimeControlStatus:(long long)arg2;
- (void)playerController:(VMPlayerController *)arg1 willSeekToTime:(float)arg2;
- (void)playerControllerDidReset:(VMPlayerController *)arg1;
@end

