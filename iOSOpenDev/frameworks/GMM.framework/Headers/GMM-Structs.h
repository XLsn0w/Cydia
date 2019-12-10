/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __GEOTileKey__
#define __GEOTileKey__ 1
typedef struct _GEOTileKey {
	unsigned _field1 : 6;
	unsigned _field2 : 26;
	unsigned _field3 : 26;
	unsigned _field4 : 6;
	unsigned _field5 : 8;
	unsigned _field6 : 8;
	unsigned _field7 : 8;
	unsigned _field8 : 1;
	unsigned _field9 : 7;
	unsigned char _field10[4];
} GEOTileKey;
#endif

typedef struct Connection Connection;

typedef struct Requester {
	/*function-pointer*/ void **_field1;
	int _field2;
	Connection *_field3;
	char *_field4;
	bool _field5;
	bool _field6;
} Requester;

typedef struct Response {
	/*function-pointer*/ void **_field1;
	id _field2;
} Response;

/* iOSOpenDev: commented-out (since already defined in SDK)
typedef struct Point {
	int _field1;
	int _field2;
} Point;
*/

typedef struct InputDataStream {
	char *_field1;
	unsigned _field2;
	unsigned _field3;
	bool _field4;
	bool _field5;
} InputDataStream;

typedef struct {
	unsigned _field1 : 6;
	unsigned _field2 : 26;
	unsigned _field3 : 26;
	unsigned _field4 : 6;
} XXStruct_j8inqB;

typedef struct MapPoint {
	int _field1;
	int _field2;
	int _field3;
	int _field4;
} MapPoint;

typedef struct {
	int *list;
	unsigned count;
	unsigned size;
} XXStruct_WmZAAA;

// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __XXStruct_19EQxD__
#define __XXStruct_19EQxD__ 1
typedef struct {
	long long *list;
	unsigned count;
	unsigned size;
} XXStruct_19EQxD;
#endif

/* iOSOpenDev: commented-out (since already defined in SDK)
typedef struct _opaque_pthread_mutex_t {
	long _field1;
	BOOL _field2[40];
} opaque_pthread_mutex_t;
*/
// iOSOpenDev: added (since definition was commented-out)
// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __opaque_pthread_mutex_t__
#define __opaque_pthread_mutex_t__ 1
typedef struct _opaque_pthread_mutex_t opaque_pthread_mutex_t;
#endif

// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __sqlite3__
#define __sqlite3__ 1
typedef struct sqlite3 sqlite3;
#endif

// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __sqlite3_stmt__
#define __sqlite3_stmt__ 1
typedef struct sqlite3_stmt sqlite3_stmt;
#endif

typedef struct TileStore {
	long long _field1;
	opaque_pthread_mutex_t _field2;
	char *_field3;
	sqlite3 *_field4;
	sqlite3_stmt *_field5;
	sqlite3_stmt *_field6;
	sqlite3_stmt *_field7;
	sqlite3_stmt *_field8;
	sqlite3_stmt *_field9;
	sqlite3_stmt *_field10;
	sqlite3_stmt *_field11;
	sqlite3_stmt *_field12;
} TileStore;

// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __XXStruct_UNJ7RC__
#define __XXStruct_UNJ7RC__ 1
typedef struct {
	double _field1;
	double _field2;
} XXStruct_UNJ7RC;
#endif