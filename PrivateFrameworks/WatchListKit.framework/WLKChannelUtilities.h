/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKChannelUtilities : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSDictionary * _channelsByBundleID;
    WLKServerConfiguration * _config;
    bool  _offLineMode;
}

@property (nonatomic, readonly, copy) NSDictionary *channelsByBundleID;
@property (nonatomic, readonly, copy) NSDictionary *channelsByID;
@property (nonatomic, readonly, copy) NSArray *orderedChannels;

+ (id)_validiTunesBundles;
+ (bool)isItunesBundleID:(id)arg1;
+ (bool)isItunesOrFirstPartyBundleID:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)_serverConfiguration;
- (id)channelForBundleID:(id)arg1;
- (id)channelForID:(id)arg1;
- (id)channelIDForBundleID:(id)arg1;
- (id)channelsByBundleID;
- (id)channelsByID;
- (id)init;
- (id)initOffline;
- (id)orderedChannels;

@end
