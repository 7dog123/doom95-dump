void fun_4303e0(void** ecx);

void fun_42ba80(void** ecx) {
    void** edx2;
    int32_t ebx3;
    struct s383* eax4;
    int32_t eax5;
    void** edi6;
    void** edx7;
    int32_t esi8;
    void** eax9;
    void* ecx10;
    void** ecx11;
    void** edx12;
    void** eax13;
    void** eax14;
    void** ebx15;
    void** edi16;
    void** eax17;

    edx2 = g4845dc;
    ebx3 = g4925d0;
    eax4 = reinterpret_cast<struct s383*>(edx2 + eax5 * 8);
    edi6 = g4925d8;
    edx7 = eax4->f0;
    esi8 = eax4->f4;
    eax9 = g4845e8;
    ecx10 = reinterpret_cast<void*>(static_cast<int32_t>(eax4->f6) << 5);
    g487e18 = edx7;
    ecx11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ecx10) + reinterpret_cast<unsigned char>(eax9));
    edx12 = *reinterpret_cast<void***>(edx7);
    g4925d0 = ebx3 + 1;
    if (reinterpret_cast<signed char>(edx12) >= reinterpret_cast<signed char>(edi6)) {
        g5ee6d8 = reinterpret_cast<void**>(0);
    } else {
        eax13 = fun_42e740(ecx11);
        g5ee6d8 = eax13;
    }
    eax14 = g487e18;
    ebx15 = g4925d8;
    if (reinterpret_cast<signed char>(ebx15) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax14 + 4)) || (edi16 = g5ee6d4, reinterpret_cast<int1_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax14 + 10))) == edi16))) {
        eax17 = fun_42e740(ecx11);
        g5ee6dc = eax17;
    } else {
        g5ee6dc = reinterpret_cast<void**>(0);
    }
    fun_4303e0(ecx11);
    while (--esi8, esi8 != -1) {
        fun_42b7d0(ecx11);
        ecx11 = ecx11 + 32;
    }
    return;
}

struct s384 {
    signed char f0;
    signed char f1;
    signed char[1] pad3;
    signed char f3;
};

struct s385 {
    signed char[4] pad4;
    signed char f4;
};

void fun_42bbd0(void** ecx, void** a2, void** a3) {
    struct s384* ebp4;
    struct s384* eax5;
    void* v6;
    void* edx7;
    void** edx8;
    signed char* eax9;
    void* eax10;
    signed char* esi11;
    void* ecx12;
    void* eax13;
    void* ebx14;
    signed char* edi15;
    void* eax16;
    uint32_t ecx17;
    int1_t zf18;
    int1_t zf19;
    void* eax20;
    struct s385* ebp21;

    ebp4 = eax5;
    v6 = edx7;
    edx8 = ecx;
    if (*eax9 != -1) {
        do {
            eax10 = reinterpret_cast<void*>(0);
            esi11 = &ebp4->f3;
            *reinterpret_cast<signed char*>(&eax10) = ebp4->f0;
            ecx12 = reinterpret_cast<void*>(0);
            eax13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax10) + reinterpret_cast<uint32_t>(ebx14));
            *reinterpret_cast<signed char*>(&ecx12) = ebp4->f1;
            if (reinterpret_cast<int32_t>(eax13) < reinterpret_cast<int32_t>(0)) {
                ecx12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx12) + reinterpret_cast<uint32_t>(eax13));
                eax13 = reinterpret_cast<void*>(0);
            }
            if (reinterpret_cast<signed char>(reinterpret_cast<uint32_t>(eax13) + reinterpret_cast<uint32_t>(ecx12)) > reinterpret_cast<signed char>(edx8)) {
                ecx12 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx8) - reinterpret_cast<uint32_t>(eax13));
            }
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ecx12) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ecx12 == 0))) {
                edi15 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(v6) + reinterpret_cast<uint32_t>(eax13));
                eax16 = ecx12;
                ecx17 = reinterpret_cast<uint32_t>(ecx12) >> 2;
                zf18 = ecx17 == 0;
                do {
                    if (!ecx17) 
                        break;
                    --ecx17;
                    *edi15 = *esi11;
                    edi15 = edi15 + 4;
                    esi11 = esi11 + 4;
                } while (!zf18);
                *reinterpret_cast<unsigned char*>(&ecx17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax16) & 3);
                zf19 = *reinterpret_cast<unsigned char*>(&ecx17) == 0;
                do {
                    if (!ecx17) 
                        break;
                    --ecx17;
                    *edi15 = *esi11;
                    ++edi15;
                    ++esi11;
                } while (!zf19);
            }
            eax20 = reinterpret_cast<void*>(0);
            *reinterpret_cast<signed char*>(&eax20) = ebp4->f1;
            ebp21 = reinterpret_cast<struct s385*>(reinterpret_cast<int32_t>(ebp4) + reinterpret_cast<int32_t>(eax20));
            ebp4 = reinterpret_cast<struct s384*>(&ebp21->f4);
        } while (ebp21->f4 != -1);
    }
    goto a3;
}

void** fun_4348a0(void** ecx, void** a2, void** a3) {
    int32_t edx4;
    int1_t zf5;
    int1_t cf6;
    void** eax7;
    void** ebp8;
    void** ebx9;
    void** ecx10;
    void** edi11;
    void** esi12;
    void** ebx13;
    void** eax14;

    if (edx4 != 3 || (zf5 = g4654e0 == 0, zf5)) {
        cf6 = reinterpret_cast<unsigned char>(eax7) < reinterpret_cast<unsigned char>(g60ae74);
        if (!cf6) {
            fun_43bd40(ecx, "W_CacheLumpNum: %i >= numlumps", eax7, ebp8);
        }
        ebx9 = g60ae64;
        ecx10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax7) * 4);
        if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ebx9) + reinterpret_cast<unsigned char>(ecx10))) {
            if (*reinterpret_cast<int32_t*>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ebx9) + reinterpret_cast<unsigned char>(ecx10)) + 0xfffffff4) != 0x1d4a11) {
                fun_43bd40(ecx10, "Z_CT at w_wad.c:%i", 0x212, ebp8);
            }
            fun_437910(ecx10, ebp8, edi11, esi12, ecx, ebx13, __return_address(), a2);
        } else {
            fun_434700(ecx10);
            fun_4375e0(ecx10, ebp8, edi11);
            fun_434740(ecx10);
        }
        eax14 = g60ae64;
        return *reinterpret_cast<void***>(eax14 + reinterpret_cast<unsigned char>(eax7) * 4);
    } else {
        return 0;
    }
}

void** g487f7c = reinterpret_cast<void**>(0);

void** g487f84 = reinterpret_cast<void**>(0x83);

struct s386 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
};

void** fun_42bc40(void** ecx) {
    void** ecx2;
    int32_t eax3;
    void** eax4;
    void** v5;
    void** v6;
    void** v7;
    void** eax8;
    void** v9;
    void** eax10;
    void** v11;
    void** eax12;
    void** v13;
    void** v14;
    struct s386* v15;
    void** v16;
    void** v17;
    void** eax18;
    void** eax19;
    void** v20;
    void** esi21;
    void** edx22;
    void*** ebp23;
    void** dx24;
    void** v25;
    int16_t* edx26;
    void** eax27;

    ecx2 = reinterpret_cast<void**>(eax3 * 4);
    eax4 = g487f6c;
    v5 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx2) + reinterpret_cast<unsigned char>(eax4));
    eax8 = fun_4375e0(ecx2, v6, v7);
    v9 = eax8;
    eax10 = g487f7c;
    v11 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx2) + reinterpret_cast<unsigned char>(eax10));
    eax12 = g487f84;
    v13 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx2) + reinterpret_cast<unsigned char>(eax12));
    v14 = reinterpret_cast<void**>(0);
    v15 = reinterpret_cast<struct s386*>(v5 + 14);
    while (reinterpret_cast<signed char>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v5 + 12)))) > reinterpret_cast<signed char>(v14)) {
        eax18 = fun_4348a0(ecx2, v16, v17);
        v16 = eax18;
        eax19 = v15->f0;
        v20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax19) + static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax18))));
        if (reinterpret_cast<signed char>(eax19) >= reinterpret_cast<signed char>(0)) {
            esi21 = eax19;
        } else {
            esi21 = reinterpret_cast<void**>(0);
        }
        edx22 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v5 + 8))));
        if (reinterpret_cast<signed char>(edx22) < reinterpret_cast<signed char>(v20)) {
            v20 = edx22;
        }
        ebp23 = reinterpret_cast<void***>(v11 + reinterpret_cast<unsigned char>(esi21) * 2);
        while (reinterpret_cast<signed char>(esi21) < reinterpret_cast<signed char>(v20)) {
            dx24 = *ebp23;
            if (reinterpret_cast<signed char>(dx24) < reinterpret_cast<signed char>(0)) {
                v25 = v15->f4;
                edx26 = reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(v13) + (reinterpret_cast<unsigned char>(esi21) + reinterpret_cast<unsigned char>(esi21)));
                ecx2 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v5 + 10))));
                *reinterpret_cast<int16_t*>(&edx26) = *edx26;
                v17 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx26) & 0xffff);
                fun_42bbd0(ecx2, v16, v17);
            }
            ebp23 = ebp23 + 2;
            ++esi21;
        }
        ++v14;
        v15 = reinterpret_cast<struct s386*>(reinterpret_cast<uint32_t>(v15) + 12);
    }
    if (*reinterpret_cast<int32_t*>(v9 + 0xfffffff4) != 0x1d4a11) {
        fun_43bd40(ecx2, "Z_CT at r_data.c:%i", 0xc2, v16);
    }
    eax27 = fun_437910(ecx2, v16, v17, v25, v11, v14, v13, v9);
    return eax27;
}

void** fun_434700(void** ecx) {
    int1_t less2;
    void** eax3;
    void** eax4;
    void** edx5;
    void** eax6;
    int32_t eax7;

    less2 = reinterpret_cast<signed char>(eax3) < reinterpret_cast<signed char>(g60ae74);
    if (!less2) {
        fun_43bd40(ecx, "W_LumpLength: %i >= numlumps", eax4, edx5);
    }
    eax6 = g60ae70;
    return *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax6 + (eax7 + eax7 * 4) * 4) + 16);
}

int32_t fun_440950(void** ecx) {
    void** edx2;
    int32_t eax3;
    void** v4;
    void* esp5;
    void** ecx6;
    void*** esp7;
    void* v8;
    void* esp9;

    edx2 = g60b70c;
    if (!edx2) {
        eax3 = 0;
    } else {
        v4 = edx2;
        SendMessageA(v4, 0x401, 0, 0);
        esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 28 - 4 - 4 - 4 - 4 - 4 + 4);
        while (ecx6 = g60b70c, esp7 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4), v8 = reinterpret_cast<void*>(esp7 + 16), eax3 = reinterpret_cast<int32_t>(PeekMessageA(v8, ecx6, 0, 0, 1, v4, 0x401, 0, 0)), esp9 = reinterpret_cast<void*>(esp7 - 4 - 4 + 4), !!eax3) {
            DispatchMessageA(esp9, v8, ecx6, 0, 0, 1, v4, 0x401, 0, 0);
            esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp9) - 4 - 4 + 4);
        }
    }
    return eax3;
}

void** g487f90 = reinterpret_cast<void**>(32);

void** g487f88 = reinterpret_cast<void**>(53);

struct s387 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** fc;
    signed char[3] pad16;
    void** f10;
};

struct s388 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
};

struct s389 {
    signed char[8] pad8;
    int16_t f8;
};

struct s390 {
    int32_t f0;
    signed char[4] pad8;
    void** f8;
    signed char[3] pad12;
    void** fc;
    signed char[3] pad16;
    void** f10;
    signed char[3] pad20;
    void** f14;
    signed char[3] pad24;
    void** f18;
    signed char[7] pad32;
    void** f20;
    signed char[3] pad36;
    void** f24;
    signed char[11] pad48;
    void** f30;
    signed char[3] pad52;
    void** f34;
    signed char[3] pad56;
    void** f38;
    signed char[3] pad60;
    void** f3c;
};

void** fun_42bde0(void** ecx) {
    void** v2;
    void** eax3;
    void** edx4;
    void** v5;
    int32_t eax6;
    void** edx7;
    int32_t eax8;
    void** edx9;
    int32_t eax10;
    void** edx11;
    void** v12;
    int32_t eax13;
    void** edx14;
    void** v15;
    int32_t eax16;
    unsigned char* eax17;
    unsigned char* eax18;
    unsigned char* esp19;
    unsigned char* eax20;
    int32_t eax21;
    unsigned char* v22;
    struct s387* esp23;
    void*** esp24;
    void** eax25;
    int32_t v26;
    void** v27;
    struct s388* esp28;
    void** eax29;
    void** ecx30;
    void** v31;
    void** edx32;
    void** eax33;
    void* esi34;
    void*** ebx35;
    struct s389* v36;
    void*** ecx37;
    signed char* eax38;
    struct s389* esi39;
    uint32_t esi40;
    unsigned char* ebx41;
    void** esi42;
    void** edi43;
    void** ecx44;
    void** v45;
    void** v46;
    void** eax47;
    void** eax48;
    void*** eax49;
    uint32_t v50;
    struct s388* esp51;
    int32_t* esp52;
    struct s390* esp53;
    void** eax54;
    void*** eax55;
    struct s388* esp56;
    int32_t* esp57;
    struct s390* esp58;

    v2 = eax3;
    edx4 = g487f6c;
    v5 = *reinterpret_cast<void***>(edx4 + eax6 * 4);
    edx7 = g487f90;
    *reinterpret_cast<void***>(edx7 + eax8 * 4) = reinterpret_cast<void**>(0);
    edx9 = g487f88;
    *reinterpret_cast<void***>(edx9 + eax10 * 4) = reinterpret_cast<void**>(0);
    edx11 = g487f7c;
    v12 = *reinterpret_cast<void***>(edx11 + eax13 * 4);
    edx14 = g487f84;
    v15 = *reinterpret_cast<void***>(edx14 + eax16 * 4);
    eax17 = reinterpret_cast<unsigned char*>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v5 + 8)) + 3);
    *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) & 0xfc);
    eax18 = fun_444203();
    esp19 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 52 - 4 + 4);
    if (reinterpret_cast<uint32_t>(eax17) >= reinterpret_cast<uint32_t>(eax18)) {
        eax20 = reinterpret_cast<unsigned char*>(0);
    } else {
        eax21 = reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v5 + 8)) + 3;
        *reinterpret_cast<unsigned char*>(&eax21) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax21) & 0xfc);
        esp19 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp19) - eax21);
        eax20 = esp19;
    }
    v22 = eax20;
    esp23 = reinterpret_cast<struct s387*>(esp19 - 4);
    esp23->f0 = 0x42be68;
    fun_442b80(ecx, esp23->f4, esp23->f8, esp23->fc, esp23->f10, 0);
    esp24 = &esp23->f4;
    eax25 = v5 + 14;
    v26 = 0;
    while (v27 = eax25, static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v5 + 12))) > v26) {
        esp28 = reinterpret_cast<struct s388*>(esp24 - 4);
        esp28->f0 = reinterpret_cast<void**>(0x42be8b);
        eax29 = fun_4348a0(v27, esp28->f4, esp28->f8);
        esp24 = &esp28->f4;
        ecx30 = *reinterpret_cast<void***>(v27);
        v31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx30) + static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax29))));
        if (reinterpret_cast<signed char>(ecx30) >= reinterpret_cast<signed char>(0)) {
            edx32 = ecx30;
        } else {
            edx32 = reinterpret_cast<void**>(0);
        }
        eax33 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v5 + 8))));
        if (reinterpret_cast<signed char>(eax33) < reinterpret_cast<signed char>(v31)) {
            v31 = eax33;
        }
        esi34 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx32) * 2);
        ebx35 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v15) + reinterpret_cast<uint32_t>(esi34));
        v36 = reinterpret_cast<struct s389*>(reinterpret_cast<uint32_t>(eax29 + reinterpret_cast<unsigned char>(edx32) * 4) + -(reinterpret_cast<unsigned char>(ecx30) * 4));
        ecx37 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v12) + reinterpret_cast<uint32_t>(esi34));
        eax38 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(v22) + reinterpret_cast<unsigned char>(edx32));
        while (reinterpret_cast<signed char>(edx32) < reinterpret_cast<signed char>(v31)) {
            *eax38 = reinterpret_cast<signed char>(*eax38 + 1);
            *ecx37 = *reinterpret_cast<void***>(v27 + 8);
            esi39 = v36;
            *reinterpret_cast<int16_t*>(&esi39) = esi39->f8;
            ebx35 = ebx35 + 2;
            esi40 = reinterpret_cast<uint32_t>(esi39) + 3;
            ecx37 = ecx37 + 2;
            *reinterpret_cast<int16_t*>(ebx35 - 2) = *reinterpret_cast<int16_t*>(&esi40);
            ++edx32;
            ++eax38;
            v36 = reinterpret_cast<struct s389*>(reinterpret_cast<uint32_t>(v36) + 4);
        }
        eax25 = v27 + 12;
        ++v26;
    }
    ebx41 = v22;
    esi42 = v15;
    edi43 = v12;
    ecx44 = reinterpret_cast<void**>(0);
    v45 = reinterpret_cast<void**>(0);
    v46 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v2) * 4);
    while (eax47 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v5 + 8)))), reinterpret_cast<signed char>(eax47) > reinterpret_cast<signed char>(v45)) {
        if (!*ebx41) 
            goto addr_42bf5e_18;
        if (*ebx41 > 1) {
            eax48 = g487f88;
            eax49 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax48) + reinterpret_cast<unsigned char>(v46));
            *reinterpret_cast<void***>(edi43) = reinterpret_cast<void**>(0xffff);
            *reinterpret_cast<void***>(esi42) = *eax49;
            v50 = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v5 + 10))));
            if (reinterpret_cast<signed char>(0x10000 - v50) < reinterpret_cast<signed char>(*eax49)) {
                esp51 = reinterpret_cast<struct s388*>(esp24 - 4);
                esp51->f0 = v2;
                esp52 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp51) - 4);
                *esp52 = reinterpret_cast<int32_t>("R_GenerateLookup: texture %i is >64k");
                esp53 = reinterpret_cast<struct s390*>(esp52 - 1);
                esp53->f0 = 0x42bfb2;
                fun_43bd40(v46, "R_GenerateLookup: texture %i is >64k", esp53->f8, esp53->fc);
                esp24 = reinterpret_cast<void***>(&esp53->pad8 + 2);
            }
            eax54 = g487f88;
            eax55 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax54) + reinterpret_cast<unsigned char>(v46));
            ecx44 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*eax55) + static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v5 + 10))));
            *eax55 = ecx44;
        }
        ++ebx41;
        esi42 = esi42 + 2;
        edi43 = edi43 + 2;
        ++v45;
    }
    addr_42bfec_24:
    return eax47;
    addr_42bf5e_18:
    esp56 = reinterpret_cast<struct s388*>(esp24 - 4);
    esp56->f0 = v5;
    esp57 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp56) - 4);
    *esp57 = reinterpret_cast<int32_t>("R_GenerateLookup: column without a patch (%s)\n");
    esp58 = reinterpret_cast<struct s390*>(esp57 - 1);
    esp58->f0 = 0x42bf6c;
    eax47 = fun_440840(ecx44, "R_GenerateLookup: column without a patch (%s)\n", esp58->f8, esp58->fc, esp58->f10, esp58->f14, esp58->f18, 0, esp58->f20, esp58->f24, 0, 0, esp58->f30, esp58->f34, esp58->f38, esp58->f3c);
    goto addr_42bfec_24;
}

struct s391 {
    signed char[1] pad1;
    signed char f1;
};

struct s392 {
    signed char[1] pad1;
    signed char f1;
};

struct s393 {
    signed char[2] pad2;
    signed char f2;
};

struct s394 {
    signed char[2] pad2;
    unsigned char f2;
};

void** fun_42c650(void*** ecx) {
    uint32_t ecx2;
    int32_t ebx3;
    struct s391* eax4;
    int32_t eax5;
    struct s392* edx6;
    signed char* edx7;
    uint32_t edx8;
    struct s393* edx9;
    uint32_t eax10;
    unsigned char* eax11;
    uint32_t eax12;
    uint32_t eax13;
    struct s394* eax14;

    ecx2 = 0;
    ebx3 = 0;
    *reinterpret_cast<signed char*>(&ecx2) = eax4->f1;
    eax5 = 0;
    *reinterpret_cast<signed char*>(&ebx3) = edx6->f1;
    *reinterpret_cast<signed char*>(&eax5) = *edx7;
    *reinterpret_cast<signed char*>(&edx8) = edx9->f2;
    eax10 = eax5 - *eax11;
    eax12 = ebx3 - ecx2;
    eax13 = (edx8 & 0xff) - eax14->f2;
    return eax13 * eax13 + (eax10 * eax10 + eax12 * eax12);
}

struct s395 {
    signed char[1] pad1;
    signed char f1;
};

struct s396 {
    signed char[2] pad2;
    signed char f2;
};

