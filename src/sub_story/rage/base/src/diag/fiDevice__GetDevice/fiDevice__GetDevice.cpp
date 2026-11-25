// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 141b7de20  size: 301 bytes
// Name:    fiDevice::GetDevice
// Subsystem: core
// Class:   fiDevice
//
// Evidence:
//   GTAVSRC: fiDevice::GetDevice  (rage/base/src/diag/civetweb.cpp)
//   literal: ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/fiDevice.h"


undefined8
fiDevice__GetDevice(longlong param_1,int param_2,longlong param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  
  uVar5 = 0;
  if ((param_3 != 0) && (param_1 != 0)) {
    if (param_2 != 0) {
      uVar4 = func_0x000141b7df50(param_2);
      if (param_4 < uVar4) {
        uVar5 = 0;
      }
      else {
        func_0x000145f40580(param_3,0,param_4);
        uVar6 = param_2 * 8 + 10;
        puVar7 = (undefined *)(ulonglong)uVar6;
        uVar3 = (param_2 * 8 + 5) / 6;
        if (10 < uVar6) {
          puVar7 = &UNK_1462fe9f0;
          uVar8 = 0;
          uVar6 = 0;
          do {
            uVar1 = uVar6 + 6;
            bVar2 = *(byte *)(param_1 + (ulonglong)(uVar6 >> 3));
            uVar6 = (uint)bVar2 << 8;
            if ((int)uVar1 < param_2 * 8) {
              uVar6 = (uint)CONCAT11(bVar2,*(undefined1 *)(param_1 + (ulonglong)(uVar1 >> 3)));
            }
            *(undefined *)(param_3 + uVar8) =
                 (&UNK_1462fea00)
                 [uVar6 >> ((byte)(&UNK_1462fe9f0)[(ulonglong)((uint)uVar8 & 3) * 4] & 0x1f) & 0x3f]
            ;
            uVar8 = uVar8 + 1;
            uVar6 = uVar1;
          } while (uVar3 + (uVar3 == 0) != uVar8);
        }
        uVar8 = (ulonglong)uVar3;
        if (uVar3 < uVar4 - 1) {
          func_0x000145f40580(uVar8 + param_3,CONCAT71((int7)((ulonglong)puVar7 >> 8),0x3d),
                              (ulonglong)((uVar4 - uVar3) - 2) + 1);
          uVar8 = (ulonglong)(uVar4 - 1);
        }
        uVar5 = 1;
        *(undefined1 *)(param_3 + uVar8) = 0;
        if (param_5 != (uint *)0x0) {
          *param_5 = uVar4;
        }
      }
    }
  }
  return uVar5;
}

