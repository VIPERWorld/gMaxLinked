/*
 ============================================================================
 Name        : Config.h
 Author      : Rafael Gu
 Version     : 1.0
 Copyright   : GPL
 Description :
 ============================================================================
 */

#ifndef _CONFIG_H_
#define _CONFIG_H_

#include "Size.h"

namespace Config {

#ifndef GLOBAL_CONFIG
#define GLOBAL_CONFIG extern

	namespace App {

		GLOBAL_CONFIG c1_ INI_FILE[Size::INI_FILE];
		GLOBAL_CONFIG ub4_ RUN_AS_DAEMON;
		GLOBAL_CONFIG c1_ NAME[Size::NAME];
		GLOBAL_CONFIG ub4_ BASE_BUILD;
		GLOBAL_CONFIG c1_ LISTEN_IP[Size::IP_V4];
		GLOBAL_CONFIG ub2_ LISTEN_PORT;
		GLOBAL_CONFIG ub4_ EPOLL_WAIT_EVENT_NUM;
		GLOBAL_CONFIG ub4_ NODE_GROUP_NUM;
		GLOBAL_CONFIG ub4_ NODE_GROUP_SIZE;
		GLOBAL_CONFIG ub4_ TOTAL_SUPPORT_USER_NUM;
		GLOBAL_CONFIG ub4_ TOTAL_THREAD_NUM;
		GLOBAL_CONFIG ub4_ MESSAGE_MAX_NUM_IN_QUEUE;
		GLOBAL_CONFIG ub4_ THREAD_STACK_SIZE;
		GLOBAL_CONFIG ub4_ HANDSHAKE_INTERVAL;

	}

	namespace Redis {

		GLOBAL_CONFIG c1_ HOST[Size::URL];
		GLOBAL_CONFIG ub2_ PORT;
		GLOBAL_CONFIG ub4_ TIMEOUT; // Seconds

	}

#endif

	none_ initialize(const s1_ confFileName);

}

#endif // _CONFIG_H_