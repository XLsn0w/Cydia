/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */




@protocol UIMovieScrubberDataSource <NSObject>
- (void)movieScrubber:(id)scrubber requestThumbnailImageForTimestamp:(id)timestamp;
- (float)movieScrubberThumbnailAspectRatio:(id)ratio;
- (id)movieScrubber:(id)scrubber timestampsStartingAt:(id)at endingAt:(id)at3 maxCount:(int)count;
- (id)movieScrubber:(id)scrubber evenlySpacedTimestamps:(int)timestamps startingAt:(id)at endingAt:(id)at4;
- (double)movieScrubberDuration:(id)duration;
@end
