
int32_t g10006038 = 0;

int32_t g1000603c = 0;

int32_t g10006040 = 0;

int32_t CreateFileA = 0xb264;

int32_t WriteFile = 0xb258;

void fun_10001000(signed char* a1) {
    void* esp2;
    int32_t esi3;
    int1_t zf4;
    int32_t edx5;
    int32_t eax6;
    void* eax7;
    signed char* esi8;
    void* v9;
    signed char* edi10;
    int32_t ecx11;
    int32_t eax12;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4);
    esi3 = 0;
    zf4 = g10006038 == 0;
    if (!zf4) {
        esi3 = g1000603c;
        edx5 = g10006040;
    } else {
        eax6 = reinterpret_cast<int32_t>(CreateFileA("\\\\.\\mailslot\\debugout", 0x40000000, 2, 0, 3, 0, 0));
        esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
        g10006040 = eax6;
        edx5 = eax6;
        if (eax6 != -1) {
            esi3 = 1;
        } else {
            edx5 = 0;
        }
        g10006038 = 1;
    }
    g1000603c = esi3;
    g10006040 = edx5;
    if (esi3) {
        eax7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) + 8);
        esi8 = a1;
        v9 = eax7;
        edi10 = esi8;
        ecx11 = -1;
        eax12 = reinterpret_cast<int32_t>(eax7) - reinterpret_cast<int32_t>(eax7);
        do {
            if (!ecx11) 
                break;
            --ecx11;
            ++edi10;
            ++esi8;
        } while (*edi10 != *reinterpret_cast<signed char*>(&eax12));
        WriteFile(edx5, esi8, ~ecx11 - 1, v9, 0);
    }
    return;
}

struct s0 {
    struct s0* f0;
    struct s0* f1;
    signed char[2] pad4;
    struct s0* f4;
    signed char[3] pad8;
    struct s0* f8;
    signed char[3] pad12;
    unsigned char fc;
    unsigned char fd;
    signed char[2] pad16;
    uint32_t f10;
    int32_t f14;
    signed char[4] pad28;
    struct s0* f1c;
    signed char[7] pad36;
    struct s0* f24;
    signed char[3] pad40;
    struct s0* f28;
    signed char[7] pad48;
    struct s0* f30;
    signed char[7] pad56;
    struct s0* f38;
    signed char[7] pad64;
    struct s0* f40;
    signed char[3] pad68;
    struct s0* f44;
    signed char[3] pad72;
    int32_t f48;
    signed char[4] pad80;
    int32_t f50;
};

int16_t g10008d48;

int32_t InterlockedExchange = 0xb2ae;

void fun_10001090(int32_t a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, struct s0* a10, struct s0* a11, struct s0* a12, struct s0* a13, struct s0* a14, struct s0* a15, struct s0* a16, struct s0* a17, struct s0* a18, struct s0* a19, struct s0* a20, struct s0* a21, struct s0* a22, struct s0* a23);

int16_t g10008d4c;

struct s1 {
    int32_t f0;
    int16_t f4;
};

int32_t g10008970;

int16_t g10008974;

struct s0* g10008b90;

int16_t g10008d4a;

uint32_t g10008ce8;

int32_t fun_10001980(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9) {
    struct s0* v10;
    struct s0* v11;
    struct s0* ebx12;
    struct s0* v13;
    struct s0* esi14;
    struct s0* v15;
    struct s0* edi16;
    int32_t ebx17;
    struct s0* v18;
    struct s0* ebp19;
    struct s0* esi20;
    unsigned char ebp21;
    struct s0* edi22;
    struct s0* v23;
    struct s0* v24;
    struct s0* eax25;
    struct s0* v26;
    struct s0* v27;
    struct s0* edi28;
    struct s0* v29;
    struct s0* eax30;
    uint32_t edx31;
    int32_t ebp32;
    int1_t zf33;
    int1_t less_or_equal34;
    struct s1* ecx35;
    int16_t cx36;
    signed char* eax37;
    signed char* esi38;
    int32_t ecx39;
    signed char* edi40;
    int32_t ecx41;
    int32_t eax42;
    struct s0* eax43;
    int16_t cx44;
    uint32_t eax45;
    signed char* esi46;
    signed char* edi47;
    uint32_t eax48;
    uint32_t ecx49;
    uint32_t ecx50;

    v10 = reinterpret_cast<struct s0*>(__return_address());
    g10008d48 = -1;
    v11 = ebx12;
    v13 = esi14;
    v15 = edi16;
    ebx17 = InterlockedExchange;
    v18 = ebp19;
    do {
        esi20 = reinterpret_cast<struct s0*>(0xffffffff);
        ebp21 = reinterpret_cast<unsigned char>(0x7fffffff);
        edi22 = reinterpret_cast<struct s0*>(0x100072a0);
        do {
            v23 = reinterpret_cast<struct s0*>(2);
            v24 = edi22;
            eax25 = reinterpret_cast<struct s0*>(ebx17());
            if (!reinterpret_cast<int1_t>(eax25 == 3)) {
                v26 = eax25;
            } else {
                if (!reinterpret_cast<int1_t>(esi20 == 0xffffffff)) {
                    if (reinterpret_cast<signed char>(ebp21) >= reinterpret_cast<signed char>(edi22->fc)) {
                        esi20 = v13;
                        ebp21 = edi22->fc;
                    }
                    v26 = reinterpret_cast<struct s0*>(3);
                } else {
                    esi20 = v13;
                    ebp21 = edi22->fc;
                    v26 = reinterpret_cast<struct s0*>(3);
                }
            }
            v27 = edi22;
            ebx17();
            edi22 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(edi22) + 0x210);
            v18 = reinterpret_cast<struct s0*>(&v18->f1);
        } while (reinterpret_cast<unsigned char>(edi22) < reinterpret_cast<unsigned char>(0x10008740));
        if (esi20 == 0xffffffff) 
            break;
        edi28 = reinterpret_cast<struct s0*>(((reinterpret_cast<unsigned char>(esi20) << 5) + reinterpret_cast<unsigned char>(esi20) << 4) + 0x100072a0);
        v29 = edi28;
        eax30 = reinterpret_cast<struct s0*>(ebx17());
        if (!reinterpret_cast<int1_t>(eax30 == 3)) {
            ebx17(edi28);
            fun_10001090("GetPacket: failed to grab packet %d", esi20, edi28, eax30, v29, 2, v27, v26, v24, 2, v18, v15, v13, v11, 0, 0, v10, a1, a2, a3, a4, a5, a6);
        } else {
            v23 = reinterpret_cast<struct s0*>(1);
        }
    } while (!v23);
    goto addr_10001a40_16;
    goto v13;
    addr_10001a40_16:
    edx31 = (reinterpret_cast<unsigned char>(esi20) << 5) + reinterpret_cast<unsigned char>(esi20) << 4;
    ebp32 = 0;
    zf33 = g10008d4c == 0;
    less_or_equal34 = g10008d4c <= 0;
    ecx35 = reinterpret_cast<struct s1*>(edx31 + 0x100072a4);
    cx36 = ecx35->f4;
    g10008970 = ecx35->f0;
    g10008974 = cx36;
    if (!less_or_equal34) {
        eax37 = reinterpret_cast<signed char*>(0x10008cb0);
        do {
            esi38 = reinterpret_cast<signed char*>(0x10008970);
            ecx39 = 6;
            edi40 = eax37;
            do {
                if (!ecx39) 
                    break;
                --ecx39;
                zf33 = *esi38 == *edi40;
                ++edi40;
                ++esi38;
            } while (zf33);
        } while (!zf33 && (eax37 = eax37 + 6, ++ebp32, ecx41 = g10008d4c, zf33 = ecx41 == ebp32, ecx41 > ebp32));
    }
    eax42 = g10008d4c;
    if (eax42 <= ebp32) {
        eax43 = g10008b90;
        if (eax43 != 0xffffffff) {
            fun_10001090("GetPacket: localtime != -1, its %d", eax43, v29, 2, v27, v26, v24, v23, v18, v15, v13, v11, 0, 0, v10, a1, a2, a3, a4, a5, a6, a7, a8);
            goto v18;
        }
    } else {
        g10008d48 = *reinterpret_cast<int16_t*>(&ebp32);
    }
    cx44 = *reinterpret_cast<int16_t*>(edx31 + 0x100072aa);
    eax45 = *reinterpret_cast<uint32_t*>(edx31 + 0x100072ac);
    g10008d4a = cx44;
    esi46 = reinterpret_cast<signed char*>(edx31 + 0x100072b0);
    edi47 = reinterpret_cast<signed char*>(0x10008d64);
    g10008ce8 = eax45;
    eax48 = reinterpret_cast<uint32_t>(static_cast<int32_t>(cx44));
    ecx49 = eax48 >> 2;
    while (ecx49) {
        --ecx49;
        *edi47 = *esi46;
        edi47 = edi47 + 4;
        esi46 = esi46 + 4;
    }
    ecx50 = eax48 & 3;
    while (ecx50) {
        --ecx50;
        *edi47 = *esi46;
        ++edi47;
        ++esi46;
    }
    ebx17();
    goto v24;
}

int32_t wvsprintfA = 0xb30a;

void fun_10001090(int32_t a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, struct s0* a10, struct s0* a11, struct s0* a12, struct s0* a13, struct s0* a14, struct s0* a15, struct s0* a16, struct s0* a17, struct s0* a18, struct s0* a19, struct s0* a20, struct s0* a21, struct s0* a22, struct s0* a23) {
    int32_t eax24;
    void* esp25;
    signed char* edi26;
    int32_t ecx27;
    int32_t eax28;
    uint32_t edx29;
    int32_t ecx30;
    int32_t eax31;
    void* v32;
    uint32_t ecx33;
    uint32_t ecx34;
    int32_t v35;

    eax24 = reinterpret_cast<int32_t>(wvsprintfA());
    esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x200 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp25) + eax24 + 6) != 13 || *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp25) + eax24 + 7) != 10) {
        edi26 = "\r\n";
        ecx27 = -1;
        eax28 = eax24 - eax24;
        do {
            if (!ecx27) 
                break;
            --ecx27;
            ++edi26;
        } while (*edi26 != *reinterpret_cast<signed char*>(&eax28));
        edx29 = reinterpret_cast<uint32_t>(~ecx27);
        ecx30 = -1;
        eax31 = eax28 - eax28;
        do {
            if (!ecx30) 
                break;
            --ecx30;
        } while (v32 != *reinterpret_cast<void**>(&eax31));
        ecx33 = edx29 >> 2;
        while (ecx33) {
            --ecx33;
        }
        ecx34 = edx29 & 3;
        while (ecx34) {
            --ecx34;
        }
    }
    fun_10001000(reinterpret_cast<int32_t>(esp25) + 8);
    goto v35;
}

int16_t g10006180 = 0x869c;

int16_t fun_10001b3a(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, struct s0* a9, struct s0* a10, struct s0* a11, struct s0* a12, struct s0* a13, struct s0* a14, struct s0* a15, struct s0* a16, struct s0* a17);

struct s0* g1000898c;

void fun_10001b58();

int32_t GetLastError = 0xb2c4;

void fun_100018d0(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, struct s0* a10) {
    struct s0* eax11;
    struct s0* ecx12;
    int32_t esi13;
    struct s0* v14;
    struct s0* edi15;
    struct s0* esi16;
    void* esp17;
    int32_t eax18;
    struct s0* eax19;
    signed char* esi20;
    signed char* edi21;
    uint32_t eax22;
    uint32_t ecx23;
    uint32_t ecx24;

    eax11 = a1;
    g10008d48 = *reinterpret_cast<int16_t*>(&eax11);
    *reinterpret_cast<int16_t*>(&ecx12) = g10006180;
    esi13 = 0;
    v14 = ecx12;
    fun_10001b3a(v14, edi15, esi16, 6, 0, 0, 0, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9);
    esp17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16 - 4 - 4 - 4 - 4 + 4);
    do {
        eax18 = g10008d48;
        ++esi13;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp17) + esi13 + 13) = *reinterpret_cast<signed char*>(esi13 + (eax18 + eax18 * 2) * 2 + 0x10008caf);
    } while (esi13 < 6);
    eax19 = g10008b90;
    esi20 = reinterpret_cast<signed char*>(0x10008d64);
    edi21 = reinterpret_cast<signed char*>(0x10008990);
    g1000898c = eax19;
    eax22 = reinterpret_cast<uint32_t>(static_cast<int32_t>(g10008d4a));
    ecx23 = eax22 >> 2;
    while (ecx23) {
        --ecx23;
        *edi21 = *esi20;
        edi21 = edi21 + 4;
        esi20 = esi20 + 4;
    }
    ecx24 = eax22 & 3;
    while (ecx24) {
        --ecx24;
        *edi21 = *esi20;
        ++edi21;
        ++esi20;
    }
    fun_10001b58();
    GetLastError();
    goto v14;
}

/* WSOCK32.dll:18 */
int32_t WSOCK32_dll_18 = 0x80000012;

int32_t fun_10001b2e() {
    goto WSOCK32_dll_18;
}

/* WSOCK32.dll:17 */
int32_t WSOCK32_dll_17 = 0x80000011;

struct s0* fun_10001b28(struct s0* a1, struct s0* a2) {
    goto WSOCK32_dll_17;
}

struct s0* g1000874c;

void fun_10001b4c();

void fun_10001790() {
    struct s0* eax1;

    eax1 = g1000874c;
    fun_10001b4c();
    goto eax1;
}

/* WSOCK32.dll:20 */
int32_t WSOCK32_dll_20 = 0x80000014;

void fun_10001b58() {
    goto WSOCK32_dll_20;
}

/* (image base) */
int16_t* image_base_ = reinterpret_cast<int16_t*>(0x100062fa);

struct s0* fun_10002ef0(int32_t a1, struct s0* a2, struct s0* a3, void* a4, struct s0* a5, int32_t a6);

uint32_t fun_10001e80(void* a1, uint32_t a2) {
    void* ecx3;
    void* esp4;
    int32_t ebx5;
    int16_t* eax6;
    struct s0* eax7;
    struct s0* eax8;
    int16_t* edx9;
    uint32_t eax10;

    ecx3 = a1;
    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 4);
    if (reinterpret_cast<int32_t>(ecx3) + 1 > 0x100) {
        ebx5 = 0;
        *reinterpret_cast<signed char*>(&ebx5) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx3) + 1);
        eax6 = image_base_;
        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax6 + ebx5) + 1) & 0x80)) {
            eax7 = reinterpret_cast<struct s0*>(1);
        } else {
            eax7 = reinterpret_cast<struct s0*>(2);
        }
        eax8 = fun_10002ef0(1, reinterpret_cast<int32_t>(esp4) - 4 - 4 - 4 - 4 + 24, eax7, reinterpret_cast<int32_t>(esp4) + 6, 0, 0);
        if (eax8) {
            return 0;
        } else {
            return 0;
        }
    } else {
        edx9 = image_base_;
        eax10 = 0;
        *reinterpret_cast<int16_t*>(&eax10) = edx9[static_cast<int32_t>(ecx3)];
        return eax10 & a2;
    }
}

int32_t g100062d0 = 0;

void fun_10002cb0(int32_t a1, struct s0* a2, struct s0* a3, struct s0* a4) {
    g100062d0 = a1;
    return;
}

int32_t g1000a320;

int32_t HeapDestroy = 0xb3fe;

void fun_10002240() {
    int32_t eax1;

    eax1 = g1000a320;
    HeapDestroy();
    goto eax1;
}

struct s0* fun_100037a0(struct s0* a1);

struct s0* fun_10001e40(int32_t a1);

struct s0* g1000a220;

uint32_t g1000a210;

int32_t GetStartupInfoA = 0xb43c;

struct s2 {
    uint32_t f0;
    unsigned char f4;
};

struct s3 {
    int32_t f0;
    unsigned char f4;
};

int32_t GetStdHandle = 0xb42c;

int32_t GetFileType = 0xb41e;

int32_t SetHandleCount = 0xb40c;

struct s4 {
    int32_t f0;
    unsigned char f4;
};

void fun_10002250() {
    struct s0* eax1;
    struct s0* esi2;
    struct s0* eax3;
    int16_t v4;
    int32_t v5;
    void* esi6;
    int32_t edi7;
    uint32_t ebp8;
    struct s2* v9;
    unsigned char* edi10;
    int32_t* ebx11;
    int1_t less12;
    struct s0* ebx13;
    struct s3* ebx14;
    uint32_t eax15;
    int32_t eax16;
    uint32_t eax17;
    uint32_t eax18;
    int32_t v19;
    uint32_t esi20;
    int32_t v21;
    int32_t eax22;
    uint32_t ecx23;
    struct s4* ecx24;
    struct s0** esi25;
    struct s0* eax26;
    uint32_t tmp32_27;
    int1_t less28;

    eax1 = fun_100037a0(0x480);
    esi2 = eax1;
    if (!esi2) {
        fun_10001e40(27);
    }
    g1000a220 = esi2;
    g1000a210 = 32;
    if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(esi2) + 0x480) > reinterpret_cast<unsigned char>(esi2)) {
        do {
            esi2->f4 = reinterpret_cast<struct s0*>(0);
            esi2 = reinterpret_cast<struct s0*>(&esi2->f24);
            *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi2) + 0xffffffdc) = -1;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esi2) + 0xffffffe1) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi2) + 0xffffffe4) = 0;
            eax3 = g1000a220;
        } while (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax3) + 0x480) > reinterpret_cast<unsigned char>(esi2));
    }
    GetStartupInfoA();
    if (!v4 || !v5) {
        addr_100023a2_7:
        esi6 = reinterpret_cast<void*>(0);
        edi7 = 0;
    } else {
        ebp8 = v9->f0;
        edi10 = &v9->f4;
        ebx11 = reinterpret_cast<int32_t*>(ebp8 + reinterpret_cast<uint32_t>(edi10));
        if (reinterpret_cast<int32_t>(ebp8) >= reinterpret_cast<int32_t>(0x800)) {
            ebp8 = 0x800;
        }
        less12 = reinterpret_cast<int32_t>(g1000a210) < reinterpret_cast<int32_t>(ebp8);
        if (!less12) 
            goto addr_10002358_11; else 
            goto addr_100022fa_12;
    }
    do {
        ebx13 = g1000a220;
        ebx14 = reinterpret_cast<struct s3*>(reinterpret_cast<unsigned char>(ebx13) + reinterpret_cast<uint32_t>(esi6));
        if (ebx14->f0 != -1) {
            ebx14->f4 = reinterpret_cast<unsigned char>(ebx14->f4 | 0x80);
        } else {
            eax15 = 0xfffffff6;
            ebx14->f4 = 0x81;
            if (esi6) {
                eax15 = 12 - reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(edi7 - 1) < 1);
            }
            eax16 = reinterpret_cast<int32_t>(GetStdHandle(eax15));
            if (eax16 == -1 || (eax17 = reinterpret_cast<uint32_t>(GetFileType(eax16, eax15)), eax17 == 0)) {
                ebx14->f4 = reinterpret_cast<unsigned char>(ebx14->f4 | 64);
            } else {
                eax18 = eax17 & 0xff;
                ebx14->f0 = eax16;
                if (eax18 != 2) {
                    if (eax18 == 3) {
                        ebx14->f4 = reinterpret_cast<unsigned char>(ebx14->f4 | 8);
                    }
                } else {
                    ebx14->f4 = reinterpret_cast<unsigned char>(ebx14->f4 | 64);
                }
            }
        }
        esi6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi6) + 36);
        ++edi7;
    } while (reinterpret_cast<int32_t>(esi6) < reinterpret_cast<int32_t>(0x6c));
    SetHandleCount();
    goto v19;
    addr_10002358_11:
    esi20 = 0;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebp8) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ebp8 == 0))) {
        do {
            if (*ebx11 != -1 && (*edi10 & 1 && (v21 = *ebx11, eax22 = reinterpret_cast<int32_t>(GetFileType(v21)), !!eax22))) {
                ecx23 = (esi20 & 31) << 2;
                ecx24 = reinterpret_cast<struct s4*>(ecx23 + ecx23 * 8 + reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(esi20 & 0xffffffe7) >> 3) + 0x1000a220)));
                ecx24->f0 = *ebx11;
                ecx24->f4 = *edi10;
            }
            ++esi20;
            ++edi10;
            ++ebx11;
        } while (reinterpret_cast<int32_t>(esi20) < reinterpret_cast<int32_t>(ebp8));
        goto addr_100023a2_7;
    }
    addr_100022fa_12:
    esi25 = reinterpret_cast<struct s0**>(0x1000a224);
    do {
        eax26 = fun_100037a0(0x480);
        if (!eax26) 
            break;
        *esi25 = eax26;
        tmp32_27 = g1000a210 + 32;
        g1000a210 = tmp32_27;
        if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax26) + 0x480) > reinterpret_cast<unsigned char>(eax26)) {
            do {
                eax26->f4 = reinterpret_cast<struct s0*>(0);
                eax26 = reinterpret_cast<struct s0*>(&eax26->f24);
                *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(eax26) + 0xffffffdc) = -1;
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax26) + 0xffffffe1) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(eax26) + 0xffffffe4) = 0;
            } while (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*esi25) + 0x480) > reinterpret_cast<unsigned char>(eax26));
        }
        esi25 = esi25 + 4;
        less28 = reinterpret_cast<int32_t>(g1000a210) < reinterpret_cast<int32_t>(ebp8);
    } while (less28);
    goto addr_10002350_33;
    ebp8 = g1000a210;
    goto addr_10002358_11;
    addr_10002350_33:
    goto addr_10002358_11;
}

