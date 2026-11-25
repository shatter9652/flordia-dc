// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140168c60  size: 43 bytes
// Name:    FUN_140168c60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140168c90, FUN_145024190, FUN_1452578f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140168c60(void)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 uStack_6c;
  longlong lStack_68;
  uint uStack_5c;
  char cStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  
  FUN_1452578f0(0x149296500);
  FUN_140168c90();
  FUN_145024190();
  lVar4 = lRam00000001492964f8;
  uVar3 = (ulonglong)uRam00000001492964f0;
  if (uVar3 != 0) {
    lVar7 = 0;
    do {
      if (!SBORROW1('\0',*(char *)(lVar4 + lVar7))) {
        *(undefined1 *)(lVar4 + lVar7) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 1 + lVar7))) {
        *(undefined1 *)(lVar4 + 1 + lVar7) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 2 + lVar7))) {
        *(undefined1 *)(lVar4 + 2 + lVar7) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 3 + lVar7))) {
        *(undefined1 *)(lVar4 + 3 + lVar7) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 4 + lVar7))) {
        *(undefined1 *)(lVar4 + 4 + lVar7) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 5 + lVar7))) {
        *(undefined1 *)(lVar4 + 5 + lVar7) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 6 + lVar7))) {
        *(undefined1 *)(lVar4 + 6 + lVar7) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 7 + lVar7))) {
        *(undefined1 *)(lVar4 + 7 + lVar7) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 8 + lVar7))) {
        *(undefined1 *)(lVar4 + 8 + lVar7) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 9 + lVar7))) {
        *(undefined1 *)(lVar4 + 9 + lVar7) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 10 + lVar7))) {
        *(undefined1 *)(lVar4 + 10 + lVar7) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 0xb + lVar7))) {
        *(undefined1 *)(lVar4 + 0xb + lVar7) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 0xc + lVar7))) {
        *(undefined1 *)(lVar4 + 0xc + lVar7) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 0xd + lVar7))) {
        *(undefined1 *)(lVar4 + 0xd + lVar7) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 0xe + lVar7))) {
        *(undefined1 *)(lVar4 + 0xe + lVar7) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 0xf + lVar7))) {
        *(undefined1 *)(lVar4 + 0xf + lVar7) = 0x80;
      }
      lVar7 = lVar7 + 0x50;
    } while (uVar3 * 0x50 != lVar7);
  }
  uRam00000001492964f4 = 0;
  if (uRam000000014928e604 != 0) {
    uVar3 = 0;
    uVar6 = uRam000000014928e604;
    do {
      lVar4 = uVar3 * 0x9c0;
      uVar5 = *(uint *)(lVar4 + 0x14928ef80);
      if ((ulonglong)uVar5 != 0) {
        lVar7 = *(longlong *)(lVar4 + 0x14928ef88);
        lVar8 = 0;
        do {
          if (!SBORROW1('\0',*(char *)(lVar7 + lVar8))) {
            *(undefined1 *)(lVar7 + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lVar7 + 1 + lVar8))) {
            *(undefined1 *)(lVar7 + 1 + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lVar7 + 2 + lVar8))) {
            *(undefined1 *)(lVar7 + 2 + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lVar7 + 3 + lVar8))) {
            *(undefined1 *)(lVar7 + 3 + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lVar7 + 4 + lVar8))) {
            *(undefined1 *)(lVar7 + 4 + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lVar7 + 5 + lVar8))) {
            *(undefined1 *)(lVar7 + 5 + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lVar7 + 6 + lVar8))) {
            *(undefined1 *)(lVar7 + 6 + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lVar7 + 7 + lVar8))) {
            *(undefined1 *)(lVar7 + 7 + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lVar7 + 8 + lVar8))) {
            *(undefined1 *)(lVar7 + 8 + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lVar7 + 9 + lVar8))) {
            *(undefined1 *)(lVar7 + 9 + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lVar7 + 10 + lVar8))) {
            *(undefined1 *)(lVar7 + 10 + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lVar7 + 0xb + lVar8))) {
            *(undefined1 *)(lVar7 + 0xb + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lVar7 + 0xc + lVar8))) {
            *(undefined1 *)(lVar7 + 0xc + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lVar7 + 0xd + lVar8))) {
            *(undefined1 *)(lVar7 + 0xd + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lVar7 + 0xe + lVar8))) {
            *(undefined1 *)(lVar7 + 0xe + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lVar7 + 0xf + lVar8))) {
            *(undefined1 *)(lVar7 + 0xf + lVar8) = 0x80;
          }
          lVar8 = lVar8 + 0x50;
          uVar6 = uRam000000014928e604;
        } while ((ulonglong)uVar5 * 0x50 != lVar8);
      }
      uVar3 = uVar3 + 1;
      *(undefined4 *)(lVar4 + 0x14928ef84) = 0;
    } while (uVar3 < uVar6);
    if (2 < uVar6) {
      uStack_48 = 2;
      lVar4 = 0;
      do {
        lVar7 = uStack_48 * 0x9c0;
        uVar5 = *(uint *)(lVar7 + 0x14928e614);
        if (uVar5 != 0) {
          uVar3 = 0;
          lStack_50 = lVar7 + 0x14928ef80;
          do {
            uVar1 = *(undefined4 *)(*(longlong *)(lVar7 + 0x14928e618) + uVar3 * 8);
            iVar2 = FUN_145024890(uRam0000000149296504,uRam0000000149296508,uVar1);
            if (2 < uRam000000014928e604 && iVar2 == -1) {
              uVar11 = (ulonglong)uRam000000014928e604;
              uVar10 = 2;
              puVar9 = (undefined8 *)0x14928f998;
              do {
                if ((lVar4 + uVar10 != 2) &&
                   (iVar2 = FUN_145024890(*(undefined4 *)((longlong)puVar9 + -4),*puVar9,uVar1),
                   iVar2 != -1)) {
                  uStack_6c = uVar1;
                  FUN_145024900(lStack_50,&lStack_68,&uStack_6c);
                  if (cStack_58 == '\x01') {
                    *(undefined4 *)
                     ((ulonglong)(uStack_5c >> 4) * 0x50 + lStack_68 + 0x10 +
                     (ulonglong)(uStack_5c & 0xf) * 4) = uVar1;
                  }
                  uStack_6c = uVar1;
                  FUN_145024900(0x1492964f0,&lStack_68,&uStack_6c);
                  if (cStack_58 == '\x01') {
                    *(undefined4 *)
                     ((ulonglong)(uStack_5c >> 4) * 0x50 + lStack_68 + 0x10 +
                     (ulonglong)(uStack_5c & 0xf) * 4) = uVar1;
                  }
                  uVar5 = *(uint *)(lVar7 + 0x14928e614);
                  break;
                }
                uVar10 = uVar10 + 1;
                puVar9 = puVar9 + 0x138;
              } while (uVar10 < uVar11);
            }
            uVar3 = uVar3 + 1;
            uVar6 = uRam000000014928e604;
          } while (uVar3 < uVar5);
        }
        lVar4 = lVar4 + -1;
        uStack_48 = uStack_48 + 1;
      } while (uStack_48 < uVar6);
    }
  }
  return;
}

