/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFlashlightInternal : NSObject {
    bool  available;
    struct OpaqueFigFlashlight { } * flashlight;
    float  flashlightLevel;
    struct OpaqueFigSimpleMutex { } * lock;
    bool  overheated;
    NSObject<OS_dispatch_queue> * serverReconnectQueue;
    AVWeakReference * weakReference;
}

@end