int32_t fun_100027f0(struct s0* a1);

int32_t fun_10002b00() {
    int32_t eax1;

    eax1 = fun_100027f0(0xfd);
    return eax1;
}

int32_t GetModuleFileNameA = 0xb298;

struct s0** g1000a330;

struct s0** g10006558 = reinterpret_cast<struct s0**>(0);

void fun_10002610(struct s0** a1, struct s0* a2, struct s0* a3, int32_t* a4, int32_t* a5);

struct s5 {
    struct s0* f0;
    signed char[1039] pad1040;
    struct s0* f410;
};

struct s0* g10006540 = reinterpret_cast<struct s0*>(0);

int32_t g1000653c = 0;

void fun_10002570() {
    struct s0** esi1;
    void* esp2;
    struct s0** eax3;
    struct s5* edi4;
    struct s0* eax5;
    void* esp6;
    int32_t esi7;

    esi1 = reinterpret_cast<struct s0**>(0x10007128);
    GetModuleFileNameA();
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    eax3 = g1000a330;
    g10006558 = reinterpret_cast<struct s0**>(0x10007128);
    if (*eax3) {
        esi1 = g1000a330;
    }
    fun_10002610(esi1, 0, 0, reinterpret_cast<int32_t>(esp2) + 8, reinterpret_cast<int32_t>(esp2) + 12);
    eax5 = fun_100037a0(&edi4->f410);
    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 20 - 4 - 4 + 4 + 4);
    if (!eax5) {
        fun_10001e40(8);
        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 - 4 + 4 + 4);
    }
    fun_10002610(esi1, eax5, reinterpret_cast<unsigned char>(eax5) + 0x410, reinterpret_cast<int32_t>(esp6) + 8, reinterpret_cast<int32_t>(esp6) + 12);
    g10006540 = eax5;
    g1000653c = 0x103;
    goto esi7;
}

struct s0* g100062c0 = reinterpret_cast<struct s0*>(0);

struct s0* g10006548 = reinterpret_cast<struct s0*>(0);

void fun_10003780(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9);

void fun_10002490(struct s0* a1, struct s0* a2) {
    struct s0* v3;
    struct s0* edx4;
    struct s0* v5;
    struct s0* ebx6;
    struct s0* v7;
    struct s0* esi8;
    struct s0* v9;
    struct s0* edi10;
    struct s0** esi11;
    struct s0* v12;
    struct s0* ebp13;
    struct s0* edi14;
    int32_t ecx15;
    int32_t eax16;
    struct s0* eax17;
    struct s0* ebx18;
    struct s0* ebp19;
    struct s0* eax20;
    struct s0* edi21;
    int32_t ecx22;
    struct s0* ecx23;
    struct s0* v24;
    struct s0* eax25;
    struct s0* edi26;
    int32_t ecx27;
    void* eax28;
    struct s0* ecx29;
    uint32_t ecx30;
    struct s0* edi31;
    uint32_t ecx32;
    struct s0* eax33;

    v3 = reinterpret_cast<struct s0*>(__return_address());
    edx4 = g100062c0;
    v5 = ebx6;
    v7 = esi8;
    v9 = edi10;
    esi11 = reinterpret_cast<struct s0**>(0);
    v12 = ebp13;
    if (*reinterpret_cast<struct s0**>(&edx4->f0)) {
        do {
            if (*reinterpret_cast<struct s0**>(&edx4->f0) != 61) {
                ++esi11;
            }
            edi14 = edx4;
            ecx15 = -1;
            eax16 = eax16 - eax16;
            do {
                if (!ecx15) 
                    break;
                --ecx15;
                edi14 = reinterpret_cast<struct s0*>(&edi14->f1);
                ++esi11;
            } while (*reinterpret_cast<struct s0**>(&edi14->f0) != *reinterpret_cast<struct s0**>(&eax16));
            edx4 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(edx4) + ~ecx15);
        } while (*reinterpret_cast<struct s0**>(&edx4->f0));
    }
    eax17 = fun_100037a0(reinterpret_cast<uint32_t>(esi11) * 4 + 4);
    g10006548 = eax17;
    ebx18 = eax17;
    if (!ebx18) {
        fun_10001e40(9);
    }
    ebp19 = g100062c0;
    eax20 = ebp19;
    if (*reinterpret_cast<struct s0**>(&ebp19->f0)) {
        do {
            edi21 = ebp19;
            ecx22 = -1;
            eax20 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(eax20) - reinterpret_cast<unsigned char>(eax20));
            do {
                if (!ecx22) 
                    break;
                --ecx22;
                edi21 = reinterpret_cast<struct s0*>(&edi21->f1);
            } while (*reinterpret_cast<struct s0**>(&edi21->f0) != eax20);
            ecx23 = reinterpret_cast<struct s0*>(~ecx22);
            v24 = ecx23;
            if (*reinterpret_cast<struct s0**>(&ebp19->f0) != 61) {
                eax25 = fun_100037a0(ecx23);
                *reinterpret_cast<struct s0**>(&ebx18->f0) = eax25;
                if (!eax25) {
                    eax25 = fun_10001e40(9);
                }
                edi26 = ebp19;
                ecx27 = -1;
                eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25) - reinterpret_cast<unsigned char>(eax25));
                do {
                    if (!ecx27) 
                        break;
                    --ecx27;
                    edi26 = reinterpret_cast<struct s0*>(&edi26->f1);
                } while (*reinterpret_cast<struct s0**>(&edi26->f0) != *reinterpret_cast<struct s0**>(&eax28));
                ecx29 = reinterpret_cast<struct s0*>(~ecx27);
                eax20 = ecx29;
                ecx30 = reinterpret_cast<unsigned char>(ecx29) >> 2;
                esi11 = reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(edi26) - reinterpret_cast<unsigned char>(ecx29));
                edi31 = *reinterpret_cast<struct s0**>(&ebx18->f0);
                ebx18 = reinterpret_cast<struct s0*>(&ebx18->f4);
                while (ecx30) {
                    --ecx30;
                    *reinterpret_cast<struct s0**>(&edi31->f0) = *esi11;
                    edi31 = reinterpret_cast<struct s0*>(&edi31->f4);
                    esi11 = esi11 + 4;
                }
                ecx32 = reinterpret_cast<unsigned char>(eax20) & 3;
                while (ecx32) {
                    --ecx32;
                    *reinterpret_cast<struct s0**>(&edi31->f0) = *esi11;
                    edi31 = reinterpret_cast<struct s0*>(&edi31->f1);
                    ++esi11;
                }
            }
            ebp19 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(ebp19) + reinterpret_cast<unsigned char>(v24));
        } while (*reinterpret_cast<struct s0**>(&ebp19->f0));
    }
    eax33 = g100062c0;
    fun_10003780(eax33, v12, v9, v7, v5, v24, v3, a1, a2);
    *reinterpret_cast<struct s0**>(&ebx18->f0) = reinterpret_cast<struct s0*>(0);
    return;
}

int32_t g1000a328;

void fun_10002030(int32_t* a1, int32_t* a2);

void fun_10001f20() {
    int32_t eax1;

    eax1 = g1000a328;
    if (eax1) {
        eax1();
    }
    fun_10002030(0x10006008, 0x10006010);
    fun_10002030(0x10006000, 0x10006004);
    return;
}

void fun_10001f80(int32_t a1, int32_t a2, int32_t a3);

void fun_10001f70() {
    fun_10001f80(0, 0, 1);
    return;
}

int32_t g10006568 = -1;

int32_t TlsGetValue = 0xb3e2;

int32_t TlsSetValue = 0xb3ae;

void fun_10002170(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6) {
    int1_t zf7;
    struct s0* esi8;
    int32_t eax9;
    struct s0* eax10;
    struct s0* v11;
    struct s0* esi12;
    struct s0* v13;
    struct s0* v14;
    struct s0* v15;
    struct s0* v16;
    struct s0* v17;
    int32_t eax18;

    zf7 = g10006568 == -1;
    if (!zf7) {
        esi8 = a1;
        if (esi8 || (eax9 = g10006568, eax10 = reinterpret_cast<struct s0*>(TlsGetValue(eax9)), esi8 = eax10, !!esi8)) {
            if (esi8->f24) {
                v11 = esi8->f24;
                fun_10003780(v11, esi12, __return_address(), a1, a2, a3, a4, a5, a6);
            }
            if (esi8->f28) {
                v13 = esi8->f28;
                fun_10003780(v13, esi12, __return_address(), a1, a2, a3, a4, a5, a6);
            }
            if (esi8->f30) {
                v14 = esi8->f30;
                fun_10003780(v14, esi12, __return_address(), a1, a2, a3, a4, a5, a6);
            }
            if (esi8->f38) {
                v15 = esi8->f38;
                fun_10003780(v15, esi12, __return_address(), a1, a2, a3, a4, a5, a6);
            }
            if (esi8->f40) {
                v16 = esi8->f40;
                fun_10003780(v16, esi12, __return_address(), a1, a2, a3, a4, a5, a6);
            }
            if (esi8->f44) {
                v17 = esi8->f44;
                fun_10003780(v17, esi12, __return_address(), a1, a2, a3, a4, a5, a6);
            }
            fun_10003780(esi8, esi12, __return_address(), a1, a2, a3, a4, a5, a6);
        }
        eax18 = g10006568;
        TlsSetValue(eax18, 0);
    }
    return;
}

uint32_t g100062bc = 0;

int32_t g10006564 = 0;

void fun_10002430(struct s0* a1, struct s0* a2, struct s0* a3);

void fun_100020b0(struct s0* a1, struct s0* a2);

int32_t GetVersion = 0xb37c;

uint32_t g1000652c = 0;

int32_t GetModuleHandleA = 0xb368;

int32_t GetProcAddress = 0xb356;

void fun_10002220();

int32_t g10006538 = 0;

uint32_t g10006534 = 0;

uint32_t g10006530 = 0;

int32_t fun_10002050();

int32_t GetCommandLineA = 0xb344;

struct s0* fun_10002b10();

struct s0* fun_10001c20(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4) {
    uint32_t eax5;
    int1_t zf6;
    uint32_t eax7;
    int1_t zf8;
    struct s0* eax9;
    int32_t eax10;
    int32_t ecx11;
    uint32_t edx12;
    uint32_t eax13;
    int32_t eax14;
    struct s0** eax15;
    struct s0* eax16;
    int1_t zf17;

    if (!reinterpret_cast<int1_t>(a2 == 1)) {
        if (a2) {
            if (reinterpret_cast<int1_t>(a2 == 3)) {
                fun_10002170(0, __return_address(), a1, a2, a3, a4);
            }
            return 1;
        } else {
            eax5 = g100062bc;
            if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax5) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax5 == 0)) {
                return 0;
            } else {
                zf6 = g10006564 == 0;
                g100062bc = eax5 - 1;
                if (zf6) {
                    fun_10001f70();
                }
                fun_10002430(__return_address(), a1, a2);
                fun_100020b0(__return_address(), a1);
                fun_10002240();
                return 1;
            }
        }
    } else {
        eax7 = reinterpret_cast<uint32_t>(GetVersion());
        zf8 = g100062d0 == 0;
        g1000652c = eax7;
        if (zf8) {
            if (*reinterpret_cast<signed char*>(&eax7) == 3 && eax7 & 0x80000000) {
                fun_10002cb0(2, __return_address(), a1, a2);
            }
            eax9 = reinterpret_cast<struct s0*>(GetModuleHandleA("kernel32.dll"));
            if (eax9 && (eax10 = reinterpret_cast<int32_t>(GetProcAddress(eax9, "IsTNT", "kernel32.dll")), !!eax10)) {
                fun_10002cb0(1, eax9, "IsTNT", "kernel32.dll");
            }
        }
        fun_10002220();
        ecx11 = 0;
        edx12 = g1000652c;
        *reinterpret_cast<signed char*>(&ecx11) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx12) + 1);
        eax13 = edx12 & 0xff;
        ++g100062bc;
        g10006538 = ecx11;
        g10006534 = eax13;
        g1000652c = edx12 >> 16;
        g10006530 = (eax13 << 8) + ecx11;
        eax14 = fun_10002050();
        if (eax14) {
            eax15 = reinterpret_cast<struct s0**>(GetCommandLineA());
            g1000a330 = eax15;
            eax16 = fun_10002b10();
            zf17 = g1000a330 == 0;
            g100062c0 = eax16;
            if (zf17 || !eax16) {
                fun_10002240();
                return 0;
            } else {
                fun_10002250();
                fun_10002b00();
                fun_10002570();
                fun_10002490(__return_address(), a1);
                fun_10001f20();
                return 1;
            }
        } else {
            fun_10002240();
            return 0;
        }
    }
}

void fun_10001850(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, struct s0* a10, struct s0* a11, struct s0* a12, struct s0* a13, struct s0* a14, struct s0* a15, struct s0* a16, struct s0* a17, struct s0* a18, struct s0* a19);

struct s0* g10006030 = reinterpret_cast<struct s0*>(0);

int32_t GetCurrentProcessId = 0xb282;

int32_t g10006034 = 0;

void fun_10001b22();

struct s0* fun_10001460(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, struct s0* a10, struct s0* a11, struct s0* a12, struct s0* a13, struct s0* a14, struct s0* a15, struct s0* a16, struct s0* a17, struct s0* a18) {
    int32_t eax19;

    if (!a2) {
        fun_10001850(__return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
        return 1;
    } else {
        if (a2 == 1) {
            g10006030 = a1;
            GetModuleFileNameA();
            eax19 = reinterpret_cast<int32_t>(GetCurrentProcessId());
            g10006034 = eax19;
            goto 0;
        } else {
            if (a2 == 3) {
                fun_10001b22();
                return 1;
            } else {
                return 1;
            }
        }
    }
}

void fun_10003540(struct s0* a1, struct s0* a2, struct s0* a3);

int32_t TlsFree = 0xb3c8;

void fun_100020b0(struct s0* a1, struct s0* a2) {
    int32_t eax3;

    fun_10003540(__return_address(), a1, a2);
    eax3 = g10006568;
    if (eax3 != -1) {
        TlsFree(eax3);
        g10006568 = -1;
    }
    return;
}

int32_t g100062cc = 0;

void fun_10002d00(int32_t a1);

int32_t g10006aa0 = 0;

void fun_10002cc0() {
    int32_t eax1;
    int1_t zf2;
    int32_t eax3;

    eax1 = g100062cc;
    if (eax1 == 1 || !eax1 && (zf2 = g100062d0 == 1, zf2)) {
        fun_10002d00(0xfc);
        eax3 = g10006aa0;
        if (eax3) {
            eax3();
        }
        fun_10002d00(0xff);
    }
    return;
}

void fun_10002030(int32_t* a1, int32_t* a2) {
    int32_t* edi3;
    int32_t* esi4;
    int32_t eax5;

    edi3 = a2;
    esi4 = a1;
    if (reinterpret_cast<uint32_t>(edi3) > reinterpret_cast<uint32_t>(esi4)) {
        do {
            eax5 = *esi4;
            if (eax5) {
                eax5();
            }
            ++esi4;
        } while (reinterpret_cast<uint32_t>(edi3) > reinterpret_cast<uint32_t>(esi4));
    }
    return;
}

void fun_10003620(struct s0** a1);

void fun_10002020() {
    fun_10003620(13);
    return;
}

void fun_10003510();

int32_t TlsAlloc = 0xb3bc;

struct s0* fun_10003720(uint32_t a1, int32_t a2);

void fun_100020e0(struct s0* a1, int32_t a2, struct s0* a3);

int32_t GetCurrentThreadId = 0xb398;

int32_t fun_10002050() {
    int32_t eax1;
    struct s0* eax2;
    int32_t eax3;
    int32_t eax4;
    struct s0* eax5;

    fun_10003510();
    eax1 = reinterpret_cast<int32_t>(TlsAlloc());
    g10006568 = eax1;
    if (eax1 != -1) {
        eax2 = fun_10003720(1, 0x74);
        if (!eax2 || (eax3 = g10006568, eax4 = reinterpret_cast<int32_t>(TlsSetValue()), eax4 == 0)) {
            return 0;
        } else {
            fun_100020e0(eax2, eax3, eax2);
            eax5 = reinterpret_cast<struct s0*>(GetCurrentThreadId());
            *reinterpret_cast<struct s0**>(&eax2->f0) = eax5;
            eax2->f4 = reinterpret_cast<struct s0*>(0xffffffff);
            goto eax2;
        }
    } else {
        return 0;
    }
}

void fun_100020e0(struct s0* a1, int32_t a2, struct s0* a3) {
    a1->f50 = 0x10006e78;
    a1->f14 = 1;
    return;
}

int32_t HeapAlloc = 0xb59c;

int32_t g100070d0 = 0;

int32_t fun_10003ea0(struct s0* a1, struct s0* a2, struct s0* a3);

struct s0* fun_10003720(uint32_t a1, int32_t a2) {
    int32_t v3;
    struct s0* v4;
    struct s0* esi5;
    struct s0* v6;
    struct s0* edi7;
    struct s0* edi8;
    int32_t esi9;
    int32_t eax10;
    int32_t eax11;
    int1_t zf12;
    int32_t eax13;

