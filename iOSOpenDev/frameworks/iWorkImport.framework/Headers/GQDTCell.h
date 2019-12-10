/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <iWorkImport/XXUnknownSuperclass.h>
#import <iWorkImport/iWorkImport-Structs.h>

@class GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDTCell : XXUnknownSuperclass {
@private
	unsigned short mColumnIndex;	// 4 = 0x4
	unsigned short mRowIndex;	// 6 = 0x6
	unsigned short mColumnSpan;	// 8 = 0x8
	unsigned short mRowSpan;	// 10 = 0xa
	GQDSStyle *mStyle;	// 12 = 0xc
}
@property(retain) id cellStyle;	// G=0x13ae9; S=0x13b0d; converted property
- (void)dealloc;	// 0x13ff9
- (unsigned short)columnIndex;	// 0x13aa9
- (unsigned short)rowIndex;	// 0x13ab9
- (unsigned short)columnSpan;	// 0x13ac9
- (unsigned short)rowSpan;	// 0x13ad9
// converted property getter: - (id)cellStyle;	// 0x13ae9
// converted property setter: - (void)setCellStyle:(id)style;	// 0x13b0d
- (int)readAttributesForBaseCell:(xmlTextReader *)baseCell processor:(id)processor;	// 0x13f6d
- (int)readAttributesForBaseTabularCell:(xmlTextReader *)baseTabularCell processor:(id)processor;	// 0x13d0d
- (int)readBaseAttributesForBaseCell:(xmlTextReader *)baseCell processor:(id)processor;	// 0x13bd1
- (void)incrementColumnSpan;	// 0x13af9
@end