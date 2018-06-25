#ifndef SLAB_H
#define SLAB_H

#include <cmath>

#define PAGE_SIZE_BYTES 1024 * 1024

#define SLAB_CLASS_SCALE 1.25

#define SLAB_CLASS_1_CHUNK_SIZE 128
#define SLAB_CLASS_CHUNK_SIZE(x) \
	(SLAB_FIRST_CHUNK_SIZE * \
	 pow(SLAB_CLASS_SCALE, (x) - 1));

#define SLAB_CLASS_CHUNK_COUNT(x) (PAGE_SIZE_BYTES / SLAB_CLASS_CHUNK_SIZE(x))

#endif