    v3 = reinterpret_cast<int32_t>(__return_address());
    v4 = esi5;
    v6 = edi7;
    edi8 = reinterpret_cast<struct s0*>(a2 * a1);
    if (!edi8) {
        edi8 = reinterpret_cast<struct s0*>(1);
    }
    esi9 = HeapAlloc;
    eax10 = g1000a320;
    do {
        if (reinterpret_cast<unsigned char>(edi8) <= reinterpret_cast<unsigned char>(0xffffffe0)) {
            eax11 = reinterpret_cast<int32_t>(esi9(eax10, 8, edi8));
        } else {
            eax11 = 0;
        }
        if (eax11) 
            break;
        zf12 = g100070d0 == 0;
        if (zf12) 
            break;
        eax13 = fun_10003ea0(edi8, v6, v4);
        eax10 = g1000a320;
    } while (eax13);
    goto addr_1000376d_10;
    addr_1000376f_11:
    goto v3;
    addr_1000376d_10:
    goto addr_1000376f_11;
}

int32_t HeapFree = 0xb5a8;

void fun_10003780(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9) {
    int32_t eax10;

    if (a1) {
        eax10 = g1000a320;
        HeapFree(eax10, 0, a1);
    }
    return;
}

/* (image base) */
int32_t image_base_ = 0x10001f50;

struct s0* fun_10001e40(int32_t a1) {
    int32_t eax2;
    int1_t zf3;
    struct s0* eax4;

    eax2 = g100062cc;
    if (eax2 == 1 || !eax2 && (zf3 = g100062d0 == 1, zf3)) {
        fun_10002cc0();
    }
    fun_10002d00(a1);
    eax4 = reinterpret_cast<struct s0*>(image_base_(0xff));
    return eax4;
}

struct s0* fun_100037c0(struct s0* a1, int32_t a2);

struct s0* fun_100037a0(struct s0* a1) {
    int32_t eax2;
    struct s0* eax3;

    eax2 = g100070d0;
    eax3 = fun_100037c0(a1, eax2);
    return eax3;
}

void fun_10002610(struct s0** a1, struct s0* a2, struct s0* a3, int32_t* a4, int32_t* a5) {
    int32_t* ecx6;
    struct s0** esi7;
    struct s0* eax8;
    struct s0* edx9;
    int32_t edx10;
    struct s0* dl11;
    int32_t ebx12;
    uint32_t edi13;
    struct s0* edx14;
    int32_t ebx15;
    uint32_t ebp16;
    struct s0** edx17;
    uint32_t ebp18;
    uint32_t edx19;
    int32_t ebx20;
    int32_t ebx21;

    ecx6 = a5;
    esi7 = a1;
    eax8 = a3;
    *ecx6 = 0;
    *a4 = 1;
    if (a2) {
        edx9 = a2;
        a2 = reinterpret_cast<struct s0*>(&a2->f4);
        *reinterpret_cast<struct s0**>(&edx9->f0) = eax8;
    }
    if (*esi7 == 34) {
        ++esi7;
        if (*esi7 != 34) {
            do {
                if (!*esi7) 
                    break;
                edx10 = 0;
                *reinterpret_cast<struct s0**>(&edx10) = *esi7;
                if (*reinterpret_cast<unsigned char*>(edx10 + 0x10006599) & 4 && (*ecx6 = *ecx6 + 1, !!eax8)) {
                    ++esi7;
                    *reinterpret_cast<struct s0**>(&eax8->f0) = *esi7;
                    eax8 = reinterpret_cast<struct s0*>(&eax8->f1);
                }
                *ecx6 = *ecx6 + 1;
                if (eax8) {
                    *reinterpret_cast<struct s0**>(&eax8->f0) = *esi7;
                    eax8 = reinterpret_cast<struct s0*>(&eax8->f1);
                }
                ++esi7;
            } while (!reinterpret_cast<int1_t>(*esi7 == 34));
        }
        *ecx6 = *ecx6 + 1;
        if (eax8) {
            *reinterpret_cast<struct s0**>(&eax8->f0) = reinterpret_cast<struct s0*>(0);
            eax8 = reinterpret_cast<struct s0*>(&eax8->f1);
        }
        if (reinterpret_cast<int1_t>(*esi7 == 34)) {
            ++esi7;
        }
    } else {
        do {
            *ecx6 = *ecx6 + 1;
            if (eax8) {
                *reinterpret_cast<struct s0**>(&eax8->f0) = *esi7;
                eax8 = reinterpret_cast<struct s0*>(&eax8->f1);
            }
            dl11 = *esi7;
            ++esi7;
            ebx12 = 0;
            *reinterpret_cast<struct s0**>(&ebx12) = dl11;
            if (*reinterpret_cast<unsigned char*>(ebx12 + 0x10006599) & 4) {
                *ecx6 = *ecx6 + 1;
                if (eax8) {
                    *reinterpret_cast<struct s0**>(&eax8->f0) = *esi7;
                    eax8 = reinterpret_cast<struct s0*>(&eax8->f1);
                }
                ++esi7;
            }
            if (dl11 == 32) 
                break;
            if (!dl11) 
                goto addr_10002680_23;
        } while (!reinterpret_cast<int1_t>(dl11 == 9));
        if (dl11) {
            if (eax8) {
                *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax8) + 0xffffffff) = reinterpret_cast<struct s0*>(0);
            }
        } else {
            addr_10002680_23:
            --esi7;
        }
    }
    edi13 = 0;
    while (*esi7) {
        while (*esi7 == 32 || reinterpret_cast<int1_t>(*esi7 == 9)) {
            ++esi7;
        }
        if (!*esi7) 
            break;
        if (a2) {
            edx14 = a2;
            a2 = reinterpret_cast<struct s0*>(&a2->f4);
            *reinterpret_cast<struct s0**>(&edx14->f0) = eax8;
        }
        *a4 = *a4 + 1;
        while (1) {
            ebx15 = 1;
            ebp16 = 0;
            if (reinterpret_cast<int1_t>(*esi7 == 92)) {
                do {
                    ++esi7;
                    ++ebp16;
                } while (*esi7 == 92);
            }
            if (reinterpret_cast<int1_t>(*esi7 == 34)) {
                if (!(ebp16 & 1)) {
                    if (!edi13 || (edx17 = esi7 + 1, !reinterpret_cast<int1_t>(*edx17 == 34))) {
                        ebx15 = 0;
                    } else {
                        esi7 = edx17;
                    }
                    edi13 = -(edi13 - (edi13 + reinterpret_cast<uint1_t>(edi13 < edi13 + reinterpret_cast<uint1_t>(edi13 < 1))));
                }
                ebp16 = ebp16 >> 1;
            }
            ebp18 = ebp16 - 1;
            if (ebp16) {
                do {
                    if (eax8) {
                        *reinterpret_cast<struct s0**>(&eax8->f0) = reinterpret_cast<struct s0*>(92);
                        eax8 = reinterpret_cast<struct s0*>(&eax8->f1);
                    }
                    edx19 = ebp18;
                    *ecx6 = *ecx6 + 1;
                    --ebp18;
                } while (edx19);
            }
            if (!*esi7) 
                break;
            if (edi13) 
                goto addr_10002776_51;
            if (*esi7 == 32) 
                break;
            if (*esi7 == 9) 
                break;
            addr_10002776_51:
            if (ebx15) {
                if (!eax8) {
                    ebx20 = 0;
                    *reinterpret_cast<struct s0**>(&ebx20) = *esi7;
                    if (*reinterpret_cast<unsigned char*>(ebx20 + 0x10006599) & 4) {
                        ++esi7;
                        *ecx6 = *ecx6 + 1;
                    }
                    *ecx6 = *ecx6 + 1;
                } else {
                    ebx21 = 0;
                    *reinterpret_cast<struct s0**>(&ebx21) = *esi7;
                    if (*reinterpret_cast<unsigned char*>(ebx21 + 0x10006599) & 4) {
                        *reinterpret_cast<struct s0**>(&eax8->f0) = *esi7;
                        ++esi7;
                        eax8 = reinterpret_cast<struct s0*>(&eax8->f1);
                        *ecx6 = *ecx6 + 1;
                    }
                    eax8 = reinterpret_cast<struct s0*>(&eax8->f1);
                    ++esi7;
                    *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax8) + 0xffffffff) = *esi7;
                    *ecx6 = *ecx6 + 1;
                    continue;
                }
            }
            ++esi7;
        }
        if (eax8) {
            *reinterpret_cast<struct s0**>(&eax8->f0) = reinterpret_cast<struct s0*>(0);
            eax8 = reinterpret_cast<struct s0*>(&eax8->f1);
        }
        *ecx6 = *ecx6 + 1;
    }
    if (a2) {
        *reinterpret_cast<struct s0**>(&a2->f0) = reinterpret_cast<struct s0*>(0);
    }
    *a4 = *a4 + 1;
    return;
}

int32_t LeaveCriticalSection = 0xb584;

void fun_10003620(struct s0** a1) {
    int32_t ebp2;

    LeaveCriticalSection();
    goto ebp2;
}

struct s0* g100066a8 = reinterpret_cast<struct s0*>(0);

struct s0* g1000669c = reinterpret_cast<struct s0*>(0);

struct s0* g100066a0 = reinterpret_cast<struct s0*>(0);

struct s0* g100066ac = reinterpret_cast<struct s0*>(0);

struct s0* g100066b0 = reinterpret_cast<struct s0*>(0);

void fun_10002ad0() {
    struct s0** edi1;
    int32_t ecx2;

    edi1 = reinterpret_cast<struct s0**>(0x10006598);
    ecx2 = 64;
    while (ecx2) {
        --ecx2;
        *edi1 = reinterpret_cast<struct s0*>(0);
        edi1 = edi1 + 4;
    }
    *edi1 = reinterpret_cast<struct s0*>(0);
    g100066a8 = reinterpret_cast<struct s0*>(0);
    g1000669c = reinterpret_cast<struct s0*>(0);
    g100066a0 = reinterpret_cast<struct s0*>(0);
    g100066ac = reinterpret_cast<struct s0*>(0);
    g100066b0 = reinterpret_cast<struct s0*>(0);
    return;
}

void fun_10002abc();

struct s0* fun_10002a70(struct s0* a1) {
    uint32_t eax2;
    int32_t ecx3;

    eax2 = reinterpret_cast<unsigned char>(a1) - 0x3a4;
    if (eax2 > 18) 
        goto addr_10002a8d_2;
    ecx3 = 0;
    *reinterpret_cast<signed char*>(&ecx3) = *reinterpret_cast<signed char*>(eax2 + reinterpret_cast<int32_t>(fun_10002abc));
    switch (ecx3) {
    case 0:
        return 0x411;
    case 1:
        return 0x804;
    case 2:
        return 0x412;
    case 3:
        return 0x404;
        addr_10002a8d_2:
    case 4:
        return 0;
    }
}

signed char* fun_100038c0(signed char* a1, int32_t a2, int32_t a3);

void fun_10003820(void* a1, int32_t a2, int32_t a3);

void fun_10002d00(int32_t a1) {
    int32_t eax2;
    int32_t* ecx3;
    int32_t edx4;
    void* esp5;
    int32_t ebx6;
    int1_t zf7;
    int1_t zf8;
    int1_t zf9;
    struct s0* eax10;
    int32_t esi11;
    int32_t eax12;
    signed char* edx13;
    void* eax14;
    signed char* edi15;
    void* v16;
    int32_t ecx17;
    int32_t eax18;
    int32_t ebp19;
    void* eax20;
    void* esp21;
    int32_t ecx22;
    signed char* ebp23;
    int32_t ecx24;
    signed char* eax25;
    signed char v26;
    int32_t ecx27;
    void* eax28;
    void* esp29;
    signed char v30;
    int32_t ecx31;
    signed char* edi32;
    int32_t ecx33;
    void* eax34;
    uint32_t edx35;
    int32_t ecx36;
    void* eax37;
    signed char v38;
    uint32_t ecx39;
    uint32_t ecx40;
    signed char* edi41;
    int32_t ecx42;
    void* eax43;
    uint32_t edx44;
    int32_t ecx45;
    void* eax46;
    signed char v47;
    uint32_t ecx48;
    uint32_t ecx49;
    signed char* edi50;
    int32_t ecx51;
    void* eax52;
    uint32_t edx53;
    int32_t ecx54;
    void* eax55;
    signed char v56;
    uint32_t ecx57;
    uint32_t ecx58;
    void* esp59;
    int32_t v60;

    eax2 = 0;
    ecx3 = reinterpret_cast<int32_t*>(0x10006a18);
    edx4 = a1;
    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x1a8 - 4 - 4 - 4 - 4);
    do {
        if (*ecx3 == edx4) 
            break;
        ecx3 = ecx3 + 2;
        ++eax2;
    } while (reinterpret_cast<uint32_t>(ecx3) < 0x10006aa0);
    ebx6 = eax2 * 8;
    if (*reinterpret_cast<int32_t*>(eax2 * 8 + 0x10006a18) == edx4) {
        zf7 = g100062cc == 1;
        if (zf7 || (zf8 = g100062cc == 0, zf8) && (zf9 = g100062d0 == 1, zf9)) {
            eax10 = g1000a220;
            esi11 = eax10->f48;
            if (esi11 == -1) {
                eax12 = reinterpret_cast<int32_t>(GetStdHandle(0xf4));
                esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4);
                esi11 = eax12;
            }
            edx13 = *reinterpret_cast<signed char**>(ebx6 + 0x10006a1c);
            eax14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 + 20);
            edi15 = edx13;
            v16 = eax14;
            ecx17 = -1;
            eax18 = reinterpret_cast<int32_t>(eax14) - reinterpret_cast<int32_t>(eax14);
            do {
                if (!ecx17) 
                    break;
                --ecx17;
                ++edi15;
                ++esi11;
            } while (*edi15 != *reinterpret_cast<signed char*>(&eax18));
            WriteFile(esi11, edx13, ~ecx17 - 1, v16, 0);
        } else {
            if (edx4 != 0xfc) {
                ebp19 = GetModuleFileNameA;
                eax20 = reinterpret_cast<void*>(ebp19());
                esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 + 4);
                if (!eax20) {
                    ecx22 = 5;
                    while (ecx22) {
                        --ecx22;
                    }
                }
                ebp23 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp21) + 0xb4);
                ecx24 = -1;
                eax25 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax20) - reinterpret_cast<int32_t>(eax20));
                do {
                    if (!ecx24) 
                        break;
                    --ecx24;
                } while (v26 != *reinterpret_cast<signed char*>(&eax25));
                if (reinterpret_cast<uint32_t>(~ecx24) > 60) {
                    ecx27 = -1;
                    eax28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax25) - reinterpret_cast<int32_t>(eax25));
                    esp29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4);
                    do {
                        if (!ecx27) 
                            break;
                        --ecx27;
                    } while (v30 != *reinterpret_cast<signed char*>(&eax28));
                    ebp23 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp29) + ~ecx27 + 0x7c);
                    eax25 = fun_100038c0(ebp23, "...", 3);
                    esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp29) - 4 - 4 - 4 + 4 + 12);
                }
                ecx31 = 6;
                while (ecx31) {
                    --ecx31;
                }
                edi32 = ebp23;
                ecx33 = -1;
                eax34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax25) - reinterpret_cast<int32_t>(eax25));
                do {
                    if (!ecx33) 
                        break;
                    --ecx33;
                    ++edi32;
                } while (*edi32 != *reinterpret_cast<signed char*>(&eax34));
                edx35 = reinterpret_cast<uint32_t>(~ecx33);
                ecx36 = -1;
                eax37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax34) - reinterpret_cast<int32_t>(eax34));
                do {
                    if (!ecx36) 
                        break;
                    --ecx36;
                } while (v38 != *reinterpret_cast<signed char*>(&eax37));
                ecx39 = edx35 >> 2;
                while (ecx39) {
                    --ecx39;
                }
                ecx40 = edx35 & 3;
                while (ecx40) {
                    --ecx40;
                }
                edi41 = "\n\n";
                ecx42 = -1;
                eax43 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax37) - reinterpret_cast<int32_t>(eax37));
                do {
                    if (!ecx42) 
                        break;
                    --ecx42;
                    ++edi41;
                } while (*edi41 != *reinterpret_cast<signed char*>(&eax43));
                edx44 = reinterpret_cast<uint32_t>(~ecx42);
                ecx45 = -1;
                eax46 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax43) - reinterpret_cast<int32_t>(eax43));
                do {
                    if (!ecx45) 
                        break;
                    --ecx45;
                } while (v47 != *reinterpret_cast<signed char*>(&eax46));
                ecx48 = edx44 >> 2;
                while (ecx48) {
                    --ecx48;
                }
                ecx49 = edx44 & 3;
                while (ecx49) {
                    --ecx49;
                }
                edi50 = *reinterpret_cast<signed char**>(ebx6 + 0x10006a1c);
                ecx51 = -1;
                eax52 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax46) - reinterpret_cast<int32_t>(eax46));
                do {
                    if (!ecx51) 
                        break;
                    --ecx51;
                    ++edi50;
                } while (*edi50 != *reinterpret_cast<signed char*>(&eax52));
                edx53 = reinterpret_cast<uint32_t>(~ecx51);
                ecx54 = -1;
                eax55 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax52) - reinterpret_cast<int32_t>(eax52));
                do {
                    if (!ecx54) 
                        break;
                    --ecx54;
                } while (v56 != *reinterpret_cast<signed char*>(&eax55));
                ecx57 = edx53 >> 2;
                while (ecx57) {
                    --ecx57;
                }
                ecx58 = edx53 & 3;
                esp59 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4 - 4);
                while (ecx58) {
                    --ecx58;
                }
                fun_10003820(reinterpret_cast<int32_t>(esp59) + 28, "Microsoft Visual C++ Runtime Library", 0x12010);
                goto v60;
            }
        }
    }
    return;
}

signed char* fun_100038c0(signed char* a1, int32_t a2, int32_t a3) {
    signed char* edi4;
    signed char* edx5;
    int32_t ecx6;
    signed char al7;
    signed char al8;

    edi4 = a1;
    edx5 = edi4;
    ecx6 = a3;
    if (!ecx6) {
        do {
            __asm__("lodsb ");
            if (!al7) 
                break;
            *edi4 = al8;
            ++edi4;
            --ecx6;
        } while (ecx6);
        while (ecx6) {
            --ecx6;
            *edi4 = 0;
            ++edi4;
        }
    }
    return edx5;
}

int32_t g10006f1c = 0;

int32_t LoadLibraryA = 0xb5b4;

int32_t g10006f20 = 0;

int32_t g10006f24 = 0;

void fun_10003820(void* a1, int32_t a2, int32_t a3) {
    int32_t esi4;
    int1_t zf5;
    int32_t eax6;
    int32_t ebx7;
    int32_t eax8;
    int32_t ebx9;
    int32_t eax10;
    int32_t eax11;
    int32_t eax12;
    int32_t eax13;
    int1_t zf14;

    esi4 = 0;
    zf5 = g10006f1c == 0;
    if (zf5) {
        eax6 = reinterpret_cast<int32_t>(LoadLibraryA());
        if (!eax6 || (ebx7 = GetProcAddress, eax8 = reinterpret_cast<int32_t>(ebx7(eax6, "MessageBoxA")), g10006f1c = eax8, eax8 == 0)) {
            goto ebx9;
        } else {
            eax10 = reinterpret_cast<int32_t>(ebx7(eax6, "GetActiveWindow", eax6, "MessageBoxA"));
            g10006f20 = eax10;
            eax11 = reinterpret_cast<int32_t>(ebx7(eax6, "GetLastActivePopup", eax6, "GetActiveWindow", eax6, "MessageBoxA"));
            g10006f24 = eax11;
        }
    }
    eax12 = g10006f20;
    if (eax12) {
        eax13 = reinterpret_cast<int32_t>(eax12());
        esi4 = eax13;
    }
    if (esi4 && (zf14 = g10006f24 == 0, !zf14)) {
        g10006f24(esi4);
    }
    g10006f1c();
    goto a3;
}

struct s6 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_100035b0(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5);

int32_t InitializeCriticalSection = 0xb550;

int32_t EnterCriticalSection = 0xb56c;

