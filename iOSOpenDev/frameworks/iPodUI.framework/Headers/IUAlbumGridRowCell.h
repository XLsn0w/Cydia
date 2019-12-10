/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>
#import <iPodUI/iPodUI-Structs.h>

@class IUAlbumGridCellContext, IUAlbumGridRowView;
@protocol IUAlbumGridRowCellDelegate;

@interface IUAlbumGridRowCell : XXUnknownSuperclass {
	CGSize _artworkSize;	// 244 = 0xf4
	IUAlbumGridRowView *_gridRowView;	// 252 = 0xfc
	float _topPadding;	// 256 = 0x100
	BOOL _dimTouchedAlbum;	// 260 = 0x104
	id<IUAlbumGridRowCellDelegate> _delegate;	// 264 = 0x108
	unsigned _delegateRespondsToNewGridImageView;	// 268 = 0x10c
	BOOL _shouldLoadLocalImagesSynchronously;	// 272 = 0x110
}
@property(assign, nonatomic) BOOL shouldLoadLocalImagesSynchronously;	// G=0x325a9; S=0x325b9; @synthesize=_shouldLoadLocalImagesSynchronously
@property(assign, nonatomic) id<IUAlbumGridRowCellDelegate> delegate;	// G=0x32599; S=0x31d4d; @synthesize=_delegate
@property(readonly, assign, nonatomic) IUAlbumGridRowView *gridRowView;	// G=0x32569; @synthesize=_gridRowView
@property(assign, nonatomic) BOOL dimTouchedAlbum;	// G=0x32549; S=0x32559; @synthesize=_dimTouchedAlbum
@property(assign, nonatomic) unsigned rowIndex;	// G=0x32391; S=0x3240d; 
@property(assign, nonatomic) float topPadding;	// G=0x32579; S=0x32589; @synthesize=_topPadding
@property(readonly, assign, nonatomic) CGSize edgeConstraints;	// G=0x3242d; 
@property(assign, nonatomic) CGSize artworkSize;	// G=0x32519; S=0x32535; @synthesize=_artworkSize
@property(retain, nonatomic) IUAlbumGridCellContext *context;	// G=0x32371; S=0x323b1; 
+ (CGSize)thumbnailSizeForContext:(id)context;	// 0x31c6d
+ (float)rowHeightForContext:(id)context;	// 0x31c21
// declared property setter: - (void)setShouldLoadLocalImagesSynchronously:(BOOL)loadLocalImagesSynchronously;	// 0x325b9
// declared property getter: - (BOOL)shouldLoadLocalImagesSynchronously;	// 0x325a9
// declared property getter: - (id)delegate;	// 0x32599
// declared property setter: - (void)setTopPadding:(float)padding;	// 0x32589
// declared property getter: - (float)topPadding;	// 0x32579
// declared property getter: - (id)gridRowView;	// 0x32569
// declared property setter: - (void)setDimTouchedAlbum:(BOOL)album;	// 0x32559
// declared property getter: - (BOOL)dimTouchedAlbum;	// 0x32549
// declared property setter: - (void)setArtworkSize:(CGSize)size;	// 0x32535
// declared property getter: - (CGSize)artworkSize;	// 0x32519
- (void)deleteAlbumAtIndex:(unsigned)index;	// 0x324c5
- (id)thumbnailImageForAlbumAtIndex:(unsigned)index;	// 0x324a5
- (CGRect)thumbnailFrameForAlbumAtIndex:(unsigned)index;	// 0x32471
// declared property getter: - (CGSize)edgeConstraints;	// 0x3242d
// declared property setter: - (void)setRowIndex:(unsigned)index;	// 0x3240d
// declared property setter: - (void)setContext:(id)context;	// 0x323b1
// declared property getter: - (unsigned)rowIndex;	// 0x32391
// declared property getter: - (id)context;	// 0x32371
- (void)prepareForReuse;	// 0x32311
- (void)_longPressed:(id)pressed;	// 0x321bd
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32101
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32045
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x31f89
- (void)setEditing:(BOOL)editing;	// 0x31f25
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x31ef5
- (void)setBackgroundColor:(id)color;	// 0x31ead
- (void)setFrame:(CGRect)frame;	// 0x31d95
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31d4d
- (id)newGridImageView;	// 0x31d11
- (void)setTitlesHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x31cf1
- (void)unhideAlbums;	// 0x31cd1
- (void)setAlbumHidden:(BOOL)hidden atIndex:(unsigned)index;	// 0x31cb1
- (void)refreshImages;	// 0x31c91
- (void)dealloc;	// 0x31bb9
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x31a01
@end