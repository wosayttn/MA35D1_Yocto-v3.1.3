/*
 * Copyright (c) 2020 Pelion. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __MBED_CLOUD_DEV_CREDENTIALS_H__
#define __MBED_CLOUD_DEV_CREDENTIALS_H__

#include <inttypes.h>

const char MBED_CLOUD_DEV_BOOTSTRAP_ENDPOINT_NAME[] = "017352235df20ee59ec3f79d03c00000";
const char MBED_CLOUD_DEV_ACCOUNT_ID[] = "0170bac1309476d48c989ecc00000000";
const char MBED_CLOUD_DEV_BOOTSTRAP_SERVER_URI[] = "coaps://bootstrap.us-east-1.mbedcloud.com:5684?aid=0170bac1309476d48c989ecc00000000";
// const char MBED_CLOUD_DEV_BOOTSTRAP_SERVER_URI[] = "coaps://tcp-bootstrap.us-east-1.mbedcloud.com:5684?aid=0170bac1309476d48c989ecc00000000";
// const char MBED_CLOUD_DEV_BOOTSTRAP_SERVER_URI[] = "coaps://tcp-bootstrap.us-east-1.mbedcloud.com:443?aid=0170bac1309476d48c989ecc00000000";
// const char MBED_CLOUD_DEV_BOOTSTRAP_SERVER_URI[] = "coaps://udp-bootstrap.us-east-1.mbedcloud.com:5684?aid=0170bac1309476d48c989ecc00000000";

const uint8_t MBED_CLOUD_DEV_BOOTSTRAP_DEVICE_CERTIFICATE[] = 
{ 0x30, 0x82, 0x02, 0x85, 0x30, 0x82, 0x02, 0x2a,
 0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x11, 0x00,
 0xa9, 0xc9, 0xda, 0x7e, 0xbc, 0x03, 0x45, 0xc3,
 0x95, 0xb3, 0x2b, 0xee, 0xa4, 0x60, 0xc6, 0x45,
 0x30, 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce,
 0x3d, 0x04, 0x03, 0x02, 0x30, 0x81, 0xa2, 0x31,
 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06,
 0x13, 0x02, 0x47, 0x42, 0x31, 0x17, 0x30, 0x15,
 0x06, 0x03, 0x55, 0x04, 0x08, 0x0c, 0x0e, 0x43,
 0x61, 0x6d, 0x62, 0x72, 0x69, 0x64, 0x67, 0x65,
 0x73, 0x68, 0x69, 0x72, 0x65, 0x31, 0x12, 0x30,
 0x10, 0x06, 0x03, 0x55, 0x04, 0x07, 0x0c, 0x09,
 0x43, 0x61, 0x6d, 0x62, 0x72, 0x69, 0x64, 0x67,
 0x65, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55,
 0x04, 0x0a, 0x0c, 0x07, 0x41, 0x52, 0x4d, 0x20,
 0x4c, 0x74, 0x64, 0x31, 0x29, 0x30, 0x27, 0x06,
 0x03, 0x55, 0x04, 0x0b, 0x0c, 0x20, 0x30, 0x31,
 0x37, 0x30, 0x62, 0x61, 0x63, 0x31, 0x33, 0x30,
 0x39, 0x34, 0x37, 0x36, 0x64, 0x34, 0x38, 0x63,
 0x39, 0x38, 0x39, 0x65, 0x63, 0x63, 0x30, 0x30,
 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x31, 0x29,
 0x30, 0x27, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c,
 0x20, 0x30, 0x31, 0x37, 0x33, 0x35, 0x32, 0x32,
 0x33, 0x35, 0x64, 0x66, 0x32, 0x30, 0x65, 0x65,
 0x35, 0x39, 0x65, 0x63, 0x33, 0x66, 0x37, 0x39,
 0x64, 0x30, 0x33, 0x63, 0x30, 0x30, 0x30, 0x30,
 0x30, 0x30, 0x1e, 0x17, 0x0d, 0x32, 0x30, 0x30,
 0x37, 0x31, 0x35, 0x31, 0x31, 0x30, 0x31, 0x35,
 0x36, 0x5a, 0x17, 0x0d, 0x33, 0x30, 0x30, 0x37,
 0x31, 0x35, 0x31, 0x31, 0x30, 0x31, 0x35, 0x36,
 0x5a, 0x30, 0x81, 0xa2, 0x31, 0x0b, 0x30, 0x09,
 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x47,
 0x42, 0x31, 0x17, 0x30, 0x15, 0x06, 0x03, 0x55,
 0x04, 0x08, 0x0c, 0x0e, 0x43, 0x61, 0x6d, 0x62,
 0x72, 0x69, 0x64, 0x67, 0x65, 0x73, 0x68, 0x69,
 0x72, 0x65, 0x31, 0x12, 0x30, 0x10, 0x06, 0x03,
 0x55, 0x04, 0x07, 0x0c, 0x09, 0x43, 0x61, 0x6d,
 0x62, 0x72, 0x69, 0x64, 0x67, 0x65, 0x31, 0x10,
 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x0c,
 0x07, 0x41, 0x52, 0x4d, 0x20, 0x4c, 0x74, 0x64,
 0x31, 0x29, 0x30, 0x27, 0x06, 0x03, 0x55, 0x04,
 0x0b, 0x0c, 0x20, 0x30, 0x31, 0x37, 0x30, 0x62,
 0x61, 0x63, 0x31, 0x33, 0x30, 0x39, 0x34, 0x37,
 0x36, 0x64, 0x34, 0x38, 0x63, 0x39, 0x38, 0x39,
 0x65, 0x63, 0x63, 0x30, 0x30, 0x30, 0x30, 0x30,
 0x30, 0x30, 0x30, 0x31, 0x29, 0x30, 0x27, 0x06,
 0x03, 0x55, 0x04, 0x03, 0x0c, 0x20, 0x30, 0x31,
 0x37, 0x33, 0x35, 0x32, 0x32, 0x33, 0x35, 0x64,
 0x66, 0x32, 0x30, 0x65, 0x65, 0x35, 0x39, 0x65,
 0x63, 0x33, 0x66, 0x37, 0x39, 0x64, 0x30, 0x33,
 0x63, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x59,
 0x30, 0x13, 0x06, 0x07, 0x2a, 0x86, 0x48, 0xce,
 0x3d, 0x02, 0x01, 0x06, 0x08, 0x2a, 0x86, 0x48,
 0xce, 0x3d, 0x03, 0x01, 0x07, 0x03, 0x42, 0x00,
 0x04, 0x75, 0x35, 0xee, 0x62, 0x75, 0xfd, 0x3c,
 0x50, 0x9f, 0x9a, 0xff, 0xb1, 0x26, 0x2d, 0x5a,
 0x96, 0x6c, 0x41, 0xcb, 0x84, 0x4c, 0x03, 0x15,
 0x35, 0x55, 0x08, 0x8f, 0x8a, 0x7b, 0x36, 0x58,
 0x76, 0xe7, 0x5a, 0x81, 0xa0, 0x0a, 0xf1, 0x75,
 0x1c, 0x50, 0x04, 0x40, 0x06, 0xd0, 0x61, 0xac,
 0xb1, 0x9d, 0xed, 0x4f, 0x17, 0xff, 0xea, 0xef,
 0x8e, 0x8c, 0x57, 0xea, 0xe4, 0x33, 0x23, 0x3e,
 0xc6, 0xa3, 0x3f, 0x30, 0x3d, 0x30, 0x12, 0x06,
 0x09, 0x2b, 0x06, 0x01, 0x04, 0x01, 0xa0, 0x20,
 0x81, 0x49, 0x04, 0x05, 0x02, 0x03, 0x40, 0x00,
 0x91, 0x30, 0x12, 0x06, 0x03, 0x55, 0x1d, 0x13,
 0x01, 0x01, 0xff, 0x04, 0x08, 0x30, 0x06, 0x01,
 0x01, 0xff, 0x02, 0x01, 0x00, 0x30, 0x13, 0x06,
 0x03, 0x55, 0x1d, 0x25, 0x04, 0x0c, 0x30, 0x0a,
 0x06, 0x08, 0x2b, 0x06, 0x01, 0x05, 0x05, 0x07,
 0x03, 0x02, 0x30, 0x0a, 0x06, 0x08, 0x2a, 0x86,
 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x03, 0x49,
 0x00, 0x30, 0x46, 0x02, 0x21, 0x00, 0x9b, 0x4e,
 0x4f, 0x80, 0xc4, 0x2f, 0x43, 0xf2, 0xed, 0xe2,
 0xc2, 0xe5, 0x04, 0xf0, 0xa8, 0x76, 0xef, 0xbe,
 0xde, 0xa3, 0x1a, 0x28, 0xd9, 0xb7, 0x7e, 0x40,
 0x56, 0x51, 0xab, 0xbc, 0x84, 0x0d, 0x02, 0x21,
 0x00, 0xe6, 0x2d, 0x5d, 0xd8, 0x93, 0x8a, 0x0f,
 0x41, 0xc5, 0xfb, 0x14, 0x98, 0xf7, 0x37, 0x56,
 0xb7, 0xbd, 0xa2, 0xec, 0xbe, 0x72, 0x5b, 0x0c,
 0xf9, 0xc3, 0xc2, 0x05, 0xed, 0xdc, 0xf7, 0x05,
 0x45 };

const uint8_t MBED_CLOUD_DEV_BOOTSTRAP_SERVER_ROOT_CA_CERTIFICATE[] = 
{ 0x30, 0x82, 0x02, 0x1f, 0x30, 0x82, 0x01, 0xc5,
 0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x10, 0x3c,
 0x63, 0x38, 0x70, 0x08, 0xd3, 0xc9, 0x8a, 0x4c,
 0x72, 0x1f, 0x8f, 0x45, 0xeb, 0xd8, 0xf3, 0x30,
 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d,
 0x04, 0x03, 0x02, 0x30, 0x67, 0x31, 0x0b, 0x30,
 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02,
 0x47, 0x42, 0x31, 0x17, 0x30, 0x15, 0x06, 0x03,
 0x55, 0x04, 0x08, 0x13, 0x0e, 0x43, 0x61, 0x6d,
 0x62, 0x72, 0x69, 0x64, 0x67, 0x65, 0x73, 0x68,
 0x69, 0x72, 0x65, 0x31, 0x12, 0x30, 0x10, 0x06,
 0x03, 0x55, 0x04, 0x07, 0x13, 0x09, 0x43, 0x61,
 0x6d, 0x62, 0x72, 0x69, 0x64, 0x67, 0x65, 0x31,
 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x0a,
 0x13, 0x07, 0x41, 0x52, 0x4d, 0x20, 0x4c, 0x74,
 0x64, 0x31, 0x19, 0x30, 0x17, 0x06, 0x03, 0x55,
 0x04, 0x03, 0x13, 0x10, 0x41, 0x52, 0x4d, 0x20,
 0x42, 0x6f, 0x6f, 0x74, 0x73, 0x74, 0x72, 0x61,
 0x70, 0x20, 0x43, 0x41, 0x30, 0x20, 0x17, 0x0d,
 0x31, 0x37, 0x30, 0x34, 0x30, 0x33, 0x31, 0x34,
 0x30, 0x33, 0x33, 0x36, 0x5a, 0x18, 0x0f, 0x32,
 0x30, 0x35, 0x32, 0x30, 0x34, 0x30, 0x33, 0x31,
 0x34, 0x31, 0x33, 0x33, 0x36, 0x5a, 0x30, 0x67,
 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04,
 0x06, 0x13, 0x02, 0x47, 0x42, 0x31, 0x17, 0x30,
 0x15, 0x06, 0x03, 0x55, 0x04, 0x08, 0x13, 0x0e,
 0x43, 0x61, 0x6d, 0x62, 0x72, 0x69, 0x64, 0x67,
 0x65, 0x73, 0x68, 0x69, 0x72, 0x65, 0x31, 0x12,
 0x30, 0x10, 0x06, 0x03, 0x55, 0x04, 0x07, 0x13,
 0x09, 0x43, 0x61, 0x6d, 0x62, 0x72, 0x69, 0x64,
 0x67, 0x65, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03,
 0x55, 0x04, 0x0a, 0x13, 0x07, 0x41, 0x52, 0x4d,
 0x20, 0x4c, 0x74, 0x64, 0x31, 0x19, 0x30, 0x17,
 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x10, 0x41,
 0x52, 0x4d, 0x20, 0x42, 0x6f, 0x6f, 0x74, 0x73,
 0x74, 0x72, 0x61, 0x70, 0x20, 0x43, 0x41, 0x30,
 0x59, 0x30, 0x13, 0x06, 0x07, 0x2a, 0x86, 0x48,
 0xce, 0x3d, 0x02, 0x01, 0x06, 0x08, 0x2a, 0x86,
 0x48, 0xce, 0x3d, 0x03, 0x01, 0x07, 0x03, 0x42,
 0x00, 0x04, 0x3b, 0xd3, 0xfe, 0xb0, 0xd9, 0xa4,
 0x72, 0xe1, 0x11, 0x11, 0x59, 0xba, 0x06, 0x2d,
 0xf8, 0x26, 0xd5, 0x65, 0x98, 0xaa, 0xcf, 0x2a,
 0x5f, 0xc6, 0x87, 0xa5, 0x6b, 0x0e, 0x30, 0x15,
 0xe8, 0x12, 0x16, 0x49, 0x90, 0xe3, 0xf9, 0x3e,
 0xf9, 0x3d, 0xde, 0xf5, 0x5a, 0x1f, 0x03, 0x44,
 0xbb, 0x81, 0x7a, 0xc9, 0x71, 0x6d, 0x6c, 0xc2,
 0x42, 0x3b, 0x55, 0xdb, 0x86, 0xad, 0x2c, 0xc0,
 0xcf, 0xe4, 0xa3, 0x51, 0x30, 0x4f, 0x30, 0x0b,
 0x06, 0x03, 0x55, 0x1d, 0x0f, 0x04, 0x04, 0x03,
 0x02, 0x01, 0x86, 0x30, 0x0f, 0x06, 0x03, 0x55,
 0x1d, 0x13, 0x01, 0x01, 0xff, 0x04, 0x05, 0x30,
 0x03, 0x01, 0x01, 0xff, 0x30, 0x1d, 0x06, 0x03,
 0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14, 0x84,
 0xc0, 0xf5, 0x82, 0xe9, 0x5d, 0xa5, 0xe0, 0xaa,
 0x74, 0x6f, 0xf7, 0x81, 0x8f, 0x4b, 0xe8, 0x9e,
 0xde, 0x5d, 0x80, 0x30, 0x10, 0x06, 0x09, 0x2b,
 0x06, 0x01, 0x04, 0x01, 0x82, 0x37, 0x15, 0x01,
 0x04, 0x03, 0x02, 0x01, 0x00, 0x30, 0x0a, 0x06,
 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04, 0x03,
 0x02, 0x03, 0x48, 0x00, 0x30, 0x45, 0x02, 0x20,
 0x19, 0x24, 0x0b, 0xc4, 0xac, 0x9d, 0x2b, 0x15,
 0xf8, 0xc3, 0x0c, 0x0b, 0xf6, 0xac, 0xb3, 0xa1,
 0xeb, 0x83, 0xfe, 0x1c, 0x4a, 0x96, 0x44, 0xc6,
 0xa0, 0xbb, 0x56, 0x5c, 0x84, 0x13, 0xc9, 0x0f,
 0x02, 0x21, 0x00, 0xbd, 0x89, 0x1c, 0x54, 0x98,
 0xa5, 0xd0, 0x98, 0xc7, 0x0c, 0x08, 0x2f, 0xd9,
 0x1b, 0xb8, 0x7e, 0xbf, 0x84, 0x3a, 0xfb, 0x8a,
 0x43, 0x1a, 0x8e, 0xac, 0xdc, 0xa8, 0x66, 0x3d,
 0xe3, 0xf9, 0xdc };

const uint8_t MBED_CLOUD_DEV_BOOTSTRAP_DEVICE_PRIVATE_KEY[] = 
{ 0x30, 0x81, 0x93, 0x02, 0x01, 0x00, 0x30, 0x13,
 0x06, 0x07, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x02,
 0x01, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d,
 0x03, 0x01, 0x07, 0x04, 0x79, 0x30, 0x77, 0x02,
 0x01, 0x01, 0x04, 0x20, 0x6b, 0x5a, 0x41, 0x24,
 0xc3, 0x77, 0xe9, 0xe3, 0xd1, 0x72, 0x61, 0x78,
 0x85, 0x1d, 0xed, 0x6c, 0xfa, 0x08, 0x70, 0x03,
 0x3f, 0xd4, 0xc8, 0x32, 0xca, 0x31, 0x37, 0x14,
 0x80, 0xf6, 0x38, 0xe3, 0xa0, 0x0a, 0x06, 0x08,
 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x03, 0x01, 0x07,
 0xa1, 0x44, 0x03, 0x42, 0x00, 0x04, 0x75, 0x35,
 0xee, 0x62, 0x75, 0xfd, 0x3c, 0x50, 0x9f, 0x9a,
 0xff, 0xb1, 0x26, 0x2d, 0x5a, 0x96, 0x6c, 0x41,
 0xcb, 0x84, 0x4c, 0x03, 0x15, 0x35, 0x55, 0x08,
 0x8f, 0x8a, 0x7b, 0x36, 0x58, 0x76, 0xe7, 0x5a,
 0x81, 0xa0, 0x0a, 0xf1, 0x75, 0x1c, 0x50, 0x04,
 0x40, 0x06, 0xd0, 0x61, 0xac, 0xb1, 0x9d, 0xed,
 0x4f, 0x17, 0xff, 0xea, 0xef, 0x8e, 0x8c, 0x57,
 0xea, 0xe4, 0x33, 0x23, 0x3e, 0xc6 };

const char MBED_CLOUD_DEV_MANUFACTURER[] = "dev_manufacturer";

const char MBED_CLOUD_DEV_MODEL_NUMBER[] = "dev_model_num";

const char MBED_CLOUD_DEV_SERIAL_NUMBER[] = "0";

const char MBED_CLOUD_DEV_DEVICE_TYPE[] = "dev_device_type";

const char MBED_CLOUD_DEV_HARDWARE_VERSION[] = "dev_hardware_version";

const uint32_t MBED_CLOUD_DEV_MEMORY_TOTAL_KB = 0;

const uint32_t MBED_CLOUD_DEV_BOOTSTRAP_DEVICE_CERTIFICATE_SIZE = sizeof(MBED_CLOUD_DEV_BOOTSTRAP_DEVICE_CERTIFICATE);
const uint32_t MBED_CLOUD_DEV_BOOTSTRAP_SERVER_ROOT_CA_CERTIFICATE_SIZE = sizeof(MBED_CLOUD_DEV_BOOTSTRAP_SERVER_ROOT_CA_CERTIFICATE);
const uint32_t MBED_CLOUD_DEV_BOOTSTRAP_DEVICE_PRIVATE_KEY_SIZE = sizeof(MBED_CLOUD_DEV_BOOTSTRAP_DEVICE_PRIVATE_KEY);

#endif //__MBED_CLOUD_DEV_CREDENTIALS_H__