void fun_10003bd0(uint32_t a1) {
    uint32_t eax2;
    struct s6* ebx3;
    struct s0* edi4;
    struct s0* esi5;
    struct s0* ebx6;

    eax2 = (a1 & 31) << 2;
    ebx3 = reinterpret_cast<struct s6*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(a1 & 0xffffffe7) >> 3) + 0x1000a220)) + (eax2 + eax2 * 8));
    if (!ebx3->f8) {
        fun_100035b0(17, edi4, esi5, ebx6, __return_address());
        if (!ebx3->f8) {
            InitializeCriticalSection(ebx3 + 1);
            ebx3->f8 = ebx3->f8 + 1;
        }
        fun_10003620(17);
    }
    EnterCriticalSection();
    goto ebx6;
}

int32_t fun_100032a0(uint32_t a1, int32_t a2, int32_t a3);

struct s7 {
    int32_t f0;
    unsigned char f4;
};

int32_t* fun_10003ac0();

uint32_t* fun_10003ad0(void* a1);

void fun_10003a40(uint32_t a1);

void* fun_100030a0(uint32_t a1, struct s0* a2, void* a3) {
    void** esp4;
    void* v5;
    void* ebp6;
    void* edi7;
    void* ebp8;
    void** v9;
    uint32_t eax10;
    uint32_t ecx11;
    void* eax12;
    uint32_t v13;
    struct s7* ecx14;
    void* v15;
    void* v16;
    int32_t ecx17;
    struct s0* v18;
    int32_t v19;
    int32_t eax20;
    int32_t* eax21;
    uint32_t* eax22;
    int32_t* eax23;
    uint32_t* eax24;
    struct s0* ebx25;
    void* esi26;
    void* esp27;
    void* esi28;
    int32_t eax29;

    esp4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x418 - 4 - 4 - 4 - 4);
    v5 = ebp6;
    edi7 = reinterpret_cast<void*>(0);
    ebp8 = a3;
    if (!ebp8) {
        return 0;
    }
    v9 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(a1 & 0xffffffe7) >> 3) + 0x1000a220);
    eax10 = (a1 & 31) << 2;
    ecx11 = eax10 + eax10 * 8;
    eax12 = *v9;
    v13 = ecx11;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax12) + ecx11 + 4) & 32) {
        fun_100032a0(a1, 0, 2);
        esp4 = esp4 - 1 - 1 - 1 - 1 + 1 + 3;
    }
    ecx14 = reinterpret_cast<struct s7*>(v13 + reinterpret_cast<int32_t>(*v9));
    if (ecx14->f4 & 0x80) 
        goto addr_1000311d_6;
    v15 = reinterpret_cast<void*>(esp4 + 5);
    v16 = ebp8;
    ecx17 = ecx14->f0;
    v18 = a2;
    v19 = ecx17;
    eax20 = reinterpret_cast<int32_t>(WriteFile(v19, v18, v16, v15, 0));
    if (!eax20) {
        addr_100031d4_8:
        GetLastError(v19, v18, v16, v15, 0);
    }
    addr_100031de_10:
    if (0) {
        return -static_cast<uint32_t>(edi7);
    } else {
        if (1) {
            if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*v9) + v13 + 4) & 64) || !reinterpret_cast<int1_t>(*reinterpret_cast<struct s0**>(&a2->f0) == 26)) {
                eax21 = fun_10003ac0();
                *eax21 = 28;
                eax22 = fun_10003ad0(v5);
                *eax22 = 0;
                return 0xffffffff;
            } else {
                return 0;
            }
        } else {
            if (1) {
                fun_10003a40(0);
                return 0xffffffff;
            } else {
                eax23 = fun_10003ac0();
                *eax23 = 9;
                eax24 = fun_10003ad0(v5);
                *eax24 = 0;
                return 0xffffffff;
            }
        }
    }
    addr_1000311d_6:
    ebx25 = a2;
    do {
        if (reinterpret_cast<unsigned char>(ebx25) - reinterpret_cast<unsigned char>(a2) >= reinterpret_cast<uint32_t>(ebp8)) 
            goto addr_100031de_10;
        esi26 = reinterpret_cast<void*>(esp4 + 9);
        do {
            if (reinterpret_cast<unsigned char>(ebx25) - reinterpret_cast<unsigned char>(a2) >= reinterpret_cast<uint32_t>(ebp8)) 
                break;
            ebx25 = reinterpret_cast<struct s0*>(&ebx25->f1);
            if (reinterpret_cast<int1_t>(*reinterpret_cast<struct s0**>(&ebx25->f0) == 10)) {
                edi7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi7) + 1);
                esi26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi26) + 1);
            }
            esi26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi26) + 1);
        } while (reinterpret_cast<int32_t>(esi26) - reinterpret_cast<int32_t>(esp4 + 9) < 0x400);
        esp27 = reinterpret_cast<void*>(esp4 - 1);
        esi28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi26) - reinterpret_cast<uint32_t>(esp4 + 9));
        v15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) + 24);
        v16 = esi28;
        v18 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp27) + 40);
        v19 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*v9) + v13);
        eax29 = reinterpret_cast<int32_t>(WriteFile(v19, v18, v16, v15, 0));
        esp4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp27) - 4 - 4 - 4 - 4 - 4 + 4);
        if (!eax29) 
            goto addr_100031d4_8;
    } while (reinterpret_cast<int32_t>(v5) >= reinterpret_cast<int32_t>(esi28));
    goto addr_100031de_10;
}

void fun_10003c40(uint32_t a1) {
    uint32_t ecx2;
    uint32_t v3;

    ecx2 = (a1 & 31) << 2;
    v3 = *reinterpret_cast<int32_t*>((reinterpret_cast<int32_t>(a1 & 0xffffffe7) >> 3) + 0x1000a220) + (ecx2 + ecx2 * 8) + 12;
    LeaveCriticalSection();
    goto v3;
}

void* fun_10003b80(uint32_t a1);

int32_t SetFilePointer = 0xb53e;

int32_t fun_100032a0(uint32_t a1, int32_t a2, int32_t a3) {
    void* eax4;
    int32_t eax5;
    uint32_t eax6;
    uint32_t esi7;
    uint32_t eax8;
    int32_t* eax9;

    eax4 = fun_10003b80(a1);
    if (!reinterpret_cast<int1_t>(eax4 == 0xffffffff)) {
        eax5 = reinterpret_cast<int32_t>(SetFilePointer());
        eax6 = 0;
        if (eax5 == -1) {
            eax6 = reinterpret_cast<uint32_t>(GetLastError());
        }
        if (!eax6) {
            esi7 = (a1 & 31) << 2;
            eax8 = esi7 + esi7 * 8;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(a1 & 0xffffffe7) >> 3) + 0x1000a220)) + eax8 + 4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(a1 & 0xffffffe7) >> 3) + 0x1000a220)) + eax8 + 4) & 0xfd);
            goto 0;
        } else {
            fun_10003a40(eax6);
            goto 0;
        }
    } else {
        eax9 = fun_10003ac0();
        *eax9 = 9;
        return -1;
    }
}

struct s8 {
    signed char[8] pad8;
    int32_t f8;
    uint32_t fc;
};

struct s8* fun_10002100();

int32_t* fun_10003ac0() {
    struct s8* eax1;

    eax1 = fun_10002100();
    return &eax1->f8;
}

uint32_t* fun_10003ad0(void* a1) {
    struct s8* eax2;

    eax2 = fun_10002100();
    return &eax2->fc;
}

void fun_10003a40(uint32_t a1) {
    void* esi2;
    uint32_t* eax3;
    uint32_t ecx4;
    int32_t esi5;
    uint32_t* eax6;
    int32_t* eax7;
    int32_t* eax8;
    int32_t* eax9;
    int32_t* eax10;

    eax3 = fun_10003ad0(esi2);
    ecx4 = a1;
    esi5 = 0;
    *eax3 = ecx4;
    eax6 = reinterpret_cast<uint32_t*>(0x10006f68);
    do {
        if (*eax6 == ecx4) 
            break;
        eax6 = eax6 + 2;
        ++esi5;
    } while (reinterpret_cast<uint32_t>(eax6) < 0x100070d0);
    goto addr_10003a62_4;
    eax7 = fun_10003ac0();
    *eax7 = *reinterpret_cast<int32_t*>(esi5 * 8 + 0x10006f6c);
    return;
    addr_10003a62_4:
    if (ecx4 < 19 || ecx4 > 36) {
        if (ecx4 < 0xbc || ecx4 > 0xca) {
            eax8 = fun_10003ac0();
            *eax8 = 22;
            return;
        } else {
            eax9 = fun_10003ac0();
            *eax9 = 8;
            return;
        }
    } else {
        eax10 = fun_10003ac0();
        *eax10 = 13;
        return;
    }
}

void fun_100035b0(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5) {
    struct s0** edi6;
    struct s0* eax7;
    struct s0* edi8;
    struct s0* esi9;
    struct s0* ebp10;
    int1_t zf11;

    edi6 = reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(a1) * 4 + 0x10006db8);
    if (!*edi6) {
        eax7 = fun_100037a0(24);
        if (!eax7) {
            fun_10001e40(17);
        }
        fun_100035b0(17, edi8, esi9, ebp10, __return_address());
        zf11 = *edi6 == 0;
        if (!zf11) {
            fun_10003780(eax7, edi8, esi9, ebp10, __return_address(), a1, a2, a3, a4);
        } else {
            InitializeCriticalSection(eax7);
            *edi6 = eax7;
        }
        fun_10003620(17);
    }
    EnterCriticalSection();
    goto ebp10;
}

int32_t g10007290;

int32_t fun_10003ea0(struct s0* a1, struct s0* a2, struct s0* a3) {
    int32_t eax4;
    int32_t eax5;

    fun_100035b0(9, __return_address(), a1, a2, a3);
    eax4 = g10007290;
    if (!eax4 || (eax5 = reinterpret_cast<int32_t>(eax4(a1)), eax5 == 0)) {
        fun_10003620(9);
        return 0;
    } else {
        fun_10003620(9);
        return 1;
    }
}

struct s0* fun_10003800(struct s0* a1) {
    int32_t ecx2;

    ecx2 = g1000a320;
    HeapAlloc();
    goto ecx2;
}

void fun_10003640(struct s0* a1, struct s0* a2);

int32_t fun_10003f20(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5);

void fun_100036b0(struct s0* a1);

int32_t fun_10003ee0(struct s0* a1) {
    struct s0* edi2;
    struct s0* esi3;
    int32_t eax4;

    if (!(a1->fc & 64)) {
        fun_10003640(a1, edi2);
        eax4 = fun_10003f20(a1, edi2, esi3, __return_address(), a1);
        fun_100036b0(a1);
        return eax4;
    } else {
        a1->fc = reinterpret_cast<unsigned char>(0);
        return -1;
    }
}

int32_t FlushFileBuffers = 0xb5d4;

uint32_t fun_10003f80(uint32_t a1) {
    int1_t below_or_equal2;
    void** ebx3;
    uint32_t eax4;
    uint32_t edi5;
    int32_t* eax6;
    uint32_t edi7;
    int32_t* eax8;
    void* eax9;
    int32_t eax10;
    uint32_t eax11;
    uint32_t* eax12;

    below_or_equal2 = g1000a210 <= a1;
    if (below_or_equal2 || (ebx3 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(a1 & 0xffffffe7) >> 3) + 0x1000a220), eax4 = (a1 & 31) << 2, edi5 = eax4 + eax4 * 8, (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*ebx3) + edi5 + 4) & 1) == 0)) {
        eax6 = fun_10003ac0();
        *eax6 = 9;
        return 0xffffffff;
    }
    fun_10003bd0(a1);
    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*ebx3) + edi5 + 4) & 1)) {
        addr_10003fef_4:
        edi7 = 0xffffffff;
        eax8 = fun_10003ac0();
        *eax8 = 9;
    } else {
        edi7 = 0;
        eax9 = fun_10003b80(a1);
        eax10 = reinterpret_cast<int32_t>(FlushFileBuffers(eax9));
        if (!eax10) {
            eax11 = reinterpret_cast<uint32_t>(GetLastError(eax9));
            edi7 = eax11;
        }
        if (edi7) 
            goto addr_10003fe8_8;
    }
    fun_10003c40(a1);
    return edi7;
    addr_10003fe8_8:
    eax12 = fun_10003ad0(eax9);
    *eax12 = edi7;
    goto addr_10003fef_4;
}

void* fun_10003020(uint32_t a1, struct s0* a2, void* a3) {
    int1_t below_or_equal4;
    uint32_t ecx5;
    int32_t* eax6;
    void* edi7;
    uint32_t* eax8;
    void* eax9;

    below_or_equal4 = g1000a210 <= a1;
    if (below_or_equal4 || (ecx5 = (a1 & 31) << 2, (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(a1 & 0xffffffe7) >> 3) + 0x1000a220)) + (ecx5 + ecx5 * 8) + 4) & 1) == 0)) {
        eax6 = fun_10003ac0();
        *eax6 = 9;
        eax8 = fun_10003ad0(edi7);
        *eax8 = 0;
        return 0xffffffff;
    } else {
        fun_10003bd0(a1);
        eax9 = fun_100030a0(a1, a2, a3);
        fun_10003c40(a1);
        return eax9;
    }
}

void fun_10003680(struct s0* a1, struct s0* a2) {
    struct s0* ebp3;

    if (reinterpret_cast<signed char>(a1) >= reinterpret_cast<signed char>(20)) {
        EnterCriticalSection();
        goto ebp3;
    } else {
        fun_100035b0(&a1->f1c, ebp3, __return_address(), a1, a2);
        return;
    }
}

int32_t fun_10003d50(struct s0* a1);

uint32_t fun_10003d10(struct s0* a1) {
    int32_t eax2;
    uint32_t v3;
    uint32_t eax4;

    eax2 = fun_10003d50(a1);
    if (!eax2) {
        if (!(a1->fd & 64)) {
            return 0;
        } else {
            v3 = a1->f10;
            eax4 = fun_10003f80(v3);
            return 1 - reinterpret_cast<uint1_t>(eax4 < 1);
        }
    } else {
        return 0xffffffff;
    }
}

int32_t fun_10003d50(struct s0* a1) {
    int32_t edi2;
    unsigned char ecx3;
    struct s0* eax4;
    void* ebx5;
    uint32_t v6;
    void* eax7;
    unsigned char eax8;

    edi2 = 0;
    ecx3 = a1->fc;
    if ((ecx3 & 3) == 2 && (a1->fc & 0x108 && (eax4 = a1->f8, ebx5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(&a1->f0)) - reinterpret_cast<unsigned char>(eax4)), !(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx5) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ebx5 == 0))))) {
        v6 = a1->f10;
        eax7 = fun_10003020(v6, eax4, ebx5);
        if (eax7 != ebx5) {
            a1->fc = reinterpret_cast<unsigned char>(a1->fc | 32);
            edi2 = -1;
        } else {
            eax8 = a1->fc;
            if (eax8 & 0x80) {
                a1->fc = reinterpret_cast<unsigned char>(eax8 & 0xfffffffd);
            }
        }
    }
    *reinterpret_cast<struct s0**>(&a1->f0) = a1->f8;
    a1->f4 = reinterpret_cast<struct s0*>(0);
    return edi2;
}

void fun_10004130(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6) {
    unsigned char eax7;
    struct s0* v8;
    struct s0* esi9;

    eax7 = a1->fc;
    if (eax7 & 0x83 && eax7 & 8) {
        v8 = a1->f8;
        fun_10003780(v8, esi9, __return_address(), a1, a2, a3, a4, a5, a6);
        *reinterpret_cast<struct s0**>(&a1->f0) = reinterpret_cast<struct s0*>(0);
        a1->fc = reinterpret_cast<unsigned char>(a1->fc & 0xfffffbf7);
        a1->f8 = reinterpret_cast<struct s0*>(0);
        a1->f4 = reinterpret_cast<struct s0*>(0);
    }
    return;
}

int32_t fun_100040a0(uint32_t a1);

int32_t fun_10004030(uint32_t a1) {
    int1_t below_or_equal2;
    uint32_t ecx3;
    int32_t* eax4;
    void* edi5;
    uint32_t* eax6;
    int32_t eax7;

    below_or_equal2 = g1000a210 <= a1;
    if (below_or_equal2 || (ecx3 = (a1 & 31) << 2, (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(a1 & 0xffffffe7) >> 3) + 0x1000a220)) + (ecx3 + ecx3 * 8) + 4) & 1) == 0)) {
        eax4 = fun_10003ac0();
        *eax4 = 9;
        eax6 = fun_10003ad0(edi5);
        *eax6 = 0;
        return -1;
    } else {
        fun_10003bd0(a1);
        eax7 = fun_100040a0(a1);
        fun_10003c40(a1);
        return eax7;
    }
}

struct s9 {
    void* f0;
    unsigned char f4;
};

void* fun_10003b80(uint32_t a1) {
    int1_t below_or_equal2;
    uint32_t ecx3;
    struct s9* eax4;
    int32_t* eax5;
    uint32_t* eax6;

    below_or_equal2 = g1000a210 <= a1;
    if (below_or_equal2 || (ecx3 = (a1 & 31) << 2, eax4 = reinterpret_cast<struct s9*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(a1 & 0xffffffe7) >> 3) + 0x1000a220)) + (ecx3 + ecx3 * 8)), (eax4->f4 & 1) == 0)) {
        eax5 = fun_10003ac0();
        *eax5 = 9;
        eax6 = fun_10003ad0(__return_address());
        *eax6 = 0;
        return 0xffffffff;
    } else {
        return eax4->f0;
    }
}

int32_t CloseHandle = 0xb5e8;

int32_t fun_10003ae0(uint32_t a1);

int32_t fun_100040a0(uint32_t a1) {
    void* eax2;
    void* eax3;
    void* eax4;
    int32_t eax5;
    uint32_t edi6;
    uint32_t eax7;
    uint32_t esi8;

    if ((a1 == 1 || a1 == 2) && (eax2 = fun_10003b80(2), eax3 = fun_10003b80(1), eax2 == eax3) || (eax4 = fun_10003b80(a1), eax5 = reinterpret_cast<int32_t>(CloseHandle(eax4)), !!eax5)) {
        edi6 = 0;
    } else {
        eax7 = reinterpret_cast<uint32_t>(GetLastError(eax4));
        edi6 = eax7;
    }
    fun_10003ae0(a1);
    if (!edi6) {
        esi8 = (a1 & 31) << 2;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(a1 & 0xffffffe7) >> 3) + 0x1000a220)) + (esi8 + esi8 * 8) + 4) = 0;
        return 0;
    } else {
        fun_10003a40(edi6);
        return -1;
    }
}

/* WSOCK32.dll:115 */
int32_t WSOCK32_dll_115 = 0x80000073;

void fun_10001b1c() {
    goto WSOCK32_dll_115;
}

/* WSOCK32.dll:9 */
int32_t WSOCK32_dll_9 = 0x80000009;

int16_t fun_10001b3a(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, struct s0* a9, struct s0* a10, struct s0* a11, struct s0* a12, struct s0* a13, struct s0* a14, struct s0* a15, struct s0* a16, struct s0* a17) {
    goto WSOCK32_dll_9;
}

int32_t g10006184 = 0;

int32_t g10008744;

int32_t Sleep = 0xb2f4;

