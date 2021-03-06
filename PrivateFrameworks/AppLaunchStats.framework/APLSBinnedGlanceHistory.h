/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
 */

@interface APLSBinnedGlanceHistory : NSObject {
    NSMutableDictionary * _dailyLaunches;
    NSArray * _recentLaunches;
    NSMutableDictionary * _weeklyLaunches;
}

@property (retain) NSMutableDictionary *dailyLaunches;
@property (retain) NSArray *recentLaunches;
@property (retain) NSMutableDictionary *weeklyLaunches;

- (void).cxx_destruct;
- (id)dailyLaunches;
- (id)description;
- (id)init;
- (void)populateWithHistory:(id)arg1;
- (id)recentLaunches;
- (void)relativeLaunchLikelihoodsForNumWindows:(unsigned int)arg1 ofSize:(double)arg2 repeatingEvery:(double)arg3 startingAt:(id)arg4 withData:(id)arg5 updating:(id)arg6;
- (void)setDailyLaunches:(id)arg1;
- (void)setRecentLaunches:(id)arg1;
- (void)setWeeklyLaunches:(id)arg1;
- (id)weeklyLaunches;

@end
