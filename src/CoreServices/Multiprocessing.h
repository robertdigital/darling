#ifndef MULTIPROCESSING_H
#define MULTIPROCESSING_H
#include "MacTypes.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef void* MPCriticalRegionID;

Boolean _MPIsFullyInitialized();
OSStatus MPDelayUntil(AbsoluteTime* time);
unsigned long MPProcessors();

OSStatus MPCreateCriticalRegion(MPCriticalRegionID* criticalRegion);
OSStatus MPDeleteCriticalRegion(MPCriticalRegionID criticalRegion);
OSStatus MPEnterCriticalRegion(MPCriticalRegionID criticalRegion, Duration timeout);
OSStatus MPExitCriticalRegion(MPCriticalRegionID criticalRegion);

// other functions are missing...

#ifdef __cplusplus
}
#endif

#endif
