 #ifndef MUTEX_H
#define	MUTEX_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void lock(int mutex);
void unlock(int mutex);
#ifdef	__cplusplus
}
#endif

#endif	/* MUTEX_H */