void* fun_42c6a0(void* ecx) {
    void* ebx2;
    void* edx3;
    void* ecx4;
    signed char* eax5;
    struct s395* eax6;
    struct s396* eax7;

    ebx2 = reinterpret_cast<void*>(0);
    edx3 = reinterpret_cast<void*>(0);
    ecx4 = reinterpret_cast<void*>(0);
    *reinterpret_cast<signed char*>(&ebx2) = *eax5;
    *reinterpret_cast<signed char*>(&edx3) = eax6->f1;
    *reinterpret_cast<signed char*>(&ecx4) = eax7->f2;
    return reinterpret_cast<int32_t>(ebx2) + reinterpret_cast<int32_t>(edx3) + reinterpret_cast<uint32_t>(ecx4);
}

void** g4653f4 = reinterpret_cast<void**>(0);

struct s397 {
    signed char[4751152] pad4751152;
    signed char f487f30;
};

void** fun_42cf20(void** ecx, void** a2) {
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** eax7;
    void** v8;
    void** eax9;
    void* esp10;
    void** edx11;
    uint32_t v12;
    void** v13;
    void** v14;
    void** eax15;
    void** ebx16;
    void** edx17;
    void** v18;
    void** v19;
    void** eax20;
    void** v21;
    int1_t zf22;
    void* v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void* esp29;
    struct s397* eax30;
    struct s397* ebx31;
    int32_t edx32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void* esp43;
    uint32_t eax44;
    uint32_t v45;
    void* v46;
    void** v47;
    void** v48;
    void* v49;
    void** edx50;
    signed char* ebx51;
    void** ebp52;
    void** esi53;
    signed char* edi54;
    signed char* esi55;
    void* esp56;
    uint32_t ecx57;
    void** edi58;
    void** eax59;
    void** esi60;
    void* edx61;
    void* ebx62;
    void** v63;
    void** edi64;
    void** esi65;
    void** edx66;
    void* ebx67;
    void** esi68;
    void* v69;
    void** eax70;
    signed char* eax71;
    void** eax72;
    void* ebx73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;

    fun_4346d0(ecx, v3, v4);
    eax7 = fun_4348a0(ecx, v5, v6);
    v8 = eax7;
    if (eax7) {
        eax9 = fun_434700(ecx);
        esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 0x224 - 4 + 4 - 4 + 4 - 4 + 4);
        edx11 = g4653f4;
        v12 = reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(eax9) / 0x300);
        if (!edx11) {
            eax15 = fun_4375e0(ecx, v13, v14);
            esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) - 4 + 4);
            g4653f4 = eax15;
        }
        ebx16 = g4653f4;
        if (!ebx16) 
            goto addr_42cb59_5;
    } else {
        edx17 = reinterpret_cast<void**>("R_DATA - ReduceColorMaps: Failed to locate PLAYPAL\n");
        goto addr_42ce4b_7;
    }
    fun_434740(ecx);
    fun_4346d0(ecx, v18, v19);
    eax20 = fun_434700(ecx);
    v21 = eax20;
    fun_434740(ecx);
    zf22 = reinterpret_cast<int1_t>(g4775e0 == 1);
    if (!zf22) {
        v23 = reinterpret_cast<void*>(0);
    } else {
        v23 = reinterpret_cast<void*>(20);
    }
    fun_442b80(ecx, v24, v25, v26, v27, v28);
    esp29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v23) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(v23 == 0))) {
        *reinterpret_cast<signed char*>(&ecx) = 1;
        eax30 = reinterpret_cast<struct s397*>(0);
        ebx31 = reinterpret_cast<struct s397*>(reinterpret_cast<uint32_t>(v23) + reinterpret_cast<uint32_t>(v23));
        do {
            edx32 = 0;
            *reinterpret_cast<signed char*>(&edx32) = eax30->f487f30;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp29) + edx32) = 1;
            eax30 = reinterpret_cast<struct s397*>(reinterpret_cast<uint32_t>(eax30) + 2);
        } while (reinterpret_cast<int32_t>(eax30) < reinterpret_cast<int32_t>(ebx31));
    }
    fun_442b80(ecx, v33, v34, v35, v36, v37);
    fun_442b80(ecx, v38, v39, v40, v41, v42);
    esp43 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp29) - 4 + 4 - 4 + 4);
    eax44 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(v23) >> 1);
    v45 = eax44;
    v46 = reinterpret_cast<void*>(eax44 * 4 - eax44);
    v47 = reinterpret_cast<void**>(0);
    v48 = reinterpret_cast<void**>(0);
    v49 = reinterpret_cast<void*>(v12 * 4 - v12 << 8);
    do {
        if (!*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp43) + reinterpret_cast<unsigned char>(v47))) {
            if (reinterpret_cast<int32_t>(v12) > reinterpret_cast<int32_t>(0)) {
                edx50 = v48;
                ebx51 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v8) + reinterpret_cast<uint32_t>(v46));
                ebp52 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v48) + reinterpret_cast<uint32_t>(v49));
                do {
                    esi53 = g4653f4;
                    edi54 = ebx51;
                    esi55 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esi53) + reinterpret_cast<unsigned char>(edx50));
                    esp56 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp43) - 4);
                    ecx57 = 0;
                    do {
                        if (!ecx57) 
                            break;
                        --ecx57;
                        *edi54 = *esi55;
                        edi54 = edi54 + 4;
                        esi55 = esi55 + 4;
                    } while (0);
                    *reinterpret_cast<unsigned char*>(&ecx57) = 3;
                    do {
                        if (!ecx57) 
                            break;
                        --ecx57;
                        *edi54 = *esi55;
                        ++edi54;
                        ++esi55;
                    } while (1);
                    esp43 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp56) + 4);
                    edx50 = edx50 + 0x300;
                    ebx51 = ebx51 + 0x300;
                } while (reinterpret_cast<signed char>(edx50) < reinterpret_cast<signed char>(ebp52));
            }
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp43) + reinterpret_cast<unsigned char>(v47) + 0x100) = *reinterpret_cast<signed char*>(&v45);
            v46 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v46) + 3);
            ++v45;
        }
        edi58 = v47 + 1;
        v48 = v48 + 3;
        v47 = edi58;
    } while (reinterpret_cast<signed char>(edi58) < reinterpret_cast<signed char>(0x100));
    if (reinterpret_cast<int32_t>(v23) > reinterpret_cast<int32_t>(0)) {
        eax59 = reinterpret_cast<void**>(0);
        esi60 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v23) + reinterpret_cast<uint32_t>(v23));
        do {
            edx61 = reinterpret_cast<void*>(0);
            ebx62 = reinterpret_cast<void*>(0);
            *reinterpret_cast<signed char*>(&edx61) = *reinterpret_cast<signed char*>(eax59 + 0x487f31);
            *reinterpret_cast<signed char*>(&ebx62) = *reinterpret_cast<signed char*>(eax59 + 0x487f30);
            eax59 = eax59 + 2;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp43) + reinterpret_cast<int32_t>(ebx62) + 0x100) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp43) + reinterpret_cast<int32_t>(edx61) + 0x100);
        } while (reinterpret_cast<signed char>(eax59) < reinterpret_cast<signed char>(esi60));
    }
    v63 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(v21) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(v21 == 0))) {
        edi64 = v21;
        do {
            esi65 = v63 + 0x100;
            eax59 = v63;
            do {
                edx66 = g487fb4;
                ebx67 = reinterpret_cast<void*>(0);
                *reinterpret_cast<signed char*>(&ebx67) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edx66) + reinterpret_cast<unsigned char>(eax59));
                ++eax59;
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edx66) + reinterpret_cast<unsigned char>(eax59) + 0xffffffff) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp43) + reinterpret_cast<int32_t>(ebx67) + 0x100);
            } while (eax59 != esi65);
            esi68 = v63 + 0x100;
            v63 = esi68;
        } while (reinterpret_cast<signed char>(esi68) < reinterpret_cast<signed char>(edi64));
    }
    v69 = reinterpret_cast<void*>(0);
    while (eax70 = g487fb4, eax71 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax70) + reinterpret_cast<uint32_t>(v69)), *reinterpret_cast<signed char*>(&eax71) = *eax71, eax72 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax71) & 0xff), ebx73 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v69) + 1), *reinterpret_cast<signed char*>(eax72 + 0x487e30) = *reinterpret_cast<signed char*>(&v69), v69 = ebx73, reinterpret_cast<int32_t>(ebx73) < reinterpret_cast<int32_t>(0x100)) {
    }
    addr_42ce60_38:
    return eax72;
    addr_42cb59_5:
    edx17 = reinterpret_cast<void**>("R_DATA - ReduceColorMaps: Failed to allocate temporary palette array\n");
    addr_42ce4b_7:
    fun_412670(ecx, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87);
    eax72 = fun_437a90(ecx, "FAILED! %s\r\n", edx17, v88, v89, v90, v91, v92, v93);
    goto addr_42ce60_38;
}

uint32_t fun_444232(void** ecx) {
    signed char* ecx2;
    signed char* eax3;
    int32_t esi4;
    int32_t ebx5;
    signed char al6;
    int32_t ebx7;
    uint32_t eax8;
    signed char* edx9;
    int32_t ebx10;
    int32_t edx11;

    ecx2 = eax3;
    esi4 = ebx5;
    while (esi4) {
        al6 = *ecx2;
        ebx7 = 0;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax8) + 1) = *edx9;
        *reinterpret_cast<signed char*>(&ebx7) = al6;
        if (ebx7 >= 65 && ebx7 <= 90) {
            al6 = reinterpret_cast<signed char>(al6 + 32);
        }
        ebx10 = 0;
        *reinterpret_cast<signed char*>(&ebx10) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax8) + 1);
        if (ebx10 >= 65 && ebx10 <= 90) {
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax8) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax8) + 1) + 32);
        }
        if (al6 != *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax8) + 1)) 
            goto addr_44426a_8;
        if (!*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax8) + 1)) 
            break;
        ++ecx2;
        ++edx9;
        --esi4;
    }
    return 0;
    addr_44426a_8:
    edx11 = 0;
    *reinterpret_cast<signed char*>(&edx11) = al6;
    *reinterpret_cast<signed char*>(&eax8) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax8) + 1);
    return edx11 - (eax8 & 0xff);
}

uint32_t g8;

/* (image base) */
int32_t image_base_ = 0x4452da;

unsigned char* fun_444203() {
    uint32_t eax1;
    uint32_t* eax2;
    void* esp3;
    uint32_t* eax4;
    uint32_t* eax5;

    eax1 = g8;
    eax2 = reinterpret_cast<uint32_t*>(image_base_());
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 + 4);
    if (eax1 <= *eax2) {
        eax4 = reinterpret_cast<uint32_t*>(image_base_());
        *eax4 = eax1;
        eax5 = reinterpret_cast<uint32_t*>(image_base_());
        return reinterpret_cast<int32_t>(esp3) - 4 + 4 - 4 + 4 - *eax5;
    } else {
        return reinterpret_cast<int32_t>(esp3) - eax1;
    }
}

int32_t SetCursor = 0x220cec;

void fun_439b80(void** ecx, void** a2);

void fun_437c30(void** ecx, void** a2);

void** fun_449dc0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23);

int32_t fun_439df0(void** ecx, void** a2);

int32_t fun_438030(void** ecx, void** a2);

void fun_4106c0(void** ecx, void** a2);

void*** fun_43c570(void** ecx, void** a2);

int32_t fun_438700(void** ecx, void** a2);

void fun_43bb10(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

int32_t fun_438b50(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29) {
    int32_t v30;
    int32_t ebx31;
    void* esp32;
    int1_t zf33;
    void** ebx34;
    void** eax35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** eax63;
    void* esp64;
    void** v65;
    void*** esp66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** eax87;
    void** esi88;
    void** v89;
    void** edi90;
    void** edx91;
    int32_t eax92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** eax120;
    void* esp121;
    void** v122;
    void*** esp123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    void** v136;
    void** v137;
    void** v138;
    void** v139;
    void** v140;
    void** v141;
    void** v142;
    void** v143;
    void** eax144;
    void** ebx145;
    void** v146;
    void** esi147;
    int32_t eax148;
    int32_t eax149;
    int1_t zf150;
    int32_t eax151;
    void** edx152;
    void** edx153;
    int32_t eax154;
    int1_t zf155;
    void* esp156;
    void** v157;
    void** v158;
    void** v159;
    int32_t eax160;
    int32_t eax161;
    void** v162;
    void** v163;
    void** v164;
    void** v165;
    void** v166;
    void** v167;
    void** v168;
    void** v169;
    void** v170;
    void** v171;
    void** v172;
    void** eax173;
    void* esp174;
    void** v175;
    void** v176;
    void** v177;

    v30 = ebx31;
    SetCursor(0);
    fun_439b80(ecx, 0);
    fun_437c30(ecx, 0);
    esp32 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 0x400 - 4 - 4 + 4 - 4 + 4 - 4 + 4);
    zf33 = reinterpret_cast<int1_t>(g4775e0 == 1);
    if (!zf33) {
        ebx34 = g60b264;
        if (ebx34) {
            addr_438cff_3:
            eax35 = reinterpret_cast<void**>(1);
        } else {
            eax63 = fun_41d410(ecx, 0, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62);
            esp64 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp32) - 4 + 4);
            if (!eax63) {
                v65 = ebx34;
                esp66 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp64) - 4 - 4 - 4);
                v67 = ebx34;
            } else {
                v65 = ebx34;
                esp66 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp64) - 4 - 4 - 4);
                v67 = reinterpret_cast<void**>(2);
            }
            eax87 = fun_449dc0(v67, 0x60b264, v65, 0, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86);
            g60b3a0 = eax87;
            ecx = g60b264;
            esi88 = g60b3a0;
            fun_437a90(ecx, "DirectDrawCreate %d %p", esi88, ecx, v67, 0x60b264, v65, 0, v89);
            edi90 = g60b3a0;
            if (!edi90) 
                goto addr_438cff_3; else 
                goto addr_438cbc_8;
        }
    } else {
        edx91 = g60b264;
        if (edx91) {
            addr_438c16_10:
            eax92 = 1;
            goto addr_438c1b_11;
        } else {
            eax120 = fun_41d410(ecx, 0, v93, v94, v95, v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107, v108, v109, v110, v111, v112, v113, v114, v115, v116, v117, v118, v119);
            esp121 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp32) - 4 + 4);
            if (!eax120) {
                v122 = edx91;
                esp123 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp121) - 4 - 4 - 4);
                v124 = edx91;
            } else {
                v122 = edx91;
                esp123 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp121) - 4 - 4 - 4);
                v124 = reinterpret_cast<void**>(2);
            }
            eax144 = fun_449dc0(v124, 0x60b264, v122, 0, v125, v126, v127, v128, v129, v130, v131, v132, v133, v134, v135, v136, v137, v138, v139, v140, v141, v142, v143);
            g60b3a0 = eax144;
            ebx145 = g60b264;
            ecx = g60b3a0;
            fun_437a90(ecx, "DirectDrawCreate %d %p", ecx, ebx145, v124, 0x60b264, v122, 0, v146);
            esi147 = g60b3a0;
            if (!esi147) 
                goto addr_438c16_10; else 
                goto addr_438bd8_16;
        }
    }
    addr_438d04_17:
    if (!eax35 || ((eax148 = fun_439df0(ecx, 0), eax148 == 0) || (eax149 = fun_438030(ecx, 0), eax149 == 0))) {
        addr_438dc1_18:
        goto v30;
    } else {
        addr_438d26_19:
        fun_42cf20(ecx, 0);
        zf150 = g60b27c == 0;
        if (!zf150) {
            fun_42ce70(ecx, 0);
            fun_43c290(ecx, 0);
        }
    }
    eax151 = 0;
    while (1) {
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax151 + 0x4653f8)) <= reinterpret_cast<signed char>(0)) {
            edx152 = g4775d0;
            *reinterpret_cast<void***>(eax151 + 0x4653f8) = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(edx152));
            eax151 = eax151;
        } else {
            edx153 = g4775d0;
            *reinterpret_cast<void***>(eax151 + 0x4653f8) = edx153;
        }
        eax154 = eax151 + 4;
        if (eax154 == 0xc8) 
            break;
        eax151 = eax154;
    }
    fun_4106c0(ecx, 0);
    zf155 = g5f274c == 0;
    if (!zf155) {
        fun_433540(ecx, 0);
    }
    g5f2754 = reinterpret_cast<void**>(1);
    fun_43c570(ecx, 0);
    Sleep(0x3e8, 0);
    fun_43ca60(ecx, 0x3e8, 0);
    goto addr_438dc1_18;
    addr_438cbc_8:
    esp156 = reinterpret_cast<void*>(esp66 - 4 + 4 - 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4);
    g60b430 = reinterpret_cast<void**>(1);
    wsprintfA(reinterpret_cast<int32_t>(esp156) + 0x208, "DirectDrawCreate %d", reinterpret_cast<unsigned char>(edi90) & 0xfff, v67, 0x60b264, v65, 0);
    fun_437a90(ecx, reinterpret_cast<int32_t>(esp156) - 4 - 4 + 4 + 12 + 0x200, v67, 0x60b264, v65, 0, v157, v158, v159);
    eax35 = reinterpret_cast<void**>(0);
    g60b430 = reinterpret_cast<void**>(0);
    goto addr_438d04_17;
    addr_438c1b_11:
    if (!eax92) 
        goto addr_438dc1_18;
    eax160 = fun_439df0(ecx, 0);
    if (!eax160) 
        goto addr_438dc1_18;
    eax161 = fun_438700(ecx, 0);
    if (!eax161) 
        goto addr_438dc1_18;
    fun_43bb10(ecx, 0, v162, v163, v164, v165, v166, v167, v168, v169, v170, v171, v172);
    eax173 = g5f22d0;
    SetWindowPos(eax173, 0xfe, 0, 0, 0, 0, 3, 0);
    goto addr_438d26_19;
    addr_438bd8_16:
    esp174 = reinterpret_cast<void*>(esp123 - 4 + 4 - 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4);
    g60b430 = reinterpret_cast<void**>(1);
    wsprintfA(reinterpret_cast<int32_t>(esp174) + 8, "DirectDrawCreate %d", reinterpret_cast<unsigned char>(esi147) & 0xfff, v124, 0x60b264, v122, 0);
    fun_437a90(ecx, reinterpret_cast<int32_t>(esp174) - 4 - 4 + 4 + 12, v124, 0x60b264, v122, 0, v175, v176, v177);
    g60b430 = reinterpret_cast<void**>(0);
    eax92 = 0;
    goto addr_438c1b_11;
}

void** fun_444285() {
    int32_t eax1;
    void** eax2;
    int32_t eax3;

    if (eax1 < 0) {
        eax2 = reinterpret_cast<void**>(-eax3);
    }
    return eax2;
}

struct s398 {
    signed char[8] pad8;
    int32_t f8;
};

struct s399 {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
};

uint32_t fun_42d730(void** ecx) {
    struct s398* ebx2;
    uint32_t eax3;
    struct s399* ebx4;
    uint32_t eax5;
    uint32_t eax6;
    uint32_t edx7;
    uint32_t eax8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    uint32_t esi12;
    int32_t edx13;

    if (!ebx2->f8) {
        if (reinterpret_cast<int32_t>(eax3) > reinterpret_cast<int32_t>(ebx4->f0)) {
            *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx4->fc) < reinterpret_cast<int32_t>(0));
            return eax5 & 0xff;
        } else {
            *reinterpret_cast<unsigned char*>(&eax6) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx4->fc) > reinterpret_cast<int32_t>(0));
            return eax6 & 0xff;
        }
    }
    if (!ebx4->fc) {
        if (reinterpret_cast<int32_t>(edx7) > reinterpret_cast<int32_t>(ebx4->f4)) {
            *reinterpret_cast<unsigned char*>(&eax8) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx4->f8) > reinterpret_cast<int32_t>(0));
            return eax8 & 0xff;
        } else {
            *reinterpret_cast<unsigned char*>(&eax9) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx4->f8) < reinterpret_cast<int32_t>(0));
            return eax9 & 0xff;
        }
    }
    eax10 = eax11 - ebx4->f0;
    esi12 = edx13 - ebx4->f4;
    if ((ebx4->fc ^ ebx4->f8 ^ eax10 ^ esi12) & 0x80000000) 
        goto addr_42d7ae_10;
    __asm__("shrd eax, edx, 0x10");
    __asm__("shrd eax, edx, 0x10");
    if (reinterpret_cast<int32_t>(esi12 * (reinterpret_cast<int32_t>(ebx4->f8) >> 16)) >= reinterpret_cast<int32_t>((reinterpret_cast<int32_t>(ebx4->fc) >> 16) * eax10)) {
        addr_42d7e5_12:
        return 1;
    } else {
        addr_42d7de_13:
        return 0;
    }
    addr_42d7ae_10:
    if (!((eax10 ^ ebx4->fc) & 0x80000000)) 
        goto addr_42d7de_13;
    goto addr_42d7e5_12;
}

struct s400 {
    signed char[12] pad12;
    uint32_t fc;
    uint32_t f10;
    signed char[12] pad32;
    int32_t f20;
};

uint32_t g4925e4 = 0xd0390048;

