/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/iPodUI-Structs.h>
#import <iPodUI/MPImageRequestDelegate.h>
#import <iPodUI/XXUnknownSuperclass.h>

@class NSMutableSet, UIView, IUiPadVideoPartTableViewCellContentView, UIImageView, UIImage, MPImageCacheRequest, MPImageCache;

@interface IUiPadVideoPartTableViewCell : XXUnknownSuperclass <MPImageRequestDelegate> {
	IUiPadVideoPartTableViewCellContentView *_videoChapterContentView;	// 244 = 0xf4
	MPImageCache *_imageCache;	// 248 = 0xf8
	NSMutableSet *_imageRequests;	// 252 = 0xfc
	UIView *_topBevel;	// 256 = 0x100
	UIView *_bottomBevel;	// 260 = 0x104
	UIImageView *_videoImageView;	// 264 = 0x108
}
@property(readonly, assign, nonatomic) MPImageCacheRequest *videoImageRequest;	// G=0x37e41; 
@property(assign, nonatomic) BOOL drawAsDisabled;	// G=0x37f11; S=0x37f35; @dynamic
@property(retain, nonatomic) UIImage *videoImage;	// G=0x37de1; S=0x37e01; 
@property(assign, nonatomic) MPImageCache *imageCache;	// G=0x38a3d; S=0x38a4d; @synthesize=_imageCache
@property(readonly, assign, nonatomic) IUiPadVideoPartTableViewCellContentView *videoChapterContentView;	// G=0x38a5d; @synthesize=_videoChapterContentView
@property(assign) float alpha;	// G=0x380e1; S=0x38101; converted property
+ (CGSize)videoImageSize;	// 0x37dc5
+ (Class)contentViewClass;	// 0x37da9
// declared property getter: - (id)videoChapterContentView;	// 0x38a5d
// declared property setter: - (void)setImageCache:(id)cache;	// 0x38a4d
// declared property getter: - (id)imageCache;	// 0x38a3d
- (void)_createVideoImageView;	// 0x38921
- (id)_imageForImageRequest:(id)imageRequest;	// 0x38799
- (void)imageRequest:(id)request loadedImage:(id)image;	// 0x386e1
- (void)imageRequest:(id)request failedWithError:(id)error;	// 0x386a1
- (void)prepareForReuse;	// 0x3865d
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x38525
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x383ed
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x38185
// converted property setter: - (void)setAlpha:(float)alpha;	// 0x38101
// converted property getter: - (float)alpha;	// 0x380e1
- (void)dealloc;	// 0x37f71
// declared property setter: - (void)setDrawAsDisabled:(BOOL)disabled;	// 0x37f35
// declared property getter: - (BOOL)drawAsDisabled;	// 0x37f11
- (BOOL)imageRequestIsValid:(id)valid;	// 0x37f0d
- (void)updateContentView;	// 0x37e45
// declared property getter: - (id)videoImageRequest;	// 0x37e41
// declared property setter: - (void)setVideoImage:(id)image;	// 0x37e01
// declared property getter: - (id)videoImage;	// 0x37de1
@end