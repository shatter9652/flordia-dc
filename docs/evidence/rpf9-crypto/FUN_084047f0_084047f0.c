// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// FUN_084047f0 @ 084047f0 size=1162
// undefined FUN_084047f0()


undefined4 FUN_084047f0(char *param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  if ((((param_2 != (char *)0x0) && (*param_2 == *param_1)) && (param_2[1] == param_1[1])) &&
     ((param_2[2] == param_1[2] && (param_2[3] == param_1[3])))) {
    pcVar1 = param_2 + 0x170;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    if (param_2 + 8 < pcVar1) {
      iVar2 = *(int *)(param_2 + 8);
      *(int *)(param_1 + 8) = iVar2;
      uVar5 = iVar2 - 1;
      if (uVar5 < 10 && param_2 + 0xc < pcVar1) {
        iVar2 = *(int *)(param_2 + 0xc);
        *(int *)(param_1 + 0xc) = iVar2;
        if ((((param_2 + 0x10 < pcVar1) && (iVar2 == *(int *)((ulong)uVar5 * 4 + 0x9e60828))) &&
            ((*(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10),
             param_2 + 0x14 < pcVar1 &&
             (((*(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14),
               param_2 + 0x18 < pcVar1 &&
               (*(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18),
               param_2 + 0x1c < pcVar1)) &&
              (*(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c),
              param_2 + 0x20 < pcVar1)))))) &&
           (*(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20),
           param_2 + 0x28 < pcVar1)) {
          lVar4 = 0;
          do {
            lVar6 = lVar4;
            *(undefined2 *)(param_1 + lVar6 + 0x28) = *(undefined2 *)(param_2 + lVar6 + 0x2a + -2);
            if (pcVar1 <= param_2 + lVar6 + 0x2a) {
              return 0;
            }
            lVar4 = lVar6 + 2;
          } while (lVar6 + 2 != 0x100);
          param_1[0x128] = param_2[0x128];
          param_1[0x129] = param_2[0x129];
          param_1[0x12a] = param_2[0x12a];
          param_1[299] = param_2[299];
          param_1[300] = param_2[300];
          param_1[0x12d] = param_2[0x12d];
          param_1[0x12e] = param_2[0x12e];
          param_1[0x12f] = param_2[0x12f];
          param_1[0x130] = param_2[0x130];
          param_1[0x131] = param_2[0x131];
          param_1[0x132] = param_2[0x132];
          param_1[0x133] = param_2[0x133];
          param_1[0x134] = param_2[0x134];
          param_1[0x135] = param_2[0x135];
          param_1[0x136] = param_2[0x136];
          param_1[0x137] = param_2[0x137];
          param_1[0x138] = param_2[0x138];
          param_1[0x139] = param_2[0x139];
          param_1[0x13a] = param_2[0x13a];
          param_1[0x13b] = param_2[0x13b];
          param_1[0x13c] = param_2[0x13c];
          param_1[0x13d] = param_2[0x13d];
          param_1[0x13e] = param_2[0x13e];
          param_1[0x13f] = param_2[0x13f];
          param_1[0x140] = param_2[0x140];
          param_1[0x141] = param_2[0x141];
          param_1[0x142] = param_2[0x142];
          param_1[0x143] = param_2[0x143];
          param_1[0x144] = param_2[0x144];
          param_1[0x145] = param_2[0x145];
          param_1[0x146] = param_2[0x146];
          param_1[0x147] = param_2[0x147];
          param_1[0x148] = param_2[0x148];
          param_1[0x149] = param_2[0x149];
          param_1[0x14a] = param_2[0x14a];
          param_1[0x14b] = param_2[0x14b];
          param_1[0x14c] = param_2[0x14c];
          param_1[0x14d] = param_2[0x14d];
          param_1[0x14e] = param_2[0x14e];
          param_1[0x14f] = param_2[0x14f];
          param_1[0x150] = param_2[0x150];
          param_1[0x151] = param_2[0x151];
          param_1[0x152] = param_2[0x152];
          if (((param_2 + lVar6 + 0x55 < pcVar1) &&
              (param_2 + lVar6 + 0x56 < pcVar1 && param_2[lVar6 + 0x55] == '\0')) &&
             ((*(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154),
              param_2 + 0x158 < pcVar1 &&
              ((*(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158),
               param_2 + 0x15c < pcVar1 &&
               (*(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c),
               param_2 + 0x160 < pcVar1)))))) {
            iVar2 = *(int *)(param_2 + 0x160);
            *(int *)(param_1 + 0x160) = iVar2;
            if ((param_2 + 0x164 < pcVar1) &&
               (*(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x164),
               param_2 + 0x168 < pcVar1)) {
              *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
              if ((((param_2 + 0x16c < pcVar1) && (param_2[0x16c] == '\0')) &&
                  (param_2 + 0x16d < pcVar1)) &&
                 (((param_2[0x16d] == '\0' && (param_2 + 0x16e < pcVar1)) &&
                  ((param_2[0x16e] == '\0' &&
                   ((param_2 + 0x16f < pcVar1 && (param_2[0x16f] == '\0')))))))) {
                uVar5 = 0x4bf672ed;
                lVar4 = 0;
                param_1[0x160] = '\0';
                param_1[0x161] = '\0';
                param_1[0x162] = '\0';
                param_1[0x163] = '\0';
                do {
                  pcVar1 = param_1 + lVar4;
                  lVar4 = lVar4 + 1;
                  uVar5 = ((int)*pcVar1 + uVar5) * 0x401;
                  uVar5 = uVar5 >> 6 ^ uVar5;
                } while (lVar4 != 0x170);
                *(int *)(param_1 + 0x160) = iVar2;
                iVar3 = (uVar5 * 9 >> 0xb ^ uVar5 * 9) * 0x8001;
                return CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == iVar2);
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


