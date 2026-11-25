// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140174d20  size: 5119 bytes
// Name:    FUN_140174d20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140174d20(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auVar4 [32];
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  bool bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  bool bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  bool bVar52;
  bool bVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  undefined1 auVar57 [16];
  uint uVar58;
  uint uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  
  cVar10 = func_0x000145214910(param_2,0x10,1);
  cVar11 = func_0x000145214910(param_2,2,1);
  cVar12 = func_0x000145214910(param_2,0x14,1);
  cVar13 = func_0x000145214910(param_2,0x15,1);
  cVar14 = func_0x000145214910(param_2,0x1a,1);
  cVar15 = func_0x000145214910(param_2,3,1);
  cVar16 = func_0x000145214910(param_2,9,1);
  cVar17 = func_0x000145214910(param_2,6,1);
  cVar18 = func_0x000145214910(param_2,0xc,1);
  cVar19 = func_0x000145214910(param_2,7,1);
  cVar20 = func_0x000145214910(param_2,0xd,1);
  cVar21 = func_0x000140369690(param_2,7);
  cVar22 = func_0x000140369690(param_2,0xd);
  bVar5 = cVar14 == '\x03';
  bVar6 = cVar13 == '\x03';
  bVar46 = cVar15 == '\x04';
  bVar47 = cVar19 == '\x02';
  bVar2 = '\x06' < cVar21;
  bVar48 = cVar15 == '\x03';
  bVar49 = cVar19 == '\x02';
  bVar44 = (byte)(cVar21 - 5U) < 2;
  bVar34 = bVar48 || bVar44 && bVar49;
  bVar50 = cVar16 == '\x04';
  bVar51 = cVar20 == '\x02';
  bVar3 = '\x06' < cVar22;
  bVar52 = cVar16 == '\x03';
  bVar53 = cVar20 == '\x02';
  bVar45 = (byte)(cVar22 - 5U) < 2;
  bVar30 = bVar52 || bVar45 && bVar53;
  bVar23 = (cVar10 != '\x03') * '\x03' + 3;
  bVar24 = 6;
  if (cVar10 == '\x04') {
    bVar24 = 0;
  }
  if (bVar23 <= bVar24) {
    bVar24 = bVar23;
  }
  if (cVar11 == '\x04') {
    bVar23 = 2;
    if (bVar24 < 2) {
      bVar23 = bVar24;
    }
    bVar24 = bVar23;
    bVar23 = 6;
  }
  else {
    bVar23 = (cVar11 != '\x03') * '\x02' | 4;
  }
  if (bVar24 < bVar23) {
    bVar23 = bVar24;
  }
  if (cVar12 == '\x04') {
    bVar24 = 3;
    if (bVar23 < 3) {
      bVar24 = bVar23;
    }
    bVar23 = bVar24;
    bVar24 = 6;
  }
  else {
    bVar24 = 6 - (cVar12 == '\x03');
  }
  if (bVar23 < bVar24) {
    bVar24 = bVar23;
  }
  if (cVar13 == '\x04') {
    bVar23 = 4;
    if (bVar24 < 4) {
      bVar23 = bVar24;
    }
    bVar24 = bVar23;
    bVar23 = 6;
  }
  else {
    bVar23 = 6 - (cVar13 == '\x03');
  }
  if (bVar24 < bVar23) {
    bVar23 = bVar24;
  }
  if (cVar14 == '\x04') {
    bVar24 = 4;
    if (bVar23 < 4) {
      bVar24 = bVar23;
    }
    bVar29 = (cVar13 != '\x04') * '\x02' | 4;
  }
  else {
    bVar29 = 6;
    bVar24 = 6 - (cVar14 == '\x03');
    if (bVar23 < bVar24) {
      bVar24 = bVar23;
    }
  }
  if (bVar24 < bVar29) {
    bVar29 = bVar24;
  }
  bVar24 = 6 - (bVar5 && bVar6);
  bVar23 = 6;
  if (bVar24 <= bVar29) {
    bVar29 = bVar24;
  }
  bVar33 = (!bVar46 && (!bVar47 || !bVar2)) * '\x03' + 3;
  if (bVar33 <= bVar29) {
    bVar29 = bVar33;
  }
  bVar25 = 6 - bVar34;
  if (bVar25 <= bVar29) {
    bVar29 = bVar25;
  }
  bVar32 = (!bVar50 && (!bVar51 || !bVar3)) * '\x03' + 3;
  if (bVar32 <= bVar29) {
    bVar29 = bVar32;
  }
  bVar26 = 6 - bVar30;
  if (bVar26 <= bVar29) {
    bVar29 = bVar26;
  }
  bVar31 = (!bVar46 && (!bVar47 || !bVar2) || !bVar50 && (!bVar51 || !bVar3)) * '\x03' + 3;
  if (bVar31 <= bVar29) {
    bVar29 = bVar31;
  }
  bVar27 = 6 - (bVar34 && bVar30);
  if (bVar27 <= bVar29) {
    bVar29 = bVar27;
  }
  if (cVar17 == '\x04') {
    bVar40 = 3;
    if (bVar29 < 3) {
      bVar40 = bVar29;
    }
  }
  else {
    bVar23 = 6 - (cVar17 == '\x03');
    bVar40 = bVar29;
  }
  if (bVar40 < bVar23) {
    bVar23 = bVar40;
  }
  if (cVar18 == '\x04') {
    bVar29 = 3;
    if (bVar23 < 3) {
      bVar29 = bVar23;
    }
    bVar23 = bVar29;
    bVar29 = 6;
  }
  else {
    bVar29 = 6 - (cVar18 == '\x03');
  }
  if (bVar23 < bVar29) {
    bVar29 = bVar23;
  }
  uVar54 = _DAT_145fc6ed8;
  if (bVar29 < 6) {
    uVar54 = *(uint *)(&UNK_1467236d8 + (ulonglong)bVar29 * 4);
  }
  bVar23 = (cVar10 != '\x03') * '\x02' | 4;
  bVar29 = (cVar10 != '\x04') << 2 | 2;
  if (bVar29 < bVar23) {
    bVar23 = bVar29;
  }
  bVar29 = (cVar11 != '\x03') * '\x03' + 3;
  bVar40 = 0;
  if (cVar11 != '\x04') {
    bVar40 = bVar23;
  }
  if (bVar29 <= bVar40) {
    bVar40 = bVar29;
  }
  if (cVar12 == '\x04') {
    bVar23 = 2;
    if (bVar40 < 2) {
      bVar23 = bVar40;
    }
    bVar40 = bVar23;
    bVar23 = 6;
  }
  else {
    bVar23 = (cVar12 != '\x03') * '\x02' | 4;
  }
  if (bVar40 < bVar23) {
    bVar23 = bVar40;
  }
  if (cVar13 == '\x04') {
    bVar29 = 3;
    if (bVar23 < 3) {
      bVar29 = bVar23;
    }
    bVar23 = bVar29;
    bVar29 = 6;
  }
  else {
    bVar29 = 6 - (cVar13 == '\x03');
  }
  if (bVar23 < bVar29) {
    bVar29 = bVar23;
  }
  if (cVar14 == '\x04') {
    bVar23 = 3;
    if (bVar29 < 3) {
      bVar23 = bVar29;
    }
    bVar40 = (cVar13 != '\x04') * '\x03' + 3;
  }
  else {
    bVar40 = 6;
    bVar23 = 6 - (cVar14 == '\x03');
    if (bVar29 < bVar23) {
      bVar23 = bVar29;
    }
  }
  if (bVar23 < bVar40) {
    bVar40 = bVar23;
  }
  bVar23 = (!bVar5 || !bVar6) * '\x02' | 4;
  if (bVar23 <= bVar40) {
    bVar40 = bVar23;
  }
  bVar30 = !bVar46 && (!bVar47 || !bVar2);
  bVar23 = bVar30 * '\x04' | 2;
  if (bVar23 <= bVar40) {
    bVar40 = bVar23;
  }
  bVar23 = (!bVar48 && (!bVar44 || !bVar49)) * '\x02' | 4;
  if (bVar23 <= bVar40) {
    bVar40 = bVar23;
  }
  bVar29 = (!bVar50 && (!bVar51 || !bVar3)) << 2 | 2;
  if (bVar29 <= bVar40) {
    bVar40 = bVar29;
  }
  bVar29 = (!bVar52 && (!bVar45 || !bVar53)) * '\x02' | 4;
  if (bVar29 <= bVar40) {
    bVar40 = bVar29;
  }
  bVar28 = (!bVar46 && (!bVar47 || !bVar2) || !bVar50 && (!bVar51 || !bVar3)) << 2 | 2;
  if (bVar28 <= bVar40) {
    bVar40 = bVar28;
  }
  bVar28 = (!bVar48 && (!bVar44 || !bVar49) || !bVar52 && (!bVar45 || !bVar53)) * '\x02' | 4;
  if (bVar28 <= bVar40) {
    bVar40 = bVar28;
  }
  if (cVar17 == '\x04') {
    bVar28 = 2;
    if (bVar40 < 2) {
      bVar28 = bVar40;
    }
    bVar40 = bVar28;
    bVar28 = 6;
  }
  else {
    bVar28 = (cVar17 != '\x03') * '\x02' | 4;
  }
  if (bVar40 < bVar28) {
    bVar28 = bVar40;
  }
  if (cVar18 == '\x04') {
    bVar40 = 2;
    if (bVar28 < 2) {
      bVar40 = bVar28;
    }
    bVar28 = bVar40;
    bVar40 = 6;
  }
  else {
    bVar40 = (cVar18 != '\x03') * '\x02' | 4;
  }
  if (bVar28 < bVar40) {
    bVar40 = bVar28;
  }
  uVar55 = _DAT_145fc6ed8;
  if (bVar40 < 6) {
    uVar55 = *(uint *)(&UNK_1467236d8 + (ulonglong)bVar40 * 4);
  }
  bVar28 = 6;
  bVar41 = 6 - (cVar10 == '\x03');
  bVar40 = (cVar10 != '\x04') * '\x03' + 3;
  if (bVar41 <= bVar40) {
    bVar40 = bVar41;
  }
  bVar37 = (cVar11 != '\x03') * '\x02' | 4;
  if (cVar11 == '\x04') {
    bVar40 = 2;
  }
  if (bVar37 <= bVar40) {
    bVar40 = bVar37;
  }
  bVar37 = (cVar12 != '\x03') * '\x03' + 3;
  bVar39 = 0;
  if (cVar12 != '\x04') {
    bVar39 = bVar40;
  }
  if (bVar37 <= bVar39) {
    bVar39 = bVar37;
  }
  if (cVar13 == '\x04') {
    bVar37 = 2;
    if (bVar39 < 2) {
      bVar37 = bVar39;
    }
  }
  else {
    bVar28 = (cVar13 != '\x03') * '\x02' | 4;
    bVar37 = bVar39;
  }
  if (bVar37 < bVar28) {
    bVar28 = bVar37;
  }
  if (cVar14 == '\x04') {
    bVar37 = 2;
    if (bVar28 < 2) {
      bVar37 = bVar28;
    }
    bVar39 = (cVar13 != '\x04') << 2 | 2;
  }
  else {
    bVar39 = 6;
    bVar37 = (cVar14 != '\x03') * '\x02' | 4;
    if (bVar28 < bVar37) {
      bVar37 = bVar28;
    }
  }
  if (bVar37 < bVar39) {
    bVar39 = bVar37;
  }
  bVar28 = (!bVar5 || !bVar6) * '\x03' + 3;
  if (bVar28 <= bVar39) {
    bVar39 = bVar28;
  }
  if (bVar33 <= bVar39) {
    bVar39 = bVar33;
  }
  if (bVar23 <= bVar39) {
    bVar39 = bVar23;
  }
  if (bVar32 <= bVar39) {
    bVar39 = bVar32;
  }
  if (bVar29 <= bVar39) {
    bVar39 = bVar29;
  }
  if (bVar31 <= bVar39) {
    bVar39 = bVar31;
  }
  bVar23 = (!bVar48 && (!bVar44 || !bVar49) || !bVar52 && (!bVar45 || !bVar53)) * '\x03' + 3;
  if (bVar23 <= bVar39) {
    bVar39 = bVar23;
  }
  if (cVar17 == '\x04') {
    bVar29 = 3;
    if (bVar39 < 3) {
      bVar29 = bVar39;
    }
    bVar39 = bVar29;
    bVar29 = 6;
  }
  else {
    bVar29 = (cVar17 != '\x03') * '\x02' | 4;
  }
  if (bVar39 < bVar29) {
    bVar29 = bVar39;
  }
  if (cVar18 == '\x04') {
    bVar37 = 3;
    if (bVar29 < 3) {
      bVar37 = bVar29;
    }
    bVar29 = bVar37;
    bVar37 = 6;
  }
  else {
    bVar37 = (cVar18 != '\x03') * '\x02' | 4;
  }
  if (bVar29 < bVar37) {
    bVar37 = bVar29;
  }
  uVar56 = _DAT_145fc6ed8;
  if (bVar37 < 6) {
    uVar56 = *(uint *)(&UNK_1467236d8 + (ulonglong)bVar37 * 4);
  }
  if (cVar12 == '\x04') {
    bVar29 = 3;
    if (bVar40 < 3) {
      bVar29 = bVar40;
    }
    bVar37 = 6;
  }
  else {
    bVar37 = 6 - (cVar12 == '\x03');
    bVar29 = bVar40;
  }
  if (bVar29 < bVar37) {
    bVar37 = bVar29;
  }
  if (cVar13 == '\x04') {
    bVar29 = 3;
    if (bVar37 < 3) {
      bVar29 = bVar37;
    }
    bVar37 = bVar29;
    bVar29 = 6;
  }
  else {
    bVar29 = 6 - (cVar13 == '\x03');
  }
  if (bVar37 < bVar29) {
    bVar29 = bVar37;
  }
  if (cVar14 == '\x04') {
    bVar37 = 4;
    if (bVar29 < 4) {
      bVar37 = bVar29;
    }
    bVar39 = (cVar13 != '\x04') * '\x02' | 4;
  }
  else {
    bVar39 = 6;
    bVar37 = 6 - (cVar14 == '\x03');
    if (bVar29 < bVar37) {
      bVar37 = bVar29;
    }
  }
  if (bVar37 < bVar39) {
    bVar39 = bVar37;
  }
  if (bVar24 <= bVar39) {
    bVar39 = bVar24;
  }
  bVar29 = 6;
  if (bVar46 || bVar47 && bVar2) {
    bVar29 = 0;
  }
  bVar37 = bVar29;
  if (bVar39 < bVar29) {
    bVar37 = bVar39;
  }
  bVar39 = (!bVar48 && (!bVar44 || !bVar49)) * '\x03' + 3;
  if (bVar39 <= bVar37) {
    bVar37 = bVar39;
  }
  if (bVar32 <= bVar37) {
    bVar37 = bVar32;
  }
  if (bVar26 <= bVar37) {
    bVar37 = bVar26;
  }
  bVar43 = 6;
  if ((bVar46 || bVar47 && bVar2) && (bVar50 || bVar51 && bVar3)) {
    bVar43 = 0;
  }
  bVar42 = bVar43;
  if (bVar37 < bVar43) {
    bVar42 = bVar37;
  }
  if (cVar17 == '\x04') {
    bVar42 = bVar42 != 0;
    bVar37 = 6;
  }
  else {
    if (bVar23 <= bVar42) {
      bVar42 = bVar23;
    }
    bVar37 = (cVar17 != '\x03') * '\x03' + 3;
  }
  if (bVar42 < bVar37) {
    bVar37 = bVar42;
  }
  if (cVar18 == '\x04') {
    bVar42 = 3;
    if (bVar37 < 3) {
      bVar42 = bVar37;
    }
    bVar37 = bVar42;
    bVar42 = 6;
  }
  else {
    bVar42 = 6 - (cVar18 == '\x03');
  }
  if (bVar37 < bVar42) {
    bVar42 = bVar37;
  }
  uVar7 = _DAT_145fc6ed8;
  if (bVar42 < 6) {
    uVar7 = *(uint *)(&UNK_1467236d8 + (ulonglong)bVar42 * 4);
  }
  if (cVar12 == '\x04') {
    bVar37 = 3;
    if (bVar40 < 3) {
      bVar37 = bVar40;
    }
    bVar42 = 6;
  }
  else {
    bVar42 = 6 - (cVar12 == '\x03');
    bVar37 = bVar40;
  }
  if (bVar37 < bVar42) {
    bVar42 = bVar37;
  }
  if (cVar13 == '\x04') {
    bVar37 = 3;
    if (bVar42 < 3) {
      bVar37 = bVar42;
    }
    bVar42 = bVar37;
    bVar37 = 6;
  }
  else {
    bVar37 = 6 - (cVar13 == '\x03');
  }
  if (bVar42 < bVar37) {
    bVar37 = bVar42;
  }
  if (cVar14 == '\x04') {
    bVar42 = 4;
    if (bVar37 < 4) {
      bVar42 = bVar37;
    }
    bVar35 = (cVar13 != '\x04') * '\x02' | 4;
  }
  else {
    bVar35 = 6;
    bVar42 = 6 - (cVar14 == '\x03');
    if (bVar37 < bVar42) {
      bVar42 = bVar37;
    }
  }
  if (bVar42 < bVar35) {
    bVar35 = bVar42;
  }
  if (bVar24 <= bVar35) {
    bVar35 = bVar24;
  }
  if (bVar33 <= bVar35) {
    bVar35 = bVar33;
  }
  if (bVar25 <= bVar35) {
    bVar35 = bVar25;
  }
  bVar37 = 6;
  if (bVar50 || bVar51 && bVar3) {
    bVar37 = 0;
  }
  bVar42 = bVar37;
  if (bVar35 < bVar37) {
    bVar42 = bVar35;
  }
  bVar35 = (!bVar52 && (!bVar45 || !bVar53)) * '\x03' + 3;
  if (bVar35 <= bVar42) {
    bVar42 = bVar35;
  }
  if (bVar43 <= bVar42) {
    bVar42 = bVar43;
  }
  if (bVar23 <= bVar42) {
    bVar42 = bVar23;
  }
  if (cVar17 == '\x04') {
    bVar38 = 3;
    if (bVar42 < 3) {
      bVar38 = bVar42;
    }
    bVar42 = bVar38;
    bVar38 = 6;
  }
  else {
    bVar38 = 6 - (cVar17 == '\x03');
  }
  if (cVar18 == '\x04') {
    bVar38 = bVar42 != 0;
    bVar42 = 6;
  }
  else {
    if (bVar42 < bVar38) {
      bVar38 = bVar42;
    }
    bVar42 = (cVar18 != '\x03') * '\x03' + 3;
  }
  if (bVar38 < bVar42) {
    bVar42 = bVar38;
  }
  uVar8 = _DAT_145fc6ed8;
  if (bVar42 < 6) {
    uVar8 = *(uint *)(&UNK_1467236d8 + (ulonglong)bVar42 * 4);
  }
  bVar42 = (cVar10 != '\x04') * '\x02' | 4;
  if (bVar42 < bVar41) {
    bVar41 = bVar42;
  }
  bVar42 = 6 - (cVar11 == '\x03');
  if (cVar11 == '\x04') {
    bVar41 = 2;
  }
  if (bVar42 <= bVar41) {
    bVar41 = bVar42;
  }
  bVar42 = (cVar12 != '\x03') * '\x02' | 4;
  if (cVar12 == '\x04') {
    bVar41 = 2;
  }
  if (bVar42 <= bVar41) {
    bVar41 = bVar42;
  }
  bVar42 = (cVar13 != '\x03') * '\x03' + 3;
  bVar38 = bVar41;
  if (cVar13 == '\x04') {
    bVar38 = 0;
  }
  if (bVar42 <= bVar38) {
    bVar38 = bVar42;
  }
  if (cVar14 == '\x04') {
    bVar42 = 4;
    if (bVar38 < 4) {
      bVar42 = bVar38;
    }
    bVar36 = 6;
    if (cVar13 == '\x04') {
      bVar36 = 0;
    }
  }
  else {
    bVar42 = 6 - (cVar14 == '\x03');
    bVar36 = 6;
    if (bVar38 < bVar42) {
      bVar42 = bVar38;
    }
  }
  if (bVar42 < bVar36) {
    bVar36 = bVar42;
  }
  if (bVar28 <= bVar36) {
    bVar36 = bVar28;
  }
  bVar42 = bVar30 * '\x02' | 4;
  if (bVar42 <= bVar36) {
    bVar36 = bVar42;
  }
  if (bVar25 <= bVar36) {
    bVar36 = bVar25;
  }
  if (bVar32 <= bVar36) {
    bVar36 = bVar32;
  }
  if (bVar26 <= bVar36) {
    bVar36 = bVar26;
  }
  if (bVar31 <= bVar36) {
    bVar36 = bVar31;
  }
  if (bVar27 <= bVar36) {
    bVar36 = bVar27;
  }
  if (cVar17 == '\x04') {
    bVar38 = 3;
    if (bVar36 < 3) {
      bVar38 = bVar36;
    }
    bVar36 = bVar38;
    bVar38 = 6;
  }
  else {
    bVar38 = 6 - (cVar17 == '\x03');
  }
  if (bVar36 < bVar38) {
    bVar38 = bVar36;
  }
  if (cVar18 == '\x04') {
    bVar36 = 3;
    if (bVar38 < 3) {
      bVar36 = bVar38;
    }
    bVar38 = bVar36;
    bVar36 = 6;
  }
  else {
    bVar36 = 6 - (cVar18 == '\x03');
  }
  if (bVar38 < bVar36) {
    bVar36 = bVar38;
  }
  uVar58 = _DAT_145fc6ed8;
  if (bVar36 < 6) {
    uVar58 = *(uint *)(&UNK_1467236d8 + (ulonglong)bVar36 * 4);
  }
  if (cVar13 == '\x04') {
    bVar38 = 3;
    if (bVar41 < 3) {
      bVar38 = bVar41;
    }
    bVar41 = bVar38;
    bVar38 = 6;
  }
  else {
    bVar38 = (cVar13 != '\x03') * '\x02' | 4;
  }
  if (cVar14 == '\x04') {
    bVar38 = 0;
    bVar41 = 6;
    if (cVar13 == '\x04') {
      bVar41 = bVar38;
    }
  }
  else {
    if (bVar41 < bVar38) {
      bVar38 = bVar41;
    }
    bVar41 = (cVar14 != '\x03') * '\x03' + 3;
    if (bVar41 <= bVar38) {
      bVar38 = bVar41;
    }
    bVar41 = 6;
  }
  if (bVar38 < bVar41) {
    bVar41 = bVar38;
  }
  if (bVar41 < bVar28) {
    bVar28 = bVar41;
  }
  if (bVar42 <= bVar28) {
    bVar28 = bVar42;
  }
  if (bVar25 <= bVar28) {
    bVar28 = bVar25;
  }
  if (bVar32 <= bVar28) {
    bVar28 = bVar32;
  }
  if (bVar26 <= bVar28) {
    bVar28 = bVar26;
  }
  if (bVar28 < bVar31) {
    bVar31 = bVar28;
  }
  if (bVar27 <= bVar31) {
    bVar31 = bVar27;
  }
  if (cVar17 == '\x04') {
    bVar27 = 3;
    if (bVar31 < 3) {
      bVar27 = bVar31;
    }
    bVar31 = bVar27;
    bVar27 = 6;
  }
  else {
    bVar27 = 6 - (cVar17 == '\x03');
  }
  if (bVar31 < bVar27) {
    bVar27 = bVar31;
  }
  if (cVar18 == '\x04') {
    bVar31 = 3;
    if (bVar27 < 3) {
      bVar31 = bVar27;
    }
    bVar27 = bVar31;
    bVar31 = 6;
  }
  else {
    bVar31 = 6 - (cVar18 == '\x03');
  }
  if (bVar27 < bVar31) {
    bVar31 = bVar27;
  }
  uVar59 = _DAT_145fc6ed8;
  if (bVar31 < 6) {
    uVar59 = *(uint *)(&UNK_1467236d8 + (ulonglong)bVar31 * 4);
  }
  if (cVar12 == '\x04') {
    bVar31 = 3;
    if (bVar40 < 3) {
      bVar31 = bVar40;
    }
    bVar27 = 6;
  }
  else {
    bVar27 = 6 - (cVar12 == '\x03');
    bVar31 = bVar40;
  }
  if (bVar31 < bVar27) {
    bVar27 = bVar31;
  }
  if (cVar13 == '\x04') {
    bVar31 = 3;
    if (bVar27 < 3) {
      bVar31 = bVar27;
    }
    bVar27 = bVar31;
    bVar31 = 6;
  }
  else {
    bVar31 = 6 - (cVar13 == '\x03');
  }
  if (bVar27 < bVar31) {
    bVar31 = bVar27;
  }
  if (cVar14 == '\x04') {
    bVar27 = 4;
    if (bVar31 < 4) {
      bVar27 = bVar31;
    }
    bVar28 = (cVar13 != '\x04') * '\x02' | 4;
  }
  else {
    bVar28 = 6;
    bVar27 = 6 - (cVar14 == '\x03');
    if (bVar31 < bVar27) {
      bVar27 = bVar31;
    }
  }
  if (bVar27 < bVar28) {
    bVar28 = bVar27;
  }
  if (bVar24 <= bVar28) {
    bVar28 = bVar24;
  }
  if (bVar28 < bVar29) {
    bVar29 = bVar28;
  }
  if (bVar29 < bVar39) {
    bVar39 = bVar29;
  }
  if (bVar39 < bVar32) {
    bVar32 = bVar39;
  }
  if (bVar26 <= bVar32) {
    bVar32 = bVar26;
  }
  if (bVar43 <= bVar32) {
    bVar32 = bVar43;
  }
  if (bVar23 <= bVar32) {
    bVar32 = bVar23;
  }
  bVar29 = (cVar17 != '\x03') * '\x03' + 3;
  bVar26 = 0;
  if (cVar17 != '\x04') {
    bVar26 = bVar32;
  }
  if (bVar29 <= bVar26) {
    bVar26 = bVar29;
  }
  if (cVar18 == '\x04') {
    bVar29 = 3;
    if (bVar26 < 3) {
      bVar29 = bVar26;
    }
    bVar26 = bVar29;
    bVar29 = 6;
  }
  else {
    bVar29 = 6 - (cVar18 == '\x03');
  }
  if (bVar26 < bVar29) {
    bVar29 = bVar26;
  }
  uVar9 = _DAT_145fc6ed8;
  if (bVar29 < 6) {
    uVar9 = *(uint *)(&UNK_1467236d8 + (ulonglong)bVar29 * 4);
  }
  if (cVar12 == '\x04') {
    bVar29 = 3;
    if (bVar40 < 3) {
      bVar29 = bVar40;
    }
    bVar40 = bVar29;
    bVar29 = 6;
  }
  else {
    bVar29 = 6 - (cVar12 == '\x03');
  }
  if (bVar40 < bVar29) {
    bVar29 = bVar40;
  }
  if (cVar13 == '\x04') {
    bVar32 = 3;
    if (bVar29 < 3) {
      bVar32 = bVar29;
    }
    bVar29 = bVar32;
    bVar32 = 6;
  }
  else {
    bVar32 = 6 - (cVar13 == '\x03');
  }
  if (bVar29 < bVar32) {
    bVar32 = bVar29;
  }
  if (cVar14 == '\x04') {
    bVar29 = 4;
    if (bVar32 < 4) {
      bVar29 = bVar32;
    }
    bVar26 = (cVar13 != '\x04') * '\x02' | 4;
  }
  else {
    bVar26 = 6;
    bVar29 = 6 - (cVar14 == '\x03');
    if (bVar32 < bVar29) {
      bVar29 = bVar32;
    }
  }
  if (bVar29 < bVar26) {
    bVar26 = bVar29;
  }
  if (bVar24 <= bVar26) {
    bVar26 = bVar24;
  }
  if (bVar26 < bVar33) {
    bVar33 = bVar26;
  }
  if (bVar25 <= bVar33) {
    bVar33 = bVar25;
  }
  if (bVar33 < bVar37) {
    bVar37 = bVar33;
  }
  if (bVar37 < bVar35) {
    bVar35 = bVar37;
  }
  if (bVar35 < bVar43) {
    bVar43 = bVar35;
  }
  if (bVar43 < bVar23) {
    bVar23 = bVar43;
  }
  if (cVar17 == '\x04') {
    bVar24 = 3;
    if (bVar23 < 3) {
      bVar24 = bVar23;
    }
    bVar23 = bVar24;
    bVar24 = 6;
  }
  else {
    bVar24 = 6 - (cVar17 == '\x03');
  }
  if (bVar23 < bVar24) {
    bVar24 = bVar23;
  }
  bVar23 = (cVar18 != '\x03') * '\x03' + 3;
  bVar29 = 0;
  if (cVar18 != '\x04') {
    bVar29 = bVar24;
  }
  if (bVar23 <= bVar29) {
    bVar29 = bVar23;
  }
  auVar60 = ZEXT416(_DAT_145fc6ed8);
  auVar57 = auVar60;
  if (bVar29 < 6) {
    auVar57 = ZEXT416(*(uint *)(&UNK_1467236d8 + (ulonglong)bVar29 * 4));
  }
  auVar62._0_12_ = ZEXT812(0);
  auVar62._12_4_ = 0;
  auVar61._0_12_ = ZEXT812(0);
  auVar61._12_4_ = 0;
  if (cVar21 < '\x01') {
    auVar61 = auVar60;
  }
  if (cVar19 != '\x02') {
    auVar61 = auVar60;
  }
  if (cVar22 < '\x01') {
    auVar62 = auVar60;
  }
  if (cVar20 != '\x02') {
    auVar62 = auVar60;
  }
  auVar60 = vshufps_avx(auVar57,auVar62,0);
  *(uint *)(param_1 + 0x10) = uVar56;
  *(uint *)(param_1 + 0x14) = uVar58;
  *(uint *)(param_1 + 0x18) = uVar59;
  *(uint *)(param_1 + 0x1c) = uVar56;
  *(uint *)(param_1 + 0x20) = uVar55;
  *(uint *)(param_1 + 0x24) = uVar54;
  auVar57 = vinsertps_avx(ZEXT416(uVar7),ZEXT416(uVar8),0x10);
  auVar57 = vinsertps_avx(auVar57,ZEXT416(uVar9),0x20);
  auVar57 = vinsertps_avx(auVar57,auVar61,0x30);
  auVar4 = vpermps_avx2(_DAT_14615b440,ZEXT1632(auVar57));
  auVar57._4_4_ = _DAT_145fc6ed8;
  auVar57._0_4_ = _DAT_145fc6ed8;
  auVar57._8_4_ = _DAT_145fc6ed8;
  auVar57._12_4_ = _DAT_145fc6ed8;
  *(undefined1 (*) [32])(param_1 + 0x28) = auVar4;
  *(undefined1 (*) [16])(param_1 + 0x48) = auVar60;
  uVar1 = vmovlps_avx(auVar57);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(uint *)(param_1 + 0x60) = uVar56;
  uVar1 = vmovlps_avx(auVar57);
  *(undefined8 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  *(uint *)(param_1 + 0x70) = uVar58;
  *(uint *)(param_1 + 0x74) = uVar59;
  *(uint *)(param_1 + 0x78) = uVar55;
  *(byte *)(param_1 + 0x23c) = *(byte *)(param_1 + 0x23c) | 1;
  return;
}

