/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileServerProxy.h>
#import <GeoServices/XXUnknownSuperclass.h>

@class NSMutableArray, NSLock;

__attribute__((visibility("hidden")))
@interface GEOTileServerRemoteProxy : XXUnknownSuperclass <GEOTileServerProxy> {
	id _delegate;	// 4 = 0x4
	NSMutableArray *_inProgress;	// 8 = 0x8
	NSLock *_inProgressLock;	// 12 = 0xc
	dispatch_queue_s *_connQueue;	// 16 = 0x10
	xpc_connection_s *_conn;	// 20 = 0x14
	NSLock *_connLock;	// 24 = 0x18
	int _suspendCount;	// 28 = 0x1c
}
- (void)flushPendingWrites;	// 0x35395
- (void)openCacheConnection;	// 0x35189
- (void)closeCacheConnection;	// 0x35119
- (void)dataForKey:(GEOTileKey *)key asyncHandler:(id)handler;	// 0x34e9d
- (id)dataForKey:(GEOTileKey *)key;	// 0x34d05
- (void)cancelLoad:(id)load;	// 0x34b09
- (void)loadTiles:(id)tiles checkDisk:(BOOL)disk allowNetworking:(BOOL)networking bundleIdentifier:(id)identifier bundleVersion:(id)version;	// 0x347f1
- (void)setDelegate:(id)delegate;	// 0x347e1
- (void)_handleBadDataForRequest:(id)request reason:(id)reason;	// 0x34725
- (void)_handleEditionUpgrade:(void *)upgrade;	// 0x34611
- (void)_handleNetworkBegan:(void *)began;	// 0x344ed
- (void)_handleFinished:(void *)finished;	// 0x34379
- (void)_handleError:(void *)error;	// 0x342f5
- (void)_sendError:(id)error forRequest:(id)request;	// 0x3415d
- (void)_handleTile:(void *)tile;	// 0x33ea1
- (id)_requestForEvent:(void *)event acquireLock:(BOOL)lock;	// 0x33d5d
- (void)_handleEvent:(void *)event;	// 0x339b5
- (void)dealloc;	// 0x33955
- (id)init;	// 0x33845
@end