#include <platform.h>

#include "gr/ground.h"
#include "lb/lb_00B0.h"

#include <dolphin/mtx/types.h>
#include <baselib/jobj.h>

bool grCastle_801D0B0C(Vec3* v, u32 arg1, HSD_JObj* jobj)
{
    Vec3 pos;
    float temp_f30;
    float temp_f31;
    float temp_f31_2;

    temp_f31 = 192.0f;
    temp_f30 = 137.0f;
    temp_f31_2 = temp_f31 * Ground_801C0498();
    if ((v->x > temp_f31_2) && (v->y < (temp_f30 * Ground_801C0498()))) {
        return 0;
    }
    lb_8000B1CC(jobj, NULL, &pos);
    if ((1 + v->y) > pos.y) {
        return 1;
    }
    return 0;
}

void grCastle_801CD338(void) {
    HSD_GObj* temp_r3;
    HSD_JObj* temp_r3_2;

    temp_r3 = Ground_801C2BA4(6);
    if (temp_r3 != NULL) {
        temp_r3_2 = Ground_801C3FA4(temp_r3, 4);
        if (temp_r3_2 != NULL) {
            HSD_JObjSetFlagsAll(temp_r3_2, 0x10U);
        }
    }
}

void grCastle_801CD4A4(void) {
    grZakoGenerator_801CAE04(0);
}

void grCastle_801CD4D0(u8);                     /* extern */
extern Vec3 grCs_803B7E90;
extern void* grCs_804D6970;
extern s32 grCs_804D6974;
extern f32 grCs_804DAE18;
extern f32 grCs_804DAE1C;
extern f32 grCs_804DAE20;
extern f32 grCs_804DAE24;
extern f32 grCs_804DAE28;

void grCastle_801CD37C(void) {
    s32 sp14;
    s32 sp10;
    Vec3 spC;
    StageInfo* temp_r5;

    grCs_804D6970 = Ground_801C49F8();
    temp_r5 = &stage_info + 0x8C;
    // *temp_r5 = stage_info.unk8C & ~8;
    // *temp_r5 |= 4;
    stage_info.unk8C.b3 = 0;
    stage_info.unk8C.b2 = 1;
    grCastle_801CD4D0(0);
    grCastle_801CD4D0(4);
    grCastle_801CD4D0(3);
    grCastle_801CD4D0(6);
    mpLib_80057BC0(0);
    mpLib_80057BC0(1);
    mpLib_80057BC0(2);
    mpLib_80057BC0(6);
    mpLib_80057BC0(7);
    mpLib_80057BC0(8);
    mpLib_80057BC0(9);
    mpLib_80057BC0(0xA);
    mpLib_80057BC0(0xB);
    mpLib_80057BC0(0xC);
    mpLib_80057BC0(0xD);
    mpLib_80057BC0(0xE);
    Ground_801C39C0();
    Ground_801C3BB4();
    spC = grCs_803B7E90;
    lb_80011A50((Vec3* ) &spC, -1, grCs_804DAE18, grCs_804DAE1C, grCs_804DAE20, grCs_804DAE24, grCs_804DAE28, grCs_804DAE28, grCs_804DAE24);
    grCs_804D6974 = M2C_ERROR(/* Read from unset register $r3 */);
}


