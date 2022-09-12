/*
 * Copyright 2019-2021 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef OPENSSL_OPENSSLCONF_H
# define OPENSSL_OPENSSLCONF_H
# pragma once

# include <openssl/configuration.h>
# include <openssl/macros.h>

/* iOS app store won't allow getcontext, setcontext, makecontext */
#if defined(__APPLE__) && defined(__MACH__)
#include <TargetConditionals.h>
#if defined(TARGET_OS_IPHONE) && TARGET_OS_IPHONE
#define OPENSSL_NO_ASYNC
#endif
#endif

#endif  /* OPENSSL_OPENSSLCONF_H */
