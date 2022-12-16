#pragma once

/* Below is macro-dependent helper macros
 * to provide different functionality in debug mode */
#ifdef _DEBUG // debug mode

#include <assert.h>

// assert+ functions
#define assertOrReturnFalse(_expression) assert((_expression))
#define assertOrAbort(_expression) assert((_expression))
#define assertOrReturn(_expression) assert((_expression))
#define assertOrReturnValue(_expression, _value) assert((_expression))

#else // non-debug mode

// assert+ functions
#define assertOrReturnFalse(_expression) if (!(_expression)) return false
#define assertOrAbort(_expression) if (!(_expression)) abort()
#define assertOrReturn(_expression) if (!(_expression)) return
#define assertOrReturnValue(_expression, _value) if (!(_expression)) return _value

#endif // DEBUG