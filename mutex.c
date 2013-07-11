#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "mutex.h"

void lock(int mutex){
	__sync_fetch_and_add(&mutex, 1);
}

void unlock(int mutex){
	__sync_fetch_and_sub(&mutex, 1);
}