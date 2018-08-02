//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayer, NSURL;

@interface VMPlayerController : NSObject
{
    _Bool _audioSessionActive;
    float _rate;
    id <VMPlayerControllerDelegate> _delegate;
    NSURL *_URL;
    unsigned long long _delay;
    long long _timeControlStatus;
    long long _status;
    double _duration;
    AVPlayer *_player;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)activateAudioSession;
@property(readonly, nonatomic) float currentTime;
- (void)deactivateAudioSession;
- (void)dealloc;
@property(nonatomic) unsigned long long delay; // @synthesize delay=_delay;
@property(nonatomic) __weak id <VMPlayerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)handleAudioSessionInterruptionNotification:(id)arg1;
- (void)handleAudioSessionMediaServicesWereLostNotification:(id)arg1;
- (void)handleAudioSessionMediaServicesWereResetNotification:(id)arg1;
- (void)handleAudioSessionRouteChangeNotification:(id)arg1;
- (void)handleDeviceProximityStateDidChangeNotificationNotification:(id)arg1;
- (void)handlePlayerItemDidPlayToEndTimeNotification:(id)arg1;
- (void)handlePlayerItemFailedToPlayToEndTimeNotification:(id)arg1;
- (id)init;
- (id)initWithPlayer:(id)arg1;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithURL:(id)arg1;
@property(nonatomic, getter=isAudioSessionActive) _Bool audioSessionActive; // @synthesize audioSessionActive=_audioSessionActive;
@property(readonly, nonatomic, getter=isPaused) _Bool paused;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pause;
- (void)play;
- (void)playURL:(id)arg1;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) float rate; // @synthesize rate=_rate;
- (void)seekToTime:(float)arg1;
- (void)setPlayerItem:(id)arg1;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long timeControlStatus; // @synthesize timeControlStatus=_timeControlStatus;
- (_Bool)shouldEnableProximityMonitoring;
- (void)stop;
- (_Bool)updateProximityMonitoring;

@end

