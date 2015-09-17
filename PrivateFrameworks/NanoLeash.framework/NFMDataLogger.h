/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
 */

@interface NFMDataLogger : NSObject {
    NSOperationQueue *_accelerationQueue;
    NSOperationQueue *_activityQueue;
    BOOL _recordingTelemetry;
}

@property (nonatomic, retain) NSOperationQueue *accelerationQueue;
@property (nonatomic, retain) NSOperationQueue *activityQueue;
@property (nonatomic) BOOL recordingTelemetry;

+ (id)sharedLogger;

- (void).cxx_destruct;
- (id)accelerationQueue;
- (id)activityQueue;
- (void)beginRecordingTelemetry;
- (void)endRecordingTelemetry;
- (void)recordLeashBroke;
- (void)recordLeashed;
- (void)recordRSSIStrength:(float)arg1;
- (void)recordRequestedUserResponse;
- (void)recordUserResponse:(int)arg1;
- (BOOL)recordingTelemetry;
- (void)setAccelerationQueue:(id)arg1;
- (void)setActivityQueue:(id)arg1;
- (void)setRecordingTelemetry:(BOOL)arg1;

@end