void fun_10001850(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, struct s0* a10, struct s0* a11, struct s0* a12, struct s0* a13, struct s0* a14, struct s0* a15, struct s0* a16, struct s0* a17, struct s0* a18, struct s0* a19) {
    struct s0* v20;
    int1_t zf21;
    struct s0* v22;
    struct s0* esi23;
    struct s0* v24;
    struct s0* edi25;
    int1_t zf26;
    int32_t esi27;
    int1_t zf28;

    v20 = reinterpret_cast<struct s0*>(__return_address());
    zf21 = g10006184 == 0;
    v22 = esi23;
    v24 = edi25;
    if (zf21) {
        g10006184 = 1;
        InterlockedExchange();
        fun_10001090("ShutdownNetwork: tells threads to stop", 0x10008744, 2, v24, v22, v20, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
        zf26 = g10008744 == 3;
        if (!zf26) {
            esi27 = Sleep;
            do {
                esi27(100);
                zf28 = g10008744 == 3;
            } while (!zf28);
        }
        fun_10001090("ShutdownNetwork: threads stopped", 0x10008744, 2, v24, v22, v20, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
        fun_10001790();
        goto v24;
    } else {
        fun_10001090("ShutdownNetwork: double entry", v24, v22, v20, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
        return;
    }
}

/* WSOCK32.dll:116 */
int32_t WSOCK32_dll_116 = 0x80000074;

void fun_10001b22() {
    goto WSOCK32_dll_116;
}

/* WSOCK32.dll:2 */
int32_t WSOCK32_dll_2 = 0x80000002;

int32_t fun_10001b34() {
    goto WSOCK32_dll_2;
}

/* WSOCK32.dll:23 */
int32_t WSOCK32_dll_23 = 0x80000017;

struct s0* fun_10001b46(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6) {
    goto WSOCK32_dll_23;
}

/* WSOCK32.dll:21 */
int32_t WSOCK32_dll_21 = 0x80000015;

void fun_10001b40(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, struct s0* a10, struct s0* a11, struct s0* a12, struct s0* a13, struct s0* a14, struct s0* a15, struct s0* a16) {
    goto WSOCK32_dll_21;
}

/* WSOCK32.dll:3 */
int32_t WSOCK32_dll_3 = 0x80000003;

void fun_10001b4c() {
    goto WSOCK32_dll_3;
}

int32_t HeapCreate = 0xb3f0;

void fun_10002220() {
    int32_t eax1;

    eax1 = reinterpret_cast<int32_t>(HeapCreate());
    g1000a320 = eax1;
    goto 0;
}

int32_t g100067b4 = 0;

int32_t GetEnvironmentStringsW = 0xb4ea;

int32_t GetEnvironmentStrings = 0xb4b8;

int32_t FreeEnvironmentStringsA = 0xb488;

int32_t WideCharToMultiByte = 0xb504;

int32_t FreeEnvironmentStringsW = 0xb4d0;

struct s0* fun_10002b10() {
    int1_t zf1;
    struct s0* edi2;
    struct s0* v3;
    struct s0** ebx4;
    struct s0** v5;
    int32_t esi6;
    struct s0* eax7;
    struct s0** eax8;
    struct s0** v9;
    int1_t zf10;
    int1_t zf11;
    struct s0** eax12;
    struct s0** ebp13;
    struct s0* ebp14;
    struct s0* eax15;
    struct s0* v16;
    struct s0* edi17;
    struct s0** esi18;
    uint32_t ecx19;
    uint32_t ecx20;
    struct s0* eax21;
    struct s0* esi22;
    struct s0* eax23;
    struct s0* eax24;
    int32_t eax25;

    zf1 = g100067b4 == 0;
    if (!zf1) {
        edi2 = v3;
        ebx4 = v5;
        esi6 = GetEnvironmentStringsW;
    } else {
        esi6 = GetEnvironmentStringsW;
        eax7 = reinterpret_cast<struct s0*>(esi6());
        edi2 = eax7;
        if (!edi2) {
            eax8 = reinterpret_cast<struct s0**>(GetEnvironmentStrings());
            ebx4 = eax8;
            if (!ebx4) {
                return 0;
            } else {
                g100067b4 = 2;
            }
        } else {
            g100067b4 = 1;
            ebx4 = v9;
        }
    }
    zf10 = g100067b4 == 1;
    if (!zf10) {
        zf11 = g100067b4 == 2;
        if (!zf11) {
            return 0;
        } else {
            if (ebx4 || (eax12 = reinterpret_cast<struct s0**>(GetEnvironmentStrings()), ebx4 = eax12, !!ebx4)) {
                ebp13 = ebx4;
                if (*ebx4) {
                    addr_10002c47_13:
                    ++ebp13;
                    if (*ebp13) 
                        goto addr_10002c47_13;
                    ++ebp13;
                    if (*ebp13) 
                        goto addr_10002c47_13;
                }
                ebp14 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebp13) - reinterpret_cast<uint32_t>(ebx4) + 1);
                eax15 = fun_100037a0(ebp14);
                v16 = eax15;
                if (eax15) {
                    edi17 = v16;
                    esi18 = ebx4;
                    ecx19 = reinterpret_cast<unsigned char>(ebp14) >> 2;
                    while (ecx19) {
                        --ecx19;
                        *reinterpret_cast<struct s0**>(&edi17->f0) = *esi18;
                        edi17 = reinterpret_cast<struct s0*>(&edi17->f4);
                        esi18 = esi18 + 4;
                    }
                    ecx20 = reinterpret_cast<unsigned char>(ebp14) & 3;
                    while (ecx20) {
                        --ecx20;
                        *reinterpret_cast<struct s0**>(&edi17->f0) = *esi18;
                        edi17 = reinterpret_cast<struct s0*>(&edi17->f1);
                        ++esi18;
                    }
                    FreeEnvironmentStringsA();
                    goto v16;
                } else {
                    FreeEnvironmentStringsA();
                    goto v16;
                }
            } else {
                return 0;
            }
        }
    } else {
        if (edi2 || (eax21 = reinterpret_cast<struct s0*>(esi6()), edi2 = eax21, !!edi2)) {
            esi22 = edi2;
            if (*reinterpret_cast<struct s0**>(&edi2->f0)) {
                addr_10002b99_27:
                esi22 = reinterpret_cast<struct s0*>(&esi22->pad4);
                if (*reinterpret_cast<struct s0**>(&esi22->f0)) 
                    goto addr_10002b99_27;
                esi22 = reinterpret_cast<struct s0*>(&esi22->pad4);
                if (*reinterpret_cast<struct s0**>(&esi22->f0)) 
                    goto addr_10002b99_27;
            }
            eax23 = reinterpret_cast<struct s0*>(WideCharToMultiByte());
            if (!eax23 || (eax24 = fun_100037a0(eax23), eax24 == 0)) {
                FreeEnvironmentStringsW();
                goto 0;
            } else {
                eax25 = reinterpret_cast<int32_t>(WideCharToMultiByte());
                if (!eax25) {
                    fun_10003780(eax24, 0, 0, edi2, (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(esi22) - reinterpret_cast<unsigned char>(edi2)) >> 1) + 1, eax24, eax23, 0, 0);
                }
                FreeEnvironmentStringsW();
                goto eax24;
            }
        } else {
            return 0;
        }
    }
}

struct s0* fun_10002a20(struct s0* a1);

struct s10 {
    signed char f0;
    signed char f1;
};

struct s11 {
    struct s0* f0;
    signed char[7] pad8;
    struct s0* f8;
};

int32_t GetCPInfo = 0xb466;

int32_t g100066b4 = 0;

int32_t fun_100027f0(struct s0* a1) {
    struct s0* v2;
    struct s0* ebx3;
    struct s0* ebp4;
    struct s0* edi5;
    struct s0* esi6;
    struct s0* eax7;
    struct s0* ebp8;
    int1_t zf9;
    int32_t v10;
    struct s0** eax11;
    unsigned char* edi12;
    unsigned char eax13;
    int32_t ecx14;
    int32_t edi15;
    struct s10* esi16;
    uint32_t edx17;
    uint32_t ebx18;
    unsigned char cl19;
    uint32_t ebx20;
    struct s0* eax21;
    int32_t eax22;
    struct s0* ebx23;
    struct s11* ecx24;
    struct s0* ecx25;
    int32_t eax26;
    int1_t zf27;
    int32_t v28;
    int32_t v29;
    signed char* edi30;
    int32_t ecx31;
    struct s0* eax32;
    int32_t v33;
    signed char v34;
    uint32_t ecx35;
    uint32_t edx36;
    signed char v37;
    uint32_t eax38;
    signed char v39;
    signed char v40;
    uint32_t eax41;

    v2 = ebx3;
    fun_100035b0(25, ebp4, edi5, esi6, v2);
    eax7 = fun_10002a20(a1);
    ebp8 = eax7;
    zf9 = ebp8 == g1000669c;
    if (zf9) {
        fun_10003620(25);
        return 0;
    }
    if (!ebp8) {
        fun_10002ad0();
        fun_10003620(25);
        return 0;
    }
    v10 = 0;
    eax11 = reinterpret_cast<struct s0**>(0x100066c0);
    do {
        if (*eax11 == ebp8) 
            break;
        eax11 = eax11 + 48;
        ++v10;
    } while (reinterpret_cast<uint32_t>(eax11) < 0x100067b0);
    goto addr_1000286c_8;
    edi12 = reinterpret_cast<unsigned char*>(0x10006598);
    eax13 = reinterpret_cast<unsigned char>(0);
    ecx14 = 64;
    while (ecx14) {
        --ecx14;
        *edi12 = reinterpret_cast<unsigned char>(0);
        edi12 = edi12 + 4;
    }
    *edi12 = 0;
    edi15 = (v10 + v10 * 2) * 2;
    do {
        esi16 = reinterpret_cast<struct s10*>((edi15 + eax13) * 8 + 0x100066d0);
        if (esi16->f0) {
            do {
                if (!esi16->f1) 
                    break;
                edx17 = 0;
                ebx18 = 0;
                *reinterpret_cast<signed char*>(&edx17) = esi16->f0;
                *reinterpret_cast<signed char*>(&ebx18) = esi16->f1;
                if (ebx18 >= edx17) {
                    cl19 = *reinterpret_cast<unsigned char*>(eax13 + 0x100066b8);
                    do {
                        *reinterpret_cast<unsigned char*>(edx17 + 0x10006599) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx17 + 0x10006599) | cl19);
                        ++edx17;
                        ebx20 = 0;
                        *reinterpret_cast<signed char*>(&ebx20) = esi16->f1;
                    } while (ebx20 >= edx17);
                }
                ++esi16;
            } while (esi16->f0);
        }
        eax13 = reinterpret_cast<unsigned char>(eax13 + 1);
    } while (eax13 < reinterpret_cast<unsigned char>(4));
    g1000669c = ebp8;
    eax21 = fun_10002a70(ebp8);
    g100066a0 = eax21;
    eax22 = v10 << 4;
    ebx23 = *reinterpret_cast<struct s0**>(eax22 + eax22 * 2 + reinterpret_cast<int32_t>("!"));
    ecx24 = reinterpret_cast<struct s11*>(eax22 + eax22 * 2 + 0x100066c4);
    ecx25 = ecx24->f8;
    g100066a8 = ecx24->f0;
    g100066ac = ebx23;
    g100066b0 = ecx25;
    fun_10003620(25);
    return 0;
    addr_1000286c_8:
    eax26 = reinterpret_cast<int32_t>(GetCPInfo());
    if (eax26 != 1) {
        zf27 = g100066b4 == 0;
        if (zf27) {
            fun_10003620(25);
            goto v28;
        } else {
            fun_10002ad0();
            fun_10003620(25);
            goto v29;
        }
    }
    edi30 = reinterpret_cast<signed char*>(0x10006598);
    ecx31 = 64;
    while (ecx31) {
        --ecx31;
        *edi30 = reinterpret_cast<signed char>(0);
        edi30 = edi30 + 4;
    }
    *edi30 = 0;
    if (reinterpret_cast<unsigned char>(v2) > reinterpret_cast<unsigned char>(1)) 
        goto addr_1000289b_34;
    eax32 = reinterpret_cast<struct s0*>(0);
    g1000669c = reinterpret_cast<struct s0*>(0);
    addr_100029b2_36:
    g100066a0 = eax32;
    g100066a8 = reinterpret_cast<struct s0*>(0);
    g100066ac = reinterpret_cast<struct s0*>(0);
    g100066b0 = reinterpret_cast<struct s0*>(0);
    fun_10003620(25);
    goto v33;
    addr_1000289b_34:
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v10) + 2)) {
        do {
            if (!v34) 
                break;
            ecx35 = 0;
            edx36 = 0;
            *reinterpret_cast<signed char*>(&ecx35) = v37;
            *reinterpret_cast<signed char*>(&edx36) = v34;
            if (edx36 >= ecx35) {
                do {
                    *reinterpret_cast<unsigned char*>(ecx35 + 0x10006599) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ecx35 + 0x10006599) | 4);
                    ++ecx35;
                    eax38 = 0;
                    *reinterpret_cast<signed char*>(&eax38) = v39;
                } while (eax38 >= ecx35);
            }
        } while (v40);
    }
    eax41 = 1;
    do {
        *reinterpret_cast<unsigned char*>(eax41 + 0x10006599) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax41 + 0x10006599) | 8);
        ++eax41;
    } while (eax41 < 0xff);
    g1000669c = ebp8;
    eax32 = fun_10002a70(ebp8);
    goto addr_100029b2_36;
}

int32_t DeleteCriticalSection = 0xb44e;

void fun_10002430(struct s0* a1, struct s0* a2, struct s0* a3) {
    struct s0* v4;
    struct s0* v5;
    struct s0* ebx6;
    struct s0* v7;
    struct s0* esi8;
    struct s0* v9;
    struct s0* edi10;
    struct s0** esi11;
    struct s0* v12;
    struct s0* ebp13;
    int32_t edi14;
    struct s0* ebx15;
    struct s0* v16;

    v4 = reinterpret_cast<struct s0*>(__return_address());
    v5 = ebx6;
    v7 = esi8;
    v9 = edi10;
    esi11 = reinterpret_cast<struct s0**>(0x1000a220);
    v12 = ebp13;
    edi14 = DeleteCriticalSection;
    do {
        ebx15 = *esi11;
        if (ebx15) {
            if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ebx15) + 0x480) > reinterpret_cast<unsigned char>(ebx15)) {
                do {
                    if (ebx15->f8) {
                        edi14(&ebx15->fc);
                    }
                    ebx15 = reinterpret_cast<struct s0*>(&ebx15->f24);
                } while (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*esi11) + 0x480) > reinterpret_cast<unsigned char>(ebx15));
            }
            v16 = *esi11;
            fun_10003780(v16, v12, v9, v7, v5, v4, a1, a2, a3);
        }
        esi11 = esi11 + 4;
    } while (reinterpret_cast<uint32_t>(esi11) < 0x1000a320);
    return;
}

void fun_10002010(struct s0* a1, struct s0* a2, struct s0* a3);

signed char g10006560 = 0;

int32_t* g1000a32c;

void* g1000a324;

int32_t ExitProcess = 0xb38a;

void fun_10001f80(int32_t a1, int32_t a2, int32_t a3) {
    struct s0* v4;
    struct s0* ebx5;
    struct s0* esi6;
    int32_t ebx7;
    int1_t zf8;
    void* esi9;
    int32_t* esi10;
    int1_t cf11;
    int32_t eax12;
    int1_t cf13;

    v4 = ebx5;
    fun_10002010(esi6, v4, __return_address());
    g10006564 = 1;
    ebx7 = a3;
    g10006560 = *reinterpret_cast<signed char*>(&ebx7);
    if (!a2) {
        zf8 = g1000a32c == 0;
        if (!zf8 && (esi9 = g1000a324, esi10 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi9) - 4), cf11 = reinterpret_cast<uint32_t>(esi10) < reinterpret_cast<uint32_t>(g1000a32c), !cf11)) {
            do {
                eax12 = *esi10;
                if (eax12) {
                    eax12();
                }
                --esi10;
                cf13 = reinterpret_cast<uint32_t>(esi10) < reinterpret_cast<uint32_t>(g1000a32c);
            } while (!cf13);
        }
        fun_10002030(0x10006014, 0x1000601c);
    }
    fun_10002030(0x10006020, 0x10006024);
    if (!ebx7) {
        ExitProcess();
        goto v4;
    } else {
        fun_10002020();
        return;
    }
}

/* (image base) */
int32_t image_base_ = 0x10007230;

void fun_10003540(struct s0* a1, struct s0* a2, struct s0* a3) {
    struct s0* v4;
    struct s0* v5;
    struct s0* ebx6;
    struct s0* v7;
    struct s0* esi8;
    struct s0* v9;
    struct s0* edi10;
    int32_t esi11;
    int32_t edi12;
    struct s0** ebx13;
    struct s0* v14;
    struct s0* v15;
    int32_t eax16;

    v4 = reinterpret_cast<struct s0*>(__return_address());
    v5 = ebx6;
    v7 = esi8;
    v9 = edi10;
    esi11 = DeleteCriticalSection;
    edi12 = 0;
    do {
        ebx13 = reinterpret_cast<struct s0**>(edi12 * 4 + 0x10006db8);
        if (*ebx13 && (edi12 != 17 && (edi12 != 13 && (edi12 != 9 && edi12 != 1)))) {
            v14 = *ebx13;
            esi11(v14, v9, v7, v5, v4);
            v15 = *ebx13;
            fun_10003780(v15, v14, v9, v7, v5, v4, a1, a2, a3);
        }
        ++edi12;
    } while (edi12 < 48);
    eax16 = image_base_;
    esi11();
    esi11();
    esi11();
    esi11();
    goto eax16;
}

struct s0* g10006b0c = reinterpret_cast<struct s0*>(0);

int32_t GetStringTypeA = 0xb51a;

int32_t GetStringTypeW = 0xb52c;

struct s0* g10006f18 = reinterpret_cast<struct s0*>(0);

int32_t MultiByteToWideChar = 0xb4a2;

struct s0* fun_10002ef0(int32_t a1, struct s0* a2, struct s0* a3, void* a4, struct s0* a5, int32_t a6) {
    struct s0* eax7;
    int32_t esi8;
    int32_t eax9;
    int32_t eax10;
    struct s0* ebx11;
    struct s0* esi12;
    struct s0* edi13;
    int32_t eax14;
    struct s0* eax15;
    struct s0* edi16;
    int32_t esi17;
    int32_t eax18;
    struct s0* eax19;
    struct s0* ebp20;

    eax7 = g10006b0c;
    if (eax7) {
        esi8 = GetStringTypeA;
    } else {
        esi8 = GetStringTypeA;
        eax9 = reinterpret_cast<int32_t>(esi8(0));
        if (!eax9) {
            eax10 = reinterpret_cast<int32_t>(GetStringTypeW());
            if (!eax10) {
                goto 1;
            } else {
                eax7 = reinterpret_cast<struct s0*>(1);
            }
        } else {
            eax7 = reinterpret_cast<struct s0*>(2);
        }
    }
    g10006b0c = eax7;
    if (!reinterpret_cast<int1_t>(eax7 == 2)) {
        g10006b0c = eax7;
        if (reinterpret_cast<int1_t>(eax7 == 1)) {
            ebx11 = reinterpret_cast<struct s0*>(0);
            esi12 = reinterpret_cast<struct s0*>(0);
            edi13 = a5;
            if (!edi13) {
                edi13 = g10006f18;
            }
            eax14 = reinterpret_cast<int32_t>(MultiByteToWideChar());
            if (eax14 && ((eax15 = fun_10003720(2, eax14), esi12 = eax15, !!esi12) && (eax18 = reinterpret_cast<int32_t>(MultiByteToWideChar(edi13, 1, edi16, esi17, esi12, eax14)), !!eax18))) {
                eax19 = reinterpret_cast<struct s0*>(GetStringTypeW(edi13, esi12, eax18, a3, edi13, 1, edi16, esi17, esi12, eax14));
                ebx11 = eax19;
            }
            fun_10003780(esi12, edi13, 9, a2, a3, 0, 0, ebp20, edi16);
            eax7 = ebx11;
        }
        return eax7;
    } else {
        if (!a6) {
        }
        esi8();
        goto ebp20;
    }
}