struct s401 {
    signed char[232] pad232;
    int32_t fe8;
};

struct s402 {
    signed char[16] pad16;
    void** f10;
};

uint32_t g4925cc = 0x8504;

struct s405 {
    signed char[12] pad12;
    int16_t fc;
};

struct s404 {
    signed char[52] pad52;
    struct s405** f34;
};

struct s403 {
    struct s404* f0;
    signed char[48] pad52;
    unsigned char f34;
    signed char[191] pad244;
    int32_t ff4;
};

struct s403* g49259c = reinterpret_cast<struct s403*>(0x84);

struct s406 {
    signed char[236] pad236;
    int32_t fec;
};

uint32_t g4925d4 = 0xc5048d;

void* g60ba08 = reinterpret_cast<void*>(0);

void fun_42e350(void** ecx) {
    struct s400* edx2;
    struct s400** eax3;
    uint32_t ebx4;
    struct s401* eax5;
    struct s402* eax6;
    uint32_t edx7;
    uint32_t edx8;
    uint32_t* ebx9;
    struct s403* eax10;
    int32_t esi11;
    struct s406* eax12;
    void** ebx13;
    void** eax14;
    int32_t eax15;
    int32_t eax16;
    void** esi17;
    void** eax18;
    void*** edx19;
    struct s25* ecx20;
    void** ebp21;

    edx2 = *eax3;
    g4925e0 = edx2->fc;
    g4925dc = edx2->f10;
    ebx4 = g4925e4;
    g4925c4 = edx2->f20 + ebx4;
    g4925a4 = eax5->fe8;
    g4925d8 = eax6->f10;
    edx7 = g4925c4;
    edx8 = edx7 >> 19;
    g4925cc = *reinterpret_cast<uint32_t*>(edx8 * 4 + 0x46a9e0);
    ebx9 = image_base_;
    g49259c = eax10;
    esi11 = eax12->fec;
    g4925d4 = ebx9[edx8];
    g4925d0 = 0;
    if (!esi11) {
        ebx13 = reinterpret_cast<void**>(0);
    } else {
        eax14 = g487fb4;
        g5ee70c = reinterpret_cast<void***>(0x491ab0);
        eax15 = 0;
        ebx13 = reinterpret_cast<void**>((esi11 << 8) + reinterpret_cast<unsigned char>(eax14));
        while (eax15 = eax15 + 4, *reinterpret_cast<void***>(eax15 + 0x491aac) = ebx13, eax15 != 0xc0) {
        }
    }
    eax16 = g4654c4;
    esi17 = g60b9e8;
    g4654c4 = eax16 + 1;
    eax18 = g48aea0;
    edx19 = g60ba04;
    ecx20 = g48ae9c;
    ebp21 = g491b80;
    g491b80 = ebp21 + 1;
    g60ba08 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx19) + reinterpret_cast<uint32_t>(ecx20) + reinterpret_cast<unsigned char>(eax18) * reinterpret_cast<unsigned char>(esi17));
    g4925a8 = ebx13;
    return;
}

uint32_t g5ee6b4 = 0;

uint32_t g48ae48 = 0xb8c35b59;

uint32_t g48ae4c = 0x7f;

void** g5ee6c4 = reinterpret_cast<void**>(0);

void** g5ee6c0 = reinterpret_cast<void**>(0);

uint32_t g48ae70 = 0xb8c35b59;

uint32_t g48ae58 = 0xb8c35b59;

void*** g5ee6bc = reinterpret_cast<void***>(0);

void** g48ae6c = reinterpret_cast<void**>(0xaf);

uint32_t g48ae50 = 0xb8c35b59;

int32_t g48ae68 = 0xb8c35b59;

int32_t g48ae54 = 0xac;

void fun_42e530(void** ecx) {
    int32_t ecx2;
    int32_t eax3;
    uint32_t eax4;
    uint32_t edi5;
    uint32_t ebx6;
    uint32_t eax7;
    void** ebx8;
    uint32_t eax9;
    void** ebx10;
    uint32_t eax11;
    uint32_t eax12;
    uint32_t edx13;
    uint32_t ecx14;
    uint32_t esi15;
    uint32_t* eax16;
    uint32_t esi17;
    uint32_t ebx18;
    uint32_t ebx19;
    void** ecx20;
    uint32_t edi21;
    void*** ebx22;
    int32_t eax23;
    int32_t ebx24;

    ecx2 = eax3 * 4;
    eax4 = g5ee6b4;
    if (eax4 == *reinterpret_cast<uint32_t*>(ecx2 + 0x493cb0)) {
        g48ae48 = *reinterpret_cast<uint32_t*>(ecx2 + 0x492630);
        edi5 = *reinterpret_cast<uint32_t*>(ecx2 + 0x494bb0);
        g48ae4c = *reinterpret_cast<uint32_t*>(ecx2 + 0x492db0);
    } else {
        ebx6 = *reinterpret_cast<uint32_t*>(ecx2 + 0x5d9f30);
        *reinterpret_cast<uint32_t*>(ecx2 + 0x493cb0) = eax4;
        eax7 = eax4 * ebx6;
        __asm__("shrd eax, edx, 0x10");
        ebx8 = g5ee6c4;
        edi5 = eax7;
        *reinterpret_cast<uint32_t*>(ecx2 + 0x494bb0) = eax7;
        eax9 = eax7 * reinterpret_cast<unsigned char>(ebx8);
        __asm__("shrd eax, edx, 0x10");
        ebx10 = g5ee6c0;
        g48ae48 = eax9;
        *reinterpret_cast<uint32_t*>(ecx2 + 0x492630) = eax9;
        eax11 = eax7 * reinterpret_cast<unsigned char>(ebx10);
        __asm__("shrd eax, edx, 0x10");
        g48ae4c = eax11;
        *reinterpret_cast<uint32_t*>(ecx2 + 0x492db0) = eax11;
    }
    eax12 = edx13 * 4;
    __asm__("shrd eax, edx, 0x10");
    ecx14 = edi5 * *reinterpret_cast<uint32_t*>(eax12 + 0x5d8b30);
    esi15 = g4925c4;
    eax16 = image_base_;
    esi17 = esi15 + *reinterpret_cast<uint32_t*>(eax12 + 0x491b98) >> 19;
    __asm__("shrd eax, edx, 0x10");
    ebx18 = g4925e0;
    g48ae70 = eax16[esi17] * ecx14 + ebx18;
    __asm__("shrd eax, edx, 0x10");
    ebx19 = g4925dc;
    ecx20 = g4925a8;
    g48ae58 = -ebx19 - *reinterpret_cast<int32_t*>(esi17 * 4 + 0x46a9e0) * ecx14;
    if (!ecx20) {
        edi21 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(edi5) >> 20);
        if (edi21 >= 0x80) {
            edi21 = 0x7f;
        }
        ebx22 = g5ee6bc;
        g48ae6c = ebx22[edi21 * 4];
    } else {
        g48ae6c = ecx20;
    }
    g48ae50 = edx13;
    g48ae68 = eax23;
    g48ae54 = ebx24;
    g491b88();
    return;
}

void** g487f74 = reinterpret_cast<void**>(0x80);

void* fun_42c000(void** ecx) {
    void** v2;
    void** ecx3;
    void* eax4;
    int32_t eax5;
    void** ecx6;
    uint32_t edx7;
    uint32_t edx8;
    void** esi9;
    void** esi10;
    void** ecx11;
    void** edx12;
    void** eax13;
    void** eax14;
    int32_t eax15;
    void** esi16;

    v2 = ecx;
    ecx3 = g487f74;
    eax4 = reinterpret_cast<void*>(eax5 * 4);
    ecx6 = g487f7c;
    edx7 = edx8 & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx3) + reinterpret_cast<uint32_t>(eax4)));
    esi9 = g487f84;
    esi10 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(esi9) + reinterpret_cast<uint32_t>(eax4));
    ecx11 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx6) + reinterpret_cast<uint32_t>(eax4)) + edx7 * 2))));
    esi10 = *reinterpret_cast<void***>(esi10 + edx7 * 2);
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx11) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx11 == 0)) {
        edx12 = g487f90;
        if (!*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx12) + reinterpret_cast<uint32_t>(eax4))) {
            fun_42bc40(ecx11);
        }
        eax13 = g487f90;
        eax14 = *reinterpret_cast<void***>(eax13 + eax15 * 4);
    } else {
        eax14 = fun_4348a0(ecx11, esi16, v2);
    }
    return reinterpret_cast<unsigned char>(eax14) + (reinterpret_cast<unsigned char>(esi10) & 0xffff);
}

void** fun_42dba0(void** ecx) {
    uint32_t ebx2;
    uint32_t ecx3;
    void* eax4;
    unsigned char cl5;
    void** ecx6;
    int32_t eax7;
    uint32_t eax8;
    int32_t eax9;
    void** esi10;
    void** edx11;
    void** ebx12;
    void** eax13;

    ebx2 = g4925c4;
    ecx3 = g5ee760;
    eax4 = g4925ac;
    __asm__("shrd eax, edx, 0x10");
    cl5 = *reinterpret_cast<unsigned char*>(&g491b94);
    ecx6 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax4) * *reinterpret_cast<uint32_t*>((reinterpret_cast<int32_t>(eax7 - ecx3 + 0x40000000) >> 19) * 4 + 0x46a9e0) << cl5);
    eax8 = g5ee764;
    __asm__("shrd eax, edx, 0x10");
    if (reinterpret_cast<int32_t>(eax8 * *reinterpret_cast<uint32_t*>((reinterpret_cast<int32_t>(eax9 - ebx2 + 0x40000000) >> 19) * 4 + 0x46a9e0)) <= reinterpret_cast<signed char>(ecx6) >> 16 || (eax13 = fun_411d60(ecx6, esi10, edx11, ecx, ebx12), reinterpret_cast<signed char>(eax13) > reinterpret_cast<signed char>(0x400000))) {
        eax13 = reinterpret_cast<void**>(0x400000);
    } else {
        if (reinterpret_cast<signed char>(eax13) < reinterpret_cast<signed char>(0x100)) {
            return 0x100;
        }
    }
    return eax13;
}

struct s407 {
    signed char[12] pad12;
    void** fc;
};

struct s408 {
    signed char[22] pad22;
    int16_t f16;
};

void** fun_42e7f0(uint32_t ecx) {
    void** v2;
    void** esi3;
    void** v4;
    void** edi5;
    void** v6;
    void** ebp7;
    void** ecx8;
    void** eax9;
    void** edi10;
    void** edx11;
    void** ebp12;
    void** ebx13;
    void** edx14;
    struct s407* eax15;
    void** v16;
    void** ebx17;
    void** v18;
    void** eax19;
    struct s408* edx20;
    void** esi21;
    void** eax22;

    v2 = esi3;
    v4 = edi5;
    v6 = ebp7;
    ecx8 = eax9;
    edi10 = edx11;
    ebp12 = ebx13;
    edx14 = eax15->fc;
    if (reinterpret_cast<signed char>(edi10) >= reinterpret_cast<signed char>(edx14)) {
        v16 = edx14;
        edx14 = edi10;
    } else {
        v16 = edi10;
    }
    ebx17 = *reinterpret_cast<void***>(ecx8 + 16);
    if (reinterpret_cast<signed char>(ebp12) <= reinterpret_cast<signed char>(ebx17)) {
        v18 = ebx17;
        ebx17 = ebp12;
    } else {
        v18 = ebp12;
    }
    eax19 = edx14;
    if (reinterpret_cast<signed char>(edx14) <= reinterpret_cast<signed char>(ebx17)) {
        edx20 = reinterpret_cast<struct s408*>(reinterpret_cast<unsigned char>(edx14) + reinterpret_cast<unsigned char>(edx14) + reinterpret_cast<unsigned char>(ecx8));
        do {
            if (edx20->f16 != 0x7fff) 
                break;
            ++eax19;
            edx20 = reinterpret_cast<struct s408*>(reinterpret_cast<uint32_t>(edx20) + 2);
        } while (reinterpret_cast<signed char>(eax19) <= reinterpret_cast<signed char>(ebx17));
    }
    if (reinterpret_cast<signed char>(eax19) <= reinterpret_cast<signed char>(ebx17)) {
        esi21 = g5ee6b8;
        *reinterpret_cast<void***>(esi21) = *reinterpret_cast<void***>(ecx8);
        *reinterpret_cast<void***>(esi21 + 4) = *reinterpret_cast<void***>(ecx8 + 4);
        *reinterpret_cast<void***>(esi21 + 8) = *reinterpret_cast<void***>(ecx8 + 8);
        *reinterpret_cast<void***>(esi21 + 12) = edi10;
        g5ee6b8 = esi21 + 0xa1c;
        *reinterpret_cast<void***>(esi21 + 16) = ebp12;
        fun_442b80(ecx8, v16, v18, v6, v4, v2);
        eax22 = esi21;
    } else {
        *reinterpret_cast<void***>(ecx8 + 12) = v16;
        *reinterpret_cast<void***>(ecx8 + 16) = v18;
        eax22 = ecx8;
    }
    return eax22;
}

struct s409 {
    signed char[22] pad22;
    int16_t f16;
    signed char[1282] pad1306;
    int16_t f51a;
};

void** g48ae90 = reinterpret_cast<void**>(89);

void** g48ae84 = reinterpret_cast<void**>(0xbd);

void** g48ae7c = reinterpret_cast<void**>(0xbc);

struct s410 {
    signed char[6133040] pad6133040;
    int16_t f5d9530;
    signed char[1278] pad6134320;
    int16_t f5d9a30;
};

void** g48ae8c = reinterpret_cast<void**>(0xbe);

void** g48ae78 = reinterpret_cast<void**>(89);

void** g48ae88 = reinterpret_cast<void**>(89);

void* g48ae80 = reinterpret_cast<void*>(0xb8c35b59);

struct s411 {
    signed char[6133040] pad6133040;
    int16_t f5d9530;
    signed char[1278] pad6134320;
    int16_t f5d9a30;
};

void fun_42ede0(uint32_t ecx) {
    void** eax2;
    void** edx3;
    void** ecx4;
    uint32_t esi5;
    void** eax6;
    void** esi7;
    void** eax8;
    int1_t zf9;
    void** edx10;
    void** ebx11;
    void** edx12;
    void** eax13;
    void** edi14;
    void** edx15;
    uint32_t edi16;
    void** eax17;
    void** edi18;
    void** eax19;
    int1_t zf20;
    void** edx21;
    void** eax22;
    void** edx23;
    void** ebx24;
    void** ebp25;
    void** edx26;
    struct s409* edx27;
    int1_t zf28;
    void** edx29;
    uint32_t eax30;
    uint32_t ebx31;
    uint32_t ecx32;
    void** eax33;
    uint32_t eax34;
    void*** eax35;
    void** ebx36;
    void** eax37;
    void** ebp38;
    void** eax39;
    void** edx40;
    struct s410* eax41;
    int1_t zf42;
    void** esi43;
    uint32_t ebx44;
    uint32_t edx45;
    uint32_t ebp46;
    void** eax47;
    void** ebx48;
    void** eax49;
    void** esi50;
    void** eax51;
    void* eax52;
    void** eax53;
    void** eax54;
    void** edx55;
    struct s411* eax56;
    int1_t zf57;
    void** edi58;
    uint32_t ebx59;
    uint32_t edx60;
    uint32_t esi61;
    void** eax62;
    void** ebx63;
    void** eax64;
    void** edi65;
    void** eax66;
    void* eax67;
    void** eax68;
    int1_t zf69;
    void** eax70;
    void** edx71;
    void** eax72;
    void* eax73;
    void** eax74;
    int16_t dx75;
    void* eax76;
    void** ebx77;
    uint32_t esi78;
    uint32_t edi79;
    void** ebp80;
    void** edx81;
    void** ebp82;
    uint32_t eax83;
    uint32_t eax84;

    eax2 = g5ee758;
    edx3 = g5ee74c;
    ecx4 = reinterpret_cast<void**>(0);
    if (reinterpret_cast<signed char>(eax2) < reinterpret_cast<signed char>(edx3)) {
        do {
            esi5 = g5ee6e4;
            eax6 = g5ee758;
            esi7 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esi5 + 0xfff) >> 12);
            eax8 = reinterpret_cast<void**>(*reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(eax6) * 2 + 0x5d9a30) + 1);
            if (reinterpret_cast<signed char>(esi7) < reinterpret_cast<signed char>(eax8)) {
                esi7 = eax8;
            }
            zf9 = g5ee75c == 0;
            if (!zf9) {
                edx10 = g5ee758;
                ebx11 = esi7 + 0xffffffff;
                edx12 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(edx10) * 2 + 0x5d9530)));
                eax13 = reinterpret_cast<void**>(*reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(edx10) * 2 + 0x5d9a30) + 1);
                if (reinterpret_cast<signed char>(ebx11) >= reinterpret_cast<signed char>(edx12)) {
                    ebx11 = edx12 + 0xffffffff;
                }
                if (reinterpret_cast<signed char>(eax13) <= reinterpret_cast<signed char>(ebx11)) {
                    edi14 = g5ee6dc;
                    edx15 = g5ee758;
                    *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edi14 + reinterpret_cast<unsigned char>(edx15) * 2) + 22) = *reinterpret_cast<int16_t*>(&eax13);
                    *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edi14 + reinterpret_cast<unsigned char>(edx15) * 2) + 0x51a) = *reinterpret_cast<int16_t*>(&ebx11);
                }
            }
            edi16 = g5ee6fc;
            eax17 = g5ee758;
            edi18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edi16) >> 12);
            eax19 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(eax17) * 2 + 0x5d9530)));
            if (reinterpret_cast<signed char>(edi18) >= reinterpret_cast<signed char>(eax19)) {
                edi18 = eax19 + 0xffffffff;
            }
            zf20 = g5ee754 == 0;
            if (!zf20) {
                edx21 = g5ee758;
                eax22 = edi18 + 1;
                edx23 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(edx21) * 2 + 0x5d9a30)));
                ebx24 = reinterpret_cast<void**>(*reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(edx21) * 2 + 0x5d9530) - 1);
                if (reinterpret_cast<signed char>(eax22) <= reinterpret_cast<signed char>(edx23)) {
                    eax22 = edx23 + 1;
                }
                if (reinterpret_cast<signed char>(eax22) <= reinterpret_cast<signed char>(ebx24)) {
                    ebp25 = g5ee758;
                    edx26 = g5ee6d8;
                    edx27 = reinterpret_cast<struct s409*>(reinterpret_cast<unsigned char>(edx26) + (reinterpret_cast<unsigned char>(ebp25) + reinterpret_cast<unsigned char>(ebp25)));
                    edx27->f16 = *reinterpret_cast<int16_t*>(&eax22);
                    edx27->f51a = *reinterpret_cast<int16_t*>(&ebx24);
                }
            }
            zf28 = g5ee750 == 0;
            if (!zf28) {
                edx29 = g5ee758;
                eax30 = g5ee724;
                ebx31 = g5ee764;
                __asm__("shrd eax, edx, 0x10");
                ecx32 = g5ee744;
                eax33 = g5ee73c;
                eax34 = reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(eax33) >> 12);
                ecx4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ecx32 - *reinterpret_cast<int32_t*>((eax30 + *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx29) * 4 + 0x491b98) >> 19) * 4 + 0x4669e0) * ebx31) >> 16);
                if (eax34 >= 48) {
                    eax34 = 47;
                }
                eax35 = g5ee70c;
                ebx36 = g5ee73c;
                g48ae90 = eax35[eax34 * 4];
                eax37 = g5ee758;
                g48ae84 = eax37;
                g48ae7c = reinterpret_cast<void**>(-1 / reinterpret_cast<unsigned char>(ebx36));
            }
            ebp38 = g5ee738;
            if (!ebp38) {
                eax39 = g5ee758;
                edx40 = g5ee734;
                eax41 = reinterpret_cast<struct s410*>(reinterpret_cast<unsigned char>(eax39) + reinterpret_cast<unsigned char>(eax39));
                if (!edx40) {
                    zf42 = g5ee75c == 0;
                    if (!zf42) {
                        esi43 = esi7 - 1;
                        eax41->f5d9a30 = *reinterpret_cast<int16_t*>(&esi43);
                    }
                } else {
                    ebx44 = g5ee6f8;
                    edx45 = g5ee708;
                    ebp46 = g5ee6f8;
                    eax47 = reinterpret_cast<void**>(static_cast<int32_t>(eax41->f5d9530));
                    ebx48 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebx44) >> 12);
                    g5ee6f8 = ebp46 + edx45;
                    if (reinterpret_cast<signed char>(ebx48) >= reinterpret_cast<signed char>(eax47)) {
                        ebx48 = eax47 + 0xffffffff;
                    }
                    if (reinterpret_cast<signed char>(ebx48) < reinterpret_cast<signed char>(esi7)) {
                        eax49 = g5ee758;
                        esi50 = esi7 - 1;
                        *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(eax49) * 2 + 0x5d9a30) = *reinterpret_cast<int16_t*>(&esi50);
                    } else {
                        eax51 = g5ee6e8;
                        g48ae8c = esi7;
                        g48ae78 = eax51;
                        g48ae88 = ebx48;
                        eax52 = fun_42c000(ecx4);
                        g48ae80 = eax52;
                        g491b90();
                        eax53 = g5ee758;
                        *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(eax53) * 2 + 0x5d9a30) = *reinterpret_cast<int16_t*>(&ebx48);
                    }
                }
                eax54 = g5ee758;
                edx55 = g5ee740;
                eax56 = reinterpret_cast<struct s411*>(reinterpret_cast<unsigned char>(eax54) + reinterpret_cast<unsigned char>(eax54));
                if (!edx55) {
                    zf57 = g5ee754 == 0;
                    if (!zf57) {
                        edi58 = edi18 + 1;
                        eax56->f5d9530 = *reinterpret_cast<int16_t*>(&edi58);
                    }
                } else {
                    ebx59 = g5ee700;
                    edx60 = g5ee714;
                    esi61 = g5ee700;
                    eax62 = reinterpret_cast<void**>(static_cast<int32_t>(eax56->f5d9a30));
                    ebx63 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebx59 + 0xfff) >> 12);
                    g5ee700 = esi61 + edx60;
                    if (reinterpret_cast<signed char>(ebx63) <= reinterpret_cast<signed char>(eax62)) {
                        ebx63 = eax62 + 1;
                    }
                    if (reinterpret_cast<signed char>(ebx63) > reinterpret_cast<signed char>(edi18)) {
                        eax64 = g5ee758;
                        edi65 = edi18 + 1;
                        *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(eax64) * 2 + 0x5d9530) = *reinterpret_cast<int16_t*>(&edi65);
                    } else {
                        eax66 = g5ee6f4;
                        g48ae8c = ebx63;
                        g48ae78 = eax66;
                        g48ae88 = edi18;
                        eax67 = fun_42c000(ecx4);
                        g48ae80 = eax67;
                        g491b90();
                        eax68 = g5ee758;
                        *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(eax68) * 2 + 0x5d9530) = *reinterpret_cast<int16_t*>(&ebx63);
                    }
                }
                zf69 = g5ee72c == 0;
                if (!zf69) {
                    eax70 = g5ee758;
                    edx71 = g5ee720;
                    *reinterpret_cast<void***>(edx71 + reinterpret_cast<unsigned char>(eax70) * 2) = ecx4;
                }
            } else {
                eax72 = g5ee730;
                g48ae8c = esi7;
                g48ae78 = eax72;
                g48ae88 = edi18;
                eax73 = fun_42c000(ecx4);
                g48ae80 = eax73;
                g491b90();
                eax74 = g5ee758;
                dx75 = *reinterpret_cast<int16_t*>(&g48ae98);
                *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(eax74) * 2 + 0x5d9a30) = dx75;
                *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(eax74) * 2 + 0x5d9530) = -1;
            }
            eax76 = g5ee728;
            ebx77 = g5ee73c;
            esi78 = g5ee6e4;
            edi79 = g5ee6fc;
            ebp80 = g5ee758;
            edx81 = g5ee74c;
            ebp82 = ebp80 + 1;
            eax83 = g5ee710;
            g5ee73c = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx77) + reinterpret_cast<uint32_t>(eax76));
            eax84 = g5ee6f0;
            g5ee758 = ebp82;
            g5ee6e4 = esi78 + eax83;
            g5ee6fc = edi79 + eax84;
        } while (reinterpret_cast<signed char>(ebp82) < reinterpret_cast<signed char>(edx81));
    }
    return;
}

