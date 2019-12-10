/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface ICEResultQuery : XXUnknownSuperclass {
@private
	int callID;	// 4 = 0x4
	tagCONNRESULT *result;	// 8 = 0x8
	BOOL isQueryAnswered;	// 12 = 0xc
}
@property(assign) int callID;	// G=0x1f711; S=0x1f721; @synthesize
@property(assign) tagCONNRESULT *result;	// G=0x1f701; S=0x1f7d1; @synthesize
@property(assign) BOOL isQueryAnswered;	// G=0x1f6e1; S=0x1f6f1; @synthesize
- (id)initWithResult:(tagCONNRESULT *)result;	// 0x1f82d
- (id)initWithCallID:(int)callID;	// 0x1f731
// declared property setter: - (void)setResult:(tagCONNRESULT *)result;	// 0x1f7d1
- (void)dealloc;	// 0x1f791
// declared property getter: - (BOOL)isQueryAnswered;	// 0x1f6e1
// declared property setter: - (void)setIsQueryAnswered:(BOOL)answered;	// 0x1f6f1
// declared property getter: - (tagCONNRESULT *)result;	// 0x1f701
// declared property getter: - (int)callID;	// 0x1f711
// declared property setter: - (void)setCallID:(int)anId;	// 0x1f721
@end