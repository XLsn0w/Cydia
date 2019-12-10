/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASEvent.h>
#import <DAEAS/ASParsingAcceptingTopLevelLeaves.h>
#import <DAEAS/NSCoding.h>

@class NSDate, NSNumber, NSMutableDictionary;

@interface ASEventException : ASEvent <ASParsingAcceptingTopLevelLeaves, NSCoding> {
	NSNumber *_isDeleted;	// 172 = 0xac
	NSDate *_exceptionStartTime;	// 176 = 0xb0
	NSMutableDictionary *_placeHolder;	// 180 = 0xb4
	ASEvent *_originalEvent;	// 184 = 0xb8
}
@property(retain) NSDate *exceptionStartTime;	// G=0x414f9; S=0x41531; converted property
@property(retain) NSNumber *isDeleted;	// G=0x4147d; S=0x414b5; converted property
@property(retain) ASEvent *originalEvent;	// G=0x4145d; S=0x4146d; converted property
@property(retain) id exceptionDate;	// G=0x41149; S=0x41159; converted property
+ (BOOL)notifyOfUnknownTokens;	// 0x3f5bd
+ (BOOL)frontingBasicTypes;	// 0x3f569
+ (BOOL)parsingWithSubItems;	// 0x3f515
+ (BOOL)parsingLeafNode;	// 0x3f4c1
+ (BOOL)acceptsTopLevelLeaves;	// 0x3f46d
// converted property setter: - (void)setExceptionStartTime:(id)time;	// 0x41531
// converted property getter: - (id)exceptionStartTime;	// 0x414f9
// converted property setter: - (void)setIsDeleted:(id)deleted;	// 0x414b5
// converted property getter: - (id)isDeleted;	// 0x4147d
// converted property setter: - (void)setOriginalEvent:(id)event;	// 0x4146d
// converted property getter: - (id)originalEvent;	// 0x4145d
- (BOOL)hasOccurrenceInTheFuture;	// 0x413a1
- (void)encodeWithCoder:(id)coder;	// 0x41295
- (id)initWithCoder:(id)coder;	// 0x41169
// converted property setter: - (void)setExceptionDate:(id)date;	// 0x41159
// converted property getter: - (id)exceptionDate;	// 0x41149
- (void)dealloc;	// 0x410d5
- (id)description;	// 0x41025
- (void)loadClientIDs;	// 0x40fc5
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x40c85
- (BOOL)deleteFromCalendar;	// 0x40c65
- (id)initWithExceptionStartTime:(id)exceptionStartTime;	// 0x40be9
- (id)initWithCalEvent:(void *)calEvent originalEvent:(id)event account:(id)account;	// 0x40a69
- (void)_loadAttributesFromCalEvent:(void *)calEvent withKnownExceptionDate:(id)knownExceptionDate forAccount:(id)account;	// 0x409dd
- (void)takeValuesFromParentForAccount:(id)account;	// 0x403e5
- (id)uidGeneratedIfNecessaryWithLocalEvent:(void *)localEvent;	// 0x40259
- (void)postProcessApplicationData;	// 0x400a1
- (void)saveToCalendarWithParentASEvent:(id)parentASEvent existingRecord:(void *)record intoCalendar:(void *)calendar shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x3ff59
- (BOOL)verifyExternalIds;	// 0x3fdbd
- (id)serverIdForCalFrameworkWithParentEvent:(id)parentEvent;	// 0x3fd41
- (id)_transformedExceptionStartDateForActiveSync:(id)activeSync;	// 0x3fcd9
- (id)_transformedExceptionStartDateForCalFramework:(id)calFramework;	// 0x3fc89
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x3fc0d
- (id)asParseRules;	// 0x3f6cd
- (void)setObject:(id)object forDCCPT:(int)dccpt;	// 0x3f65d
- (void)clearPlaceHolder;	// 0x3f631
- (void)applyPlaceHolder;	// 0x3f611
@end