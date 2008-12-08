/** @file
  Provides a GUID and a data structure that can be used with EFI_FILE_PROTOCOL.GetInfo()
  or EFI_FILE_PROTOCOL.SetInfo() to get or set the system's volume label.
  This guid is defined in UEFI specification.

  Copyright (c) 2006, Intel Corporation                                                         
  All rights reserved. This program and the accompanying materials                          
  are licensed and made available under the terms and conditions of the BSD License         
  which accompanies this distribution.  The full text of the license may be found at        
  http://opensource.org/licenses/bsd-license.php                                            

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,                     
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.             

**/

#ifndef __FILE_SYSTEM_VOLUME_LABEL_INFO_H__
#define __FILE_SYSTEM_VOLUME_LABEL_INFO_H__

#define EFI_FILE_SYSTEM_VOLUME_LABEL_INFO_ID_GUID \
  { \
    0xDB47D7D3, 0xFE81, 0x11d3, {0x9A, 0x35, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D } \
  }

#define EFI_FILE_SYSTEM_VOLUME_LABEL_ID \
        EFI_FILE_SYSTEM_VOLUME_LABEL_INFO_ID_GUID

typedef struct {
  ///
  /// The Null-terminated string that is the volume's label.
  ///
  CHAR16  VolumeLabel[1];
} EFI_FILE_SYSTEM_VOLUME_LABEL_INFO;

typedef EFI_FILE_SYSTEM_VOLUME_LABEL_INFO EFI_FILE_SYSTEM_VOLUME_LABEL;

#define SIZE_OF_EFI_FILE_SYSTEM_VOLUME_LABEL_INFO \
        EFI_FIELD_OFFSET (EFI_FILE_SYSTEM_VOLUME_LABEL_INFO, VolumeLabel)

extern EFI_GUID gEfiFileSystemVolumeLabelInfoIdGuid;

#endif
