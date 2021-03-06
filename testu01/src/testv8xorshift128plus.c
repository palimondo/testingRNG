#include "xorshift128plus.h"

static inline void thisrng_seed(uint64_t seed) { xorshift128plus_seed(seed); }

static inline uint64_t thisrng() { return v8xorshift128plus(); }

const char *name = "v8xorshift128plus";

#include "main.h"
