/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class <RadioPushNotificationControllerDelegate>, APSConnection, NSString;

@interface RadioPushNotificationController : NSObject <APSConnectionDelegate> {
    APSConnection *_connection;
    <RadioPushNotificationControllerDelegate> *_delegate;
    NSString *_environment;
    bool_notificationsEnabled;
    bool_pushEnabled;
}

@property(copy,readonly) NSString * debugDescription;
@property <RadioPushNotificationControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property bool notificationsEnabled;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadURLBagWithCompletionHandler:(id)arg1;
- (id)_portNameForEnvironmentName:(id)arg1;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)notificationsEnabled;
- (void)setDelegate:(id)arg1;
- (void)setNotificationsEnabled:(bool)arg1;

@end