void** g5f0fa8 = reinterpret_cast<void**>(0);

void** g5f0fb0 = reinterpret_cast<void**>(0);

void fun_42faa0(void** ecx, void** a2, void** a3) {
    void** ebx4;
    uint32_t edx5;
    uint32_t ebx6;
    void** eax7;
    int1_t less_or_equal8;
    void** edx9;
    void** ecx10;
    uint32_t eax11;
    void** eax12;
    uint32_t eax13;
    uint32_t edi14;
    uint32_t edx15;
    void** v16;
    void** ecx17;
    uint32_t eax18;
    void* ecx19;
    void** ebp20;
    void** ecx21;
    uint32_t esi22;
    uint32_t edi23;
    uint32_t edx24;
    uint32_t eax25;
    uint32_t esi26;
    uint32_t ecx27;

    ebx4 = ecx;
    if (edx5 >= 29 || ebx6 > 8) {
        fun_43bd40(ecx, "R_InstallSpriteLump: Bad frame characters in lump %i", eax7, eax7);
    }
    less_or_equal8 = reinterpret_cast<signed char>(edx9) <= reinterpret_cast<signed char>(g5f0fa8);
    if (!less_or_equal8) {
        g5f0fa8 = edx9;
    }
    ecx10 = edx9 + 65;
    eax11 = (reinterpret_cast<unsigned char>(edx9) * 8 - reinterpret_cast<unsigned char>(edx9)) * 4;
    if (ebx6) {
        if (!*reinterpret_cast<int32_t*>(eax11 + 0x5f0fb4)) {
            eax12 = g5f0fb0;
            fun_43bd40(ecx10, "R_InitSprites: Sprite %s frame %c has rotations and a rot=0 lump", eax12, ecx10);
        }
        eax13 = reinterpret_cast<unsigned char>(edx9) * 8 - reinterpret_cast<unsigned char>(edx9);
        edi14 = ebx6 - 1;
        *reinterpret_cast<int32_t*>(eax13 * 4 + 0x5f0fb4) = 1;
        edx15 = edi14 * 2;
        if (static_cast<int32_t>(*reinterpret_cast<int16_t*>(edx15 + eax13 * 4 + 0x5f0fb8)) != -1) {
            v16 = edx9 + 65;
            ecx17 = g5f0fb0;
            fun_43bd40(ecx17, "R_InitSprites: Sprite %s : %c : %c has two lumps mapped to it", ecx17, v16, ecx17, "R_InitSprites: Sprite %s : %c : %c has two lumps mapped to it", ecx17, v16);
        }
        *reinterpret_cast<int16_t*>(&edx15) = *reinterpret_cast<int16_t*>(&g487f98);
        eax18 = reinterpret_cast<unsigned char>(edx9) * 8 - reinterpret_cast<unsigned char>(edx9);
        ecx19 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax7) - edx15);
        *reinterpret_cast<int16_t*>(edi14 * 2 + eax18 * 4 + 0x5f0fb8) = *reinterpret_cast<int16_t*>(&ecx19);
        *reinterpret_cast<signed char*>(edi14 + eax18 * 4 + 0x5f0fc8) = *reinterpret_cast<signed char*>(&ebx4);
    } else {
        if (!*reinterpret_cast<int32_t*>(eax11 + 0x5f0fb4)) {
            ebp20 = g5f0fb0;
            fun_43bd40(ecx10, "R_InitSprites: Sprite %s frame %c has multip rot=0 lump", ebp20, ecx10);
        }
        if (*reinterpret_cast<int32_t*>((reinterpret_cast<unsigned char>(edx9) * 8 - reinterpret_cast<unsigned char>(edx9)) * 4 + 0x5f0fb4) == 1) {
            ecx21 = g5f0fb0;
            fun_43bd40(ecx21, "R_InitSprites: Sprite %s frame %c has rotations and a rot=0 lump", ecx21, edx9 + 65);
        }
        esi22 = (reinterpret_cast<unsigned char>(edx9) * 8 - reinterpret_cast<unsigned char>(edx9)) * 4;
        edi23 = 0;
        edx24 = esi22;
        eax25 = esi22;
        *reinterpret_cast<uint32_t*>(esi22 + 0x5f0fb4) = 0;
        *reinterpret_cast<int16_t*>(&edi23) = *reinterpret_cast<int16_t*>(&g487f98);
        esi26 = esi22 + 16;
        ecx27 = reinterpret_cast<unsigned char>(eax7) - edi23;
        while (++edx24, *reinterpret_cast<int16_t*>(eax25 + 0x5f0fb8) = *reinterpret_cast<int16_t*>(&ecx27), eax25 = eax25 + 2, *reinterpret_cast<signed char*>(edx24 + 0x5f0fc7) = *reinterpret_cast<signed char*>(&ebx4), eax25 != esi26) {
        }
    }
    goto a3;
}

struct s412 {
    signed char[4] pad4;
    void** f4;
};

void** g487fa8 = reinterpret_cast<void**>(0);

void** g481238 = reinterpret_cast<void**>(0xe0);

void fun_42fc20(void** ecx) {
    void** v2;
    void** eax3;
    int32_t* eax4;
    struct s412* eax5;
    void** eax6;
    void** v7;
    void** eax8;
    void** edx9;
    void** v10;
    void** eax11;
    void** v12;
    void** edx13;
    void** v14;
    void** v15;
    void*** esi16;
    void** ebp17;
    void** esi18;
    void** ebp19;
    void* edi20;
    void** eax21;
    void** ecx22;
    void** eax23;
    void** ecx24;
    void** edi25;
    void** v26;
    void** v27;
    int32_t v28;
    void*** esi29;
    uint1_t less30;
    int32_t ebx31;
    void** edi32;
    int32_t ebp33;
    void** v34;
    void** edx35;
    void** eax36;
    void** eax37;
    void** edx38;
    void** eax39;
    uint32_t ecx40;
    void** eax41;
    void*** esi42;
    void** edi43;
    uint32_t eax44;
    uint32_t ecx45;
    int1_t zf46;
    int1_t zf47;
    void** eax48;
    void** esi49;

    v2 = eax3;
    if (*eax4) {
        do {
            ecx = eax5->f4;
            eax5 = reinterpret_cast<struct s412*>(&eax5->f4);
        } while (ecx);
    }
    eax6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(eax5) - reinterpret_cast<unsigned char>(v2)) >> 2);
    g5f1338 = eax6;
    if (eax6 && (eax8 = fun_4375e0(ecx, v2, v7), edx9 = g487fa8, g5f133c = eax8, v10 = reinterpret_cast<void**>(0), eax11 = g487f98, v12 = edx9 + 1, edx13 = g5f1338, !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx13) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx13 == 0)))) {
        v14 = reinterpret_cast<void**>(0);
        v15 = eax11 - 1 + 1;
        do {
            esi16 = reinterpret_cast<void***>(v2 + reinterpret_cast<unsigned char>(v10) * 4);
            g5f0fb0 = *esi16;
            fun_442b80(ecx, v2, v15, v10, v14, v12);
            ebp17 = *esi16;
            esi18 = v15;
            g5f0fa8 = reinterpret_cast<void**>(0xffffffff);
            ebp19 = *reinterpret_cast<void***>(ebp17);
            if (reinterpret_cast<signed char>(esi18) < reinterpret_cast<signed char>(v12)) {
                edi20 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esi18) * 20);
                do {
                    eax21 = g60ae70;
                    if (ebp19 == *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax21) + reinterpret_cast<uint32_t>(edi20))) {
                        ecx22 = g481238;
                        if (ecx22) {
                            fun_4346d0(ecx22, v2, v15);
                        }
                        fun_42faa0(0, v2, v15);
                        eax23 = g60ae70;
                        if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax23) + reinterpret_cast<uint32_t>(edi20) + 6)) {
                            fun_42faa0(1, v2, v15);
                        }
                    }
                    ++esi18;
                    edi20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi20) + 20);
                } while (reinterpret_cast<signed char>(esi18) < reinterpret_cast<signed char>(v12));
            }
            ecx24 = g5f0fa8;
            if (!reinterpret_cast<int1_t>(ecx24 == 0xffffffff)) {
                edi25 = ecx24 + 1;
                v26 = reinterpret_cast<void**>(0);
                g5f0fa8 = edi25;
                if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi25) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi25 == 0))) {
                    v27 = reinterpret_cast<void**>(65);
                    v28 = 0;
                    esi29 = reinterpret_cast<void***>(v2 + reinterpret_cast<unsigned char>(v10) * 4);
                    do {
                        less30 = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(v28 + 0x5f0fb4) < 0);
                        if (less30) {
                            if (*reinterpret_cast<int32_t*>(v28 + 0x5f0fb4) == -1) {
                                ecx24 = *esi29;
                                fun_43bd40(ecx24, "R_InitSprites: No patches found for %s frame %c", ecx24, v27);
                            }
                        } else {
                            if (!(less30 | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(v28 + 0x5f0fb4) == 0))) {
                                if (*reinterpret_cast<int32_t*>(v28 + 0x5f0fb4) == 1) {
                                    ebx31 = v28;
                                    edi32 = v27;
                                    ebp33 = ebx31 + 16;
                                    do {
                                        if (static_cast<int32_t>(*reinterpret_cast<int16_t*>(ebx31 + 0x5f0fb8)) == -1) {
                                            v34 = *esi29;
                                            fun_43bd40(ecx24, "R_InitSprites: Sprite %s frame %c is missing rotations", v34, edi32);
                                        }
                                        ebx31 = ebx31 + 2;
                                    } while (ebx31 != ebp33);
                                }
                            }
                        }
                        edx35 = g5f0fa8;
                        eax36 = v26 + 1;
                        ++v27;
                        v28 = v28 + 28;
                        v26 = eax36;
                    } while (reinterpret_cast<signed char>(eax36) < reinterpret_cast<signed char>(edx35));
                }
                eax37 = g5f133c;
                edx38 = g5f0fa8;
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax37) + reinterpret_cast<unsigned char>(v14)) = edx38;
                eax39 = fun_4375e0(ecx24, v2, v15);
                ecx40 = reinterpret_cast<unsigned char>(g5f0fa8) * 28;
                eax41 = g5f133c;
                esi42 = reinterpret_cast<void***>(0x5f0fb4);
                edi43 = eax39;
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax41) + reinterpret_cast<unsigned char>(v14) + 4) = eax39;
                eax44 = ecx40;
                ecx45 = ecx40 >> 2;
                zf46 = ecx45 == 0;
                do {
                    if (!ecx45) 
                        break;
                    --ecx45;
                    *reinterpret_cast<void***>(edi43) = *esi42;
                    edi43 = edi43 + 4;
                    esi42 = esi42 + 4;
                } while (!zf46);
                *reinterpret_cast<unsigned char*>(&ecx45) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax44) & 3);
                zf47 = *reinterpret_cast<unsigned char*>(&ecx45) == 0;
                do {
                    if (!ecx45) 
                        break;
                    --ecx45;
                    *reinterpret_cast<void***>(edi43) = *esi42;
                    ++edi43;
                    ++esi42;
                } while (!zf47);
            } else {
                eax48 = g5f133c;
                *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(eax48) + reinterpret_cast<unsigned char>(v14)) = 0;
            }
            esi49 = g5f1338;
            ecx = v10 + 1;
            v14 = v14 + 8;
            v10 = ecx;
        } while (reinterpret_cast<signed char>(ecx) < reinterpret_cast<signed char>(esi49));
    }
    return;
}

struct s413 {
    signed char f0;
    signed char f1;
};

void* g5f12ec = reinterpret_cast<void*>(0);

uint32_t g5f12e4 = 0;

int16_t* g5f12f0 = reinterpret_cast<int16_t*>(0);

int16_t* g5f12f4 = reinterpret_cast<int16_t*>(0);

struct s414 {
    signed char[4] pad4;
    signed char f4;
};

void fun_42ff30(void** ecx) {
    void** ecx2;
    void** esi3;
    struct s413* edx4;
    struct s413* eax5;
    void** edi6;
    signed char* eax7;
    int32_t eax8;
    void* ebx9;
    uint32_t ebx10;
    void* esi11;
    uint32_t tmp32_12;
    void** ebx13;
    int16_t* eax14;
    void** esi15;
    void** eax16;
    void** ecx17;
    void** eax18;
    int16_t* ebx19;
    void** eax20;
    uint32_t eax21;
    void* eax22;
    struct s414* edx23;

    ecx2 = g48ae8c;
    esi3 = g48ae88;
    edx4 = eax5;
    edi6 = g48ae78;
    if (*eax7 != -1) {
        do {
            eax8 = 0;
            ebx9 = g5f12ec;
            *reinterpret_cast<signed char*>(&eax8) = edx4->f0;
            ebx10 = 0;
            esi11 = g5f12ec;
            *reinterpret_cast<signed char*>(&ebx10) = edx4->f1;
            tmp32_12 = eax8 * reinterpret_cast<uint32_t>(ebx9) + g5f12e4;
            ebx13 = g48ae84;
            eax14 = g5f12f0;
            esi15 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(esi11) * ebx10 + tmp32_12 - 1) >> 16);
            eax16 = reinterpret_cast<void**>(static_cast<int32_t>(eax14[reinterpret_cast<unsigned char>(ebx13)]));
            ecx17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(tmp32_12 + 0xffff) >> 16);
            if (reinterpret_cast<signed char>(esi15) >= reinterpret_cast<signed char>(eax16)) {
                esi15 = eax16 + 0xffffffff;
            }
            eax18 = g48ae84;
            ebx19 = g5f12f4;
            eax20 = reinterpret_cast<void**>(static_cast<int32_t>(ebx19[reinterpret_cast<unsigned char>(eax18)]));
            if (reinterpret_cast<signed char>(ecx17) <= reinterpret_cast<signed char>(eax20)) {
                ecx17 = eax20 + 1;
            }
            g48ae8c = ecx17;
            g48ae88 = esi15;
            if (reinterpret_cast<signed char>(ecx17) <= reinterpret_cast<signed char>(esi15)) {
                g48ae80 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx4) + 3);
                eax21 = 0;
                *reinterpret_cast<signed char*>(&eax21) = edx4->f0;
                g48ae78 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi6) - (eax21 << 16));
                g491b90();
            }
            esi3 = g48ae88;
            ecx2 = g48ae8c;
            eax22 = reinterpret_cast<void*>(0);
            *reinterpret_cast<signed char*>(&eax22) = edx4->f1;
            edx23 = reinterpret_cast<struct s414*>(reinterpret_cast<int32_t>(edx4) + reinterpret_cast<int32_t>(eax22));
            edx4 = reinterpret_cast<struct s413*>(&edx23->f4);
        } while (edx23->f4 != -1);
    }
    g48ae78 = edi6;
    g48ae88 = esi3;
    g48ae8c = ecx2;
    return;
}

struct s415 {
    signed char[12] pad12;
    void* fc;
};

struct s416 {
    signed char[16] pad16;
    void* f10;
};

struct s417 {
    signed char[12] pad12;
    void** fc;
    signed char[3] pad16;
    void** f10;
    signed char[3] pad20;
    void** f14;
    signed char[11] pad32;
    uint32_t f20;
    int32_t f24;
    uint32_t f28;
    unsigned char f29;
    signed char[59] pad104;
    void** f68;
    signed char[1] pad106;
    unsigned char f6a;
};

struct s418 {
    int32_t f0;
    int16_t f4;
    signed char[14] pad20;
    signed char f14;
};

void** g487fa4 = reinterpret_cast<void**>(0xe8);

void** g487fac = reinterpret_cast<void**>(42);

struct s419 {
    void** f0;
    signed char[3] pad4;
    uint32_t f4;
};

struct s419* g5f12f8 = reinterpret_cast<struct s419*>(0);

void** g487f9c = reinterpret_cast<void**>(42);

void*** g5f0fac = reinterpret_cast<void***>(0);

