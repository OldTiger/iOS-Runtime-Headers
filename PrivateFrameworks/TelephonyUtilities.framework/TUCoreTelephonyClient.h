/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCoreTelephonyClient : NSObject {
    CoreTelephonyClient * _client;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) CoreTelephonyClient *client;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)client;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (bool)isEmergencyNumberForDigits:(id)arg1 subscription:(id)arg2 error:(id*)arg3;
- (bool)isEmergencyNumberForDigits:(id)arg1 subscriptionUUID:(id)arg2 error:(id*)arg3;
- (bool)isWhitelistedEmergencyNumberForDigits:(id)arg1 subscription:(id)arg2 error:(id*)arg3;
- (bool)isWhitelistedEmergencyNumberForDigits:(id)arg1 subscriptionUUID:(id)arg2 error:(id*)arg3;
- (id)queue;
- (id)subscriptionContextForSubscriptionUUID:(id)arg1;

@end
