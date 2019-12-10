/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/DOMObject.h>

@class DOMNode, NSString;

__attribute__((visibility("hidden")))
@interface DOMXPathResult : DOMObject {
}
@property(readonly, assign) unsigned snapshotLength;	// G=0x35800d; 
@property(readonly, assign) BOOL invalidIteratorState;	// G=0x3580d9; 
@property(readonly, retain) DOMNode *singleNodeValue;	// G=0x358195; 
@property(readonly, assign) BOOL booleanValue;	// G=0x358269; 
@property(readonly, copy) NSString *stringValue;	// G=0x358335; 
@property(readonly, assign) double numberValue;	// G=0x358491; 
@property(readonly, assign) unsigned short resultType;	// G=0x358565; 
- (void)dealloc;	// 0x357de5
- (void)finalize;	// 0x358621
// declared property getter: - (unsigned short)resultType;	// 0x358565
// declared property getter: - (double)numberValue;	// 0x358491
// declared property getter: - (id)stringValue;	// 0x358335
// declared property getter: - (BOOL)booleanValue;	// 0x358269
// declared property getter: - (id)singleNodeValue;	// 0x358195
// declared property getter: - (BOOL)invalidIteratorState;	// 0x3580d9
// declared property getter: - (unsigned)snapshotLength;	// 0x35800d
- (id)iterateNext;	// 0x357f39
- (id)snapshotItem:(unsigned)item;	// 0x357e61
@end