void fun_430130(int32_t ecx) {
    uint32_t edx2;
    uint32_t ebx3;
    void** ecx4;
    struct s415* eax5;
    uint32_t ebx6;
    void** v7;
    struct s416* eax8;
    uint32_t ebx9;
    uint32_t ebp10;
    void** v11;
    void** v12;
    void** v13;
    void** eax14;
    uint32_t ebx15;
    uint32_t ebx16;
    void** ecx17;
    void** edx18;
    uint32_t ebx19;
    struct s417* eax20;
    struct s418* ebx21;
    void** eax22;
    void** ebp23;
    void** eax24;
    uint32_t eax25;
    void** v26;
    void** eax27;
    void* ecx28;
    void* tmp32_29;
    void** eax30;
    void** edx31;
    void** eax32;
    void* tmp32_33;
    void** eax34;
    struct s419* eax35;
    struct s419* edx36;
    void** eax37;
    int32_t ecx38;
    void** ecx39;
    void** ecx40;
    void** edx41;
    void** eax42;
    void** edx43;
    void** eax44;
    void** ecx45;
    void** eax46;
    void** ecx47;
    void** ebp48;
    int32_t ecx49;
    int32_t edi50;
    void*** eax51;
    void** eax52;

    edx2 = g4925e0;
    ebx3 = g4925dc;
    ecx4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax5->fc) - edx2);
    ebx6 = g4925d4;
    v7 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax8->f10) - ebx3);
    __asm__("shrd eax, edx, 0x10");
    ebx9 = g4925cc;
    __asm__("shrd eax, edx, 0x10");
    ebp10 = reinterpret_cast<unsigned char>(ecx4) * ebx6 - -(reinterpret_cast<unsigned char>(v7) * ebx9);
    if (reinterpret_cast<int32_t>(ebp10) >= reinterpret_cast<int32_t>(0x40000) && (eax14 = fun_411d60(ecx4, v11, v12, v7, v13), ebx15 = g4925cc, ebx16 = g4925d4, ecx17 = reinterpret_cast<void**>(-(-(reinterpret_cast<unsigned char>(ecx4) * ebx15) + reinterpret_cast<unsigned char>(v7) * ebx16)), reinterpret_cast<int32_t>((reinterpret_cast<unsigned char>(ecx17) ^ __intrinsic()) - __intrinsic()) <= reinterpret_cast<int32_t>(ebp10 * 4))) {
        edx18 = g5f133c;
        ebx19 = eax20->f28 & 0x7fff;
        ebx21 = reinterpret_cast<struct s418*>(*reinterpret_cast<int32_t**>(reinterpret_cast<uint32_t>(edx18 + eax20->f24 * 8) + 4) + (ebx19 * 8 - ebx19));
        if (!ebx21->f0) {
            eax22 = reinterpret_cast<void**>(0);
            *reinterpret_cast<signed char*>(&eax22) = ebx21->f14;
            ebp23 = reinterpret_cast<void**>(static_cast<int32_t>(ebx21->f4));
        } else {
            eax24 = fun_42d8e0(ecx17);
            eax25 = reinterpret_cast<unsigned char>(eax24) - eax20->f20 - 0x70000000 >> 29;
            ebp23 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(ebx21) + eax25 * 2 + 4)));
            *reinterpret_cast<signed char*>(&eax25) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx21) + eax25 + 20);
            eax22 = reinterpret_cast<void**>(eax25 & 0xff);
        }
        v26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp23) * 4);
        eax27 = g487fa4;
        ecx28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx17) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax27) + reinterpret_cast<unsigned char>(v26))));
        __asm__("shrd eax, edx, 0x10");
        tmp32_29 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx28) * reinterpret_cast<unsigned char>(eax14) + reinterpret_cast<uint32_t>(g4925b8));
        eax30 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(tmp32_29) >> 16);
        edx31 = g48aea4;
        if (reinterpret_cast<signed char>(eax30) <= reinterpret_cast<signed char>(edx31) && (eax32 = g487fac, tmp32_33 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(ecx28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax32) + reinterpret_cast<unsigned char>(v26)))) * reinterpret_cast<unsigned char>(eax14) + reinterpret_cast<uint32_t>(g4925b8)), eax34 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(tmp32_33) >> 16) - 1), reinterpret_cast<signed char>(eax34) >= reinterpret_cast<signed char>(0))) {
            eax35 = g5f12f8;
            if (!reinterpret_cast<int1_t>(eax35 == 0x5f0a68)) {
                edx36 = reinterpret_cast<struct s419*>(reinterpret_cast<uint32_t>(eax35) + 60);
                g5f12f8 = edx36;
                eax37 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx36) + 0xffffffc4);
            } else {
                eax37 = reinterpret_cast<void**>(0x5f0f6c);
            }
            ecx38 = g491b94;
            *reinterpret_cast<void***>(eax37 + 56) = eax20->f68;
            *reinterpret_cast<void***>(eax37 + 36) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax14) << *reinterpret_cast<unsigned char*>(&ecx38));
            *reinterpret_cast<void***>(eax37 + 16) = eax20->fc;
            *reinterpret_cast<void***>(eax37 + 20) = eax20->f10;
            ecx39 = g487f9c;
            *reinterpret_cast<void***>(eax37 + 24) = eax20->f14;
            ecx40 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax20->f14) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx39 + reinterpret_cast<unsigned char>(ebp23) * 4)));
            edx41 = g4925d8;
            *reinterpret_cast<void***>(eax37 + 28) = ecx40;
            *reinterpret_cast<void***>(eax37 + 44) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx40) - reinterpret_cast<unsigned char>(edx41));
            if (reinterpret_cast<signed char>(eax30) >= reinterpret_cast<signed char>(0)) {
                eax42 = eax30;
            } else {
                eax42 = reinterpret_cast<void**>(0);
            }
            edx43 = g48aea4;
            *reinterpret_cast<void***>(eax37 + 8) = eax42;
            eax44 = eax34;
            if (reinterpret_cast<signed char>(eax44) >= reinterpret_cast<signed char>(edx43)) {
                eax44 = edx43 + 0xffffffff;
            }
            *reinterpret_cast<void***>(eax37 + 12) = eax44;
            ecx45 = eax22;
            eax46 = fun_411d60(ecx45, eax22, v26, v7, eax34);
            if (ecx45) {
                ecx47 = g487fac;
                ecx45 = *reinterpret_cast<void***>(ecx47 + reinterpret_cast<unsigned char>(ebp23) * 4) - 1;
                *reinterpret_cast<void***>(eax37 + 40) = eax46;
                eax46 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(eax46));
            }
            *reinterpret_cast<void***>(eax37 + 32) = ecx45;
            *reinterpret_cast<void***>(eax37 + 40) = eax46;
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax37 + 8)) > reinterpret_cast<signed char>(eax30)) {
                *reinterpret_cast<void***>(eax37 + 32) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37 + 32)) + (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37 + 8)) - reinterpret_cast<unsigned char>(eax30)) * reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37 + 40)));
            }
            *reinterpret_cast<void***>(eax37 + 48) = ebp23;
            if (!(eax20->f6a & 4)) {
                ebp48 = g4925a8;
                if (!ebp48) {
                    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax20) + 41) & 0x80)) {
                        ecx49 = 12 - g491b94;
                        edi50 = reinterpret_cast<signed char>(eax14) >> *reinterpret_cast<signed char*>(&ecx49);
                        if (edi50 >= 48) {
                            edi50 = 47;
                        }
                        eax51 = g5f0fac;
                        eax52 = eax51[edi50 * 4];
                    } else {
                        eax52 = g487fb4;
                    }
                    *reinterpret_cast<void***>(eax37 + 52) = eax52;
                } else {
                    *reinterpret_cast<void***>(eax37 + 52) = ebp48;
                    return;
                }
            } else {
                *reinterpret_cast<void***>(eax37 + 52) = reinterpret_cast<void**>(0);
            }
        }
    }
    return;
}

struct s420 {
    int32_t f0;
    uint32_t f4;
};

struct s422 {
    signed char[5] pad5;
    unsigned char f5;
};

struct s421 {
    struct s422* f0;
    signed char[4] pad8;
    void* f8;
};

void** fun_430020(void** ecx);

void** fun_430460(void** ecx) {
    void** edx2;
    uint32_t edx3;
    struct s420** eax4;
    uint32_t eax5;
    int32_t ebp6;
    void* v7;
    void** eax8;
    void* ecx9;
    struct s421* eax10;
    uint32_t ebx11;
    void* esi12;
    void** eax13;
    void** esi14;
    void** eax15;
    uint32_t ebx16;
    void* ecx17;
    void** edx18;
    void** ebx19;
    void** ebx20;
    void** ecx21;
    void** edx22;
    void** v23;
    void** edx24;
    void** ecx25;
    struct s403* edx26;
    void** edx27;

    edx2 = g5f133c;
    edx3 = (*eax4)->f4 & 0x7fff;
    eax5 = edx3 * 8 - edx3;
    ebp6 = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx2 + (*eax4)->f0 * 8) + 4)) + eax5 * 4 + 4);
    *reinterpret_cast<signed char*>(&eax5) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx2 + (*eax4)->f0 * 8) + 4)) + eax5 * 4 + 20);
    v7 = reinterpret_cast<void*>(ebp6 * 4);
    eax8 = g487fa4;
    ecx9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax10->f8) - 0xa00000 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax8) + reinterpret_cast<uint32_t>(v7))));
    ebx11 = g5f12e0;
    __asm__("shrd eax, edx, 0x10");
    esi12 = g4925b8;
    eax13 = g48aea4;
    esi14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(esi12) + reinterpret_cast<uint32_t>(ecx9) * ebx11) >> 16);
    if (reinterpret_cast<signed char>(esi14) <= reinterpret_cast<signed char>(eax13) && (eax15 = g487fac, ebx16 = g5f12e0, eax13 = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(ecx9) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax15) + reinterpret_cast<uint32_t>(v7)))) * ebx16), ecx17 = g4925b8, edx18 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax13) + reinterpret_cast<uint32_t>(ecx17)) >> 16) - 1), reinterpret_cast<signed char>(edx18) >= reinterpret_cast<signed char>(0))) {
        if (reinterpret_cast<signed char>(esi14) >= reinterpret_cast<signed char>(0)) {
            ebx19 = esi14;
        } else {
            ebx19 = reinterpret_cast<void**>(0);
        }
        ebx20 = g48aea4;
        if (reinterpret_cast<signed char>(edx18) >= reinterpret_cast<signed char>(ebx20)) {
        }
        ecx21 = reinterpret_cast<void**>(eax5 & 0xff);
        if (!ecx21) {
            edx22 = g5f12e8;
            v23 = edx22;
        } else {
            edx24 = g5f12e8;
            ecx25 = g487fac;
            v23 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(edx24));
            ecx21 = *reinterpret_cast<void***>(ecx25 + ebp6 * 4) - 1;
        }
        if (reinterpret_cast<signed char>(esi14) < reinterpret_cast<signed char>(ebx19)) {
            ecx21 = v23;
        }
        edx26 = g49259c;
        if (!(reinterpret_cast<signed char>(edx26->f34) > reinterpret_cast<signed char>(0x80) || edx26->f34 & 8)) {
            edx27 = g4925a8;
            if (!edx27) {
                if (!(eax10->f0->f5 & 0x80)) {
                }
            }
        }
        eax13 = fun_430020(ecx21);
    }
    return eax13;
}

struct s424 {
    int32_t f0;
    int32_t f4;
};

struct s423 {
    signed char[4] pad4;
    struct s424* f4;
};

struct s425 {
    uint32_t f0;
    uint32_t f4;
};

uint32_t fun_42d7f0(void** ecx) {
    uint32_t ecx2;
    struct s423* ebx3;
    struct s425** ebx4;
    uint32_t eax5;
    uint32_t eax6;
    uint32_t edx7;
    uint32_t esi8;
    int32_t edx9;
    uint32_t edi10;

    ecx2 = ebx3->f4->f0 - (*ebx4)->f0;
    eax5 = ebx3->f4->f4 - (*ebx4)->f4;
    if (!ecx2) {
        if (reinterpret_cast<int32_t>(eax6) > reinterpret_cast<int32_t>((*ebx4)->f0)) {
            *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax5) < reinterpret_cast<int32_t>(0));
            return eax5 & 0xff;
        } else {
            *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax5) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax5 == 0)));
            return eax5 & 0xff;
        }
    }
    if (!eax5) {
        if (reinterpret_cast<int32_t>(edx7) > reinterpret_cast<int32_t>((*ebx4)->f4)) {
            *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ecx2) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ecx2 == 0)));
            return eax5 & 0xff;
        } else {
            *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ecx2) < reinterpret_cast<int32_t>(0));
            return eax5 & 0xff;
        }
    }
    esi8 = edx9 - (*ebx4)->f4;
    edi10 = eax6 - (*ebx4)->f0;
    if ((eax5 ^ ecx2 ^ edi10 ^ esi8) & 0x80000000) 
        goto addr_42d86a_10;
    __asm__("shrd eax, edx, 0x10");
    __asm__("shrd eax, edx, 0x10");
    if (reinterpret_cast<int32_t>(esi8 * (reinterpret_cast<int32_t>(ecx2) >> 16)) >= reinterpret_cast<int32_t>((reinterpret_cast<int32_t>(eax5) >> 16) * edi10)) {
        addr_42d897_12:
        return 1;
    } else {
        addr_42d891_13:
        return 0;
    }
    addr_42d86a_10:
    if (!((eax5 ^ edi10) & 0x80000000)) 
        goto addr_42d891_13;
    goto addr_42d897_12;
}

struct s426 {
    signed char[44] pad44;
    void** f2c;
};

struct s427 {
    signed char[4] pad4;
    uint32_t f4;
};

struct s428 {
    signed char[20] pad20;
    void* f14;
};

struct s429 {
    signed char[12] pad12;
    void* fc;
};

struct s430 {
    signed char[40] pad40;
    int16_t* f28;
};

struct s431 {
    signed char[36] pad36;
    int16_t* f24;
};

void** fun_42eb80(int32_t a1, void** a2) {
    void** esi3;
    void** ebx4;
    struct s372* edx5;
    struct s372** eax6;
    void** edx7;
    void** ecx8;
    void** edx9;
    int32_t ebp10;
    int32_t edx11;
    struct s374* ebp12;
    struct s373* ebx13;
    struct s426* eax14;
    uint32_t ebp15;
    struct s427* eax16;
    struct s428* eax17;
    void* ebx18;
    struct s429* eax19;
    void** edx20;
    int16_t* edx21;
    struct s430* eax22;
    struct s431* eax23;
    struct s372* eax24;
    struct s376* eax25;
    void** eax26;
    struct s377* edx27;
    void** eax28;
    void** edx29;
    void** edx30;
    struct s377* eax31;
    void** eax32;
    void** ebx33;
    void** eax34;
    struct s372* eax35;
    void** edx36;
    void** ebx37;
    void** edx38;
    void** eax39;
    int1_t zf40;
    void* eax41;
    uint32_t eax42;
    void*** edx43;
    void* ebx44;
    void** eax45;
    uint32_t edx46;
    void* ebx47;
    void** edx48;
    void** eax49;
    void* eax50;
    void* edi51;
    void** ebp52;
    void** ebp53;

    esi3 = ebx4;
    edx5 = *eax6;
    g487e20 = edx5;
    g487e18 = edx5->f18;
    g487e24 = edx5->f1c;
    edx7 = g487fbc;
    ecx8 = *reinterpret_cast<void***>(edx7 + edx5->f10->fc * 4);
    edx9 = g487e18;
    ebp10 = g4925a4;
    edx11 = (static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(edx9 + 12))) >> 4) + ebp10;
    ebp12 = edx5->f4;
    ebx13 = edx5->f0;
    if (ebx13->f4 != ebp12->f4) {
        if (ebx13->f0 == ebp12->f0) {
            ++edx11;
        }
    } else {
        --edx11;
    }
    if (edx11 >= 0) {
        if (edx11 < 16) {
            g5ee70c = reinterpret_cast<void***>(0x48aeb0 + (edx11 * 4 - edx11 << 6));
        } else {
            g5ee70c = reinterpret_cast<void***>(0x48b9f0);
        }
    } else {
        g5ee70c = reinterpret_cast<void***>(0x48aeb0);
    }
    g5ee720 = eax14->f2c;
    ebp15 = eax16->f4;
    g5ee728 = eax17->f14;
    ebx18 = g5ee728;
    g5f12ec = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax19->fc) + reinterpret_cast<uint32_t>(ebx18) * (reinterpret_cast<unsigned char>(edx20) - ebp15));
    edx21 = eax22->f28;
    g5f12f4 = eax23->f24;
    eax24 = g487e20;
    eax25 = eax24->f14;
    g5f12f0 = edx21;
    if (!(eax25->f10 & 16)) {
        eax26 = g487e18;
        edx27 = g487e24;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax26 + 4)) >= reinterpret_cast<signed char>(edx27->f4)) {
            eax28 = edx27->f4;
        } else {
            eax28 = *reinterpret_cast<void***>(eax26 + 4);
        }
        edx29 = g4925d8;
        g48ae78 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax28) - reinterpret_cast<unsigned char>(edx29));
    } else {
        edx30 = g487e18;
        eax31 = g487e24;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(edx30)) <= reinterpret_cast<signed char>(eax31->f0)) {
            eax32 = eax31->f0;
        } else {
            eax32 = *reinterpret_cast<void***>(edx30);
        }
        ebx33 = g487fa0;
        eax34 = g4925d8;
        g48ae78 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx33 + reinterpret_cast<unsigned char>(ecx8) * 4)) + reinterpret_cast<unsigned char>(eax32) - reinterpret_cast<unsigned char>(eax34));
    }
    eax35 = g487e20;
    edx36 = g48ae78;
    ebx37 = g4925a8;
    g48ae78 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx36) + reinterpret_cast<uint32_t>(eax35->f10->f4));
    if (ebx37) {
        g48ae90 = ebx37;
    }
    g48ae84 = edx20;
    if (reinterpret_cast<signed char>(edx20) <= reinterpret_cast<signed char>(esi3)) {
        do {
            edx38 = g48ae84;
            eax39 = g5ee720;
            if (*reinterpret_cast<void***>(eax39 + reinterpret_cast<unsigned char>(edx38) * 2) != 0x7fff) {
                zf40 = g4925a8 == 0;
                if (zf40) {
                    eax41 = g5f12ec;
                    eax42 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax41) >> 12);
                    if (eax42 >= 48) {
                        eax42 = 47;
                    }
                    edx43 = g5ee70c;
                    g48ae90 = edx43[eax42 * 4];
                }
                ebx44 = g5f12ec;
                eax45 = g48ae78;
                __asm__("shrd eax, edx, 0x10");
                edx46 = g4925b0;
                ebx47 = g5f12ec;
                g5f12e4 = edx46 - reinterpret_cast<unsigned char>(eax45) * reinterpret_cast<uint32_t>(ebx44);
                g48ae7c = reinterpret_cast<void**>(-1 / reinterpret_cast<uint32_t>(ebx47));
                fun_42c000(ecx8);
                fun_42ff30(ecx8);
                edx48 = g48ae84;
                eax49 = g5ee720;
                *reinterpret_cast<void***>(eax49 + reinterpret_cast<unsigned char>(edx48) * 2) = reinterpret_cast<void**>(0x7fff);
            }
            eax50 = g5ee728;
            edi51 = g5f12ec;
            ebp52 = g48ae84;
            ebp53 = ebp52 + 1;
            g5f12ec = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi51) + reinterpret_cast<uint32_t>(eax50));
            g48ae84 = ebp53;
        } while (reinterpret_cast<signed char>(esi3) >= reinterpret_cast<signed char>(ebp53));
    }
    goto a2;
}

struct s432 {
    signed char[8] pad8;
    void** f8;
    signed char[3] pad12;
    void** fc;
    signed char[19] pad32;
    void** f20;
    signed char[3] pad36;
    void* f24;
    void* f28;
    void** f2c;
    signed char[7] pad52;
    void** f34;
    signed char[3] pad56;
    uint32_t f38;
    unsigned char f3b;
};

void** g48ae60 = reinterpret_cast<void**>(89);

void* g48ae74 = reinterpret_cast<void*>(0xbb);

void** fun_430020(void** ecx) {
    int32_t v2;
    int32_t edi3;
    struct s432* esi4;
    struct s432* eax5;
    void** ebp6;
    void** eax7;
    void** ebp8;
    void** eax9;
    void* eax10;
    void** eax11;
    void* eax12;
    int32_t ecx13;
    void* eax14;
    void** eax15;
    void** ecx16;
    uint32_t ebx17;
    void** ebp18;
    void** edx19;
    void** ebp20;
    void** eax21;

    v2 = edi3;
    esi4 = eax5;
    fun_4348a0(ecx, ebp6, *reinterpret_cast<void***>(&v2));
    eax7 = esi4->f34;
    g48ae90 = eax7;
    if (eax7) {
        ebp8 = g48ae84;
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi4) + 59) & 12) {
            eax9 = g48ae60;
            eax10 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax9 - 0x100) + (reinterpret_cast<int32_t>(esi4->f38 & 0xc000000) >> 18));
            g491b90 = reinterpret_cast<void**>(0x42d490);
            g48ae74 = eax10;
        }
    } else {
        eax11 = g491b8c;
        ebp8 = g48ae84;
        g491b90 = eax11;
    }
    eax12 = esi4->f28;
    g48ae84 = ebp8;
    __asm__("cdq ");
    ecx13 = g491b94;
    g48ae7c = reinterpret_cast<void**>(reinterpret_cast<int32_t>((reinterpret_cast<uint32_t>(eax12) ^ 0x65) - 0x65) >> *reinterpret_cast<signed char*>(&ecx13));
    g48ae78 = esi4->f2c;
    eax14 = esi4->f24;
    g5f12ec = eax14;
    eax15 = g48ae78;
    ecx16 = esi4->f20;
    __asm__("shrd eax, edx, 0x10");
    ebx17 = g4925b0;
    ebp18 = esi4->f8;
    edx19 = esi4->fc;
    g5f12e4 = ebx17 - reinterpret_cast<unsigned char>(eax15) * reinterpret_cast<uint32_t>(eax14);
    if (reinterpret_cast<signed char>(ebp18) <= reinterpret_cast<signed char>(edx19)) {
        do {
            g48ae84 = ebp18;
            fun_42ff30(ecx16);
            ebp20 = g48ae84;
            ebp18 = ebp20 + 1;
            ecx16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx16) + reinterpret_cast<uint32_t>(esi4->f28));
        } while (reinterpret_cast<signed char>(ebp18) <= reinterpret_cast<signed char>(esi4->fc));
    }
    eax21 = g491b84;
    g491b90 = eax21;
    g48ae84 = ebp18;
    return eax21;
}

void** fun_4306c0(void** ecx);

void** g5f1300 = reinterpret_cast<void**>(0);

void** fun_4307b0(void** ecx);

void** fun_430620(void** ecx);