/* (image base) */
int32_t image_base_ = 0x10007278;

/* (image base) */
int32_t image_base_ = 0x10007260;

void fun_10003510() {
    int32_t eax1;
    int32_t esi2;
    int32_t esi3;
    int32_t ecx4;
    int32_t eax5;

    eax1 = image_base_;
    esi2 = InitializeCriticalSection;
    esi2(eax1, esi3, __return_address());
    ecx4 = image_base_;
    esi2(ecx4, eax1, esi3, __return_address());
    eax5 = image_base_;
    esi2();
    esi2();
    goto eax5;
}

struct s0* fun_100037c0(struct s0* a1, int32_t a2) {
    struct s0* v3;
    struct s0* esi4;
    struct s0* v5;
    struct s0* edi6;
    struct s0* edi7;
    int32_t esi8;
    struct s0* eax9;
    int32_t eax10;

    v3 = esi4;
    v5 = edi6;
    edi7 = a1;
    if (reinterpret_cast<unsigned char>(edi7) > reinterpret_cast<unsigned char>(0xffffffe0)) {
        return 0;
    }
    if (!edi7) {
        edi7 = reinterpret_cast<struct s0*>(1);
    }
    esi8 = a2;
    do {
        eax9 = fun_10003800(edi7);
        if (eax9) 
            break;
        if (!esi8) 
            break;
        eax10 = fun_10003ea0(edi7, v5, v3);
    } while (eax10);
    goto addr_100037fb_9;
    addr_100037fd_10:
    return eax9;
    addr_100037fb_9:
    eax9 = reinterpret_cast<struct s0*>(0);
    goto addr_100037fd_10;
}

int32_t SetLastError = 0xb3d2;

struct s8* fun_10002100() {
    struct s0* eax1;
    struct s0* eax2;
    int32_t eax3;
    int32_t eax4;
    struct s0* eax5;
    int32_t edi6;

    GetLastError();
    eax1 = reinterpret_cast<struct s0*>(TlsGetValue());
    if (!eax1) {
        eax2 = fun_10003720(1, 0x74);
        if (!eax2 || (eax3 = g10006568, eax4 = reinterpret_cast<int32_t>(TlsSetValue(eax3, eax2)), eax4 == 0)) {
            fun_10001e40(16);
        } else {
            fun_100020e0(eax2, eax3, eax2);
            eax5 = reinterpret_cast<struct s0*>(GetCurrentThreadId(eax3, eax2));
            *reinterpret_cast<struct s0**>(&eax2->f0) = eax5;
            eax2->f4 = reinterpret_cast<struct s0*>(0xffffffff);
        }
    }
    SetLastError();
    goto edi6;
}

int32_t fun_10003dd0(int32_t a1);

int32_t fun_10003dc0() {
    int32_t eax1;

    eax1 = fun_10003dd0(1);
    return eax1;
}

void fun_100036f0(struct s0* a1, int32_t a2) {
    int32_t ebp3;

    if (reinterpret_cast<signed char>(a1) >= reinterpret_cast<signed char>(20)) {
        LeaveCriticalSection();
        goto ebp3;
    } else {
        fun_10003620(&a1->f1c);
        return;
    }
}

void fun_10003640(struct s0* a1, struct s0* a2) {
    struct s0* ebp3;

    if (reinterpret_cast<unsigned char>(a1) < reinterpret_cast<unsigned char>(0x10006b18) || reinterpret_cast<unsigned char>(a1) > reinterpret_cast<unsigned char>(0x10006d78)) {
        EnterCriticalSection();
        goto ebp3;
    } else {
        fun_100035b0((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(a1) - 0x10006b18) >> 5) + 28, ebp3, __return_address(), a1, a2);
        return;
    }
}

int32_t fun_10003f20(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5) {
    int32_t edi6;
    int32_t eax7;
    struct s0* edi8;
    struct s0* esi9;
    uint32_t v10;
    int32_t eax11;
    struct s0* v12;

    edi6 = -1;
    if (a1->fc & 0x83) {
        eax7 = fun_10003d50(a1);
        edi6 = eax7;
        fun_10004130(a1, edi8, esi9, __return_address(), a1, a2);
        v10 = a1->f10;
        eax11 = fun_10004030(v10);
        if (eax11 >= 0) {
            if (a1->f1c) {
                v12 = a1->f1c;
                fun_10003780(v12, edi8, esi9, __return_address(), a1, a2, a3, a4, a5);
                a1->f1c = reinterpret_cast<struct s0*>(0);
            }
        } else {
            edi6 = -1;
        }
    }
    a1->fc = reinterpret_cast<unsigned char>(0);
    return edi6;
}

void fun_100036b0(struct s0* a1) {
    int32_t ebp2;

    if (reinterpret_cast<unsigned char>(a1) < reinterpret_cast<unsigned char>(0x10006b18) || reinterpret_cast<unsigned char>(a1) > reinterpret_cast<unsigned char>(0x10006d78)) {
        LeaveCriticalSection();
        goto ebp2;
    } else {
        fun_10003620((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(a1) - 0x10006b18) >> 5) + 28);
        return;
    }
}

struct s12 {
    int32_t f0;
    unsigned char f4;
};

int32_t SetStdHandle = 0xb5c4;

int32_t fun_10003ae0(uint32_t a1) {
    int1_t below_or_equal2;
    void** edi3;
    uint32_t eax4;
    uint32_t esi5;
    struct s12* eax6;
    int32_t* eax7;
    void* edi8;
    uint32_t* eax9;
    int1_t zf10;
    int32_t v11;

    below_or_equal2 = g1000a210 <= a1;
    if (below_or_equal2 || ((edi3 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(a1 & 0xffffffe7) >> 3) + 0x1000a220), eax4 = (a1 & 31) << 2, esi5 = eax4 + eax4 * 8, eax6 = reinterpret_cast<struct s12*>(reinterpret_cast<int32_t>(*edi3) + esi5), (eax6->f4 & 1) == 0) || eax6->f0 == -1)) {
        eax7 = fun_10003ac0();
        *eax7 = 9;
        eax9 = fun_10003ad0(edi8);
        *eax9 = 0;
        return -1;
    }
    zf10 = g100062d0 == 1;
    if (!zf10) {
        addr_10003b45_4:
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*edi3) + esi5) = -1;
        return 0;
    } else {
        if (!a1) {
            v11 = 0xf6;
        } else {
            if (a1 == 1) {
                v11 = 0xf5;
            } else {
                if (a1 == 2) {
                    v11 = 0xf4;
                } else {
                    goto addr_10003b45_4;
                }
            }
        }
    }
    SetStdHandle(v11, 0);
    goto addr_10003b45_4;
}

struct s0* fun_10001b60(struct s0* a1);

struct s0* fun_10001c10(struct s0* a1) {
    struct s0* eax2;

    eax2 = fun_10001b60(a1);
    return eax2;
}

void fun_100016d0();

void fun_10001b52(struct s0* a1, void* a2, void* a3);

int32_t g10008cb0;

int16_t g10008cb4;

int32_t g10008ce0;

int16_t g10008ce4;

int32_t CreateEventA = 0xb2e4;

int32_t g10008740;

int32_t CreateThread = 0xb2d4;

int32_t g10008748;

void fun_100017a0() {
    uint64_t v1;
    int32_t esi2;
    void* esp3;
    void* v4;
    struct s0* edx5;
    void* v6;
    int32_t esi7;
    int32_t* eax8;
    int32_t eax9;
    int32_t eax10;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = 16;
    *reinterpret_cast<int32_t*>(&v1) = esi2;
    fun_100016d0();
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 20 - 4 - 4 + 4);
    v4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) + 4);
    edx5 = g1000874c;
    v6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) + 8);
    fun_10001b52(edx5, v6, v4);
    esi7 = GetLastError;
    esi7(edx5, v6, v4);
    g10008cb0 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
    g10008cb4 = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&v1) + 6);
    g10008ce0 = -1;
    g10008ce4 = -1;
    eax8 = reinterpret_cast<int32_t*>(0x100072a0);
    do {
        *eax8 = 1;
        eax8 = eax8 + 0x84;
    } while (reinterpret_cast<uint32_t>(eax8) < 0x10008740);
    g10008744 = 0;
    eax9 = reinterpret_cast<int32_t>(CreateEventA());
    g10008740 = eax9;
    eax10 = reinterpret_cast<int32_t>(CreateThread());
    g10008748 = eax10;
    esi7();
    goto 0;
}

/* WSOCK32.dll:6 */
int32_t WSOCK32_dll_6 = 0x80000006;

void fun_10001b52(struct s0* a1, void* a2, void* a3) {
    goto WSOCK32_dll_6;
}

int32_t GetACP = 0xb472;

int32_t GetOEMCP = 0xb47c;

struct s0* fun_10002a20(struct s0* a1) {
    struct s0* eax2;

    g100066b4 = 0;
    eax2 = a1;
    if (!reinterpret_cast<int1_t>(eax2 == 0xfffffffe)) {
        if (!reinterpret_cast<int1_t>(eax2 == 0xfffffffd)) {
            if (reinterpret_cast<int1_t>(eax2 == 0xfffffffc)) {
                g100066b4 = 1;
                eax2 = g10006f18;
            }
            return eax2;
        } else {
            g100066b4 = 1;
            goto GetACP;
        }
    } else {
        g100066b4 = 1;
        goto GetOEMCP;
    }
}

void fun_10002010(struct s0* a1, struct s0* a2, struct s0* a3) {
    fun_100035b0(13, __return_address(), a1, a2, a3);
    return;
}

struct s0* g10009208;

int32_t fun_10003dd0(int32_t a1) {
    int32_t edi2;
    struct s0* esi3;
    void* ebx4;
    int32_t v5;
    struct s0* ebp6;
    struct s0* edi7;
    struct s0* esi8;
    struct s0* ebx9;
    int32_t ebp10;
    struct s0* eax11;
    struct s0* v12;
    struct s0* eax13;
    unsigned char eax14;
    struct s0* v15;
    uint32_t eax16;
    struct s0* v17;
    uint32_t eax18;
    struct s0* eax19;
    int32_t v20;
    int32_t eax21;

    edi2 = 0;
    esi3 = reinterpret_cast<struct s0*>(0);
    ebx4 = reinterpret_cast<void*>(0);
    v5 = 0;
    fun_100035b0(2, ebp6, edi7, esi8, ebx9);
    ebp10 = a1;
    do {
        eax11 = g10009208;
        if (*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax11) + reinterpret_cast<uint32_t>(ebx4)) && (*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax11) + reinterpret_cast<uint32_t>(ebx4)))->fc & 0x83) {
            v12 = *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax11) + reinterpret_cast<uint32_t>(ebx4));
            fun_10003680(esi3, v12);
            eax13 = g10009208;
            eax14 = (*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax13) + reinterpret_cast<uint32_t>(ebx4)))->fc;
            if (eax14 & 0x83) {
                if (ebp10 != 1) {
                    if (!ebp10 && (eax14 & 2 && (v15 = *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax13) + reinterpret_cast<uint32_t>(ebx4)), eax16 = fun_10003d10(v15), eax16 == 0xffffffff))) {
                        v5 = -1;
                    }
                } else {
                    v17 = *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax13) + reinterpret_cast<uint32_t>(ebx4));
                    eax18 = fun_10003d10(v17);
                    if (eax18 != 0xffffffff) {
                        ++edi2;
                    }
                }
            }
            eax19 = g10009208;
            v20 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(eax19) + reinterpret_cast<uint32_t>(ebx4));
            fun_100036f0(esi3, v20);
        }
        ebx4 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx4) + 4);
        esi3 = reinterpret_cast<struct s0*>(&esi3->f1);
    } while (reinterpret_cast<int32_t>(ebx4) < reinterpret_cast<int32_t>(0x800));
    fun_10003620(2);
    eax21 = edi2;
    if (ebp10 != 1) {
        eax21 = v5;
    }
    return eax21;
}

int32_t g100064fc = 1;

struct s0* fun_10001b60(struct s0* a1) {
    struct s0* esi2;
    int1_t less_or_equal3;
    int32_t edx4;
    int16_t* ecx5;
    uint32_t eax6;
    uint32_t eax7;
    void* eax8;
    void* ebx9;
    struct s0** esi10;
    void* edi11;
    struct s0* ebp12;
    int1_t less_or_equal13;
    int16_t* ecx14;
    uint32_t eax15;
    uint32_t eax16;

    esi2 = a1;
    while (1) {
        less_or_equal3 = g100064fc <= 1;
        if (less_or_equal3) {
            edx4 = 0;
            ecx5 = image_base_;
            *reinterpret_cast<struct s0**>(&edx4) = *reinterpret_cast<struct s0**>(&esi2->f0);
            eax6 = 0;
            *reinterpret_cast<int16_t*>(&eax6) = ecx5[edx4];
            eax7 = eax6 & 8;
        } else {
            eax8 = reinterpret_cast<void*>(0);
            *reinterpret_cast<struct s0**>(&eax8) = *reinterpret_cast<struct s0**>(&esi2->f0);
            eax7 = fun_10001e80(eax8, 8);
        }
        if (!eax7) 
            break;
        esi2 = reinterpret_cast<struct s0*>(&esi2->f1);
    }
    ebx9 = reinterpret_cast<void*>(0);
    *reinterpret_cast<struct s0**>(&ebx9) = *reinterpret_cast<struct s0**>(&esi2->f0);
    esi10 = &esi2->f1;
    edi11 = ebx9;
    if (ebx9 == 45 || reinterpret_cast<int1_t>(ebx9 == 43)) {
        ebx9 = reinterpret_cast<void*>(0);
        *reinterpret_cast<struct s0**>(&ebx9) = *esi10;
        ++esi10;
    }
    ebp12 = reinterpret_cast<struct s0*>(0);
    while (1) {
        less_or_equal13 = g100064fc <= 1;
        if (less_or_equal13) {
            ecx14 = image_base_;
            eax15 = 0;
            *reinterpret_cast<int16_t*>(&eax15) = ecx14[static_cast<int32_t>(ebx9)];
            eax16 = eax15 & 4;
        } else {
            eax16 = fun_10001e80(ebx9, 4);
        }
        if (!eax16) 
            break;
        ++esi10;
        ebp12 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(ebx9) + (reinterpret_cast<unsigned char>(ebp12) + reinterpret_cast<unsigned char>(ebp12) * 4) * 2 + 0xffffffd0);
        ebx9 = reinterpret_cast<void*>(0);
        *reinterpret_cast<struct s0**>(&ebx9) = *(esi10 - 1);
    }
    if (!reinterpret_cast<int1_t>(edi11 == 45)) {
        return ebp12;
    } else {
        return -reinterpret_cast<unsigned char>(ebp12);
    }
}

int32_t g10008750;

void fun_100016d0() {
    struct s0* edi1;
    struct s0* esi2;
    struct s0* eax3;
    int32_t esi4;
    int32_t eax5;
    void* esp6;
    struct s0* ecx7;
    struct s0* v8;
    struct s0* v9;
    struct s0* v10;
    struct s0* v11;
    struct s0* v12;
    int32_t eax13;
    struct s0* v14;
    struct s0* edx15;
    struct s0* v16;
    int32_t eax17;
    int32_t eax18;

    eax3 = fun_10001b46(6, 2, 0x3e8, edi1, esi2, 1);
    esi4 = GetLastError;
    g1000874c = eax3;
    eax5 = reinterpret_cast<int32_t>(esi4(6, 2, 0x3e8, edi1, esi2, 1));
    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 20 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 - 4);
    ecx7 = g1000874c;
    g10008750 = eax5;
    v8 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp6) + 12);
    fun_10001b40(ecx7, 0xffff, 32, v8, 4, 6, 2, 0x3e8, edi1, esi2, 1, v9, v10, v11, v12, __return_address());
    eax13 = reinterpret_cast<int32_t>(esi4(ecx7, 0xffff, 32, v8, 4, 6, 2, 0x3e8, edi1, esi2, 1));
    v14 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp6) - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 8);
    edx15 = g1000874c;
    g10008750 = eax13;
    v16 = edx15;
    fun_10001b40(v16, 0xffff, 4, v14, 4, ecx7, 0xffff, 32, v8, 4, 6, 2, 0x3e8, edi1, esi2, 1);
    eax17 = reinterpret_cast<int32_t>(esi4(v16, 0xffff, 4, v14, 4, ecx7, 0xffff, 32, v8, 4, 6, 2, 0x3e8, edi1, esi2, 1));
    g10008750 = eax17;
    *reinterpret_cast<int16_t*>(&edx15) = g10006180;
    fun_10001b3a(edx15, v16, 0xffff, 4, 6, 0, 0, 0, 32, v8, 4, 6, 2, 0x3e8, edi1, esi2, 1);
    fun_10001b34();
    eax18 = reinterpret_cast<int32_t>(esi4());
    g10008750 = eax18;
    goto 6;
}

void fun_10002abc() {
    int32_t eax1;
    int32_t eax2;
    signed char al3;

    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax2) + al3);
}

/* _InitializeNetwork@0 */
void _InitializeNetwork_0() {
    fun_10001b1c();
    goto 0x101;
}

int32_t g1000a334;

struct s0* fun_10001d70(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, struct s0* a10) {
    struct s0* ebx11;
    uint32_t eax12;
    uint32_t tmp32_13;
    int32_t eax14;
    struct s0* esi15;
    struct s0* ebp16;
    struct s0* eax17;
    struct s0* ebp18;
    struct s0* eax19;
    int32_t eax20;
    struct s0* eax21;
    struct s0* edi22;
    struct s0* eax23;
    struct s0* esi24;
    struct s0* ebx25;
    struct s0* eax26;

    ebx11 = reinterpret_cast<struct s0*>(1);
    if (!reinterpret_cast<int1_t>(a2 == 1)) {
        if (!a2) {
            eax12 = g100062bc;
            if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax12) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax12 == 0)) {
                return 0;
            } else {
                g100062bc = eax12 - 1;
            }
        }
    } else {
        tmp32_13 = g100062bc + reinterpret_cast<unsigned char>(1);
        g100062bc = tmp32_13;
    }
    if (a2 == 1 || reinterpret_cast<int1_t>(a2 == 2)) {
        eax14 = g1000a334;
        if (!eax14) {
            esi15 = a1;
            ebp16 = a3;
        } else {
            ebp16 = a3;
            esi15 = a1;
            eax17 = reinterpret_cast<struct s0*>(eax14(esi15, a2, ebp16));
            ebx11 = eax17;
        }
        if (ebx11) 
            goto addr_10001dd5_12;
    } else {
        esi15 = a1;
        ebp16 = a3;
        goto addr_10001de9_14;
    }
    addr_10001df7_15:
    if (ebx11) {
        addr_10001e0a_16:
        if (!a2 || reinterpret_cast<int1_t>(a2 == 3)) {
            eax19 = fun_10001c20(esi15, a2, ebp16, ebp18);
            if (!eax19) {
                ebx11 = reinterpret_cast<struct s0*>(0);
            }
            if (ebx11 && (eax20 = g1000a334, !!eax20)) {
                eax21 = reinterpret_cast<struct s0*>(eax20(esi15, a2, ebp16));
                ebx11 = eax21;
            }
        }
    } else {
        addr_10001dfb_21:
        if (reinterpret_cast<int1_t>(a2 == 1)) {
            fun_100020b0(ebp18, edi22);
            fun_10002240();
            goto addr_10001e0a_16;
        }
    }
    return ebx11;
    addr_10001dd5_12:
    eax23 = fun_10001c20(esi15, a2, ebp16, ebp18);
    ebx11 = eax23;
    addr_10001de9_14:
    if (!ebx11) 
        goto addr_10001dfb_21;
    eax26 = fun_10001460(esi15, a2, ebp16, ebp18, edi22, esi24, ebx25, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    ebx11 = eax26;
    goto addr_10001df7_15;
}

