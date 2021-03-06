/*############################################################################
  # Copyright (C) 2020 Intel Corporation
  #
  # SPDX-License-Identifier: MIT
  ############################################################################*/

#include "mfxdefs.h"

#ifndef __MFXIMPLCAPS_H__
#define __MFXIMPLCAPS_H__

#include "mfxstructures.h"

#ifdef __cplusplus
extern "C"
{
#endif

#if (MFX_VERSION >= 2000)
/*!
   @brief
      This function delivers implementation capabilities in the requested format according to the format value.

   @param[in]  format      Format in which capabilities must be delivered. See mfxImplCapsDeliveryFormat for more details.
   @param[out] num_impls   Number of the implementations.

   @return
      Array of handles to the capability report or NULL in case of unsupported format or NULL num_impls pointer.
      Lenght of array equals to num_impls.
*/
mfxHDL* MFX_CDECL MFXQueryImplsDescription(mfxImplCapsDeliveryFormat format, mfxU32* num_impls);

/*!
   @brief
      This function destroys the handle allocated by the MFXQueryImplsCapabilities function.
      Implementation must remember which handles are released. Once th last handle is released, this function must release memory
      allocated for the array of handles.

   @param[in] hdl   Handle to destroy. Can be equal to NULL.

   @return
      MFX_ERR_NONE The function completed successfully.
*/
mfxStatus MFX_CDECL MFXReleaseImplDescription(mfxHDL hdl);
#endif


#ifdef __cplusplus
} // extern "C"
#endif

#endif // __MFXIMPLCAPS_H__
