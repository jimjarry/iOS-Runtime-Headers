/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReference, NSObject<OS_dispatch_queue>;

@interface AVAssetResourceLoadingDataRequestInternal : NSObject {
    BOOL canSupplyIncrementalDataImmediately;
    long long currentOffset;
    NSObject<OS_dispatch_queue> *dataResponseQueue;
    int requestedLength;
    long long requestedOffset;
    AVWeakReference *weakReferenceToLoadingRequest;
}

@end