void fun_10001f50(int32_t a1) {
    fun_10001f80(a1, 1, 0);
    return;
}

uint32_t g10009204;

struct s13 {
    signed char[32] pad32;
    struct s0* f20;
};

int32_t fun_10003400(struct s0* a1, struct s0* a2) {
    struct s0* v3;
    int32_t eax4;
    int1_t zf5;
    struct s0* v6;
    struct s0* ebx7;
    struct s0* v8;
    struct s0* esi9;
    struct s0* v10;
    struct s0* edi11;
    int32_t esi12;
    struct s0* v13;
    struct s0* ebp14;
    uint32_t edi15;
    int1_t less_or_equal16;
    void* ebp17;
    int32_t ebx18;
    struct s0* eax19;
    struct s0* v20;
    int32_t eax21;
    struct s0* eax22;
    struct s0* v23;
    struct s0* ecx24;
    struct s0* v25;
    struct s0* ecx26;
    int1_t less27;

    v3 = reinterpret_cast<struct s0*>(__return_address());
    eax4 = fun_10003dc0();
    zf5 = g10006560 == 0;
    if (zf5) {
        return eax4;
    }
    v6 = ebx7;
    v8 = esi9;
    v10 = edi11;
    esi12 = 0;
    v13 = ebp14;
    edi15 = 3;
    fun_100035b0(2, v13, v10, v8, v6);
    less_or_equal16 = reinterpret_cast<int32_t>(g10009204) <= reinterpret_cast<int32_t>(3);
    if (!less_or_equal16) 
        goto addr_10003c8d_5;
    addr_10003cf7_6:
    fun_10003620(2);
    return esi12;
    addr_10003c8d_5:
    ebp17 = reinterpret_cast<void*>(12);
    ebx18 = DeleteCriticalSection;
    do {
        eax19 = g10009208;
        if (*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax19) + reinterpret_cast<uint32_t>(ebp17))) {
            if ((*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax19) + reinterpret_cast<uint32_t>(ebp17)))->fc & 0x83 && (v20 = *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax19) + reinterpret_cast<uint32_t>(ebp17)), eax21 = fun_10003ee0(v20), eax21 != -1)) {
                ++esi12;
            }
            if (reinterpret_cast<int32_t>(ebp17) >= reinterpret_cast<int32_t>(80)) {
                eax22 = g10009208;
                v23 = reinterpret_cast<struct s0*>(&(*reinterpret_cast<struct s13**>(reinterpret_cast<unsigned char>(eax22) + reinterpret_cast<uint32_t>(ebp17)))->f20);
                ebx18(v23);
                ecx24 = g10009208;
                v25 = *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(ecx24) + reinterpret_cast<uint32_t>(ebp17));
                fun_10003780(v25, v23, v13, v10, v8, v6, v3, a1, a2);
                ecx26 = g10009208;
                *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ecx26) + reinterpret_cast<uint32_t>(ebp17)) = 0;
            }
        }
        ebp17 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp17) + 4);
        ++edi15;
        less27 = reinterpret_cast<int32_t>(edi15) < reinterpret_cast<int32_t>(g10009204);
    } while (less27);
    goto addr_10003cf7_6;
}

struct s14 {
    signed char f0;
    signed char[1] pad2;
    signed char f2;
};

struct s15 {
    int32_t f0;
    signed char f1;
    int16_t f2;
    signed char f3;
};

struct s16 {
    int32_t f0;
    signed char f1;
    int16_t f2;
    signed char f3;
};

struct s14* fun_100038f0(struct s14* a1, struct s14* a2, void* a3) {
    struct s14* esi4;
    struct s14* edi5;
    void* ecx6;
    uint32_t edx7;
    void* eax8;
    uint32_t ecx9;
    uint32_t eax10;
    uint32_t ecx11;
    uint32_t edx12;
    uint32_t ecx13;
    void* esi14;
    void* edi15;
    signed char* esi16;
    signed char* edi17;
    uint32_t edx18;
    int32_t edx19;
    void* eax20;
    uint32_t ecx21;
    uint32_t eax22;
    struct s15* esi23;
    struct s16* edi24;
    uint32_t ecx25;
    uint32_t edx26;
    uint32_t ecx27;

    esi4 = a2;
    edi5 = a1;
    ecx6 = a3;
    if (reinterpret_cast<uint32_t>(edi5) <= reinterpret_cast<uint32_t>(esi4) || reinterpret_cast<uint32_t>(edi5) >= reinterpret_cast<uint32_t>(esi4) + reinterpret_cast<uint32_t>(ecx6)) {
        if (reinterpret_cast<uint32_t>(edi5) & 3) {
            if (reinterpret_cast<uint32_t>(ecx6) <= 12) {
                while (ecx6) {
                    ecx6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx6) - 1);
                    edi5->f0 = esi4->f0;
                    edi5 = reinterpret_cast<struct s14*>(&edi5->pad2);
                    esi4 = reinterpret_cast<struct s14*>(&esi4->pad2);
                }
                return a1;
            }
            edx7 = -reinterpret_cast<uint32_t>(edi5) & 3;
            eax8 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx6) - edx7);
            ecx9 = edx7;
            while (ecx9) {
                --ecx9;
                edi5->f0 = esi4->f0;
                edi5 = reinterpret_cast<struct s14*>(&edi5->pad2);
                esi4 = reinterpret_cast<struct s14*>(&esi4->pad2);
            }
            eax10 = reinterpret_cast<uint32_t>(eax8) & 3;
            ecx11 = reinterpret_cast<uint32_t>(eax8) >> 2;
            while (ecx11) {
                --ecx11;
                edi5->f0 = esi4->f0;
                edi5 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(edi5) + 4);
                esi4 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(esi4) + 4);
            }
            goto *reinterpret_cast<int32_t*>("`9" + eax10 * 4);
        } else {
            edx12 = reinterpret_cast<uint32_t>(ecx6) & 3;
            ecx13 = reinterpret_cast<uint32_t>(ecx6) >> 2;
            while (ecx13) {
                --ecx13;
                edi5->f0 = esi4->f0;
                edi5 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(edi5) + 4);
                esi4 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(esi4) + 4);
            }
            goto *reinterpret_cast<int32_t*>("`9" + edx12 * 4);
        }
    } else {
        esi14 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi4) + reinterpret_cast<uint32_t>(ecx6));
        edi15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi5) + reinterpret_cast<uint32_t>(ecx6));
        if (reinterpret_cast<uint32_t>(edi15) & 3) {
            esi16 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi14) - 1);
            edi17 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi15) - 1);
            if (reinterpret_cast<uint32_t>(ecx6) <= 12) {
                while (ecx6) {
                    ecx6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx6) - 1);
                    *edi17 = *esi16;
                    --edi17;
                    --esi16;
                }
                return a1;
            }
            edx18 = reinterpret_cast<uint32_t>(-edx19) & 3;
            eax20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx6) - edx18);
            ecx21 = edx18;
            while (ecx21) {
                --ecx21;
                *edi17 = *esi16;
                --edi17;
                --esi16;
            }
            eax22 = reinterpret_cast<uint32_t>(eax20) & 3;
            esi23 = reinterpret_cast<struct s15*>(esi16 - 3);
            edi24 = reinterpret_cast<struct s16*>(edi17 - 3);
            ecx25 = reinterpret_cast<uint32_t>(eax20) >> 2;
            while (ecx25) {
                --ecx25;
                edi24->f0 = esi23->f0;
                edi24 = reinterpret_cast<struct s16*>(reinterpret_cast<uint32_t>(edi24) - 4);
                esi23 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(esi23) - 4);
            }
            goto *reinterpret_cast<int32_t*>(eax22 * 4 + 0x100039c0);
        } else {
            edx26 = reinterpret_cast<uint32_t>(ecx6) & 3;
            esi23 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(esi14) - 4);
            edi24 = reinterpret_cast<struct s16*>(reinterpret_cast<uint32_t>(edi15) - 4);
            ecx27 = reinterpret_cast<uint32_t>(ecx6) >> 2;
            while (ecx27) {
                --ecx27;
                edi24->f0 = esi23->f0;
                edi24 = reinterpret_cast<struct s16*>(reinterpret_cast<uint32_t>(edi24) - 4);
                esi23 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(esi23) - 4);
            }
            goto *reinterpret_cast<int32_t*>(edx26 * 4 + 0x100039c0);
        }
    }
    addr_10003960_36:
    return a1;
    edi5->f0 = esi4->f0;
    goto addr_10003960_36;
    edi5->f0 = esi4->f0;
    return a1;
    edi5->f0 = esi4->f0;
    edi5->f2 = esi4->f2;
    return a1;
    addr_100039fe_40:
    return a1;
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi24) + 3) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi23) + 3);
    goto addr_100039fe_40;
    *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edi24) + 2) = *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(esi23) + 2);
    return a1;
    *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edi24) + 2) = *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(esi23) + 2);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi24) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi23) + 1);
    return a1;
}

void fun_1000398d() {
}

void fun_10003999() {
}

void fun_100039e6() {
}

void fun_100041a1() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    signed char* eax22;
    signed char* eax23;
    signed char al24;
    signed char* eax25;
    signed char* eax26;
    signed char al27;
    signed char* eax28;
    signed char* eax29;
    signed char al30;
    signed char* eax31;
    signed char* eax32;
    signed char al33;
    signed char* eax34;
    signed char* eax35;
    signed char al36;
    signed char* eax37;
    signed char* eax38;
    signed char al39;
    signed char* eax40;
    signed char* eax41;
    signed char al42;
    signed char* eax43;
    signed char* eax44;
    signed char al45;
    signed char* eax46;
    signed char* eax47;
    signed char al48;
    signed char* eax49;
    signed char* eax50;
    signed char al51;
    signed char* eax52;
    signed char* eax53;
    signed char al54;
    signed char* eax55;
    signed char* eax56;
    signed char al57;
    signed char* eax58;
    signed char* eax59;
    signed char al60;
    signed char* eax61;
    signed char* eax62;
    signed char al63;
    signed char* eax64;
    signed char* eax65;
    signed char al66;
    signed char* eax67;
    signed char* eax68;
    signed char al69;
    signed char* eax70;
    signed char* eax71;
    signed char al72;
    signed char* eax73;
    signed char* eax74;
    signed char al75;
    signed char* eax76;
    signed char* eax77;
    signed char al78;
    signed char* eax79;
    signed char* eax80;
    signed char al81;
    signed char* eax82;
    signed char* eax83;
    signed char al84;
    signed char* eax85;
    signed char* eax86;
    signed char al87;
    signed char* eax88;
    signed char* eax89;
    signed char al90;
    signed char* eax91;
    signed char* eax92;
    signed char al93;
    signed char* eax94;
    signed char* eax95;
    signed char al96;
    signed char* eax97;
    signed char* eax98;
    signed char al99;
    signed char* eax100;
    signed char* eax101;
    signed char al102;
    signed char* eax103;
    signed char* eax104;
    signed char al105;
    signed char* eax106;
    signed char* eax107;
    signed char al108;
    signed char* eax109;
    signed char* eax110;
    signed char al111;
    signed char* eax112;
    signed char* eax113;
    signed char al114;
    signed char* eax115;
    signed char* eax116;
    signed char al117;
    signed char* eax118;
    signed char* eax119;
    signed char al120;
    signed char* eax121;
    signed char* eax122;
    signed char al123;
    signed char* eax124;
    signed char* eax125;
    signed char al126;
    signed char* eax127;
    signed char* eax128;
    signed char al129;
    signed char* eax130;
    signed char* eax131;
    signed char al132;
    signed char* eax133;
    signed char* eax134;
    signed char al135;
    signed char* eax136;
    signed char* eax137;
    signed char al138;
    signed char* eax139;
    signed char* eax140;
    signed char al141;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
    *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
    *eax22 = reinterpret_cast<signed char>(*eax23 + al24);
    *eax25 = reinterpret_cast<signed char>(*eax26 + al27);
    *eax28 = reinterpret_cast<signed char>(*eax29 + al30);
    *eax31 = reinterpret_cast<signed char>(*eax32 + al33);
    *eax34 = reinterpret_cast<signed char>(*eax35 + al36);
    *eax37 = reinterpret_cast<signed char>(*eax38 + al39);
    *eax40 = reinterpret_cast<signed char>(*eax41 + al42);
    *eax43 = reinterpret_cast<signed char>(*eax44 + al45);
    *eax46 = reinterpret_cast<signed char>(*eax47 + al48);
    *eax49 = reinterpret_cast<signed char>(*eax50 + al51);
    *eax52 = reinterpret_cast<signed char>(*eax53 + al54);
    *eax55 = reinterpret_cast<signed char>(*eax56 + al57);
    *eax58 = reinterpret_cast<signed char>(*eax59 + al60);
    *eax61 = reinterpret_cast<signed char>(*eax62 + al63);
    *eax64 = reinterpret_cast<signed char>(*eax65 + al66);
    *eax67 = reinterpret_cast<signed char>(*eax68 + al69);
    *eax70 = reinterpret_cast<signed char>(*eax71 + al72);
    *eax73 = reinterpret_cast<signed char>(*eax74 + al75);
    *eax76 = reinterpret_cast<signed char>(*eax77 + al78);
    *eax79 = reinterpret_cast<signed char>(*eax80 + al81);
    *eax82 = reinterpret_cast<signed char>(*eax83 + al84);
    *eax85 = reinterpret_cast<signed char>(*eax86 + al87);
    *eax88 = reinterpret_cast<signed char>(*eax89 + al90);
    *eax91 = reinterpret_cast<signed char>(*eax92 + al93);
    *eax94 = reinterpret_cast<signed char>(*eax95 + al96);
    *eax97 = reinterpret_cast<signed char>(*eax98 + al99);
    *eax100 = reinterpret_cast<signed char>(*eax101 + al102);
    *eax103 = reinterpret_cast<signed char>(*eax104 + al105);
    *eax106 = reinterpret_cast<signed char>(*eax107 + al108);
    *eax109 = reinterpret_cast<signed char>(*eax110 + al111);
    *eax112 = reinterpret_cast<signed char>(*eax113 + al114);
    *eax115 = reinterpret_cast<signed char>(*eax116 + al117);
    *eax118 = reinterpret_cast<signed char>(*eax119 + al120);
    *eax121 = reinterpret_cast<signed char>(*eax122 + al123);
    *eax124 = reinterpret_cast<signed char>(*eax125 + al126);
    *eax127 = reinterpret_cast<signed char>(*eax128 + al129);
    *eax130 = reinterpret_cast<signed char>(*eax131 + al132);
    *eax133 = reinterpret_cast<signed char>(*eax134 + al135);
    *eax136 = reinterpret_cast<signed char>(*eax137 + al138);
    *eax139 = reinterpret_cast<signed char>(*eax140 + al141);
}

struct s0* g10008d30;

int32_t GetTickCount = 0xb272;

int16_t g10008cf4;

int32_t GetAsyncKeyState = 0xb318;

struct s17 {
    int32_t f0;
    int16_t f4;
    int16_t f6;
};

int32_t g10008d64;

int16_t g10008d68;

struct s18 {
    int32_t f0;
    int16_t f4;
};

struct s19 {
    int16_t f0;
    int16_t f2;
};

int32_t g10008cf0;

int16_t g10008d5c;

int16_t g10008d5e;

