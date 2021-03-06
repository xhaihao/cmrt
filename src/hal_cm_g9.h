/*
 * Copyright � 2014 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sub license, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.
 * IN NO EVENT SHALL PRECISION INSIGHT AND/OR ITS SUPPLIERS BE LIABLE FOR
 * ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * Authors:
 *     Lina Sun<lina.sun@intel.com>
 *     Wei Lin<wei.w.lin@intel.com>
 *     Yuting Yang<yuting.yang@intel.com>
 */

#ifndef __GENHW_CM_G9__
#define __GENHW_CM_G9__

#include "gen_hw.h"
#include "os_interface.h"
#include "hw_interface.h"

GENOS_STATUS HalCm_SubmitCommands_g9(PCM_HAL_STATE pState,
				     PGENHW_BATCH_BUFFER pBatchBuffer,
				     INT iTaskId,
				     PCM_HAL_KERNEL_PARAM * pKernels,
				     PVOID * PPCmdBuffer);

GENOS_STATUS HalCm_HwSetSurfaceMemoryObjectControl_g9(PCM_HAL_STATE pState,
						      WORD wMemObjCtl,
						      PGENHW_SURFACE_STATE_PARAMS
						      pParams);

GENOS_STATUS HalCm_GetUserDefinedThreadCountPerThreadGroup_g9(PCM_HAL_STATE
							      pState,
							      UINT *
							      pThreadsPerThreadGroup);

#endif