void** fun_4309f0(void** ecx) {
    void** v2;
    int32_t v3;
    int32_t edx4;
    void** eax5;
    int1_t below_or_equal6;
    void** ecx7;
    struct s371* ecx8;
    void** ecx9;
    int1_t zf10;

    v2 = ecx;
    v3 = edx4;
    eax5 = fun_4306c0(ecx);
    below_or_equal6 = reinterpret_cast<uint32_t>(g5f12f8) <= 0x5eec68;
    if (!below_or_equal6 && (ecx7 = g5f1300, ecx7 != 0x5f12fc)) {
        do {
            eax5 = fun_4307b0(ecx7);
            ecx7 = *reinterpret_cast<void***>(ecx7 + 4);
        } while (!reinterpret_cast<int1_t>(ecx7 == 0x5f12fc));
    }
    ecx8 = g487e2c;
    ecx9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ecx8) - 48);
    if (reinterpret_cast<unsigned char>(ecx9) >= reinterpret_cast<unsigned char>(0x484e14)) {
        do {
            if (*reinterpret_cast<void***>(ecx9 + 44)) {
                eax5 = fun_42eb80(v3, v2);
            }
            ecx9 = ecx9 - 48;
        } while (reinterpret_cast<unsigned char>(ecx9) >= reinterpret_cast<unsigned char>(0x484e14));
    }
    zf10 = g4925e4 == 0;
    if (zf10) {
        eax5 = fun_430620(ecx9);
    }
    return eax5;
}

struct s433 {
    signed char[8] pad8;
    void** f8;
    signed char[3] pad12;
    void** fc;
    signed char[11] pad24;
    void** f18;
    signed char[3] pad28;
    void** f1c;
    signed char[7] pad36;
    void** f24;
};

struct s434 {
    signed char[8] pad8;
    void** f8;
};

void** fun_4307b0(void** ecx) {
    int16_t* esp2;
    struct s433* esi3;
    struct s433* eax4;
    void** eax5;
    struct s434* eax6;
    void* ecx7;
    struct s371* ecx8;
    void** ecx9;
    void** ebp10;
    void** edi11;
    void** eax12;
    void** edx13;
    uint32_t eax14;
    int32_t v15;
    void** v16;
    void** eax17;
    void* v18;
    void* edx19;
    void* ebx20;
    void* eax21;
    void* ebx22;
    void* eax23;
    void* ebx24;
    void* eax25;
    void** ebp26;
    void* eax27;
    int16_t dx28;
    void** eax29;

    esp2 = reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 0xa04);
    esi3 = eax4;
    eax5 = eax6->f8;
    if (reinterpret_cast<signed char>(eax5) <= reinterpret_cast<signed char>(esi3->fc)) {
        ecx7 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax5) * 2);
        do {
            *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp2) + reinterpret_cast<uint32_t>(ecx7) + 0x500) = -2;
            *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp2) + reinterpret_cast<uint32_t>(ecx7)) = -2;
            ++eax5;
            ecx7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx7) + 2);
        } while (reinterpret_cast<signed char>(eax5) <= reinterpret_cast<signed char>(esi3->fc));
    }
    ecx8 = g487e2c;
    ecx9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ecx8) - 48);
    if (reinterpret_cast<unsigned char>(ecx9) >= reinterpret_cast<unsigned char>(0x484e14)) {
        do {
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx9 + 4)) <= reinterpret_cast<signed char>(esi3->fc) && (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx9 + 8)) >= reinterpret_cast<signed char>(esi3->f8) && (*reinterpret_cast<void***>(ecx9 + 24) || *reinterpret_cast<void***>(ecx9 + 44)))) {
                if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx9 + 4)) >= reinterpret_cast<signed char>(esi3->f8)) {
                    ebp10 = *reinterpret_cast<void***>(ecx9 + 4);
                } else {
                    ebp10 = esi3->f8;
                }
                edi11 = esi3->fc;
                if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx9 + 8)) <= reinterpret_cast<signed char>(edi11)) {
                    edi11 = *reinterpret_cast<void***>(ecx9 + 8);
                }
                eax12 = *reinterpret_cast<void***>(ecx9 + 12);
                edx13 = *reinterpret_cast<void***>(ecx9 + 16);
                if (reinterpret_cast<signed char>(eax12) > reinterpret_cast<signed char>(edx13)) {
                    eax12 = edx13;
                    edx13 = *reinterpret_cast<void***>(ecx9 + 12);
                }
                if (reinterpret_cast<signed char>(edx13) < reinterpret_cast<signed char>(esi3->f24) || reinterpret_cast<signed char>(eax12) < reinterpret_cast<signed char>(esi3->f24) && (eax14 = fun_42d7f0(ecx9), esp2 = esp2 - 2 + 2, !eax14)) {
                    if (*reinterpret_cast<void***>(ecx9 + 44)) {
                        fun_42eb80(v15, v16);
                        esp2 = esp2 - 2 + 2;
                    }
                } else {
                    eax17 = *reinterpret_cast<void***>(ecx9 + 24);
                    if (reinterpret_cast<signed char>(esi3->f18) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx9 + 28))) {
                        *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) & 0xfe);
                    }
                    if (reinterpret_cast<signed char>(esi3->f1c) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx9 + 32))) {
                        *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) & 0xfd);
                    }
                    v18 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi11) + reinterpret_cast<unsigned char>(edi11));
                    edx19 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebp10) * 2);
                    if (!reinterpret_cast<int1_t>(eax17 == 1)) {
                        if (!reinterpret_cast<int1_t>(eax17 == 2)) {
                            if (reinterpret_cast<int1_t>(eax17 == 3) && reinterpret_cast<signed char>(ebp10) <= reinterpret_cast<signed char>(edi11)) {
                                ebx20 = v18;
                                eax21 = edx19;
                                do {
                                    if (static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp2) + reinterpret_cast<uint32_t>(eax21))) == -2) {
                                        *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp2) + reinterpret_cast<uint32_t>(eax21)) = *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx9 + 40)) + reinterpret_cast<uint32_t>(eax21));
                                    }
                                    if (static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp2) + reinterpret_cast<uint32_t>(eax21) + 0x500)) == -2) {
                                        *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp2) + reinterpret_cast<uint32_t>(eax21) + 0x500) = *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx9 + 36)) + reinterpret_cast<uint32_t>(eax21));
                                    }
                                    eax21 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax21) + 2);
                                } while (reinterpret_cast<int32_t>(eax21) <= reinterpret_cast<int32_t>(ebx20));
                            }
                        } else {
                            if (reinterpret_cast<signed char>(ebp10) <= reinterpret_cast<signed char>(edi11)) {
                                ebx22 = v18;
                                eax23 = edx19;
                                while (1) {
                                    if (static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp2) + reinterpret_cast<uint32_t>(eax23) + 0x500)) == -2) {
                                        *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp2) + reinterpret_cast<uint32_t>(eax23) + 0x500) = *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx9 + 36)) + reinterpret_cast<uint32_t>(eax23));
                                    }
                                    eax23 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax23) + 2);
                                    if (reinterpret_cast<int32_t>(eax23) > reinterpret_cast<int32_t>(ebx22)) 
                                        break;
                                }
                            }
                        }
                    } else {
                        if (reinterpret_cast<signed char>(ebp10) <= reinterpret_cast<signed char>(edi11)) {
                            ebx24 = v18;
                            eax25 = edx19;
                            while (1) {
                                if (static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp2) + reinterpret_cast<uint32_t>(eax25))) == -2) {
                                    *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp2) + reinterpret_cast<uint32_t>(eax25)) = *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx9 + 40)) + reinterpret_cast<uint32_t>(eax25));
                                }
                                eax25 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax25) + 2);
                                if (reinterpret_cast<int32_t>(eax25) > reinterpret_cast<int32_t>(ebx24)) 
                                    break;
                            }
                        }
                    }
                }
            }
            ecx9 = ecx9 - 48;
        } while (reinterpret_cast<unsigned char>(ecx9) >= reinterpret_cast<unsigned char>(0x484e14));
    }
    ebp26 = esi3->f8;
    if (reinterpret_cast<signed char>(ebp26) <= reinterpret_cast<signed char>(esi3->fc)) {
        eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebp26) * 2);
        do {
            if (static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp2) + reinterpret_cast<uint32_t>(eax27))) == -2) {
                dx28 = *reinterpret_cast<int16_t*>(&g48ae98);
                *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp2) + reinterpret_cast<uint32_t>(eax27)) = dx28;
            }
            if (static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp2) + reinterpret_cast<uint32_t>(eax27) + 0x500)) == -2) {
                *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp2) + reinterpret_cast<uint32_t>(eax27) + 0x500) = -1;
            }
            ++ebp26;
            eax27 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax27) + 2);
        } while (reinterpret_cast<signed char>(ebp26) <= reinterpret_cast<signed char>(esi3->fc));
    }
    g5f12f0 = esp2;
    g5f12f4 = esp2 + 0x280;
    eax29 = fun_430020(ecx9);
    return eax29;
}

void** fun_430620(void** ecx) {
    struct s403* edx2;
    int32_t ebx3;
    int32_t edx4;
    struct s403* edx5;
    int32_t ebx6;
    int32_t* edx7;
    void** eax8;

    edx2 = g49259c;
    ebx3 = g4925a4;
    edx4 = (static_cast<int32_t>((*edx2->f0->f34)->fc) >> 4) + ebx3;
    if (edx4 >= 0) {
        if (edx4 < 16) {
            g5f0fac = reinterpret_cast<void***>(0x48aeb0 + (edx4 * 4 - edx4 << 6));
        } else {
            g5f0fac = reinterpret_cast<void***>(0x48b9f0);
        }
    } else {
        g5f0fac = reinterpret_cast<void***>(0x48aeb0);
    }
    edx5 = g49259c;
    ebx6 = 0;
    g5f12f0 = reinterpret_cast<int16_t*>(0x5f0a68);
    g5f12f4 = reinterpret_cast<int16_t*>(0x5ee768);
    edx7 = &edx5->ff4;
    do {
        if (*edx7) {
            eax8 = fun_430460(ecx);
        }
        ++ebx6;
        edx7 = edx7 + 4;
    } while (ebx6 < 2);
    return eax8;
}

struct s435 {
    signed char[8] pad8;
    int32_t f8;
    signed char[4] pad16;
    unsigned char f10;
};

int32_t midiStreamPause = 0x22090c;

int32_t fun_41abd0(void** ecx) {
    struct s435* ebx2;
    int32_t eax3;
    int32_t eax4;
    int32_t eax5;
    int32_t ebx6;

    ebx2 = reinterpret_cast<struct s435*>(0x618080 + (eax3 * 4 + eax4) * 4);
    if (ebx2->f8) {
        if (!(ebx2->f10 & 1)) {
            eax5 = reinterpret_cast<int32_t>(midiStreamPause());
            if (!eax5) {
                ebx2->f10 = reinterpret_cast<unsigned char>(ebx2->f10 | 1);
                goto ebx6;
            }
        } else {
            return 0;
        }
    }
    return -1;
}

struct s436 {
    signed char[8] pad8;
    int32_t f8;
    signed char[4] pad16;
    unsigned char f10;
};

int32_t midiStreamRestart = 0x220934;

int32_t fun_41abe0(void** ecx) {
    struct s436* ebx2;
    int32_t eax3;
    int32_t eax4;
    int32_t eax5;
    int32_t ebx6;

    ebx2 = reinterpret_cast<struct s436*>(0x618080 + (eax3 * 4 + eax4) * 4);
    if (ebx2->f8) {
        if (ebx2->f10 & 1) {
            eax5 = reinterpret_cast<int32_t>(midiStreamRestart());
            if (!eax5) {
                ebx2->f10 = reinterpret_cast<unsigned char>(ebx2->f10 & 0xfe);
                goto ebx6;
            }
        } else {
            return 0;
        }
    }
    return -1;
}

int32_t fun_41aca0(void** ecx);

int32_t fun_41ac80(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17);

void fun_430bf0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** edx14;
    int1_t zf15;
    void** esi16;
    void** edx17;
    void** eax18;
    void** eax19;

    edx14 = g4654d4;
    if (edx14) {
        zf15 = g5f22c0 == 0;
        if (!zf15) {
            fun_41abe0(ecx);
        }
        fun_41aca0(ecx);
        fun_41ac80(ecx, esi16, edx17, ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        eax18 = g4654d4;
        if (*reinterpret_cast<int32_t*>(*reinterpret_cast<void***>(eax18 + 8) + 0xfffffff4) != 0x1d4a11) {
            fun_43bd40(ecx, "Z_CT at s_sound.c:%i", 0x7c, esi16);
        }
        fun_437910(ecx, esi16, edx17, ecx, __return_address(), a2, a3, a4);
        eax19 = g4654d4;
        g4654d4 = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax19 + 8) = reinterpret_cast<void**>(0);
    }
    return;
}

struct s437 {
    signed char[36] pad36;
    int32_t f24;
};

void** fun_41af00(void** ecx) {
    int1_t zf2;
    int32_t eax3;
    int32_t eax4;
    int32_t ebx5;
    int32_t eax6;
    struct s437** ecx7;
    uint32_t eax8;
    void** eax9;
    struct s437* ebx10;

    zf2 = g4654d0 == 0;
    if (zf2 || (eax3 == -1 || (!eax4 || (ebx5 = eax6 >> 8, ecx7 = *reinterpret_cast<struct s437***>((eax8 & 0xff) * 4 + (ebx5 + ebx5 * 8) * 4 + 0x5f136c), ecx7 == 0)))) {
        eax9 = reinterpret_cast<void**>(0);
    } else {
        ebx10 = *ecx7;
        ebx10->f24();
        if (ecx7 == 1 || reinterpret_cast<int1_t>(ecx7 == 4)) {
            eax9 = reinterpret_cast<void**>(1);
        } else {
            eax9 = reinterpret_cast<void**>(0);
        }
    }
    return eax9;
}

struct s439 {
    signed char[52] pad52;
    int32_t f34;
    signed char[16] pad72;
    int32_t f48;
};

struct s438 {
    void** f0;
    signed char[6230891] pad6230892;
    struct s439** f5f136c;
};

void** fun_41aea0(void** ecx) {
    int1_t zf2;
    int32_t eax3;
    int32_t eax4;
    int32_t ebx5;
    int32_t eax6;
    void** eax7;
    struct s438* ebx8;
    uint32_t eax9;
    struct s439** ecx10;
    struct s439* edx11;
    struct s439** eax12;
    struct s439* edx13;

    zf2 = g4654d0 == 0;
    if (!zf2 && (eax3 != -1 && (eax4 && (ebx5 = eax6 >> 8, eax7 = reinterpret_cast<void**>((ebx5 * 8 + ebx5) * 4), ebx8 = reinterpret_cast<struct s438*>(eax7 + (eax9 & 0xff) * 4), ecx10 = ebx8->f5f136c, !!ecx10)))) {
        edx11 = *ecx10;
        edx11->f48(ecx10);
        eax12 = ebx8->f5f136c;
        edx13 = *eax12;
        eax7 = reinterpret_cast<void**>(edx13->f34(eax12, 0, ecx10));
    }
    return eax7;
}

struct s440 {
    signed char[12] pad12;
    int32_t fc;
};

struct s441 {
    signed char[12] pad12;
    int32_t fc;
};

struct s442 {
    signed char[16] pad16;
    int32_t f10;
    signed char[12] pad32;
    void** f20;
};

void** g5f1368 = reinterpret_cast<void**>(0);

void** fun_430d90(void** ecx, void*** a2) {
    uint32_t eax3;
    struct s440* eax4;
    struct s441* edx5;
    uint32_t edx6;
    uint32_t edx7;
    uint32_t eax8;
    struct s442* eax9;
    uint32_t edx10;
    uint32_t edx11;
    uint32_t edi12;
    int1_t zf13;
    void** ecx14;
    void** eax15;
    void* eax16;
    int1_t zf17;
    void** edx18;
    void** eax19;
    void** edx20;
    void*** ebx21;
    void** eax22;

    __asm__("cdq ");
    eax3 = (reinterpret_cast<uint32_t>(eax4->fc - edx5->fc) ^ edx6) - edx7;
    __asm__("cdq ");
    eax8 = (eax9->f10 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx10 + 16)) ^ edx10) - edx10;
    edx11 = eax8;
    if (reinterpret_cast<int32_t>(eax3) < reinterpret_cast<int32_t>(eax8)) {
        eax8 = eax3;
    }
    edi12 = eax3 + edx11 - (reinterpret_cast<int32_t>(eax8) >> 1);
    zf13 = reinterpret_cast<int1_t>(g482a5c == 8);
    if (zf13 || reinterpret_cast<int32_t>(edi12) <= reinterpret_cast<int32_t>(0x4b00000)) {
        ecx14 = *reinterpret_cast<void***>(edx10 + 16);
        eax15 = fun_42db10(ecx14);
        if (reinterpret_cast<unsigned char>(eax15) <= reinterpret_cast<unsigned char>(eax9->f20)) {
            eax16 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax15) + (-1 - reinterpret_cast<unsigned char>(eax9->f20)));
        } else {
            eax16 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax15) - reinterpret_cast<unsigned char>(eax9->f20));
        }
        __asm__("shrd eax, edx, 0x10");
        *reinterpret_cast<void***>(ecx) = reinterpret_cast<void**>(0x80 - reinterpret_cast<uint32_t>(0x600000 * *reinterpret_cast<int32_t*>((reinterpret_cast<uint32_t>(eax16) >> 19) * 4 + 0x46a9e0) >> 16));
        if (reinterpret_cast<int32_t>(edi12) >= reinterpret_cast<int32_t>(0xc80000)) {
            zf17 = reinterpret_cast<int1_t>(g482a5c == 8);
            if (!zf17) {
                edx18 = g5f1368;
                eax19 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(edx18) * (reinterpret_cast<int32_t>(0x4b00000 - edi12) >> 16)) / 0x3e8);
            } else {
                if (reinterpret_cast<int32_t>(edi12) > reinterpret_cast<int32_t>(0x4b00000)) {
                    edi12 = 0x4b00000;
                }
                edx20 = g5f1368;
                eax19 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(edx20 - 15) * (reinterpret_cast<int32_t>(0x4b00000 - edi12) >> 16)) / 0x3e8 + 15);
            }
        } else {
            eax19 = g5f1368;
        }
        *ebx21 = eax19;
        *reinterpret_cast<unsigned char*>(&eax19) = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*ebx21) > reinterpret_cast<signed char>(0));
        eax22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax19) & 0xff);
    } else {
        eax22 = reinterpret_cast<void**>(0);
    }
    return eax22;
}

struct s443 {
    signed char[6230892] pad6230892;
    void** f5f136c;
};

int32_t fun_41ad40(void** ecx, uint32_t a2, void** a3) {
    int32_t v4;
    int32_t edi5;
    int32_t v6;
    int32_t ebp7;
    void** esp8;
    int32_t ebp9;
    int32_t eax10;
    void** v11;
    void** ebx12;
    void** v13;
    struct s443* eax14;
    int32_t eax15;
    int32_t esi16;
    struct s443* v17;
    struct s443* edi18;
    void** ebx19;
    void** v20;
    void** eax21;
    void** v22;
    uint32_t eax23;
    void** edx24;
    void** ecx25;
    uint32_t eax26;
    void* edx27;
    void* v28;
    void* eax29;
    void** edi30;
    void* edx31;
    void* eax32;
    void** edi33;
    int32_t* edx34;
    int32_t* eax35;
    void** v36;
    void** ecx37;
    void** eax38;
    int32_t eax39;
    void** v40;
    void** v41;

    v4 = edi5;
    v6 = ebp7;
    esp8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 16);
    ebp9 = eax10;
    v11 = ebx12;
    v13 = ecx;
    eax14 = reinterpret_cast<struct s443*>((eax15 * 8 + ebp9) * 4);
    esi16 = 0;
    v17 = eax14;
    edi18 = eax14;
    do {
        ebx19 = edi18->f5f136c;
        if (!ebx19) 
            break;
        v20 = esp8;
        eax21 = *reinterpret_cast<void***>(ebx19);
        v22 = ebx19;
        eax23 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(eax21 + 36)());
        esp8 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp8 - 4) - 4 - 4 + 4);
        g4654dc = eax23;
        if (eax23) 
            goto addr_41ad8b_4;
        if (!(reinterpret_cast<unsigned char>(v22) & 1)) 
            goto addr_41ae02_6;
        ++esi16;
        edi18 = reinterpret_cast<struct s443*>(reinterpret_cast<uint32_t>(edi18) + 4);
    } while (esi16 < 9);
    goto addr_41ae02_6;
    v20 = reinterpret_cast<void**>(&v17->f5f136c + esi16 * 4);
    edx24 = g4654d8;
    ecx25 = *reinterpret_cast<void***>(edx24);
    v22 = v17->f5f136c;
    eax26 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx25 + 20)(edx24, v22, v20));
    g4654dc = eax26;
    if (eax26) {
        fun_41ad20(ecx25, edx24, v22, v20);
        goto v6;
    } else {
        ebx19 = edi18->f5f136c;
    }
    addr_41ae02_6:
    if (esi16 != 9) {
        edx27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v28) - 0x80);
        eax29 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx27) * 4 + reinterpret_cast<uint32_t>(edx27));
        edi30 = *reinterpret_cast<void***>(ebx19);
        *reinterpret_cast<void***>(edi30 + 64)(ebx19);
        edx31 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<uint32_t>(eax29)) - 0x78);
        eax32 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx31) * 4 + reinterpret_cast<uint32_t>(edx31));
        edi33 = *reinterpret_cast<void***>(ebx19);
        *reinterpret_cast<void***>(edi33 + 60)(ebx19, reinterpret_cast<uint32_t>(eax32) + reinterpret_cast<uint32_t>(eax32), ebx19);
        edx34 = reinterpret_cast<int32_t*>(v13 - 64);
        eax35 = edx34 + static_cast<uint32_t>(edx34);
        v36 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp9 * 4 + 0x4831a8)) - (reinterpret_cast<uint32_t>(eax35) + reinterpret_cast<uint32_t>(eax35)));
        ecx37 = *reinterpret_cast<void***>(ebx19);
        *reinterpret_cast<void***>(ecx37 + 68)(ebx19, v36, ebx19, reinterpret_cast<uint32_t>(eax32) + reinterpret_cast<uint32_t>(eax32), ebx19);
        eax38 = *reinterpret_cast<void***>(ebx19);
        eax39 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(eax38 + 48)(ebx19, 0, 0, 0, ebx19, v36, ebx19, reinterpret_cast<uint32_t>(eax32) + reinterpret_cast<uint32_t>(eax32), ebx19));
        if (eax39 == 0x88780096) {
            fun_431460(ecx37, ebx19, 0, 0, 0, ebx19, v36, ebx19, reinterpret_cast<uint32_t>(eax32) + reinterpret_cast<uint32_t>(eax32), ebx19, reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<uint32_t>(eax29), v22, v20, v40, v11);
        }
    } else {
        goto v4;
    }
    addr_41ae8b_16:
    goto v4;
    addr_41ad8b_4:
    fun_41ad20(ecx, v22, v20, v41);
    goto addr_41ae8b_16;
}

