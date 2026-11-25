// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017f570  size: 994 bytes
// Name:    FUN_14017f570
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14017f960, FUN_14017fa80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14017f570(longlong param_1)

{
  ulonglong *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar8 = _DAT_14a92ea30;
  lVar9 = _DAT_14a92ea28;
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x80) == '\0') {
      iVar5 = 0x800;
      do {
        uVar7 = *(ulonglong *)(lVar9 + 0x800);
        if (uVar7 == 0xffffffffffffffff) {
          uVar7 = *(ulonglong *)(lVar9 + 0x808);
          if (uVar7 == 0xffffffffffffffff) {
            uVar7 = *(ulonglong *)(lVar9 + 0x810);
            if (uVar7 == 0xffffffffffffffff) {
              uVar7 = *(ulonglong *)(lVar9 + 0x818);
              if (uVar7 == 0xffffffffffffffff) {
                uVar7 = *(ulonglong *)(lVar9 + 0x820);
                if (uVar7 == 0xffffffffffffffff) {
                  uVar7 = *(ulonglong *)(lVar9 + 0x828);
                  if (uVar7 == 0xffffffffffffffff) {
                    uVar7 = *(ulonglong *)(lVar9 + 0x830);
                    if (uVar7 == 0xffffffffffffffff) {
                      uVar7 = *(ulonglong *)(lVar9 + 0x838);
                      if (uVar7 == 0xffffffffffffffff) {
                        uVar7 = *(ulonglong *)(lVar9 + 0x840);
                        if (uVar7 == 0xffffffffffffffff) {
                          uVar7 = *(ulonglong *)(lVar9 + 0x848);
                          if (uVar7 == 0xffffffffffffffff) {
                            uVar7 = *(ulonglong *)(lVar9 + 0x850);
                            if (uVar7 == 0xffffffffffffffff) {
                              uVar7 = *(ulonglong *)(lVar9 + 0x858);
                              if (uVar7 == 0xffffffffffffffff) {
                                uVar7 = *(ulonglong *)(lVar9 + 0x860);
                                if (uVar7 == 0xffffffffffffffff) {
                                  uVar7 = *(ulonglong *)(lVar9 + 0x868);
                                  if (uVar7 == 0xffffffffffffffff) {
                                    uVar7 = *(ulonglong *)(lVar9 + 0x870);
                                    if (uVar7 == 0xffffffffffffffff) {
                                      uVar7 = *(ulonglong *)(lVar9 + 0x878);
                                      if (uVar7 == 0xffffffffffffffff) {
                                        return 0;
                                      }
                                      lVar8 = 0xf;
                                    }
                                    else {
                                      lVar8 = 0xe;
                                    }
                                  }
                                  else {
                                    lVar8 = 0xd;
                                  }
                                }
                                else {
                                  lVar8 = 0xc;
                                }
                              }
                              else {
                                lVar8 = 0xb;
                              }
                            }
                            else {
                              lVar8 = 10;
                            }
                          }
                          else {
                            lVar8 = 9;
                          }
                        }
                        else {
                          lVar8 = 8;
                        }
                      }
                      else {
                        lVar8 = 7;
                      }
                    }
                    else {
                      lVar8 = 6;
                    }
                  }
                  else {
                    lVar8 = 5;
                  }
                }
                else {
                  lVar8 = 4;
                }
              }
              else {
                lVar8 = 3;
              }
            }
            else {
              lVar8 = 2;
            }
          }
          else {
            lVar8 = 1;
          }
        }
        else {
          lVar8 = 0;
        }
        uVar3 = 0;
        for (uVar6 = ~uVar7; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x8000000000000000) {
          uVar3 = uVar3 + 1;
        }
        puVar1 = (ulonglong *)(lVar9 + 0x800 + lVar8 * 8);
        LOCK();
        bVar10 = uVar7 == *puVar1;
        if (bVar10) {
          *puVar1 = uVar7 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
        if (bVar10) {
          uVar7 = uVar3 + (uint)((int)lVar8 << 6);
          uVar2 = *(ushort *)(lVar9 + uVar7 * 2);
          if (_DAT_14a92ea40 != 0) {
            FUN_14017fa80(_DAT_14a92ea40 + uVar7 * 0x590);
            lVar9 = _DAT_14a92ea28;
          }
          uVar4 = (uint)uVar7;
          bVar10 = false;
          LOCK();
          puVar1 = (ulonglong *)(lVar9 + 0x880 + (uVar7 >> 6 & 0x3ffffff) * 8);
          *puVar1 = *puVar1 | 1L << (uVar3 & 0x3f);
          UNLOCK();
LAB_14017f698:
          if (bVar10) {
            return (uint)uVar2 << 0x10 | uVar4 & 0xffff | 0x8000;
          }
          return (uint)uVar2 << 0x10 | uVar4 & 0x7fff;
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    else if (*(char *)(param_1 + 0x80) == '\x01') {
      iVar5 = 0x800;
      do {
        uVar7 = *(ulonglong *)(lVar8 + 0x400);
        if (uVar7 == 0xffffffffffffffff) {
          uVar7 = *(ulonglong *)(lVar8 + 0x408);
          if (uVar7 == 0xffffffffffffffff) {
            uVar7 = *(ulonglong *)(lVar8 + 0x410);
            if (uVar7 == 0xffffffffffffffff) {
              uVar7 = *(ulonglong *)(lVar8 + 0x418);
              if (uVar7 == 0xffffffffffffffff) {
                uVar7 = *(ulonglong *)(lVar8 + 0x420);
                if (uVar7 == 0xffffffffffffffff) {
                  uVar7 = *(ulonglong *)(lVar8 + 0x428);
                  if (uVar7 == 0xffffffffffffffff) {
                    uVar7 = *(ulonglong *)(lVar8 + 0x430);
                    if (uVar7 == 0xffffffffffffffff) {
                      uVar7 = *(ulonglong *)(lVar8 + 0x438);
                      if (uVar7 == 0xffffffffffffffff) {
                        return 0;
                      }
                      lVar9 = 7;
                    }
                    else {
                      lVar9 = 6;
                    }
                  }
                  else {
                    lVar9 = 5;
                  }
                }
                else {
                  lVar9 = 4;
                }
              }
              else {
                lVar9 = 3;
              }
            }
            else {
              lVar9 = 2;
            }
          }
          else {
            lVar9 = 1;
          }
        }
        else {
          lVar9 = 0;
        }
        uVar3 = 0;
        for (uVar6 = ~uVar7; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x8000000000000000) {
          uVar3 = uVar3 + 1;
        }
        puVar1 = (ulonglong *)(lVar8 + 0x400 + lVar9 * 8);
        LOCK();
        bVar10 = uVar7 == *puVar1;
        if (bVar10) {
          *puVar1 = uVar7 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
        if (bVar10) {
          uVar7 = uVar3 + (uint)((int)lVar9 << 6);
          uVar2 = *(ushort *)(lVar8 + uVar7 * 2);
          if (_DAT_14a92ea48 != 0) {
            FUN_14017f960(_DAT_14a92ea48 + uVar7 * 0x6100,param_1);
            lVar8 = _DAT_14a92ea30;
          }
          uVar4 = (uint)uVar7;
          bVar10 = true;
          LOCK();
          puVar1 = (ulonglong *)(lVar8 + 0x440 + (uVar7 >> 6 & 0x3ffffff) * 8);
          *puVar1 = *puVar1 | 1L << (uVar3 & 0x3f);
          UNLOCK();
          goto LAB_14017f698;
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return 0;
}

