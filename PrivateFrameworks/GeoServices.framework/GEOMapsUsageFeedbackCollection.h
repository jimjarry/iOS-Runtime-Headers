/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPlaceActionDetails;

@interface GEOMapsUsageFeedbackCollection : PBCodable  {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionID;
    double _sessionRelativeTimestamp;
    int _actionType;
    GEOPlaceActionDetails *_placeActionDetails;
}

@property struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property int actionType;
@property double sessionRelativeTimestamp;
@property(readonly) BOOL hasPlaceActionDetails;
@property(retain) GEOPlaceActionDetails * placeActionDetails;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (int)actionType;
- (void)setActionType:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)placeActionDetails;
- (BOOL)hasPlaceActionDetails;
- (void)setSessionRelativeTimestamp:(double)arg1;
- (double)sessionRelativeTimestamp;
- (void)setPlaceActionDetails:(id)arg1;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (id)dictionaryRepresentation;

@end