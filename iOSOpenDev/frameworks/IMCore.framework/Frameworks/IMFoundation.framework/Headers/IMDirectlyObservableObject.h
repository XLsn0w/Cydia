/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <IMFoundation/XXUnknownSuperclass.h>

@class NSArray;

@interface IMDirectlyObservableObject : XXUnknownSuperclass {
	NSArray *_observers;	// 4 = 0x4
}
@property(retain) NSArray *observers;	// G=0xc7a5; S=0xc7b9; @synthesize=_observers
// declared property setter: - (void)setObservers:(id)observers;	// 0xc7b9
// declared property getter: - (id)observers;	// 0xc7a5
- (void)informObserversOfNotification:(id)notification;	// 0xc721
- (void)removeObserver:(id)observer;	// 0xc6f1
- (void)addObserver:(id)observer;	// 0xc69d
- (void)_objectDidPostNotification:(id)_object;	// 0xc655
- (void)dealloc;	// 0xc611
- (id)init;	// 0xc5ad
@end