/* _Connect@8 */
void _Connect_8(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, struct s0* a10, struct s0* a11, struct s0* a12, struct s0* a13, struct s0* a14, struct s0* a15) {
    struct s0* v16;
    struct s0* v17;
    struct s0* ebx18;
    struct s0* v19;
    struct s0* esi20;
    struct s0* v21;
    struct s0* edi22;
    struct s0* v23;
    struct s0* ebp24;
    struct s0* v25;
    struct s0* eax26;
    struct s0* v27;
    struct s0* eax28;
    struct s0* eax29;
    struct s0* ecx30;
    struct s0* v31;
    struct s0* v32;
    struct s0* v33;
    struct s0* v34;
    int32_t ebx35;
    int32_t eax36;
    int32_t edi37;
    struct s0* ecx38;
    int32_t esi39;
    int16_t ax40;
    struct s0* v41;
    struct s0* v42;
    int32_t eax43;
    uint32_t ebp44;
    struct s0* eax45;
    struct s0* v46;
    struct s0* v47;
    int1_t zf48;
    int32_t eax49;
    struct s17* eax50;
    int1_t zf51;
    int32_t edx52;
    int16_t ecx53;
    int1_t zf54;
    int32_t edx55;
    struct s18* edx56;
    int32_t eax57;
    int16_t cx58;
    struct s0* eax59;
    int1_t less60;
    struct s0* ecx61;
    struct s0* v62;
    struct s0* v63;
    int1_t zf64;
    struct s0* v65;
    struct s0* v66;
    int32_t eax67;
    int32_t ecx68;
    int1_t less_or_equal69;
    struct s19* eax70;
    int32_t edx71;
    int32_t eax72;
    int32_t eax73;
    int32_t eax74;
    int16_t ax75;
    int32_t edx76;
    int16_t eax77;
    struct s0* v78;
    struct s0* v79;
    struct s0* v80;
    struct s0* v81;
    struct s0* v82;
    struct s0* v83;
    int32_t v84;
    struct s0* ebx85;
    struct s0* eax86;
    struct s0* v87;
    int1_t less_or_equal88;
    int32_t v89;
    struct s0* v90;
    struct s0* v91;
    int32_t v92;
    int16_t* edx93;
    int1_t less94;
    struct s0** edi95;
    int32_t ecx96;
    struct s0* esi97;
    uint1_t cf98;
    int1_t zf99;
    uint1_t cf100;
    uint32_t ebp101;
    struct s0* v102;
    struct s0* v103;
    int32_t v104;
    int32_t v105;

    v16 = reinterpret_cast<struct s0*>(__return_address());
    v17 = ebx18;
    v19 = esi20;
    v21 = edi22;
    v23 = ebp24;
    v25 = *reinterpret_cast<struct s0**>(&a2->f0);
    eax26 = fun_10001c10(v25);
    g10006180 = *reinterpret_cast<int16_t*>(&eax26);
    fun_100017a0();
    v27 = a2->f4;
    eax28 = fun_10001c10(v27);
    g10008d30 = eax28;
    eax29 = reinterpret_cast<struct s0*>(0);
    ecx30 = g10008d30;
    *reinterpret_cast<int16_t*>(&eax29) = g10006180;
    fun_10001090("Attempting to find all players for %i player net play on socket %d. Press ESC to exit.\n", ecx30, eax29, v23, v21, v19, v17, v31, v32, v16, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    fun_10001090("Looking for a node", v23, v21, v19, v17, v33, v34, v16, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    ebx35 = GetTickCount;
    eax36 = reinterpret_cast<int32_t>(ebx35());
    edi37 = eax36 - 0x3e8;
    ecx38 = g10008d30;
    (&g10008cf4)[1] = *reinterpret_cast<int16_t*>(&ecx38);
    g10008cf4 = 1;
    g10008d4c = 1;
    esi39 = GetAsyncKeyState;
    g10008b90 = reinterpret_cast<struct s0*>(0xffffffff);
    esi39();
    while (ax40 = reinterpret_cast<int16_t>(esi39()), !ax40) {
        eax43 = fun_10001980(27, 27, v23, v21, v19, v17, v41, v42, v16);
        if (eax43) {
            ebp44 = 0xffffffff;
            do {
                eax45 = reinterpret_cast<struct s0*>(static_cast<int32_t>(g10008d48));
                fun_10001090("Connect got a packet from %d", eax45, 27, 27, v23, v21, v19, v17, v46, v47, v16, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
                zf48 = g10008d48 == -1;
                if (!zf48) {
                    eax49 = g10008d48;
                } else {
                    eax49 = g10008d4c;
                }
                eax50 = reinterpret_cast<struct s17*>(eax49 * 8 + 0x10008cf0);
                zf51 = g10008ce8 == 0xffffffff;
                if (zf51) {
                    edx52 = g10008d64;
                    eax50->f0 = edx52;
                    ecx53 = g10008d68;
                    eax50->f4 = ecx53;
                    zf54 = g10008d48 == -1;
                    if (zf54 && (edx55 = g10008d4c, g10008d4c = reinterpret_cast<int16_t>(g10008d4c + 1), edx56 = reinterpret_cast<struct s18*>((edx55 + edx55 * 2) * 2 + 0x10008cb0), eax57 = g10008970, cx58 = g10008974, edx56->f0 = eax57, eax59 = reinterpret_cast<struct s0*>(static_cast<int32_t>(g10008d4c)), edx56->f4 = cx58, less60 = reinterpret_cast<signed char>(eax59) < reinterpret_cast<signed char>(g10008d30), less60)) {
                        ecx61 = g10008d30;
                        fun_10001090("doomcom.numnodes %d, numnetnodes %d; Looking for node", eax59, ecx61, 27, 27, v23, v21, v19, v17, v62, v63, v16, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
                    }
                } else {
                    zf64 = g10008d48 == -1;
                    if (zf64) 
                        goto addr_10001355_12;
                    eax50->f4 = eax50->f6;
                }
                eax67 = fun_10001980(27, 27, v23, v21, v19, v17, v65, v66, v16);
            } while (eax67);
        }
        ecx68 = 0;
        less_or_equal69 = g10008d4c <= 0;
        if (!less_or_equal69) {
            eax70 = reinterpret_cast<struct s19*>(0x10008cf4);
            do {
                if (eax70->f2 != eax70->f0) 
                    break;
                eax70 = eax70 + 2;
                ++ecx68;
                edx71 = g10008d4c;
            } while (edx71 > ecx68);
        }
        eax72 = (&g10008cf4)[1];
        if (eax72 == ecx68) 
            goto addr_10001361_20;
        eax73 = reinterpret_cast<int32_t>(ebx35());
        if (reinterpret_cast<uint32_t>(eax73 - edi37) < 0x3e8) 
            continue;
        eax74 = reinterpret_cast<int32_t>(ebx35());
        edi37 = eax74;
        g10008d4a = 8;
        ax75 = g10008d4c;
        g10008cf4 = ax75;
        edx76 = g10008cf0;
        eax77 = g10008cf4;
        g10008d64 = edx76;
        g10008d68 = eax77;
        fun_100018d0(8, 27, 27, v23, v21, v19, v17, v78, v79, v16);
    }
    fun_10001090("Aborted upon user request", 27, 27, v23, v21, v19, v17, v80, v81, v16, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    fun_10001850(27, 27, v23, v21, v19, v17, v82, v83, v16, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    goto v84;
    addr_10001361_20:
    ebx85 = reinterpret_cast<struct s0*>(0);
    eax86 = reinterpret_cast<struct s0*>(0);
    v87 = reinterpret_cast<struct s0*>(0);
    less_or_equal88 = reinterpret_cast<signed char>(g10008d30) <= reinterpret_cast<signed char>(0);
    if (less_or_equal88) {
        addr_100013bc_24:
        if (ebx85) {
            g10008d5c = *reinterpret_cast<int16_t*>(&v87);
            g10008d5e = *reinterpret_cast<int16_t*>(&ebx85);
            goto v89;
        } else {
            fun_10001090("No players specified for game!", 27, 27, v23, v21, v19, v87, v90, v91, v16, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
            goto v92;
        }
    } else {
        v19 = reinterpret_cast<struct s0*>(0x10008cb0);
        edx93 = reinterpret_cast<int16_t*>(0x10008cf2);
        while (1) {
            if (*edx93) {
                addr_100013ab_29:
                edx93 = edx93 + 4;
                eax86 = reinterpret_cast<struct s0*>(&eax86->f1);
                v19 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(v19) + 6);
                less94 = reinterpret_cast<signed char>(eax86) < reinterpret_cast<signed char>(g10008d30);
                if (less94) 
                    continue; else 
                    goto addr_100013bc_24;
            } else {
                ebx85 = reinterpret_cast<struct s0*>(&ebx85->f1);
                if (reinterpret_cast<signed char>(ebx85) > reinterpret_cast<signed char>(4)) 
                    break;
                edi95 = reinterpret_cast<struct s0**>(0x10008cb0);
                ecx96 = 6;
                esi97 = v19;
                cf98 = reinterpret_cast<uint1_t>(ebp44 < ebp44);
                ebp44 = ebp44 - ebp44;
                zf99 = ebp44 == 0;
                do {
                    if (!ecx96) 
                        break;
                    --ecx96;
                    cf98 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(&esi97->f0)) < reinterpret_cast<unsigned char>(*edi95));
                    zf99 = *reinterpret_cast<struct s0**>(&esi97->f0) == *edi95;
                    ++edi95;
                    esi97 = reinterpret_cast<struct s0*>(&esi97->f1);
                } while (zf99);
                if (!zf99) 
                    goto addr_1000139e_35;
            }
            addr_100013a3_36:
            if (reinterpret_cast<int32_t>(ebp44) < reinterpret_cast<int32_t>(0)) {
                v87 = reinterpret_cast<struct s0*>(&v87->f1);
                goto addr_100013ab_29;
            }
            addr_1000139e_35:
            cf100 = reinterpret_cast<uint1_t>(ebp44 < ebp44 + cf98);
            ebp101 = ebp44 - (ebp44 + cf100);
            ebp44 = ebp101 - (1 - reinterpret_cast<uint1_t>(ebp101 < 1 - cf100));
            goto addr_100013a3_36;
        }
    }
    fun_10001090("More than %i players specified!", 4, 27, 27, v23, v21, v19, v87, v102, v103, v16, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    goto v104;
    addr_10001355_12:
    goto v105;
}

int16_t g10008d46;

/* _Process@0 */
void _Process_0(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8) {
    int1_t zf9;
    int1_t zf10;
    struct s0* eax11;

    zf9 = g10008d46 == 1;
    if (!zf9) {
        zf10 = g10008d46 == 2;
        if (!zf10) {
            return;
        } else {
            goto fun_10001980;
        }
    } else {
        eax11 = reinterpret_cast<struct s0*>(static_cast<int32_t>(g10008d48));
        g10008b90 = reinterpret_cast<struct s0*>(&g10008b90->f1);
        fun_100018d0(eax11, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8);
        return;
    }
}

int32_t g10008ba0;

struct s0* g10008ba4;

int32_t g10008758;

int32_t g1000875c;

int32_t g1000876c;

struct s20 {
    void* f0;
    int16_t f4;
};

void fun_100014d0() {
    struct s0* v1;
    struct s0* ebx2;
    struct s0* v3;
    struct s0* esi4;
    struct s0* v5;
    struct s0* edi6;
    struct s0* v7;
    struct s0* ebp8;
    int32_t eax9;
    void* esp10;
    int1_t zf11;
    struct s0* ecx12;
    uint64_t v13;
    int32_t eax14;
    int32_t eax15;
    struct s0* v16;
    struct s0* eax17;
    struct s0* v18;
    int32_t eax19;
    void* esp20;
    int32_t edi21;
    struct s0* esi22;
    struct s0* ebx23;
    struct s0* ebp24;
    struct s0* ecx25;
    struct s0** edx26;
    struct s0* v27;
    struct s0* v28;
    struct s0* v29;
    int32_t eax30;
    struct s0* v31;
    int32_t ebx32;
    uint32_t edx33;
    struct s20* esi34;
    signed char* edi35;
    signed char* esi36;
    uint32_t ecx37;
    void* esp38;
    uint32_t ecx39;
    struct s0* eax40;
    struct s0* v41;
    struct s0* v42;
    struct s0* v43;
    int1_t zf44;
    int32_t v45;

    v1 = ebx2;
    v3 = esi4;
    v5 = edi6;
    v7 = ebp8;
    eax9 = reinterpret_cast<int32_t>(InterlockedExchange());
    esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 24 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    if (eax9) {
        InterlockedExchange(0x10008744, 2);
        esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) - 4 - 4 - 4 + 4);
    }
    zf11 = g10008744 == 1;
    if (zf11) {
        ecx12 = g1000874c;
        do {
            g10008ba0 = 0;
            g10008ba4 = ecx12;
            ++g10008ba0;
            g10008758 = 0;
            g1000875c = 100;
            *reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(&v13) + 4) = reinterpret_cast<struct s0*>(0);
            eax14 = fun_10001b2e();
            eax15 = reinterpret_cast<int32_t>(GetLastError());
            esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
            ecx12 = g1000874c;
            g10008750 = eax15;
            if (eax14) {
                *reinterpret_cast<struct s0**>(&v13) = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp10) + 20);
                v16 = ecx12;
                eax17 = fun_10001b28(v16, 0x1000876c);
                v18 = eax17;
                eax19 = reinterpret_cast<int32_t>(GetLastError(v16, 0x1000876c));
                esp20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
                g10008750 = eax19;
                if (!reinterpret_cast<int1_t>(v18 == 0xffffffff)) {
                    edi21 = 0;
                    do {
                        esi22 = reinterpret_cast<struct s0*>(0xffffffff);
                        ebx23 = reinterpret_cast<struct s0*>(0);
                        ebp24 = reinterpret_cast<struct s0*>(0);
                        ecx25 = reinterpret_cast<struct s0*>(0);
                        edx26 = reinterpret_cast<struct s0**>(0x100072ac);
                        do {
                            if (*reinterpret_cast<int32_t*>(edx26 - 12) == 1) 
                                break;
                            if (reinterpret_cast<signed char>(ebp24) < reinterpret_cast<signed char>(*edx26)) {
                                ebp24 = *edx26;
                                ebx23 = ecx25;
                            }
                            edx26 = edx26 + 0x210;
                            ecx25 = reinterpret_cast<struct s0*>(&ecx25->f1);
                        } while (reinterpret_cast<uint32_t>(edx26) < 0x1000874c);
                        goto addr_100015e6_13;
                        esi22 = ecx25;
                        addr_100015ea_15:
                        if (reinterpret_cast<int1_t>(esi22 == 0xffffffff)) {
                            esi22 = ebx23;
                            fun_10001090("InThreadFunc: dropping packet %d ( time %d )", ebx23, ebp24, v16, 0x1000876c, 0x204, 0, v18, *reinterpret_cast<struct s0**>(&v13), 0, 0x10008ba0, 0, 0, 0x10008758, 0x10008744, 1, v7, v5, v3, v1, v27, 16, v28);
                            esp20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp20) - 4 - 4 - 4 - 4 + 4 + 12);
                        }
                        v29 = reinterpret_cast<struct s0*>(((reinterpret_cast<unsigned char>(esi22) << 5) + reinterpret_cast<unsigned char>(esi22) << 4) + 0x100072a0);
                        eax30 = reinterpret_cast<int32_t>(InterlockedExchange(v29, 2, v16, 0x1000876c));
                        esp20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp20) - 4 - 4 - 4 + 4);
                        if (eax30 == 2) {
                            fun_10001090("InThreadFunc: failed to grab packet %d", esi22, v29, 2, v16, 0x1000876c, 0x204, 0, v18, *reinterpret_cast<struct s0**>(&v13), 0, 0x10008ba0, 0, 0, 0x10008758, 0x10008744, 1, v7, v5, v3, v1, v31, 16);
                            esp20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp20) - 4 - 4 - 4 + 4 + 8);
                            continue;
                        } else {
                            edi21 = 1;
                            continue;
                        }
                        addr_100015e6_13:
                        goto addr_100015ea_15;
                    } while (!edi21);
                    ebx32 = g1000876c;
                    edx33 = (reinterpret_cast<unsigned char>(esi22) << 5) + reinterpret_cast<unsigned char>(esi22) << 4;
                    esi34 = reinterpret_cast<struct s20*>(edx33 + 0x100072a4);
                    edi35 = reinterpret_cast<signed char*>(edx33 + 0x100072b0);
                    esi34->f0 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&v13) + 2);
                    esi34->f4 = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&v13) + 6);
                    esi36 = reinterpret_cast<signed char*>(0x10008770);
                    ecx37 = 0x81;
                    *reinterpret_cast<int32_t*>(edx33 + 0x100072ac) = ebx32;
                    while (ecx37) {
                        --ecx37;
                        *edi35 = *esi36;
                        edi35 = edi35 + 4;
                        esi36 = esi36 + 4;
                    }
                    esp38 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp20) - 4);
                    ecx39 = 0;
                    while (ecx39) {
                        --ecx39;
                        *edi35 = *esi36;
                        ++edi35;
                        ++esi36;
                    }
                    *reinterpret_cast<int16_t*>(edx33 + 0x100072aa) = 0x1fc;
                    InterlockedExchange(edx33 + 0x100072a0, 3, v29, 2, v16, 0x1000876c);
                    esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp38) - 4 - 4 + 4);
                } else {
                    eax40 = reinterpret_cast<struct s0*>(GetLastError(v16, 0x1000876c));
                    fun_10001090("GetPacket: SOCKET_ERROR %d on recvfrom", eax40, v16, 0x1000876c, 0x204, 0, v18, *reinterpret_cast<struct s0**>(&v13), 0, 0x10008ba0, 0, 0, 0x10008758, 0x10008744, 1, v7, v5, v3, v1, v41, 16, v42, v43);
                    esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp20) - 4 + 4 - 4 - 4 - 4 + 4 + 8);
                }
                ecx12 = g1000874c;
            }
            zf44 = g10008744 == 1;
        } while (zf44);
    }
    InterlockedExchange();
    goto v45;
}

void fun_10003330() {
    int1_t zf1;
    int1_t less2;
    uint32_t eax3;
    struct s0* eax4;
    struct s0* eax5;
    int32_t ecx6;
    void* eax7;
    struct s0* edx8;
    uint32_t edx9;
    int32_t* esi10;
    uint32_t ecx11;

    zf1 = g10009204 == 0;
    if (!zf1) {
        less2 = reinterpret_cast<int32_t>(g10009204) < reinterpret_cast<int32_t>(20);
        if (less2) {
            g10009204 = 20;
        }
    } else {
        g10009204 = 0x200;
    }
    eax3 = g10009204;
    eax4 = fun_10003720(eax3, 4);
    g10009208 = eax4;
    if (!eax4 && (g10009204 = 20, eax5 = fun_10003720(20, 4), g10009208 = eax5, !eax5)) {
        fun_10001e40(26);
    }
    ecx6 = 0x10006b18;
    eax7 = reinterpret_cast<void*>(0);
    do {
        edx8 = g10009208;
        eax7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax7) + 4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx8) + reinterpret_cast<uint32_t>(eax7) + 0xfffffffc) = ecx6;
        ecx6 = ecx6 + 32;
    } while (reinterpret_cast<int32_t>(eax7) < reinterpret_cast<int32_t>(80));
    edx9 = 0;
    esi10 = reinterpret_cast<int32_t*>(0x10006b28);
    do {
        ecx11 = (edx9 & 31) << 2;
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(edx9 & 0xffffffe7) >> 3) + 0x1000a220)) + (ecx11 + ecx11 * 8)) == -1 || !*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(edx9 & 0xffffffe7) >> 3) + 0x1000a220)) + (ecx11 + ecx11 * 8))) {
            *esi10 = -1;
        }
        esi10 = esi10 + 8;
        ++edx9;
    } while (reinterpret_cast<uint32_t>(esi10) < 0x10006b88);
    return;
}

uint32_t fun_10003420(uint32_t a1, uint32_t a2, int32_t a3, uint32_t a4) {
    uint32_t ecx5;
    int32_t ebx6;
    uint32_t eax7;
    uint32_t eax8;
    uint32_t esi9;
    uint32_t tmp32_10;
    uint32_t eax11;

    if (a4) {
        ecx5 = a4;
        ebx6 = a3;
        eax7 = a1;
        do {
            ecx5 = ecx5 >> 1;
            __asm__("rcr ebx, 1");
            __asm__("rcr eax, 1");
        } while (ecx5);
        eax8 = eax7 / ebx6;
        esi9 = eax8;
        tmp32_10 = __intrinsic() + eax8 * a4;
        if (tmp32_10 < __intrinsic()) 
            goto addr_1000347e_5;
        if (tmp32_10 > a2) 
            goto addr_1000347e_5;
        if (tmp32_10 < a2) 
            goto addr_1000347f_8;
        if (a3 * esi9 <= a1) 
            goto addr_1000347f_8;
    } else {
        eax11 = a1 / a3;
        goto addr_10003483_11;
    }
    addr_1000347e_5:
    --esi9;
    addr_1000347f_8:
    eax11 = esi9;
    addr_10003483_11:
    return eax11;
}

uint32_t fun_10003490(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t ecx5;
    uint32_t ebx6;
    uint32_t eax7;
    uint32_t eax8;
    uint32_t eax9;
    uint32_t tmp32_10;
    uint32_t eax11;

    if (a4) {
        ecx5 = a4;
        ebx6 = a3;
        eax7 = a1;
        do {
            ecx5 = ecx5 >> 1;
            __asm__("rcr ebx, 1");
            __asm__("rcr eax, 1");
        } while (ecx5);
        eax8 = eax7 / ebx6;
        eax9 = eax8 * a3;
        tmp32_10 = __intrinsic() + eax8 * a4;
        if (tmp32_10 < __intrinsic()) 
            goto addr_100034ea_5;
        if (tmp32_10 > a2) 
            goto addr_100034ea_5;
        if (tmp32_10 < a2) 
            goto addr_100034f2_8;
        if (eax9 <= a1) 
            goto addr_100034f2_8;
    } else {
        eax11 = a1 % a3;
        goto addr_10003501_11;
    }
    addr_100034ea_5:
    eax9 = eax9 - a3;
    addr_100034f2_8:
    eax11 = -(eax9 - a1);
    addr_10003501_11:
    return eax11;
}

void fun_10003959() {
}

void fun_10003a06() {
}

struct s0* fun_10003e90() {
    struct s0* eax1;

    eax1 = fun_10001e40(2);
    return eax1;
}

signed char* fun_10004170(uint32_t ecx, signed char* a2, signed char* a3, int32_t a4) {
    signed char* edi5;
    signed char* edx6;
    uint32_t ecx7;
    signed char* edi8;
    int1_t zf9;
    signed char* esi10;
    signed char* edi11;
    signed char* v12;
    int32_t ecx13;
    int32_t ecx14;
    signed char* edi15;
    signed char* esi16;

    edi5 = a2;
    edx6 = edi5;
    ecx7 = 0xffffffff;
    do {
        if (!ecx7) 
            break;
        --ecx7;
        ++edi5;
    } while (*edi5);
    edi8 = edi5 - 1;
    zf9 = edi8 == 0;
    esi10 = edi8;
    edi11 = a3;
    v12 = edi11;
    ecx13 = a4;
    do {
        if (!ecx13) 
            break;
        --ecx13;
        zf9 = *edi11 == 0;
        ++edi11;
        ++esi10;
    } while (!zf9);
    if (zf9) {
        ++ecx13;
    }
    ecx14 = -(ecx13 - a4);
    edi15 = esi10;
    esi16 = v12;
    while (ecx14) {
        --ecx14;
        *edi15 = *esi16;
        ++edi15;
        ++esi16;
    }
    *edi15 = 0;
    return edx6;
}
