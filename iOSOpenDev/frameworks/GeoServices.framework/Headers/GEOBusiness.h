/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSMutableArray;

@interface GEOBusiness : PBCodable {
	BOOL _hasUID;	// 4 = 0x4
	long long _uID;	// 8 = 0x8
	BOOL _hasVersion;	// 16 = 0x10
	int _version;	// 20 = 0x14
	NSString *_name;	// 24 = 0x18
	NSString *_notice;	// 28 = 0x1c
	NSString *_phoneticName;	// 32 = 0x20
	NSString *_phoneticNotice;	// 36 = 0x24
	NSString *_telephone;	// 40 = 0x28
	NSString *_uRL;	// 44 = 0x2c
	BOOL _hasIsUnverified;	// 48 = 0x30
	BOOL _isUnverified;	// 49 = 0x31
	BOOL _hasIsClosed;	// 50 = 0x32
	BOOL _isClosed;	// 51 = 0x33
	NSString *_mapsURL;	// 52 = 0x34
	NSMutableArray *_ratings;	// 56 = 0x38
	NSMutableArray *_categorys;	// 60 = 0x3c
	NSMutableArray *_sources;	// 64 = 0x40
	NSMutableArray *_starRatings;	// 68 = 0x44
}
@property(retain, nonatomic) NSMutableArray *starRatings;	// G=0x124b9; S=0x124c9; @synthesize=_starRatings
@property(retain, nonatomic) NSMutableArray *sources;	// G=0x12485; S=0x12495; @synthesize=_sources
@property(retain, nonatomic) NSMutableArray *categorys;	// G=0x12451; S=0x12461; @synthesize=_categorys
@property(retain, nonatomic) NSMutableArray *ratings;	// G=0x1241d; S=0x1242d; @synthesize=_ratings
@property(retain, nonatomic) NSString *mapsURL;	// G=0x123e9; S=0x123f9; @synthesize=_mapsURL
@property(readonly, assign, nonatomic) BOOL hasMapsURL;	// G=0x11019; 
@property(assign, nonatomic) BOOL isClosed;	// G=0x123d9; S=0x10ff5; @synthesize=_isClosed
@property(assign, nonatomic) BOOL hasIsClosed;	// G=0x123b9; S=0x123c9; @synthesize=_hasIsClosed
@property(assign, nonatomic) BOOL isUnverified;	// G=0x123a9; S=0x10fd1; @synthesize=_isUnverified
@property(assign, nonatomic) BOOL hasIsUnverified;	// G=0x12389; S=0x12399; @synthesize=_hasIsUnverified
@property(retain, nonatomic) NSString *uRL;	// G=0x12355; S=0x12365; @synthesize=_uRL
@property(readonly, assign, nonatomic) BOOL hasURL;	// G=0x10fb9; 
@property(retain, nonatomic) NSString *telephone;	// G=0x12321; S=0x12331; @synthesize=_telephone
@property(readonly, assign, nonatomic) BOOL hasTelephone;	// G=0x10fa1; 
@property(retain, nonatomic) NSString *phoneticNotice;	// G=0x122ed; S=0x122fd; @synthesize=_phoneticNotice
@property(readonly, assign, nonatomic) BOOL hasPhoneticNotice;	// G=0x10f89; 
@property(retain, nonatomic) NSString *phoneticName;	// G=0x122b9; S=0x122c9; @synthesize=_phoneticName
@property(readonly, assign, nonatomic) BOOL hasPhoneticName;	// G=0x10f71; 
@property(retain, nonatomic) NSString *notice;	// G=0x12285; S=0x12295; @synthesize=_notice
@property(readonly, assign, nonatomic) BOOL hasNotice;	// G=0x10f59; 
@property(retain, nonatomic) NSString *name;	// G=0x12251; S=0x12261; @synthesize=_name
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x10f41; 
@property(assign, nonatomic) int version;	// G=0x12241; S=0x10f1d; @synthesize=_version
@property(assign, nonatomic) BOOL hasVersion;	// G=0x12221; S=0x12231; @synthesize=_hasVersion
@property(assign, nonatomic) long long uID;	// G=0x12209; S=0x10ef1; @synthesize=_uID
@property(assign, nonatomic) BOOL hasUID;	// G=0x121e9; S=0x121f9; @synthesize=_hasUID
// declared property setter: - (void)setStarRatings:(id)ratings;	// 0x124c9
// declared property getter: - (id)starRatings;	// 0x124b9
// declared property setter: - (void)setSources:(id)sources;	// 0x12495
// declared property getter: - (id)sources;	// 0x12485
// declared property setter: - (void)setCategorys:(id)categorys;	// 0x12461
// declared property getter: - (id)categorys;	// 0x12451
// declared property setter: - (void)setRatings:(id)ratings;	// 0x1242d
// declared property getter: - (id)ratings;	// 0x1241d
// declared property setter: - (void)setMapsURL:(id)url;	// 0x123f9
// declared property getter: - (id)mapsURL;	// 0x123e9
// declared property getter: - (BOOL)isClosed;	// 0x123d9
// declared property setter: - (void)setHasIsClosed:(BOOL)closed;	// 0x123c9
// declared property getter: - (BOOL)hasIsClosed;	// 0x123b9
// declared property getter: - (BOOL)isUnverified;	// 0x123a9
// declared property setter: - (void)setHasIsUnverified:(BOOL)unverified;	// 0x12399
// declared property getter: - (BOOL)hasIsUnverified;	// 0x12389
// declared property setter: - (void)setURL:(id)url;	// 0x12365
// declared property getter: - (id)uRL;	// 0x12355
// declared property setter: - (void)setTelephone:(id)telephone;	// 0x12331
// declared property getter: - (id)telephone;	// 0x12321
// declared property setter: - (void)setPhoneticNotice:(id)notice;	// 0x122fd
// declared property getter: - (id)phoneticNotice;	// 0x122ed
// declared property setter: - (void)setPhoneticName:(id)name;	// 0x122c9
// declared property getter: - (id)phoneticName;	// 0x122b9
// declared property setter: - (void)setNotice:(id)notice;	// 0x12295
// declared property getter: - (id)notice;	// 0x12285
// declared property setter: - (void)setName:(id)name;	// 0x12261
// declared property getter: - (id)name;	// 0x12251
// declared property getter: - (int)version;	// 0x12241
// declared property setter: - (void)setHasVersion:(BOOL)version;	// 0x12231
// declared property getter: - (BOOL)hasVersion;	// 0x12221
// declared property getter: - (long long)uID;	// 0x12209
// declared property setter: - (void)setHasUID:(BOOL)uid;	// 0x121f9
// declared property getter: - (BOOL)hasUID;	// 0x121e9
- (void)writeTo:(id)to;	// 0x11cdd
- (BOOL)readFrom:(id)from;	// 0x11901
- (id)dictionaryRepresentation;	// 0x11331
- (id)description;	// 0x112c1
- (id)starRatingAtIndex:(unsigned)index;	// 0x112a1
- (unsigned)starRatingsCount;	// 0x11281
- (void)addStarRating:(id)rating;	// 0x1121d
- (id)sourceAtIndex:(unsigned)index;	// 0x111fd
- (unsigned)sourcesCount;	// 0x111dd
- (void)addSource:(id)source;	// 0x11179
- (id)categoryAtIndex:(unsigned)index;	// 0x11159
- (unsigned)categorysCount;	// 0x11139
- (void)addCategory:(id)category;	// 0x110d5
- (id)ratingAtIndex:(unsigned)index;	// 0x110b5
- (unsigned)ratingsCount;	// 0x11095
- (void)addRating:(id)rating;	// 0x11031
// declared property getter: - (BOOL)hasMapsURL;	// 0x11019
// declared property setter: - (void)setIsClosed:(BOOL)closed;	// 0x10ff5
// declared property setter: - (void)setIsUnverified:(BOOL)unverified;	// 0x10fd1
// declared property getter: - (BOOL)hasURL;	// 0x10fb9
// declared property getter: - (BOOL)hasTelephone;	// 0x10fa1
// declared property getter: - (BOOL)hasPhoneticNotice;	// 0x10f89
// declared property getter: - (BOOL)hasPhoneticName;	// 0x10f71
// declared property getter: - (BOOL)hasNotice;	// 0x10f59
// declared property getter: - (BOOL)hasName;	// 0x10f41
// declared property setter: - (void)setVersion:(int)version;	// 0x10f1d
// declared property setter: - (void)setUID:(long long)uid;	// 0x10ef1
- (void)dealloc;	// 0x10de5
@end
