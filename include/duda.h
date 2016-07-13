/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*  Duda I/O
 *  --------
 *  Copyright (C) 2012-2016, Eduardo Silva P. <eduardo@monkey.io>.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef DUDA_H
#define DUDA_H

#define _GNU_SOURCE

#include <mk_core.h>
#include <monkey/mk_lib.h>

#include <duda/duda_info.h>
#include <duda/duda_version.h>
#include <duda/duda_lib.h>
#include <duda/duda.h>
#include <duda/duda_router.h>
#include <duda/duda_objects.h>
#include <duda/duda_service.h>

/* Special headers for web services only */
#ifndef DUDA_LIB_CORE
#include <duda/duda_bootstrap.h>
#include <duda/duda_service_internal.h>
#endif /* !DUDA_LIB_CORE */

#endif