struct s444 {
    signed char[8] pad8;
    void** f8;
    signed char[3] pad12;
    int32_t fc;
    uint32_t f10;
    void** f14;
};

struct s445 {
    signed char[12] pad12;
    void** fc;
    signed char[3] pad16;
    void** f10;
};

void** fun_430fc0(void** ecx);

void** fun_4310e0(void** ecx) {
    void*** esp2;
    int32_t edx3;
    int32_t edx4;
    void** edx5;
    void** ebx6;
    struct s444* ebp7;
    void** ecx8;
    uint32_t v9;
    void** v10;
    void** eax11;
    void** edx12;
    struct s445* eax13;
    void** edx14;
    void** eax15;
    void** edx16;
    uint32_t eax17;
    uint32_t ebx18;
    uint32_t eax19;
    uint32_t edx20;
    int32_t eax21;
    uint32_t ebx22;

    esp2 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 16);
    if (edx3 < 1 || edx4 > 0x6d) {
        fun_43bd40(ecx, "Bad sfx #: %d", edx5, ebx6);
        esp2 = esp2 - 4 - 4 - 4 + 4 + 8;
    }
    ebp7 = reinterpret_cast<struct s444*>(0x465928 + reinterpret_cast<uint32_t>(edx5 + reinterpret_cast<unsigned char>(edx5) * 8) * 4);
    if (!ebp7->fc) {
        ecx8 = reinterpret_cast<void**>(64);
        v9 = 0x80;
        v10 = reinterpret_cast<void**>(64);
    } else {
        v9 = ebp7->f10;
        v10 = ebp7->f8;
        eax11 = ebp7->f14;
        edx12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx6) + reinterpret_cast<unsigned char>(eax11));
        if (reinterpret_cast<signed char>(edx12) < reinterpret_cast<signed char>(1)) {
            addr_4312c1_6:
            return eax11;
        } else {
            ecx8 = g5f1368;
            if (reinterpret_cast<signed char>(edx12) > reinterpret_cast<signed char>(ecx8)) {
            }
        }
    }
    if (!(!eax13 || (edx14 = g482a7c, eax13 == *reinterpret_cast<struct s445**>((reinterpret_cast<uint32_t>(edx14 + reinterpret_cast<unsigned char>(edx14) * 8) * 4 - reinterpret_cast<unsigned char>(edx14)) * 8 + 0x482518)))) {
        ecx8 = reinterpret_cast<void**>(esp2 + 8);
        eax15 = fun_430d90(ecx8, esp2 + 4);
        edx16 = g482a7c;
        eax11 = *reinterpret_cast<void***>((reinterpret_cast<uint32_t>(edx16 + reinterpret_cast<unsigned char>(edx16) * 8) * 4 - reinterpret_cast<unsigned char>(edx16)) * 8 + 0x482518);
        if (eax13->fc == *reinterpret_cast<void***>(eax11 + 12) && eax13->f10 == *reinterpret_cast<void***>(eax11 + 16)) {
        }
        if (!eax15) 
            goto addr_4312c1_6; else 
            goto addr_4311ee_14;
    }
    addr_4311f8_15:
    if (reinterpret_cast<signed char>(edx5) >= reinterpret_cast<signed char>(10) && reinterpret_cast<signed char>(edx5) <= reinterpret_cast<signed char>(13)) {
        eax17 = fun_41d480(ecx8);
        ebx18 = v9 + (8 - (eax17 & 15));
        v9 = ebx18;
        if (reinterpret_cast<int32_t>(ebx18) >= reinterpret_cast<int32_t>(0)) {
            if (reinterpret_cast<int32_t>(ebx18) <= reinterpret_cast<int32_t>(0xff)) 
                goto addr_431272_18;
            goto addr_43126a_20;
        } else {
            v9 = 0;
            goto addr_431272_18;
        }
    }
    if (edx5 == 32) 
        goto addr_431272_18;
    if (edx5 == 87) 
        goto addr_431272_18;
    eax19 = fun_41d480(ecx8);
    edx20 = v9 + (16 - (eax19 & 31));
    v9 = edx20;
    if (reinterpret_cast<int32_t>(edx20) < reinterpret_cast<int32_t>(0)) 
        goto addr_43125a_25;
    if (reinterpret_cast<int32_t>(edx20) <= reinterpret_cast<int32_t>(0xff)) {
        addr_431272_18:
        fun_430f50(ecx8);
        eax11 = fun_430fc0(ecx8);
        if (reinterpret_cast<signed char>(eax11) >= reinterpret_cast<signed char>(0)) {
            eax21 = fun_41ad40(0x80, v9, v10);
            ebx22 = reinterpret_cast<unsigned char>(eax11) * 4 - reinterpret_cast<unsigned char>(eax11);
            eax11 = g5f22cc;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax11 + ebx22 * 4) + 8) = eax21;
            goto addr_4312c1_6;
        }
    } else {
        addr_43126a_20:
        v9 = 0xff;
        goto addr_431272_18;
    }
    addr_43125a_25:
    v9 = 0;
    goto addr_431272_18;
    addr_4311ee_14:
    goto addr_4311f8_15;
}

struct s446 {
    signed char[12] pad12;
    void*** fc;
};

void** fun_41acc0(void** ecx) {
    void*** ebx2;
    void*** eax3;
    struct s446* eax4;
    void** ecx5;
    void* esp6;
    void** eax7;
    void** v8;
    void** v9;
    void** v10;

    ebx2 = eax3;
    if (eax4->fc) {
        ebx2 = eax4->fc;
    }
    ecx5 = *ebx2;
    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 12 - 4 - 4);
    wsprintfA(reinterpret_cast<int32_t>(esp6) + 8, "dw%s", ecx5);
    eax7 = fun_434640(ecx5);
    if (reinterpret_cast<int1_t>(eax7 == 0xffffffff)) {
        v8 = *ebx2;
        wsprintfA(reinterpret_cast<int32_t>(esp6) - 4 - 4 + 4 + 12 - 4 + 4 - 4 - 4 + 8, "ds%s", v8);
        eax7 = fun_4346d0(ecx5, v9, v10);
    }
    return eax7;
}

int32_t DirectSoundCreate = 0x22114e;

uint32_t fun_449dc6(void** a1, void** a2, void** a3) {
    goto DirectSoundCreate;
}

struct s447 {
    void*** f0;
    uint32_t f4;
    signed char[4] pad12;
    void** fc;
    signed char[3] pad16;
    void*** f10;
    signed char[4] pad24;
    void*** f18;
};

struct s448 {
    signed char[8] pad8;
    uint32_t f8;
};

void** fun_4339a0(void** ecx, void** a2, void** a3, uint32_t a4, int32_t a5);

void** g5f22d4 = reinterpret_cast<void**>(0);

void** fun_431c10(void** ecx) {
    struct s447* v2;
    struct s447* eax3;
    void** edx4;
    void** ebx5;
    uint32_t v6;
    struct s448* eax7;
    void** eax8;
    void** esi9;
    void** v10;
    void** ebx11;
    void** eax12;
    void** eax13;
    void** v14;
    void** ecx15;
    void** edi16;
    uint32_t eax17;
    void** edx18;
    uint32_t v19;
    void** eax20;
    void** eax21;
    void** ecx22;
    uint32_t ecx23;
    void** ecx24;
    int1_t zf25;
    void** ecx26;

    v2 = eax3;
    edx4 = g4775d0;
    ebx5 = *v2->f18;
    v6 = eax7->f8;
    eax8 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ebx5))));
    esi9 = *v2->f10;
    v10 = eax8;
    ebx11 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ebx5 + 2))));
    if (reinterpret_cast<int1_t>(edx4 == 0x280)) {
        ebx11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx11) + reinterpret_cast<unsigned char>(ebx11));
        v10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax8) + reinterpret_cast<unsigned char>(eax8));
    }
    eax12 = *v2->f10;
    v2->fc = eax12;
    *reinterpret_cast<unsigned char*>(&eax12) = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi9) < reinterpret_cast<signed char>(0));
    eax13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax12) & 0xff);
    v14 = eax13;
    if (eax13) {
        if (v6 != 2 || reinterpret_cast<signed char>(esi9) >= reinterpret_cast<signed char>(0xfffffff7)) {
            if (v6 == 3 && reinterpret_cast<signed char>(esi9) < reinterpret_cast<signed char>(0xffffff9d)) {
                esi9 = reinterpret_cast<void**>(0xffffff9d);
            }
        } else {
            esi9 = reinterpret_cast<void**>(0xfffffff7);
        }
        esi9 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(esi9));
    }
    ecx15 = g4775d0;
    edi16 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v2->f0) - v6 * reinterpret_cast<unsigned char>(v10));
    if (!reinterpret_cast<int1_t>(ecx15 == 0x140)) {
        eax17 = 64;
    } else {
        eax17 = 32;
    }
    edx18 = g4775d4;
    if (reinterpret_cast<int32_t>(v2->f4 - (reinterpret_cast<unsigned char>(edx18) - eax17)) < reinterpret_cast<int32_t>(0)) {
        fun_43bd40(ecx15, "drawNum: n->y - ST_Y < 0", v14, v10);
    }
    v19 = v2->f4;
    eax20 = g4775d0;
    if (!reinterpret_cast<int1_t>(eax20 == 0x140)) {
    }
    eax21 = fun_4339a0(reinterpret_cast<unsigned char>(v10) * v6, ebx11, edi16, v19, 0);
    if (esi9 != 0x7ca) {
        if (!esi9) {
            ecx22 = *v2->f18;
            eax21 = fun_433a50(ecx22, v14, v10, *reinterpret_cast<signed char*>(&v2));
        }
        while (esi9 && (ecx23 = v6 - 1, v6 = ecx23, ecx23 != 0xffffffff)) {
            ecx24 = v2->f18[reinterpret_cast<signed char>(esi9) % 10 * 4];
            fun_433a50(ecx24, v14, v10, *reinterpret_cast<signed char*>(&v2));
            eax21 = reinterpret_cast<void**>(reinterpret_cast<signed char>(esi9) / 10);
            esi9 = eax21;
        }
        if (v14) {
            zf25 = reinterpret_cast<int1_t>(g4775d0 == 0x280);
            if (!zf25) {
                ecx26 = g5f22d4;
            } else {
                ecx26 = g5f22d4;
            }
            eax21 = fun_433a50(ecx26, v14, v10, *reinterpret_cast<signed char*>(&v2));
        }
    }
    return eax21;
}

void fun_431b80(void** ecx, void** a2, void** a3, int32_t a4);

struct s449 {
    signed char[32] pad32;
    void** f20;
};

void fun_431e00(void** ecx, void** a2, void** a3, void** a4) {
    struct s449* eax5;

    fun_431b80(ecx, a2, a3, 3);
    eax5->f20 = a4;
    return;
}

struct s450 {
    signed char[16] pad16;
    int32_t* f10;
};

struct s451 {
    void* f0;
    int32_t f4;
    int32_t f8;
    int32_t* fc;
    signed char[4] pad20;
    void** f14;
};

void fun_432150(void** ecx) {
    int32_t v2;
    int32_t ebp3;
    struct s450* eax4;
    struct s451* eax5;
    int32_t edx6;
    void** eax7;
    uint32_t edi8;
    void** v9;
    void** ebx10;
    uint32_t edx11;
    void** v12;
    void** eax13;
    int1_t zf14;
    uint32_t eax15;
    void** edx16;
    int32_t v17;
    void** ecx18;
    void** ecx19;

    v2 = ebp3;
    if (*eax4->f10 && (eax5->f8 != *eax5->fc || edx6)) {
        eax7 = eax5->f14;
        edi8 = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax7 + 6))));
        v9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax5->f0) - reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax7 + 4)))));
        ebx10 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax7))));
        edx11 = eax5->f4 - edi8;
        v12 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax7 + 2))));
        eax13 = g4775d0;
        if (reinterpret_cast<int1_t>(eax13 == 0x280)) {
            ebx10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx10) + reinterpret_cast<unsigned char>(ebx10));
            v12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v12) + reinterpret_cast<unsigned char>(v12));
        }
        zf14 = reinterpret_cast<int1_t>(g4775d0 == 0x140);
        if (!zf14) {
            eax15 = 64;
        } else {
            eax15 = 32;
        }
        edx16 = g4775d4;
        if (reinterpret_cast<int32_t>(edx11 - (reinterpret_cast<unsigned char>(edx16) - eax15)) < reinterpret_cast<int32_t>(0)) {
            fun_43bd40(ecx, "updateBinIcon: y - ST_Y < 0", v9, v12);
        }
        if (!*eax5->fc) {
            v17 = *eax5->fc;
            ecx18 = g4775d0;
            if (!reinterpret_cast<int1_t>(ecx18 == 0x140)) {
            }
            fun_4339a0(ebx10, v12, v9, edx11, v17);
        } else {
            ecx19 = eax5->f14;
            fun_433a50(ecx19, v9, v12, *reinterpret_cast<signed char*>(&v2));
        }
        eax5->f8 = *eax5->fc;
    }
    return;
}

void** fun_420c50(void** ecx) {
    void** esi2;
    void** eax3;

    esi2 = g484cfc;
    if (esi2 != "H") {
        do {
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi2 + 8) == 0x4250d0) && (*reinterpret_cast<unsigned char*>(esi2 + 0x6a) & 64 && reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi2 + 0x6c)) > reinterpret_cast<signed char>(0))) {
                eax3 = fun_422370(0x2710);
            }
            esi2 = *reinterpret_cast<void***>(esi2 + 4);
        } while (!reinterpret_cast<int1_t>(esi2 == "H"));
    }
    return eax3;
}

void fun_414f30(void** ecx) {
    signed char* eax2;
    signed char** eax3;
    signed char bl4;
    signed char* edx5;

    eax2 = *eax3;
    do {
        ++eax2;
    } while (*eax2 != 1);
    do {
        bl4 = *eax2;
        ++eax2;
        *edx5 = bl4;
        ++edx5;
        *(eax2 - 1) = 0;
        if (!bl4) 
            break;
    } while (*eax2 != -1);
    if (*eax2 == -1) {
        *edx5 = 0;
    }
    return;
}

struct s452 {
    signed char[44] pad44;
    int32_t f2c;
};

struct s453 {
    signed char[32] pad32;
    int32_t f20;
};

struct s454 {
    signed char[32] pad32;
    int32_t f20;
};

struct s455 {
    signed char[32] pad32;
    int32_t f20;
};

struct s457 {
    signed char[108] pad108;
    int32_t f6c;
};

struct s456 {
    struct s457* f0;
    signed char[28] pad32;
    int32_t f20;
};

struct s458 {
    signed char[106] pad106;
    unsigned char f6a;
};

void** fun_4217d0(void** ecx) {
    struct s452* ebx2;
    int32_t edx3;
    void* eax4;
    int32_t edx5;
    int32_t edx6;
    int32_t edx7;
    int32_t edx8;
    int32_t edx9;
    struct s453* eax10;
    int32_t esi11;
    struct s454* eax12;
    struct s455* eax13;
    struct s456* eax14;
    void* eax15;
    int32_t edx16;
    struct s458** eax17;

    ebx2 = reinterpret_cast<struct s452*>(edx3 * 4 + reinterpret_cast<int32_t>(eax4));
    if (edx5) {
        if (edx6 != 2) {
            if (edx7 != 5) {
                if (edx8 != 3) {
                    if (edx9 != 1) {
                        if (!ebx2->f2c) {
                            ebx2->f2c = 1;
                            return 1;
                        } else {
                            return 0;
                        }
                    } else {
                        if (eax10->f20 < 100) {
                            esi11 = eax10->f20 + 100;
                            eax12->f20 = esi11;
                            if (esi11 > 100) {
                                eax13->f20 = 100;
                            }
                            eax14->f0->f6c = eax14->f20;
                        }
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax15) + edx16 * 4 + 44) = 1;
                        return 1;
                    }
                } else {
                    ebx2->f2c = 0x834;
                    return 1;
                }
            } else {
                ebx2->f2c = 0x1068;
                return 1;
            }
        } else {
            ebx2->f2c = 0x834;
            (*eax17)->f6a = reinterpret_cast<unsigned char>((*eax17)->f6a | 4);
            return 1;
        }
    } else {
        ebx2->f2c = 0x41a;
        return 1;
    }
}

struct s459 {
    signed char[3] pad3;
    void** f3;
    void** f4;
    void** f5;
    void** f6;
    void** f7;
};

void** g4669c4 = reinterpret_cast<void**>(0xff);

struct s459* g5f278c = reinterpret_cast<struct s459*>(0);

struct s459* fun_432890(void** ecx) {
    void** ebx2;
    void** ebx3;
    int1_t zf4;
    uint32_t edx5;
    struct s459* eax6;

    ebx2 = g5f274c;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx2 + 32)) <= reinterpret_cast<signed char>(100)) {
        ebx3 = *reinterpret_cast<void***>(ebx2 + 32);
    } else {
        ebx3 = reinterpret_cast<void**>(100);
    }
    zf4 = ebx3 == g4669c4;
    if (!zf4) {
        edx5 = 100 - reinterpret_cast<unsigned char>(ebx3);
        g4669c4 = ebx3;
        g5f278c = reinterpret_cast<struct s459*>(reinterpret_cast<int32_t>(edx5 + edx5 * 4) / 0x65 * 8);
    }
    eax6 = g5f278c;
    return eax6;
}

void** g4669cc = reinterpret_cast<void**>(0);

void** g46688c = reinterpret_cast<void**>(0);

void** g466888 = reinterpret_cast<void**>(0);

void** g466884 = reinterpret_cast<void**>(0xff);

void** g4669c8 = reinterpret_cast<void**>(0xff);

uint32_t g5f2608 = 0;

