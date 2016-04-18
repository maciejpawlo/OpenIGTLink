/*=========================================================================

  Program:   OpenIGTLLink Library -- Dummy status data
  Module:    $RCSfile: $
  Language:  C
  Date:      $Date: $
  Version:   $Revision: $

  Copyright (c) Insight Software Consortium. All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.  See the above copyright notices for more information.

=========================================================================*/

#ifndef __IGTL_TEST_DATA_NDARRAY_H
#define __IGTL_TEST_DATA_NDARRAY_H

unsigned char test_ndarray_message_header[] = {
  0x00, 0x01,                                     /* Version number */
  0x4e, 0x44, 0x41, 0x52, 0x52, 0x41, 0x59, 0x00,
  0x00, 0x00, 0x00, 0x00,                         /* NDARRAY */ 
  0x44, 0x65, 0x76, 0x69, 0x63, 0x65, 0x4e, 0x61,
  0x6d, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,                         /* Device name */
  0x00, 0x00, 0x00, 0x00, 0x49, 0x96, 0x02, 0xd4, /* Time stamp */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe8, /* Body size */
  0x1b, 0xe0, 0xce, 0x29, 0x55, 0x4f, 0x9a, 0x92, /* CRC */
};

unsigned char test_ndarray_message_body[] = {
  0x0b,                                           /* 11: 64-bit float */
  0x03,                                           /* 3-dimensional array */
  0x00, 0x05, 0x00, 0x04, 0x00, 0x03,             /* size[] = {5, 4, 3} */

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0.0 */
  0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 1.0 */
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 2.0 */
  0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 3.0 */
  0x40, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x2c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x37, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x3b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ... */
  0x40, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x41, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x42, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x43, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x44, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x45, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x46, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x47, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x48, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x49, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x49, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x4a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x4a, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x4b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x4b, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x4c, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x4d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x4d, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,

};


#endif /* IGTL_TEST_DATA_NDARRAY_H */




