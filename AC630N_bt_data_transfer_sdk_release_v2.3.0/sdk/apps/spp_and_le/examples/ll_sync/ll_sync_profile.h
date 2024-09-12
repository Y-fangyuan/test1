// binary representation
// attribute size in bytes (16), flags(16), handle (16), uuid (16/128), value(...)

#ifndef _LL_DEMO_H
#define _LL_DEMO_H

#include <stdint.h>
#include "app_config.h"

#if CONFIG_APP_LL_SYNC
//
// gatt profile include file, generated by jieli gatt_inc_generator.exe
//

/*
生成profile工具的链接下载
https://gitee.com/Jieli-Tech/fw-AC63_BT_SDK/tree/master/sdk_tools/BLE%20Profile%E5%B7%A5%E5%85%B7
 */

const uint8_t llsync_profile_data[] = {
    //////////////////////////////////////////////////////
    //
    // 0x0001 PRIMARY_SERVICE  1800
    //
    //////////////////////////////////////////////////////
    0x0a, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x28, 0x00, 0x18,

    /* CHARACTERISTIC,  2a00, READ | DYNAMIC, */
    // 0x0002 CHARACTERISTIC 2a00 READ | DYNAMIC
    0x0d, 0x00, 0x02, 0x00, 0x02, 0x00, 0x03, 0x28, 0x02, 0x03, 0x00, 0x00, 0x2a,
    // 0x0003 VALUE 2a00 READ | DYNAMIC
    0x08, 0x00, 0x02, 0x01, 0x03, 0x00, 0x00, 0x2a,

    //////////////////////////////////////////////////////
    //
    // 0x0004 PRIMARY_SERVICE  0000FFE0-65D0-4E20-B56A-E493541BA4E2
    //
    //////////////////////////////////////////////////////
    0x18, 0x00, 0x02, 0x00, 0x04, 0x00, 0x00, 0x28, 0xe2, 0xa4, 0x1b, 0x54, 0x93, 0xe4, 0x6a, 0xb5, 0x20, 0x4e, 0xd0, 0x65, 0xe0, 0xff, 0x00, 0x00,

    /* CHARACTERISTIC,  0000FFE1-65D0-4E20-B56A-E493541BA4E2, WRITE | DYNAMIC, */
    // 0x0005 CHARACTERISTIC 0000FFE1-65D0-4E20-B56A-E493541BA4E2 WRITE | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x05, 0x00, 0x03, 0x28, 0x08, 0x06, 0x00, 0xe2, 0xa4, 0x1b, 0x54, 0x93, 0xe4, 0x6a, 0xb5, 0x20, 0x4e, 0xd0, 0x65, 0xe1, 0xff, 0x00, 0x00,
    // 0x0006 VALUE 0000FFE1-65D0-4E20-B56A-E493541BA4E2 WRITE | DYNAMIC
    0x16, 0x00, 0x08, 0x03, 0x06, 0x00, 0xe2, 0xa4, 0x1b, 0x54, 0x93, 0xe4, 0x6a, 0xb5, 0x20, 0x4e, 0xd0, 0x65, 0xe1, 0xff, 0x00, 0x00,

    /* CHARACTERISTIC,  0000FFE2-65D0-4E20-B56A-E493541BA4E2, WRITE | DYNAMIC, */
    // 0x0007 CHARACTERISTIC 0000FFE2-65D0-4E20-B56A-E493541BA4E2 WRITE | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x07, 0x00, 0x03, 0x28, 0x08, 0x08, 0x00, 0xe2, 0xa4, 0x1b, 0x54, 0x93, 0xe4, 0x6a, 0xb5, 0x20, 0x4e, 0xd0, 0x65, 0xe2, 0xff, 0x00, 0x00,
    // 0x0008 VALUE 0000FFE2-65D0-4E20-B56A-E493541BA4E2 WRITE | DYNAMIC
    0x16, 0x00, 0x08, 0x03, 0x08, 0x00, 0xe2, 0xa4, 0x1b, 0x54, 0x93, 0xe4, 0x6a, 0xb5, 0x20, 0x4e, 0xd0, 0x65, 0xe2, 0xff, 0x00, 0x00,

    /* CHARACTERISTIC,  0000FFE3-65D0-4E20-B56A-E493541BA4E2, NOTIFY, */
    // 0x0009 CHARACTERISTIC 0000FFE3-65D0-4E20-B56A-E493541BA4E2 NOTIFY
    0x1b, 0x00, 0x02, 0x00, 0x09, 0x00, 0x03, 0x28, 0x10, 0x0a, 0x00, 0xe2, 0xa4, 0x1b, 0x54, 0x93, 0xe4, 0x6a, 0xb5, 0x20, 0x4e, 0xd0, 0x65, 0xe3, 0xff, 0x00, 0x00,
    // 0x000a VALUE 0000FFE3-65D0-4E20-B56A-E493541BA4E2 NOTIFY
    0x16, 0x00, 0x10, 0x02, 0x0a, 0x00, 0xe2, 0xa4, 0x1b, 0x54, 0x93, 0xe4, 0x6a, 0xb5, 0x20, 0x4e, 0xd0, 0x65, 0xe3, 0xff, 0x00, 0x00,
    // 0x000b CLIENT_CHARACTERISTIC_CONFIGURATION
    0x0a, 0x00, 0x0a, 0x01, 0x0b, 0x00, 0x02, 0x29, 0x00, 0x00,

    /* CHARACTERISTIC,  0000FFE4-65D0-4E20-B56A-E493541BA4E2, WRITE_WITHOUT_RESPONSE | DYNAMIC, */
    // 0x000c CHARACTERISTIC 0000FFE4-65D0-4E20-B56A-E493541BA4E2 WRITE_WITHOUT_RESPONSE | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x0c, 0x00, 0x03, 0x28, 0x04, 0x0d, 0x00, 0xe2, 0xa4, 0x1b, 0x54, 0x93, 0xe4, 0x6a, 0xb5, 0x20, 0x4e, 0xd0, 0x65, 0xe4, 0xff, 0x00, 0x00,
    // 0x000d VALUE 0000FFE4-65D0-4E20-B56A-E493541BA4E2 WRITE_WITHOUT_RESPONSE | DYNAMIC
    0x16, 0x00, 0x04, 0x03, 0x0d, 0x00, 0xe2, 0xa4, 0x1b, 0x54, 0x93, 0xe4, 0x6a, 0xb5, 0x20, 0x4e, 0xd0, 0x65, 0xe4, 0xff, 0x00, 0x00,

    // END
    0x00, 0x00,
};
//
// characteristics <--> handles
//
#define ATT_CHARACTERISTIC_2a00_01_VALUE_HANDLE 0x0003
#define ATT_CHARACTERISTIC_0000FFE1_65D0_4E20_B56A_E493541BA4E2_01_VALUE_HANDLE 0x0006
#define ATT_CHARACTERISTIC_0000FFE2_65D0_4E20_B56A_E493541BA4E2_01_VALUE_HANDLE 0x0008
#define ATT_CHARACTERISTIC_0000FFE3_65D0_4E20_B56A_E493541BA4E2_01_VALUE_HANDLE 0x000a
#define ATT_CHARACTERISTIC_0000FFE3_65D0_4E20_B56A_E493541BA4E2_01_CLIENT_CONFIGURATION_HANDLE 0x000b
#define ATT_CHARACTERISTIC_0000FFE4_65D0_4E20_B56A_E493541BA4E2_01_VALUE_HANDLE 0x000d

#endif
#endif
