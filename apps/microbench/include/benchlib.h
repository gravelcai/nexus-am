#ifndef __BENCHLIB_H__
#define __BENCHLIB_H__

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifdef __cplusplus
extern "C" {
#endif

void klib_init();

// printk
void printk(const char *fmt, ...);

// memory allocation
void* kalloc(size_t);
void kfree(void*);

#define assert(cond) \
  do { \
    if (!(cond)) { \
      printk("Assertion fail: %s:%d\n", __FILE__, __LINE__); \
      _halt(1); \
    } \
  } while (0)


#ifdef __cplusplus
}
#endif

#endif
