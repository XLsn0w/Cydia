/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, NSArray, SUStorePageViewController, NSNumber, UISegmentedControl;

@interface SUScriptSegmentedControl : SUScriptObject {
	NSArray *_segments;	// 36 = 0x24
	int _selectedIndex;	// 40 = 0x28
	int _style;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) SUStorePageViewController *storePageViewController;	// G=0x8bcf9; 
@property(readonly, assign, nonatomic) NSArray *rawSegments;	// G=0x8bce9; 
@property(readonly, assign, nonatomic) UISegmentedControl *activeSegmentedControl;	// G=0x8bc95; 
@property(retain) NSString *style;	// G=0x8ba5d; S=0x8b99d; 
@property(retain) NSNumber *selectedIndex;	// G=0x8b75d; S=0x8b8c5; 
@property(retain) id segments;	// G=0x8b709; S=0x8b7cd; 
@property(readonly, assign) NSNumber *noSegmentIndex;	// G=0x8b6e9; 
@property(readonly, assign, nonatomic) int nativeSelectedIndex;	// G=0x8b609; 
@property(readonly, assign, nonatomic) UISegmentedControl *nativeSegmentedControl;	// G=0x8b54d; 
+ (void)initialize;	// 0x8c45d
+ (id)webScriptNameForSelector:(SEL)selector;	// 0x8c3a5
+ (id)webScriptNameForKey:(const char *)key;	// 0x8c301
- (id)scriptAttributeKeys;	// 0x8c3fd
- (id)attributeKeys;	// 0x8c3ed
- (void)_setRawSegments:(id)segments;	// 0x8c289
- (int)_sectionsStyleForString:(id)string;	// 0x8c259
- (void)_reloadViewControllerPageSectionGroup;	// 0x8c1ed
- (void)_reloadSegmentedControl:(id)control withSegments:(id)segments;	// 0x8c0b1
- (id)_newSegmentsFromPageSectionGroup:(id)pageSectionGroup;	// 0x8bf85
- (id)_newPageSectionGroupWithSegments:(id)segments;	// 0x8bded
- (id)_newNativeSegmentedControl;	// 0x8bd6d
// declared property getter: - (id)storePageViewController;	// 0x8bcf9
// declared property getter: - (id)rawSegments;	// 0x8bce9
// declared property getter: - (id)activeSegmentedControl;	// 0x8bc95
- (int)_style;	// 0x8bc49
- (void)_setStyle:(int)style;	// 0x8bc09
- (void)_setSelectedIndex:(int)index;	// 0x8bbcd
- (void)_setSegments:(id)segments;	// 0x8bb59
- (int)_selectedIndex;	// 0x8bb1d
- (id)_copySegments;	// 0x8baa1
// declared property getter: - (id)style;	// 0x8ba5d
// declared property setter: - (void)setStyle:(id)style;	// 0x8b99d
// declared property setter: - (void)setSelectedIndex:(id)index;	// 0x8b8c5
// declared property setter: - (void)setSegments:(id)segments;	// 0x8b7cd
- (void)setNoSegmentIndex:(id)index;	// 0x8b7a5
// declared property getter: - (id)selectedIndex;	// 0x8b75d
// declared property getter: - (id)segments;	// 0x8b709
// declared property getter: - (id)noSegmentIndex;	// 0x8b6e9
- (id)_className;	// 0x8b6dd
- (id)makeSegmentWithTitle:(id)title userInfo:(id)info;	// 0x8b649
- (id)newPageSectionGroup;	// 0x8b619
// declared property getter: - (int)nativeSelectedIndex;	// 0x8b609
// declared property getter: - (id)nativeSegmentedControl;	// 0x8b54d
- (void)dealloc;	// 0x8b501
- (id)initWithPageSectionGroup:(id)pageSectionGroup;	// 0x8b451
- (id)init;	// 0x8b411
@end