void** fun_4328f0(void** ecx) {
    int1_t less2;
    void** eax3;
    int1_t less4;
    int1_t less5;
    void** ebx6;
    void** edi7;
    void* edx8;
    void** eax9;
    void** edx10;
    void* edx11;
    uint32_t ebx12;
    unsigned char al13;
    struct s459* eax14;
    struct s459* eax15;
    void** edx16;
    int1_t less17;
    void** edx18;
    struct s459* eax19;
    struct s459* eax20;
    int1_t less21;
    void** esi22;
    struct s459* eax23;
    int1_t less24;
    int1_t zf25;
    struct s459* eax26;
    uint32_t eax27;
    struct s459* eax28;

    less2 = reinterpret_cast<signed char>(g4669cc) < reinterpret_cast<signed char>(10);
    if (less2 && (eax3 = g5f274c, !*reinterpret_cast<void***>(eax3 + 32))) {
        ecx = reinterpret_cast<void**>(9);
        g4669cc = reinterpret_cast<void**>(9);
        g46688c = reinterpret_cast<void**>(41);
        g466888 = reinterpret_cast<void**>(1);
    }
    less4 = reinterpret_cast<signed char>(g4669cc) < reinterpret_cast<signed char>(9);
    if (!less4 || (eax3 = g5f274c, *reinterpret_cast<void***>(eax3 + 0xe0) == 0)) {
        addr_432995_4:
        less5 = reinterpret_cast<signed char>(g4669cc) < reinterpret_cast<signed char>(8);
        if (less5 && ((eax3 = g5f274c, !!*reinterpret_cast<void***>(eax3 + 0xdc)) && ((ebx6 = *reinterpret_cast<void***>(eax3 + 0xe4), !!ebx6) && ebx6 != *reinterpret_cast<void***>(eax3)))) {
            edi7 = g466884;
            edx8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax3 + 32)) - reinterpret_cast<unsigned char>(edi7));
            g4669cc = reinterpret_cast<void**>(7);
            if (reinterpret_cast<int32_t>(edx8) <= reinterpret_cast<int32_t>(20)) {
                ecx = *reinterpret_cast<void***>(ebx6 + 16);
                eax9 = fun_42db10(ecx);
                edx10 = g5f274c;
                if (reinterpret_cast<unsigned char>(eax9) <= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(edx10) + 32))) {
                    edx11 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(edx10) + 32)) - reinterpret_cast<unsigned char>(eax9));
                    ebx12 = 0;
                    al13 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(edx11) <= 0x80000000);
                } else {
                    edx11 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax9) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(edx10) + 32)));
                    ebx12 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(edx10) + 32)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(edx10) + 32));
                    al13 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(edx11) > 0x80000000);
                }
                *reinterpret_cast<unsigned char*>(&ebx12) = al13;
                g466888 = reinterpret_cast<void**>(35);
                eax14 = fun_432890(ecx);
                if (reinterpret_cast<uint32_t>(edx11) >= 0x20000000) {
                    if (!ebx12) {
                        eax3 = reinterpret_cast<void**>(&eax14->f4);
                    } else {
                        eax3 = reinterpret_cast<void**>(&eax14->f3);
                    }
                } else {
                    eax3 = reinterpret_cast<void**>(&eax14->f7);
                }
            } else {
                g466888 = reinterpret_cast<void**>(35);
                eax15 = fun_432890(ecx);
                eax3 = reinterpret_cast<void**>(&eax15->f5);
            }
            g46688c = eax3;
        }
    } else {
        ecx = reinterpret_cast<void**>(0);
        eax3 = reinterpret_cast<void**>(0);
        do {
            edx16 = g5f274c;
            if (*reinterpret_cast<int32_t*>(eax3 + 0x5f260c) != *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx16) + reinterpret_cast<unsigned char>(eax3) + 0x78)) {
                ecx = reinterpret_cast<void**>(1);
                *reinterpret_cast<int32_t*>(eax3 + 0x5f260c) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx16) + reinterpret_cast<unsigned char>(eax3) + 0x78);
            }
            eax3 = eax3 + 4;
        } while (!reinterpret_cast<int1_t>(eax3 == 36));
        if (!ecx) 
            goto addr_432995_4; else 
            goto addr_432972_21;
    }
    less17 = reinterpret_cast<signed char>(g4669cc) < reinterpret_cast<signed char>(7);
    if (less17 && (eax3 = g5f274c, !!*reinterpret_cast<void***>(eax3 + 0xdc))) {
        edx18 = g466884;
        if (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax3 + 32)) - reinterpret_cast<unsigned char>(edx18)) <= reinterpret_cast<int32_t>(20)) {
            ecx = reinterpret_cast<void**>(35);
            g4669cc = reinterpret_cast<void**>(6);
            g466888 = reinterpret_cast<void**>(35);
            eax19 = fun_432890(35);
            eax3 = reinterpret_cast<void**>(&eax19->f7);
        } else {
            g4669cc = reinterpret_cast<void**>(7);
            g466888 = reinterpret_cast<void**>(35);
            eax20 = fun_432890(ecx);
            eax3 = reinterpret_cast<void**>(&eax20->f5);
        }
        g46688c = eax3;
    }
    less21 = reinterpret_cast<signed char>(g4669cc) < reinterpret_cast<signed char>(6);
    if (less21) {
        eax3 = g5f274c;
        if (!*reinterpret_cast<void***>(eax3 + 0xbc)) {
            g4669c8 = reinterpret_cast<void**>(0xffffffff);
        } else {
            ecx = g4669c8;
            if (!reinterpret_cast<int1_t>(ecx == 0xffffffff)) {
                esi22 = ecx + 0xffffffff;
                g4669c8 = esi22;
                if (!esi22) {
                    g4669cc = reinterpret_cast<void**>(5);
                    eax23 = fun_432890(ecx);
                    g46688c = reinterpret_cast<void**>(&eax23->f7);
                    eax3 = reinterpret_cast<void**>(1);
                    g466888 = reinterpret_cast<void**>(1);
                    g4669c8 = reinterpret_cast<void**>(1);
                }
            } else {
                g4669c8 = reinterpret_cast<void**>(70);
            }
        }
    }
    less24 = reinterpret_cast<signed char>(g4669cc) < reinterpret_cast<signed char>(5);
    if (less24 && ((eax3 = g5f274c, !!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax3 + 0xc4)) & 2)) || *reinterpret_cast<void***>(eax3 + 44))) {
        eax3 = reinterpret_cast<void**>(1);
        g4669cc = reinterpret_cast<void**>(4);
        g46688c = reinterpret_cast<void**>(40);
        g466888 = reinterpret_cast<void**>(1);
    }
    zf25 = g466888 == 0;
    if (zf25) {
        eax26 = fun_432890(ecx);
        eax27 = g5f2608;
        eax3 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax27) / 3);
        g46688c = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax27) % 3));
        g4669cc = reinterpret_cast<void**>(0);
        g466888 = reinterpret_cast<void**>(17);
    }
    --g466888;
    return eax3;
    addr_432972_21:
    g4669cc = reinterpret_cast<void**>(8);
    g466888 = reinterpret_cast<void**>(70);
    eax28 = fun_432890(ecx);
    eax3 = reinterpret_cast<void**>(&eax28->f6);
    g46688c = eax3;
    goto addr_432995_4;
}

struct s460 {
    signed char[20] pad20;
    int32_t* f14;
};

struct s461 {
    signed char[20] pad20;
    void** f14;
    signed char[11] pad32;
    void** f20;
};

void** fun_431e30(void** ecx) {
    void** v2;
    int32_t edx3;
    struct s460* eax4;
    struct s461* eax5;
    void** edi6;
    void** esi7;
    void** eax8;

    v2 = ecx;
    if (edx3 && *eax4->f14) {
        ecx = eax5->f20;
        fun_433a50(ecx, edi6, esi7, *reinterpret_cast<signed char*>(&v2));
    }
    eax8 = eax5->f14;
    if (*reinterpret_cast<void***>(eax8)) {
        eax8 = fun_431c10(ecx);
    }
    return eax8;
}

struct s462 {
    signed char[16] pad16;
    int32_t* f10;
};

struct s463 {
    void* f0;
    int32_t f4;
    int32_t f8;
    int32_t* fc;
    signed char[4] pad20;
    void*** f14;
};

void fun_431ef0(void** ecx) {
    struct s462* eax2;
    struct s463* eax3;
    int32_t edx4;
    int1_t zf5;
    void** ecx6;
    void** v7;
    void** edi8;
    void** ecx9;
    uint32_t ebx10;
    void** eax11;
    uint32_t eax12;
    void** edx13;
    void** v14;
    void** v15;
    uint32_t v16;
    void** v17;
    void** ecx18;
    void** v19;
    void** eax20;
    uint32_t edx21;
    uint32_t ebx22;
    uint32_t ebx23;
    void* edx24;
    void* eax25;
    void** edx26;
    uint32_t eax27;
    void** edx28;
    void** v29;
    void** v30;
    void** edx31;

    if (!*eax2->f10 || (eax3->f8 == *eax3->fc && !edx4 || *eax3->fc == -1)) {
        addr_4320bd_2:
        return;
    } else {
        zf5 = reinterpret_cast<int1_t>(g4775d0 == 0x280);
        if (!zf5 || eax3->f8 == -1) {
            if (eax3->f8 == -1) {
                addr_43209e_5:
                ecx6 = eax3->f14[*eax3->fc * 4];
                fun_433a50(ecx6, 4, 4, *reinterpret_cast<signed char*>(&v7));
                eax3->f8 = *eax3->fc;
                goto addr_4320bd_2;
            } else {
                edi8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax3->f0) - reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax3->f14[eax3->f8 * 4] + 4)))));
                ecx9 = g4775d0;
                ebx10 = eax3->f4 - reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax3->f14[eax3->f8 * 4] + 6))));
                eax11 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax3->f14[eax3->f8 * 4] + 2))));
                v7 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax3->f14[eax3->f8 * 4]))));
                if (!reinterpret_cast<int1_t>(ecx9 == 0x140)) {
                    eax12 = 64;
                } else {
                    eax12 = 32;
                }
                edx13 = g4775d4;
                if (reinterpret_cast<int32_t>(ebx10 - (reinterpret_cast<unsigned char>(edx13) - eax12)) < reinterpret_cast<int32_t>(0)) {
                    fun_43bd40(ecx9, "updateMultIcon: y - ST_Y < 0", v14, v15);
                }
                v16 = ebx10;
                v17 = edi8;
                ecx18 = v7;
                v19 = eax11;
                eax20 = g4775d0;
                if (!reinterpret_cast<int1_t>(eax20 == 0x140)) {
                }
            }
        } else {
            edx21 = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax3->f14[eax3->f8 * 4] + 4))));
            ebx22 = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax3->f14[eax3->f8 * 4] + 6))));
            edi8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax3->f0) - (edx21 + edx21));
            ebx23 = eax3->f4 - (ebx22 + ebx22);
            edx24 = reinterpret_cast<void*>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax3->f14[eax3->f8 * 4]))));
            eax25 = reinterpret_cast<void*>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax3->f14[eax3->f8 * 4] + 2))));
            edx26 = g4775d0;
            if (!reinterpret_cast<int1_t>(edx26 == 0x140)) {
                eax27 = 64;
            } else {
                eax27 = 32;
            }
            edx28 = g4775d4;
            if (reinterpret_cast<int32_t>(ebx23 - (reinterpret_cast<unsigned char>(edx28) - eax27)) < reinterpret_cast<int32_t>(0)) {
                fun_43bd40(ecx, "updateMultIcon: y - ST_Y < 0", v29, v30);
            }
            v16 = ebx23;
            v17 = edi8;
            edx31 = g4775d0;
            v19 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(eax25));
            ecx18 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx24) + reinterpret_cast<uint32_t>(edx24));
            if (!reinterpret_cast<int1_t>(edx31 == 0x140)) {
            }
        }
    }
    fun_4339a0(ecx18, v19, v17, v16, 0);
    goto addr_43209e_5;
}

struct s464 {
    signed char[20] pad20;
    int32_t* f14;
};

void** fun_431df0(void** ecx) {
    struct s464* eax2;
    void** eax3;

    if (*eax2->f14) {
        eax3 = fun_431c10(ecx);
    }
    return eax3;
}

void** g5f26bc = reinterpret_cast<void**>(0);

void** g5f26b4 = reinterpret_cast<void**>(0);

void** g5f26b0 = reinterpret_cast<void**>(0);

void fun_432260(int32_t a1, int32_t a2) {
    int32_t v3;
    int32_t edx4;
    int1_t zf5;
    void** ecx6;
    void** edi7;
    void** esi8;
    int1_t zf9;
    void** ecx10;
    void** ecx11;
    void** esi12;
    uint32_t eax13;
    void** ecx14;
    void** edi15;
    void** eax16;
    void** ecx17;

    v3 = edx4;
    zf5 = g5f26bc == 0;
    if (!zf5) {
        ecx6 = g5f26b4;
        fun_433a50(ecx6, edi7, esi8, *reinterpret_cast<signed char*>(&v3));
        zf9 = g482a84 == 0;
        if (!zf9) {
            ecx10 = g4775d0;
            if (reinterpret_cast<int1_t>(ecx10 == 0x280)) {
            }
            ecx11 = g5f26b0;
            fun_433a50(ecx11, edi7, esi8, *reinterpret_cast<signed char*>(&v3));
        }
        esi12 = g4775d0;
        if (!reinterpret_cast<int1_t>(esi12 == 0x140)) {
            eax13 = 64;
        } else {
            eax13 = 32;
        }
        ecx14 = g4775d4;
        edi15 = g4775d0;
        if (!reinterpret_cast<int1_t>(edi15 == 0x140)) {
            eax16 = reinterpret_cast<void**>(64);
        } else {
            eax16 = reinterpret_cast<void**>(32);
        }
        ecx17 = g4775d0;
        fun_4339a0(ecx17, eax16, 0, reinterpret_cast<unsigned char>(ecx14) - eax13, 0);
    }
    goto a2;
}

void fun_431b60(void** ecx) {
    void** edx2;
    void** eax3;

    eax3 = fun_434890(ecx, edx2, __return_address());
    g5f22d4 = eax3;
    return;
}

struct s465 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    int32_t f8;
    int32_t fc;
    void** f10;
    signed char[3] pad20;
    void** f14;
    signed char[3] pad24;
    void** f18;
};

void fun_431b80(void** ecx, void** a2, void** a3, int32_t a4) {
    int32_t edi5;
    int32_t edx6;
    int1_t zf7;
    void* ebx8;
    void* ebx9;
    void* ebx10;
    int1_t zf11;
    uint32_t eax12;
    void** edx13;
    void** eax14;
    void** ebx15;
    void** ebp16;
    void** edi17;
    void** esi18;
    void** ebx19;
    struct s465* eax20;

    edi5 = edx6;
    zf7 = reinterpret_cast<int1_t>(g4775d0 == 0x280);
    if (zf7) {
        edi5 = edi5 + edi5;
        ebx8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx9) + reinterpret_cast<int32_t>(ebx10));
    }
    zf11 = reinterpret_cast<int1_t>(g4775d0 == 0x140);
    if (!zf11) {
        eax12 = 64;
    } else {
        eax12 = 32;
    }
    edx13 = g4775d4;
    eax14 = g4775d4;
    ebx15 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebx8) + (reinterpret_cast<unsigned char>(edx13) - eax12));
    if (reinterpret_cast<signed char>(ebx15) > reinterpret_cast<signed char>(eax14)) {
        fun_437a90(ecx, "STlib_initNum: y too big %d", ebx15, ebp16, edi17, esi18, __return_address(), a2, a3);
        ebx19 = g4775d4;
        ebx15 = ebx19 - 64;
    }
    eax20->fc = 0;
    eax20->f0 = edi5;
    eax20->f4 = ebx15;
    eax20->f18 = ecx;
    eax20->f8 = a4;
    eax20->f10 = a2;
    eax20->f14 = a3;
    return;
}

struct s466 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    int32_t f8;
    void** fc;
    signed char[3] pad16;
    void** f10;
    signed char[3] pad20;
    void** f14;
};

void fun_431e70(void** ecx, void** a2, void** a3) {
    int32_t edi4;
    int32_t edx5;
    int1_t zf6;
    void* ebx7;
    void* ebx8;
    void* ebx9;
    int1_t zf10;
    uint32_t eax11;
    void** edx12;
    void** eax13;
    void** ebx14;
    void** ebp15;
    void** edi16;
    void** esi17;
    void** ebx18;
    struct s466* eax19;

    edi4 = edx5;
    zf6 = reinterpret_cast<int1_t>(g4775d0 == 0x280);
    if (zf6) {
        edi4 = edi4 + edi4;
        ebx7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx8) + reinterpret_cast<int32_t>(ebx9));
    }
    zf10 = reinterpret_cast<int1_t>(g4775d0 == 0x140);
    if (!zf10) {
        eax11 = 64;
    } else {
        eax11 = 32;
    }
    edx12 = g4775d4;
    eax13 = g4775d4;
    ebx14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebx7) + (reinterpret_cast<unsigned char>(edx12) - eax11));
    if (reinterpret_cast<signed char>(ebx14) > reinterpret_cast<signed char>(eax13)) {
        fun_437a90(ecx, "STlib_initNum: y too big %d", ebx14, ebp15, edi16, esi17, __return_address(), a2, a3);
        ebx18 = g4775d4;
        ebx14 = ebx18 - 64;
    }
    eax19->f8 = -1;
    eax19->f0 = edi4;
    eax19->f4 = ebx14;
    eax19->f14 = ecx;
    eax19->fc = a2;
    eax19->f10 = a3;
    return;
}

void** fun_43bb40(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16) {
    int1_t zf17;
    void** eax18;
    void** edx19;
    void** eax20;
    void** edx21;
    void** ebx22;
    void** eax23;

    zf17 = g60b9d4 == 0;
    if (!zf17) {
        eax18 = g60b270;
        edx19 = *reinterpret_cast<void***>(eax18);
        g60b9d4 = reinterpret_cast<void**>(0);
        eax20 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx19 + 0x80)());
        g60b3a0 = eax20;
        if (eax20) {
            fun_437a90(ecx, "MegaUnlock: Unlock = %d", reinterpret_cast<unsigned char>(eax20) & 0xfff, eax18, 0, edx21, ecx, ebx22, __return_address());
        }
        goto ecx;
    } else {
        eax23 = fun_437a90(ecx, "MegaUnlock: Not Locked!", edx21, ecx, ebx22, __return_address(), a2, a3, a4);
        return eax23;
    }
}

void** fun_4436a3(void** ecx, void** a2, uint32_t a3, void** a4, void** a5);

void** fun_44367f(void** ecx, void** a2, uint32_t a3, void** a4) {
    void** eax5;

    eax5 = fun_4436a3(ecx, a2, a3, 0, a4);
    return eax5;
}

void** fun_44428c(void** ecx, int32_t a2) {
    void** eax3;
    void** edi4;
    void** eax5;
    void** eax6;
    void** eax7;

    image_base_();
    eax5 = fun_44430e(eax3, edi4);
    if (!reinterpret_cast<int1_t>(eax5 == 0xffffffff)) {
        eax6 = fun_44430e(eax3, edi4);
        image_base_();
        fun_44430e(eax3, edi4);
        eax7 = eax6;
    } else {
        image_base_();
        eax7 = eax5;
    }
    return eax7;
}

void fun_4341b0(void** ecx, int32_t a2, void** a3) {
    void** v4;
    void** v5;
    void** esi6;
    void** v7;
    void** edi8;
    void** v9;
    void** ebp10;
    void** v11;
    void** eax12;
    signed char* ebp13;
    signed char* edx14;
    signed char* edi15;
    signed char* eax16;
    void** edx17;
    uint32_t ecx18;
    void** ecx19;
    void** esi20;
    int32_t ebx21;
    void** edi22;
    void** eax23;

    v4 = reinterpret_cast<void**>(__return_address());
    v5 = esi6;
    v7 = edi8;
    v9 = ebp10;
    v11 = eax12;
    ebp13 = edx14;
    edi15 = eax16;
    edx17 = v11;
    ecx18 = reinterpret_cast<unsigned char>(ecx) - reinterpret_cast<unsigned char>(ecx) - 1;
    do {
        if (!ecx18) 
            break;
        --ecx18;
        ++edi15;
    } while (*edi15);
    ecx19 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(~ecx18) - 1 + reinterpret_cast<unsigned char>(edx17));
    esi20 = ecx19 + 0xffffffff;
    if (esi20 != edx17) {
        ecx19 = v11;
        do {
            if (*reinterpret_cast<void***>(esi20 + 0xffffffff) == 92) 
                break;
        } while (*reinterpret_cast<void***>(esi20 + 0xffffffff) != 47 && (--esi20, esi20 != ecx19));
    }
    fun_442b80(ecx19, v11, v9, v7, v5, v4);
    ebx21 = 0;
    if (*reinterpret_cast<void***>(esi20)) {
        edi22 = v11;
        do {
            if (*reinterpret_cast<void***>(esi20) == 46) 
                break;
            ++ebx21;
            if (ebx21 == 9) {
                fun_43bd40(ecx19, "Filename base of %s >8 chars", edi22, v11);
            }
            ++esi20;
            eax23 = fun_4435c2(ecx19, v11, v9, v7);
            *ebp13 = *reinterpret_cast<signed char*>(&eax23);
            ecx19 = *reinterpret_cast<void***>(esi20);
            ++ebp13;
        } while (ecx19);
    }
    goto a3;
}

int32_t fun_4442e5(void** ecx) {
    int32_t ebx2;
    signed char* eax3;
    signed char* edx4;
    int32_t ebx5;
    int32_t eax6;

    while (ebx2) {
        if (*eax3 != *edx4) 
            goto addr_4442f6_4;
        if (!*eax3) 
            break;
        ++eax3;
        ++edx4;
        --ebx2;
    }
    return 0;
    addr_4442f6_4:
    ebx5 = 0;
    eax6 = 0;
    *reinterpret_cast<signed char*>(&ebx5) = *eax3;
    *reinterpret_cast<signed char*>(&eax6) = *edx4;
    return ebx5 - eax6;
}

void** fun_445b4e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

/* (image base) */
int32_t image_base_ = 0x4452e5;

void** fun_4439d1(void** ecx, void** a2, void** a3, void** a4) {
    void** edx5;
    void** ebx6;
    void** eax7;

    image_base_();
    eax7 = fun_445b4e(ecx, edx5, ebx6, __return_address(), a2, a3, a4);
    image_base_();
    image_base_();
    return eax7;
}

struct s467 {
    signed char[1] pad1;
    void** f1;
};

