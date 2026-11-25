// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007fc70  size: 951 bytes
// Name:    FUN_14007fc70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006ef0, FUN_144ee95f0, FUN_140006c10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007fc70(longlong *param_1)

{
  ushort uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uStack_5c;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  uint uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined2 uStack_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  
  if ((*(uint *)((longlong)param_1 + 0x114) >> 0x19 & 1) != 0) {
    lVar3 = FUN_144ee95f0(*(uint *)((longlong)param_1 + 0x114) >> 0x11 & 0xf,(short)param_1[0xf],
                          *(undefined2 *)((longlong)param_1 + 0xbc),param_1[0x11]);
    param_1[0xc] = lVar3;
    uVar6 = *(uint *)((longlong)param_1 + 0x114);
    if (lVar3 == 0) {
      uVar6 = uVar6 | 0x1000000;
    }
    else {
      if ((uVar6 >> 0x1b & 1) == 0) {
        uStack_50 = 0;
        uStack_34 = (undefined4)_DAT_14617ccf0;
        iStack_30 = (int)((ulonglong)_DAT_14617ccf0 >> 0x20);
        iStack_2c = (int)_UNK_14617ccf8;
        uStack_28 = (undefined2)((ulonglong)_UNK_14617ccf8 >> 0x20);
        uStack_26 = (undefined1)((ulonglong)_UNK_14617ccf8 >> 0x30);
        uStack_25 = (undefined1)((ulonglong)_UNK_14617ccf8 >> 0x38);
        lStack_58 = param_1[0x10];
        uStack_48 = (undefined4)param_1[0x1c];
        cVar2 = (**(code **)(*param_1 + 0x80))(param_1);
        if (cVar2 == '\0') {
          lVar3 = param_1[0xe];
          uVar1 = *(ushort *)(param_1 + 0xf);
          uVar6 = (uint)uVar1 * (uint)*(ushort *)(lVar3 + 0x10) + *(int *)((longlong)param_1 + 0xac)
          ;
          iVar5 = (*(int *)(lVar3 + 0xc) - (uint)*(ushort *)(lVar3 + 0x10)) * (uint)uVar1;
        }
        else {
          uVar1 = *(ushort *)(param_1 + 0xf);
          lVar3 = param_1[0xe];
          uVar6 = *(uint *)((longlong)param_1 + 0xac);
          iVar5 = (uint)uVar1 * *(int *)(lVar3 + 0xc);
        }
        uStack_44 = uVar6;
        iStack_40 = iVar5;
        if (*(char *)(lVar3 + 0x1c) == '\a') {
          iStack_38 = 0;
          if ((*(short *)(lVar3 + 0x18) == 1) && (*(int *)(lVar3 + 4) == -1)) {
            uStack_26 = 1;
          }
          uStack_25 = 1;
          uStack_5c = 0;
          uStack_50 = func_0x000145594640(param_1 + 0xd);
          uStack_34 = uStack_5c;
          iStack_3c = (uint)*(ushort *)(param_1 + 0xf) * *(int *)(param_1[0xe] + 4);
          if (*(int *)(param_1[0xe] + 4) == -1) {
            iStack_3c = -1;
          }
          cVar2 = (**(code **)(*param_1 + 0x80))(param_1);
          if (cVar2 != '\0') {
            iStack_40 = iVar5 + -0x490;
            uStack_44 = ((*(int *)((longlong)param_1 + 0xac) + *(uint *)(param_1[0xe] + 0xc)) -
                        0x490) % *(uint *)(param_1[0xe] + 0xc);
            uStack_26 = 1;
            func_0x00014007acb0(param_1,0x10,0x10);
          }
        }
        else {
          switch(*(uint *)((longlong)param_1 + 0x114) >> 0x11 & 0xf) {
          case 4:
            uStack_25 = 1;
          default:
            iStack_3c = (uint)uVar1 * *(int *)(lVar3 + 4);
            if (*(int *)(lVar3 + 4) == -1) {
              iStack_3c = -1;
            }
            iStack_38 = *(int *)((longlong)param_1 + 0xdc);
            break;
          case 5:
            iStack_3c = (uint)*(ushort *)(lVar3 + 0x16) << 7;
            uVar1 = *(ushort *)(lVar3 + 0x18);
            iStack_38 = (uint)uVar1 * 0x80 + -1;
            if (uVar1 == 0) {
              iStack_38 = 0;
            }
            cVar2 = (**(code **)(*param_1 + 0x80))(param_1);
            if (cVar2 != '\0') {
              uVar6 = (uint)*(ushort *)(param_1[0xe] + 0x14) * 0x80 +
                      *(int *)((longlong)param_1 + 0xac);
              iVar5 = (uint)*(ushort *)(param_1[0xe] + 0x12) << 7;
              uStack_44 = uVar6;
              iStack_40 = iVar5;
            }
            uStack_25 = 1;
            if (uVar1 == 0) {
              uStack_44 = uVar6 + 0x180;
              iStack_40 = iVar5 + 0x180;
            }
            break;
          case 8:
          case 0xb:
            uStack_5c = 0;
            uStack_50 = func_0x000145594640(param_1 + 0xd,&uStack_5c);
            uStack_34 = uStack_5c;
            iStack_3c = (uint)*(ushort *)(param_1 + 0xf) * *(int *)(param_1[0xe] + 4);
            if (*(int *)(param_1[0xe] + 4) == -1) {
              iStack_3c = -1;
            }
            iStack_38 = *(int *)((longlong)param_1 + 0xdc);
            uStack_25 = 1;
          }
        }
        iStack_30 = (int)(short)param_1[0xd];
        (**(code **)(*(longlong *)param_1[0xc] + 0x20))();
      }
      else {
        uVar4 = func_0x000144f131b0((short)param_1[0xd]);
        iStack_40 = 0;
        iStack_3c = 0;
        iStack_38 = 0;
        uStack_34 = 0;
        iStack_30 = 0xffffffff;
        iStack_2c = -1;
        uStack_28 = 0xffff;
        uStack_26 = 0xff;
        uStack_25 = 0xff;
        uStack_24 = 0;
        cVar2 = FUN_140006c10(uVar4,(int)*(short *)((longlong)param_1 + 0xbe),&lStack_58,
                              uVar6 >> 0x11 & 0xf);
        if (cVar2 != '\0') {
          func_0x00014007bc40(uVar4,(int)*(short *)((longlong)param_1 + 0xbe));
          uVar6 = 0xffffffff;
          if (iStack_2c == -1) {
            if ((int *)CONCAT44(iStack_3c,iStack_40) == (int *)0x0) {
              uVar6 = 0;
            }
            else {
              uVar6 = *(int *)((longlong)param_1 + 0xac) - *(int *)CONCAT44(iStack_3c,iStack_40);
            }
            uVar6 = ~((int)uVar6 >> 0x1f) & uVar6;
          }
          FUN_140006ef0(param_1,&lStack_58,uVar6);
          cVar2 = FUN_140006c10(uVar4,(int)*(short *)((longlong)param_1 + 0xbe),&lStack_58,
                                *(uint *)((longlong)param_1 + 0x114) >> 0x11 & 0xf);
          if (cVar2 != '\0') {
            FUN_140006ef0(param_1,&lStack_58,0xffffffff);
          }
        }
      }
      uVar6 = *(uint *)((longlong)param_1 + 0x114) & 0xff1fffff | 0x200000;
    }
    *(uint *)((longlong)param_1 + 0x114) = uVar6;
  }
  return;
}

