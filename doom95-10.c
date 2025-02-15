int32_t fun_4475b9(void** ecx, void** a2, void** a3) {
    int32_t ebx4;
    int32_t eax5;
    signed char* edx6;
    int32_t edx7;

    if (ebx4 == 10 && eax5 < 0) {
        *edx6 = 45;
    }
    fun_44756f(edx7);
    return edx7;
}

int32_t fun_4484ba(void** ecx) {
    int32_t eax2;
    void** edx3;

    eax2 = fun_448842();
    if (!eax2) {
        eax2 = fun_448483(edx3);
    }
    return eax2;
}

struct s554 {
    signed char[12] pad12;
    unsigned char fc;
};

struct s555 {
    signed char[8] pad8;
    int32_t f8;
};

struct s556 {
    signed char[12] pad12;
    unsigned char fc;
};

struct s557 {
    signed char[13] pad13;
    unsigned char fd;
};

struct s558 {
    signed char[13] pad13;
    unsigned char fd;
};

struct s559 {
    signed char[4] pad4;
    int32_t f4;
};

struct s560 {
    signed char[20] pad20;
    int32_t f14;
};

struct s561 {
    signed char[4] pad4;
    int32_t f4;
};

struct s562 {
    signed char[13] pad13;
    unsigned char fd;
};

struct s563 {
    signed char[13] pad13;
    unsigned char fd;
};

struct s564 {
    signed char[4] pad4;
    int32_t f4;
};

struct s565 {
    signed char[12] pad12;
    uint32_t fc;
};

struct s566 {
    signed char[4] pad4;
    int32_t f4;
};

struct s567 {
    signed char[20] pad20;
    int32_t f14;
};

struct s568 {
    signed char[12] pad12;
    unsigned char fc;
};

struct s569 {
    signed char[12] pad12;
    unsigned char fc;
};

int32_t fun_447750(void** ecx) {
    int32_t ebx2;
    int32_t eax3;
    struct s554* edx4;
    struct s555* edx5;
    void** ebp6;
    void** edi7;
    void** esi8;
    void** ebx9;
    void** ecx10;
    struct s556* edx11;
    struct s557* edx12;
    struct s558* edx13;
    signed char** edx14;
    int32_t edi15;
    struct s559* edx16;
    int32_t* edx17;
    int32_t* edx18;
    int32_t edi19;
    int32_t ebp20;
    struct s560* edx21;
    struct s561* edx22;
    void** eax23;
    struct s562* edx24;
    struct s563* edx25;
    signed char** edx26;
    int32_t esi27;
    struct s564* edx28;
    int32_t* edx29;
    int32_t* edx30;
    int32_t esi31;
    uint32_t edi32;
    struct s565* edx33;
    struct s566* edx34;
    struct s567* edx35;
    void** eax36;
    struct s568* edx37;
    struct s569* edx38;
    int32_t eax39;

    ebx2 = eax3;
    image_base_();
    if (edx4->fc & 2) {
        if (!edx5->f8) {
            fun_4458ec(ecx, ebp6, edi7, esi8, ecx, ebx9, __return_address());
        }
        ecx10 = reinterpret_cast<void**>(0x400);
        if (ebx2 != 10) 
            goto addr_4477d1_5;
        ecx10 = reinterpret_cast<void**>(0x600);
        if (edx11->fc & 64) 
            goto addr_4477d1_5;
        edx12->fd = reinterpret_cast<unsigned char>(edx13->fd | 16);
        **edx14 = 13;
        edi15 = edx16->f4;
        *edx17 = *edx18 + 1;
        edi19 = edi15 + 1;
        ebp20 = edx21->f14;
        edx22->f4 = edi19;
        if (edi19 != ebp20) 
            goto addr_4477d1_5;
        eax23 = fun_4457c5(0x600);
        if (eax23) 
            goto addr_447774_9;
        addr_4477d1_5:
        edx24->fd = reinterpret_cast<unsigned char>(edx25->fd | 16);
        **edx26 = *reinterpret_cast<signed char*>(&ebx2);
        esi27 = edx28->f4;
        *edx29 = *edx30 + 1;
        esi31 = esi27 + 1;
        edi32 = edx33->fc;
        edx34->f4 = esi31;
        if (reinterpret_cast<unsigned char>(ecx10) & edi32) 
            goto addr_4477f1_10;
        if (esi31 != edx35->f14) 
            goto addr_447800_12;
        addr_4477f1_10:
        eax36 = fun_4457c5(ecx10);
        if (!eax36) 
            goto addr_447800_12;
    } else {
        fun_44515b(ebp6, edi7, esi8, ecx, ebx9);
        edx37->fc = reinterpret_cast<unsigned char>(edx38->fc | 32);
    }
    addr_447774_9:
    image_base_();
    eax39 = -1;
    addr_44780d_14:
    return eax39;
    addr_447800_12:
    image_base_();
    eax39 = 0;
    *reinterpret_cast<signed char*>(&eax39) = *reinterpret_cast<signed char*>(&ebx2);
    goto addr_44780d_14;
}

struct s570 {
    signed char[104] pad104;
    int32_t f68;
};

struct s571 {
    signed char[104] pad104;
    int32_t f68;
};

void fun_447887(int32_t a1);

int32_t fun_447851() {
    struct s570* eax1;
    int32_t eax2;
    struct s571* eax3;

    eax1 = reinterpret_cast<struct s570*>(image_base_());
    eax2 = eax1->f68;
    if (eax2 == 1 || (eax2 == 2 || eax2 == 3)) {
        return -1;
    } else {
        eax3 = reinterpret_cast<struct s571*>(image_base_(eax2));
        eax3->f68 = 2;
        fun_447887(eax2);
        return 0;
    }
}

signed char g477a80 = 0;

int32_t fun_4488a0(int32_t ecx) {
    signed char ah2;
    uint32_t v3;
    int32_t edx4;
    uint32_t edx5;
    uint32_t eax6;
    int32_t eax7;

    ah2 = g477a80;
    v3 = 0;
    if (ah2 && edx4) {
        v3 = edx5 & eax6;
        __asm__("fldcw word [ss:edi]");
        __asm__("wait ");
        __asm__("fnstcw word [ss:edi]");
        __asm__("wait ");
    }
    eax7 = 0;
    *reinterpret_cast<int16_t*>(&eax7) = *reinterpret_cast<int16_t*>(&v3);
    return eax7;
}

int32_t fun_44888e(void** ecx) {
    int32_t eax2;

    eax2 = fun_4484ba(ecx);
    return eax2;
}

void fun_44794e();

int32_t fun_447818(void** ecx) {
    void* eax2;
    int32_t eax3;
    uint32_t eax4;
    void* eax5;
    int32_t eax6;

    eax2 = reinterpret_cast<void*>(image_base_());
    eax3 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax2) + eax4 * 8 + 88);
    if (eax4 < 2) {
        if (eax4 == 1) {
            if (eax3 == 2) {
                fun_44888e(ecx);
                goto addr_447927_5;
            }
        } else {
            goto addr_447847_7;
        }
    }
    if (eax4 <= 2) {
        fun_447851();
    } else {
        if (eax4 <= 12) {
            addr_447927_5:
            if (eax3 != 1 && (eax3 != 2 && eax3 != 3)) {
                eax5 = reinterpret_cast<void*>(image_base_());
                *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax5) + eax4 * 8 + 88) = 2;
                fun_44794e();
            }
        } else {
            addr_447847_7:
            eax6 = -1;
            goto addr_447950_12;
        }
    }
    eax6 = 0;
    addr_447950_12:
    return eax6;
}

int32_t LoadLibraryA = 0x221022;

void** fun_449d06(int32_t a1) {
    goto LoadLibraryA;
}

int32_t GetProcAddress = 0x220fd8;

int32_t fun_449d00(void** a1, int32_t a2, int32_t a3) {
    goto GetProcAddress;
}

int32_t WriteFile = 0x22112e;

int32_t fun_449d96(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, int32_t a11) {
    goto WriteFile;
}

int32_t fun_449cfa(void** a1, void** a2);

struct s572 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    int32_t f8;
    int32_t fc;
};

void** fun_449cf4(void** a1, void** a2, void** a3);

void fun_447ec0(void** ecx);

void fun_449cee(void** a1, int32_t a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14);

void fun_447e5e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** ebp8;
    void** esi9;
    int32_t eax10;
    struct s572* eax11;
    void** ecx12;
    void** edx13;
    void** ebx14;
    void** eax15;
    void** v16;

    eax10 = fun_449cfa(ebp8, esi9);
    if (eax10 != eax11->f8) {
        ecx12 = eax11->f4;
        if (!ecx12) {
            fun_447e5e(ecx12, ebp8, esi9, edx13, ecx, ebx14, __return_address());
            if (!eax11->f4) {
                eax15 = fun_449cf4(ecx12, ecx12, ecx12);
                eax11->f4 = reinterpret_cast<void**>(1);
                eax11->f0 = eax15;
            }
            fun_447ec0(ecx12);
        }
        v16 = eax11->f0;
        fun_449cee(v16, 0xff, ebp8, esi9, edx13, ecx, ebx14, __return_address(), a2, a3, a4, a5, a6, a7);
        eax11->f8 = eax10;
    }
    eax11->fc = eax11->fc + 1;
    return;
}

int32_t CreateMutexA = 0x220e32;

void** fun_449cf4(void** a1, void** a2, void** a3) {
    goto CreateMutexA;
}

int32_t ReleaseMutex = 0x221086;

void fun_449ce8(int32_t a1) {
    goto ReleaseMutex;
}

void** fun_447f90(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17);

void** g477a84 = reinterpret_cast<void**>(0xff);

struct s515* fun_449ce2(void** a1);

struct s515* fun_4488f3(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** edx14;
    void** ebx15;
    void** eax16;
    struct s515* ebx17;
    void** edx18;
    struct s515* eax19;

    eax16 = fun_447f90(ecx, edx14, ecx, ebx15, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    ebx17 = reinterpret_cast<struct s515*>(0);
    if (eax16) {
        edx18 = g477a84;
        eax19 = fun_449ce2(edx18);
        ebx17 = eax19;
    }
    if (!ebx17) {
        fun_4484ba(ecx);
    }
    return ebx17;
}

void** fun_4489fe(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** fun_447f05(void** ecx, void** a2, void** a3, void** a4) {
    void** ebx5;
    void** eax6;
    int32_t eax7;
    void** edx8;
    void** ebx9;
    void** eax10;
    int32_t eax11;

    ebx5 = eax6;
    if (!eax7 && (eax10 = fun_4489fe(ecx, edx8, ecx, ebx9, __return_address(), a2, a3, a4), ebx5 = eax10, !!eax10)) {
        *reinterpret_cast<void***>(eax10 + 82) = reinterpret_cast<void**>(1);
    }
    if (ebx5) {
        *reinterpret_cast<void***>(ebx5 + 12) = reinterpret_cast<void**>(1);
        eax11 = fun_449cfa(edx8, ecx);
        *reinterpret_cast<int32_t*>(ebx5 + 0xda) = eax11;
    }
    return ebx5;
}

void** fun_4489fe(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** ebx9;
    void** eax10;

    eax10 = fun_442e73(ecx, ebx9, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    if (eax10) {
        eax10 = fun_442b80(ecx, ebx9, __return_address(), a2, a3, a4);
    }
    return eax10;
}

int32_t GetCurrentThreadId = 0x220f1c;

int32_t fun_449cfa(void** a1, void** a2) {
    goto GetCurrentThreadId;
}

void** fun_449cdc();

int16_t g477b69 = 0;

uint32_t fun_447f44(void** ecx) {
    void** eax2;
    int16_t ax3;
    void** eax4;
    void** edx5;
    int1_t zf6;

    eax2 = fun_449cdc();
    g477a84 = eax2;
    ax3 = g477b69;
    *reinterpret_cast<signed char*>(&eax2) = 0;
    *reinterpret_cast<unsigned char*>(&eax2 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax3) + 1) & 0x80);
    eax4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax2) & 0xffff);
    if (eax4) {
        while ((edx5 = g477a84, edx5 != 0xffffffff) && reinterpret_cast<unsigned char>(edx5) <= reinterpret_cast<unsigned char>(2)) {
            eax4 = fun_449cdc();
            g477a84 = eax4;
        }
    }
    zf6 = reinterpret_cast<int1_t>(g477a84 == 0xffffffff);
    *reinterpret_cast<unsigned char*>(&eax4) = reinterpret_cast<uint1_t>(!zf6);
    return reinterpret_cast<unsigned char>(eax4) & 0xff;
}

int32_t TlsAlloc = 0x2210d6;

void** fun_449cdc() {
    goto TlsAlloc;
}

/* (image base) */
int32_t image_base_ = 0x4452df;

void** fun_449652();

void** g6184cc = reinterpret_cast<void**>(0);

/* (image base) */
int32_t image_base_ = 0x4452df;

void** fun_44892a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    void** ecx18;
    void** esi19;
    void** ebx20;
    void** eax21;
    void** eax22;
    void** edx23;
    void** eax24;
    void** eax25;

    image_base_();
    ecx18 = reinterpret_cast<void**>(1);
    eax21 = fun_4489fe(1, esi19, ecx, ebx20, __return_address(), a2, a3, a4);
    if (!eax21) {
        addr_44897d_2:
        ecx18 = reinterpret_cast<void**>(0);
    } else {
        eax22 = fun_449652();
        if (!eax22) {
            *reinterpret_cast<void***>(eax21 + 8) = edx23;
            *reinterpret_cast<void***>(eax21 + 4) = eax24;
            eax22 = *reinterpret_cast<void***>(edx23 + 82);
            *reinterpret_cast<void***>(eax21 + 12) = eax22;
            eax25 = g6184cc;
            g6184cc = eax21;
            *reinterpret_cast<void***>(eax21) = eax25;
        } else {
            fun_4440d1(1, esi19, ecx, ebx20, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
            goto addr_44897d_2;
        }
    }
    image_base_();
    return ecx18;
}

int32_t TlsGetValue = 0x2210ec;

struct s515* fun_449ce2(void** a1) {
    goto TlsGetValue;
}

void fun_44898b(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    void** v18;
    void** v19;
    void** ebx20;
    void** v21;
    void** v22;
    void** edx23;
    void** ecx24;
    void** eax25;
    void** ebx26;
    void** edx27;

    v18 = reinterpret_cast<void**>(__return_address());
    v19 = ebx20;
    v21 = ecx;
    v22 = edx23;
    ecx24 = eax25;
    image_base_();
    ebx26 = reinterpret_cast<void**>(0x6184cc);
    edx27 = g6184cc;
    while (edx27) {
        if (ecx24 == *reinterpret_cast<void***>(edx27 + 4)) 
            goto addr_4489a8_4;
        ebx26 = edx27;
        edx27 = *reinterpret_cast<void***>(edx27);
    }
    addr_4489cb_6:
    image_base_();
    return;
    addr_4489a8_4:
    if (*reinterpret_cast<void***>(edx27 + 12)) {
        fun_4440d1(ecx24, v22, v21, v19, v18, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
    }
    *reinterpret_cast<void***>(ebx26) = *reinterpret_cast<void***>(edx27);
    fun_4440d1(ecx24, v22, v21, v19, v18, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
    goto addr_4489cb_6;
}

int32_t TlsSetValue = 0x2210fa;

struct s515* fun_449cd6(void** a1, void** a2, void** a3) {
    goto TlsSetValue;
}

int32_t TlsFree = 0x2210e2;

void fun_449cd0(void** a1) {
    goto TlsFree;
}

void fun_447deb();

void fun_447df8();

/* (image base) */
int32_t image_base_ = 0x4452e0;

void fun_447e08();

void fun_447e0d(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void fun_447dd7();

void fun_447de1();

/* (image base) */
int32_t image_base_ = 0x447daa;

/* (image base) */
int32_t image_base_ = 0x447daa;

/* (image base) */
int32_t image_base_ = 0x447daa;

struct s515* fun_447dab(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

void fun_447e29();

/* (image base) */
int32_t image_base_ = 0x4452df;

void fun_447e3a();

void fun_447e30();

/* (image base) */
int32_t image_base_ = 0x4452df;

void fun_447e41();

void fun_447e4b();

void fun_447e52();

void** g61837c = reinterpret_cast<void**>(0);

int32_t g618380 = 0;

/* (image base) */
int32_t image_base_ = 0x4452df;

void fun_447ebb();

void fun_44802a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0xdf);

void fun_447e59();

void** g618350 = reinterpret_cast<void**>(0);

void fun_447ee5(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

void fun_448054(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** eax8;
    void** ebp9;
    void** edi10;
    void** esi11;
    void** edx12;
    void** ebx13;
    void** ebp14;
    void** eax15;

    image_base_ = reinterpret_cast<int32_t>(fun_447deb);
    image_base_ = reinterpret_cast<int32_t>(fun_447df8);
    image_base_ = reinterpret_cast<int32_t>(fun_447e08);
    image_base_ = reinterpret_cast<int32_t>(fun_447e0d);
    image_base_ = reinterpret_cast<int32_t>(fun_447dd7);
    image_base_ = reinterpret_cast<int32_t>(fun_447de1);
    image_base_ = reinterpret_cast<int32_t>(fun_447e5e);
    image_base_ = reinterpret_cast<int32_t>(fun_447ec0);
    image_base_ = reinterpret_cast<int32_t>(fun_447dab);
    image_base_ = reinterpret_cast<int32_t>(fun_447e29);
    image_base_ = reinterpret_cast<int32_t>(fun_447e3a);
    image_base_ = reinterpret_cast<int32_t>(fun_447e30);
    image_base_ = reinterpret_cast<int32_t>(fun_447e41);
    image_base_ = reinterpret_cast<int32_t>(fun_447e4b);
    image_base_ = reinterpret_cast<int32_t>(fun_447e52);
    eax8 = fun_449cf4(0, 0, 0);
    g61837c = eax8;
    g618380 = 1;
    image_base_ = reinterpret_cast<int32_t>(fun_447ebb);
    image_base_ = reinterpret_cast<int32_t>(fun_44802a);
    image_base_ = reinterpret_cast<void**>(fun_447e59);
    fun_44892a(fun_447e59, 0, 0, 0, ebp9, edi10, esi11, edx12, ecx, ebx13, __return_address(), a2, a3, a4, a5, a6, a7);
    ebp14 = g618350;
    eax15 = g477a84;
    fun_449cd6(eax15, ebp14, 0);
    image_base_ = reinterpret_cast<int32_t>(fun_447ee5);
    goto edi10;
}

int32_t fun_448a16(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    void** v18;
    void** v19;
    void** ebx20;
    void** v21;
    void** v22;
    void** edx23;
    void** edx24;
    void** ecx25;
    void** ebx26;
    int32_t eax27;

    v18 = reinterpret_cast<void**>(__return_address());
    v19 = ebx20;
    v21 = ecx;
    v22 = edx23;
    edx24 = g6184cc;
    while (edx24) {
        ecx25 = *reinterpret_cast<void***>(edx24 + 12);
        ebx26 = *reinterpret_cast<void***>(edx24);
        if (ecx25) {
            fun_4440d1(ecx25, v22, v21, v19, v18, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
        }
        eax27 = fun_4440d1(ecx25, v22, v21, v19, v18, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
        edx24 = ebx26;
    }
    return eax27;
}

void fun_448034(void** ecx) {
    void** edx2;

    edx2 = g477a84;
    if (edx2 != 0xffffffff) {
        fun_449cd0(edx2);
        g477a84 = reinterpret_cast<void**>(0xffffffff);
    }
    return;
}

struct s573 {
    signed char f0;
    unsigned char f1;
    int32_t f2;
};

void fun_4481d8() {
    int32_t edx1;
    int32_t eax2;
    struct s573* esi3;
    struct s573* ebx4;
    unsigned char al5;
    int32_t eax6;

    edx1 = eax2;
    while (1) {
        esi3 = reinterpret_cast<struct s573*>(0x477e50);
        ebx4 = reinterpret_cast<struct s573*>(0x477e7a);
        al5 = *reinterpret_cast<unsigned char*>(&edx1);
        while (reinterpret_cast<uint32_t>(esi3) < 0x477e7a) {
            if (esi3->f0 != 2 && esi3->f1 <= al5) {
                ebx4 = esi3;
                al5 = esi3->f1;
            }
            ++esi3;
        }
        if (ebx4 == 0x477e7a) 
            break;
        eax6 = ebx4->f2;
        if (eax6) {
            eax6();
            edx1 = edx1;
        }
        ebx4->f0 = 2;
    }
    return;
}

struct s574 {
    signed char[4] pad4;
    void** f4;
};

struct s575 {
    signed char[8] pad8;
    void** f8;
};

int32_t fun_4482a1(void** ecx);

void fun_4482fa(void** ecx) {
    void** ebx2;
    struct s574* eax3;
    void** edx4;
    struct s575* eax5;
    int32_t eax6;

    ebx2 = eax3->f4;
    edx4 = eax5->f8;
    eax6 = fun_4482a1(ecx);
    if (!eax6) {
        if (ebx2) {
            *reinterpret_cast<void***>(ebx2 + 8) = edx4;
        } else {
            g477a68 = edx4;
        }
        if (edx4) {
            *reinterpret_cast<void***>(edx4 + 4) = ebx2;
        }
    }
    return;
}

int32_t g477b0c = 0;

void* fun_449738(void** ecx);

void fun_449cac(void* a1, void* a2, int32_t a3, void* a4, int32_t a5);

int32_t fun_448b9c(void** ecx) {
    int32_t edx2;
    void* eax3;
    int32_t* esp4;
    void* v5;
    void* v6;
    int32_t eax7;

    edx2 = g477b0c;
    if (!edx2) {
        image_base_();
        eax3 = fun_449738(ecx);
        esp4 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 8 - 4 + 4 - 4 + 4 - 4);
        v5 = reinterpret_cast<void*>(esp4 + 1);
        v6 = reinterpret_cast<void*>(esp4 - 1 - 1 + 4);
        fun_449cac(eax3, v6, 1, v5, edx2);
        image_base_(eax3, v6, 1, v5, edx2);
    } else {
        g477ad0();
        g477b0c();
    }
    return eax7;
}

struct s576 {
    unsigned char f0;
    signed char[3] pad4;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
};

struct s577 {
    signed char[16] pad16;
    int32_t f10;
};

int32_t fun_448bfe(struct s576* ecx);

struct s576* fun_449045(struct s576* ecx);

struct s576* fun_4492d9(struct s576* ecx);

uint32_t g477ddc = 0x4650;

uint32_t fun_448d52(struct s576* ecx);

uint32_t g477de0 = 0xe10;

uint32_t fun_4484d7(void** ecx, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7) {
    struct s576* ebp8;
    struct s576* eax9;
    int16_t* ebx10;
    int32_t edi11;
    struct s577* eax12;
    uint32_t esi13;
    int32_t eax14;
    uint32_t eax15;
    uint32_t edi16;
    uint32_t edx17;
    uint32_t esi18;
    uint32_t edx19;
    uint32_t esi20;
    uint32_t eax21;
    uint32_t eax22;
    uint32_t edi23;
    uint32_t esi24;
    uint32_t eax25;

    ebp8 = eax9;
    ebx10 = reinterpret_cast<int16_t*>(0x45952c);
    edi11 = eax12->f10 % 12;
    if (reinterpret_cast<int32_t>(ebp8->f14) < reinterpret_cast<int32_t>(0xf4fb7ea1)) 
        goto addr_448501_2;
    esi13 = ebp8->f14 + reinterpret_cast<int32_t>(ebp8->f10) / reinterpret_cast<int32_t>(12);
    while (edi11 < 0) {
        --esi13;
        edi11 = edi11 + 12;
    }
    if (reinterpret_cast<int32_t>(esi13) < reinterpret_cast<int32_t>(0)) 
        goto addr_448501_2;
    eax14 = fun_448bfe(12);
    if (eax14) {
        ebx10 = reinterpret_cast<int16_t*>(0x459546);
    }
    eax15 = ((esi13 << 3) + esi13 << 3) + esi13;
    edi16 = ebp8->fc + (ebx10[edi11] + ((eax15 << 2) + eax15 + (reinterpret_cast<int32_t>(esi13 + 3) >> 2))) - 1;
    if (esi13) {
        --edi16;
    }
    edx17 = ebp8->f4 + ((ebp8->f8 << 4) - ebp8->f8 << 2);
    esi18 = ebp8->f0 + ((edx17 << 4) - edx17 << 2);
    while (reinterpret_cast<int32_t>(esi18) < reinterpret_cast<int32_t>(0)) {
        --edi16;
        esi18 = esi18 + 0x15180;
    }
    fun_449045(ebp8);
    fun_4492d9(ebp8);
    edx19 = g477ddc;
    esi20 = esi18 + edx19;
    if (reinterpret_cast<int32_t>(ebp8->f20) < reinterpret_cast<int32_t>(0)) {
        fun_448d52(ebp8);
    }
    if (reinterpret_cast<int32_t>(ebp8->f20) > reinterpret_cast<int32_t>(0)) {
        esi20 = esi20 - g477de0;
    }
    while (reinterpret_cast<int32_t>(esi20) < reinterpret_cast<int32_t>(0)) {
        --edi16;
        esi20 = esi20 + 0x15180;
    }
    if (reinterpret_cast<int32_t>(edi16) < reinterpret_cast<int32_t>(0x63de)) {
        addr_448501_2:
        eax21 = 0xffffffff;
    } else {
        if (edi16 != 0x63de) {
            eax22 = edi16 + 0xffff9c21;
            edi23 = ((eax22 << 3) - eax22 << 5) + eax22 << 7;
            esi24 = esi20 + ((edi23 << 2) - edi23);
            goto addr_448622_23;
        }
        eax25 = g477ddc;
        esi24 = esi20 - 0x15180;
        if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax25) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax25 == 0)) 
            goto addr_448501_2; else 
            goto addr_4485fb_25;
    }
    addr_448624_26:
    return eax21;
    addr_4485fb_25:
    if (reinterpret_cast<int32_t>(esi24) >= reinterpret_cast<int32_t>(0)) {
        addr_448622_23:
        eax21 = esi24;
        goto addr_448624_26;
    } else {
        goto addr_448501_2;
    }
}

int32_t fun_448bfe(struct s576* ecx) {
    int32_t ebx2;
    int32_t eax3;
    int32_t eax4;

    ebx2 = eax3;
    if (*reinterpret_cast<unsigned char*>(&ebx2) & 3 || !(eax4 % 100) && ebx2 % 0x190) {
        return 0;
    } else {
        return 1;
    }
}

/* (image base) */
signed char* image_base_ = reinterpret_cast<signed char*>(0x477e07);

uint32_t fun_448d1e(struct s576* ecx);

struct s578 {
    signed char[12] pad12;
    int32_t fc;
    uint32_t f10;
    signed char[4] pad24;
    uint32_t f18;
    uint32_t f1c;
    int32_t f20;
};

struct s579 {
    signed char[12] pad12;
    int32_t fc;
    uint32_t f10;
    signed char[4] pad24;
    uint32_t f18;
    uint32_t f1c;
    int32_t f20;
};

int32_t g45952e = 0x3b001f;

uint32_t fun_449015(struct s576* ecx);

uint32_t fun_448d52(struct s576* ecx) {
    signed char* eax2;
    uint32_t edi3;
    struct s576* eax4;
    uint32_t eax5;
    struct s578* esi6;
    struct s579* ebx7;
    uint32_t ebp8;
    int32_t eax9;
    uint32_t eax10;
    int32_t edx11;
    int32_t eax12;
    int32_t v13;
    int32_t eax14;
    uint32_t v15;
    uint32_t edx16;
    int32_t eax17;
    int32_t eax18;
    uint32_t edx19;
    uint32_t edx20;
    uint32_t v21;
    uint32_t edx22;
    int32_t edx23;
    uint32_t v24;
    int32_t eax25;
    uint32_t eax26;
    uint32_t eax27;
    int32_t esi28;
    uint32_t edx29;
    int32_t eax30;
    int32_t eax31;
    uint32_t edx32;
    uint32_t v33;
    uint32_t edx34;
    int32_t eax35;
    uint32_t eax36;
    uint32_t eax37;
    uint32_t eax38;
    uint32_t eax39;

    eax2 = image_base_;
    edi3 = 0;
    if (!*eax2) {
        addr_449006_2:
        eax4->f20 = edi3;
        return edi3;
    } else {
        eax5 = fun_448d1e(eax4);
        if (!eax5) {
            esi6 = reinterpret_cast<struct s578*>(0x477d94);
            ebx7 = reinterpret_cast<struct s579*>(0x477db8);
        } else {
            esi6 = reinterpret_cast<struct s578*>(0x477db8);
            ebx7 = reinterpret_cast<struct s579*>(0x477d94);
        }
        ebp8 = eax4->f10;
        eax9 = fun_448bfe(eax4);
        eax10 = ebp8 + ebp8;
        if (!eax9) {
            edx11 = *reinterpret_cast<int32_t*>(eax10 + 0x45952c);
            eax12 = *reinterpret_cast<int32_t*>(eax10 + 0x45952a);
        } else {
            edx11 = *reinterpret_cast<int32_t*>(eax10 + 0x459546);
            eax12 = *reinterpret_cast<int32_t*>(eax10 + 0x459544);
        }
        v13 = (edx11 >> 16) - (eax12 >> 16);
        eax14 = esi6->f20;
        v15 = 0;
        if (!eax14) 
            goto addr_448def_10;
    }
    edx16 = esi6->f1c;
    if (eax14 == 1) {
        eax17 = fun_448bfe(eax4);
        if (eax17 && (eax18 = g45952e, reinterpret_cast<int32_t>(edx16) > eax18 >> 16)) {
            ++edx16;
        }
        --edx16;
    }
    if (reinterpret_cast<int32_t>(edx16) > reinterpret_cast<int32_t>(eax4->f1c)) 
        goto addr_448edb_16;
    edi3 = 1;
    if (edx16 != eax4->f1c) 
        goto addr_448edb_16;
    addr_448ed7_18:
    v15 = 1;
    goto addr_448edb_16;
    addr_448def_10:
    if (reinterpret_cast<int32_t>(ebp8) > reinterpret_cast<int32_t>(esi6->f10)) {
        edi3 = 1;
        goto addr_448edb_16;
    }
    if (ebp8 != esi6->f10) 
        goto addr_448edb_16;
    edx19 = eax4->f18 + 7 - esi6->f18;
    edx20 = eax4->f18;
    v21 = eax4->fc - reinterpret_cast<int32_t>(edx19) % 7;
    edx22 = edx20 + 6 - esi6->f18;
    edx23 = esi6->fc;
    v24 = eax4->fc - 1 - reinterpret_cast<int32_t>(edx22) % 7;
    if (edx23 == 5) 
        goto addr_448e56_22;
    eax25 = edx23 - 1;
    eax26 = (eax25 << 3) - eax25 + 1;
    if (reinterpret_cast<int32_t>(eax26) > reinterpret_cast<int32_t>(v21) || (edi3 = 1, reinterpret_cast<int32_t>(eax26) <= reinterpret_cast<int32_t>(v24))) {
        addr_448edb_16:
        if (v15) {
            eax27 = fun_449015(eax4);
            *reinterpret_cast<unsigned char*>(&eax27) = reinterpret_cast<uint1_t>(eax27 == 0);
            edi3 = eax27 & 0xff;
        }
    } else {
        goto addr_448ed7_18;
    }
    if (edi3) {
        esi28 = 0;
        if (ebx7->f20) {
            edx29 = ebx7->f1c;
            if (ebx7->f20 == 1) {
                eax30 = fun_448bfe(eax4);
                if (eax30 && (eax31 = g45952e, reinterpret_cast<int32_t>(edx29) > eax31 >> 16)) {
                    ++edx29;
                }
                --edx29;
            }
            if (reinterpret_cast<int32_t>(edx29) > reinterpret_cast<int32_t>(eax4->f1c)) 
                goto addr_448feb_33;
            edi3 = 0;
            if (edx29 != eax4->f1c) 
                goto addr_448feb_33;
        } else {
            if (reinterpret_cast<int32_t>(ebp8) > reinterpret_cast<int32_t>(ebx7->f10)) {
                edi3 = 0;
                goto addr_448feb_33;
            }
            if (ebp8 != ebx7->f10) 
                goto addr_448feb_33;
            edx32 = eax4->f18;
            v33 = eax4->fc - reinterpret_cast<int32_t>(eax4->f18 + 7 - ebx7->f18) % 7;
            edi3 = 0;
            edx34 = eax4->fc - 1 - reinterpret_cast<int32_t>(edx32 + 6 - ebx7->f18) % 7;
            if (ebx7->fc != 5) 
                goto addr_448f93_39; else 
                goto addr_448f74_40;
        }
    } else {
        if (eax5) {
            edi3 = eax5;
            goto addr_449006_2;
        }
    }
    addr_448fe6_43:
    esi28 = 1;
    goto addr_448feb_33;
    addr_448f93_39:
    eax35 = ebx7->fc - 1;
    eax36 = (eax35 << 3) - eax35 + 1;
    if (reinterpret_cast<int32_t>(eax36) > reinterpret_cast<int32_t>(v33)) {
        addr_448f83_44:
        edi3 = 1;
        goto addr_448feb_33;
    } else {
        if (reinterpret_cast<int32_t>(edx34) >= reinterpret_cast<int32_t>(eax36)) {
            addr_448feb_33:
            if (esi28) {
                eax37 = fun_449015(eax4);
                edi3 = eax37;
            }
        } else {
            goto addr_448fe6_43;
        }
    }
    if (eax5) {
        edi3 = eax5 - edi3;
        goto addr_449006_2;
    }
    addr_448f74_40:
    eax38 = v13 - 7;
    if (reinterpret_cast<int32_t>(eax38) >= reinterpret_cast<int32_t>(v33)) 
        goto addr_448f83_44;
    if (reinterpret_cast<int32_t>(edx34) > reinterpret_cast<int32_t>(eax38)) 
        goto addr_448feb_33;
    goto addr_448fe6_43;
    addr_448e56_22:
    eax39 = v13 - 7;
    if (reinterpret_cast<int32_t>(eax39) >= reinterpret_cast<int32_t>(v21)) 
        goto addr_448edb_16;
    edi3 = 1;
    if (reinterpret_cast<int32_t>(eax39) < reinterpret_cast<int32_t>(v24)) 
        goto addr_448edb_16;
    goto addr_448ed7_18;
}

/* (image base) */
int32_t image_base_ = 0x449641;

void** fun_449652() {
    void** eax1;

    eax1 = reinterpret_cast<void**>(image_base_());
    return eax1;
}

struct s580 {
    signed char[4] pad4;
    int32_t f4;
};

struct s581 {
    signed char[10] pad10;
    uint16_t fa;
};

int32_t fun_449698(int32_t a1, void* a2) {
    int32_t edx3;
    int16_t* eax4;
    struct s580* eax5;
    struct s581* eax6;

    edx3 = 0;
    *reinterpret_cast<int16_t*>(&edx3) = *eax4;
    if (edx3 != 1 || (!eax5->f4 || eax6->fa >= 16 && eax6->fa <= 18)) {
        return 0;
    } else {
        return 1;
    }
}

struct s582 {
    signed char[16] pad16;
    int32_t f10;
};

struct s583 {
    signed char[32] pad32;
    struct s576* f20;
};

struct s584 {
    signed char[28] pad28;
    uint32_t f1c;
};

struct s585 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s586 {
    signed char[12] pad12;
    int32_t fc;
    uint32_t f10;
    signed char[4] pad24;
    int32_t f18;
};

uint32_t fun_448c39(struct s582* ecx) {
    struct s576* ecx2;
    struct s583* eax3;
    uint32_t eax4;
    struct s584* eax5;
    struct s585* eax6;
    int32_t eax7;
    int32_t esi8;
    struct s586* eax9;
    int32_t eax10;
    uint32_t v11;
    uint32_t edx12;
    uint32_t edx13;
    int32_t v14;
    uint32_t eax15;
    uint32_t ecx16;
    int32_t v17;

    ecx2 = eax3->f20;
    if (ecx2) {
        if (!reinterpret_cast<int1_t>(ecx2 == 1)) {
            eax4 = eax5->f1c;
        } else {
            eax4 = eax6->f1c - reinterpret_cast<uint32_t>(ecx2);
        }
    } else {
        eax7 = fun_448bfe(ecx2);
        if (!eax7) {
            esi8 = *reinterpret_cast<int32_t*>(eax9->f10 * 2 + 0x45952c);
            eax10 = *reinterpret_cast<int32_t*>(eax9->f10 * 2 + 0x45952a);
        } else {
            esi8 = *reinterpret_cast<int32_t*>(eax9->f10 * 2 + 0x459546);
            eax10 = *reinterpret_cast<int32_t*>(eax9->f10 * 2 + 0x459544);
        }
        v11 = eax9->f10;
        fun_4484d7(1, 0, 0, 0, 1, v11, edx12);
        edx13 = reinterpret_cast<uint32_t>((eax9->f18 - v14 + 7) % 7);
        if (eax9->fc != 5) {
            eax15 = eax9->fc - 1;
        } else {
            ecx16 = eax9->fc + 0xffffffff;
            if (reinterpret_cast<int32_t>(edx13 + 1 + ((ecx16 << 3) - ecx16)) <= reinterpret_cast<int32_t>((esi8 >> 16) - reinterpret_cast<uint32_t>(eax10 >> 16))) {
                eax15 = ecx16;
            } else {
                eax15 = eax9->fc - 2;
            }
        }
        eax4 = (eax15 << 3) - eax15 + (v17 + edx13);
    }
    return eax4;
}

struct s587 {
    signed char[16] pad16;
    int32_t f10;
};

struct s588 {
    signed char[16] pad16;
    int32_t f10;
};

uint32_t fun_448d1e(struct s576* ecx) {
    struct s587* eax2;
    struct s588* edx3;
    struct s582* edx4;
    uint32_t eax5;
    uint32_t eax6;

    if (eax2->f10 > edx3->f10 || eax2->f10 >= edx4->f10 && (eax5 = fun_448c39(edx4), eax6 = fun_448c39(edx4), reinterpret_cast<int32_t>(eax5) > reinterpret_cast<int32_t>(eax6))) {
        return 1;
    } else {
        return 0;
    }
}

struct s589 {
    signed char[8] pad8;
    int32_t f8;
};

struct s590 {
    signed char[8] pad8;
    int32_t f8;
};

struct s591 {
    signed char[4] pad4;
    int32_t f4;
};

struct s592 {
    signed char[4] pad4;
    int32_t f4;
};

uint32_t fun_449015(struct s576* ecx) {
    uint32_t ebx2;
    struct s589* eax3;
    struct s590* edx4;
    struct s591* eax5;
    struct s592* edx6;
    int32_t* eax7;
    int32_t* edx8;

    ebx2 = 0;
    if (eax3->f8 < edx4->f8 || eax3->f8 == edx4->f8 && (eax5->f4 < edx6->f4 || eax5->f4 == edx6->f4 && *eax7 < *edx8)) {
        ebx2 = 1;
    }
    return ebx2;
}

int32_t GetTimeZoneInformation = 0x220ffa;

struct s576* fun_449ca6() {
    goto GetTimeZoneInformation;
}

struct s593 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    signed char[4] pad24;
    int32_t f18;
    int32_t f1c;
    int32_t f20;
};

struct s576* fun_449322(struct s593* ecx);

struct s576* fun_449346(struct s576* ecx) {
    struct s576* ebp2;
    struct s576* eax3;
    unsigned char* v4;
    unsigned char* edx5;
    int32_t eax6;
    struct s576* esi7;
    unsigned char dl8;
    int32_t eax9;
    void* eax10;
    void* v11;
    unsigned char* edi12;
    unsigned char* v13;
    void* eax14;
    uint32_t ecx15;
    int1_t zf16;
    int1_t zf17;
    uint32_t eax18;
    struct s593* ecx19;
    uint32_t eax20;
    struct s576* eax21;
    int32_t edx22;
    struct s576* eax23;
    int32_t edx24;
    struct s576* eax25;
    int32_t* ebx26;
    int32_t* ebx27;

    ebp2 = eax3;
    v4 = edx5;
    eax6 = 0;
    *reinterpret_cast<unsigned char*>(&eax6) = ebp2->f0;
    if (eax6 == 58) {
        ebp2 = reinterpret_cast<struct s576*>(&ebp2->pad4);
    }
    esi7 = ebp2;
    while ((dl8 = ebp2->f0, !!dl8) && ((eax9 = 0, *reinterpret_cast<unsigned char*>(&eax9) = dl8, eax9 != 44) && (eax9 != 45 && (eax9 != 43 && (eax9 < 48 || eax9 > 57))))) {
        ebp2 = reinterpret_cast<struct s576*>(&ebp2->pad4);
    }
    eax10 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp2) - reinterpret_cast<uint32_t>(esi7));
    v11 = eax10;
    if (reinterpret_cast<int32_t>(eax10) > reinterpret_cast<int32_t>(30)) {
        v11 = reinterpret_cast<void*>(30);
    }
    edi12 = v4;
    v13 = edi12;
    eax14 = v11;
    ecx15 = reinterpret_cast<uint32_t>(v11) >> 2;
    zf16 = ecx15 == 0;
    do {
        if (!ecx15) 
            break;
        --ecx15;
        *edi12 = esi7->f0;
        edi12 = edi12 + 4;
        esi7 = reinterpret_cast<struct s576*>(&esi7->f4);
    } while (!zf16);
    *reinterpret_cast<unsigned char*>(&ecx15) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax14) & 3);
    zf17 = *reinterpret_cast<unsigned char*>(&ecx15) == 0;
    do {
        if (!ecx15) 
            break;
        --ecx15;
        *edi12 = esi7->f0;
        ++edi12;
        esi7 = reinterpret_cast<struct s576*>(&esi7->pad4);
    } while (!zf17);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(v13) + reinterpret_cast<uint32_t>(v11)) = 0;
    eax18 = 0;
    ecx19 = reinterpret_cast<struct s593*>(0);
    *reinterpret_cast<unsigned char*>(&eax18) = dl8;
    if (eax18 != 45) {
        if (eax18 != 43) {
            addr_4493e0_16:
            *reinterpret_cast<unsigned char*>(&eax18) = ebp2->f0;
            eax20 = eax18 & 0xff;
            if (reinterpret_cast<int32_t>(eax20) >= reinterpret_cast<int32_t>(48) && reinterpret_cast<int32_t>(eax20) <= reinterpret_cast<int32_t>(57)) {
                eax21 = fun_449322(ecx19);
                edx22 = 0;
                *reinterpret_cast<unsigned char*>(&edx22) = eax21->f0;
                ebp2 = eax21;
                if (edx22 == 58 && (eax23 = fun_449322(ecx19), edx24 = 0, *reinterpret_cast<unsigned char*>(&edx24) = eax23->f0, ebp2 = eax23, edx24 == 58)) {
                    eax25 = fun_449322(ecx19);
                    ebp2 = eax25;
                }
                *ebx26 = 0;
                if (ecx19) {
                    *ebx27 = -0;
                }
            }
        } else {
            addr_4493de_21:
            ebp2 = reinterpret_cast<struct s576*>(&ebp2->pad4);
            goto addr_4493e0_16;
        }
        return ebp2;
    } else {
        ecx19 = reinterpret_cast<struct s593*>(1);
        goto addr_4493de_21;
    }
}

struct s576* fun_449322(struct s593* ecx) {
    int32_t* ecx2;
    int32_t* edx3;
    int32_t ebx4;
    int32_t edx5;
    struct s576* eax6;

    ecx2 = edx3;
    ebx4 = 0;
    while ((edx5 = 0, *reinterpret_cast<unsigned char*>(&edx5) = eax6->f0, edx5 >= 48) && edx5 <= 57) {
        eax6 = reinterpret_cast<struct s576*>(&eax6->pad4);
        ebx4 = edx5 + ebx4 * 10 - 48;
    }
    *ecx2 = ebx4;
    return eax6;
}

struct s576* fun_44946f(uint32_t ecx) {
    signed char* ebx2;
    signed char* eax3;
    int32_t eax4;
    int32_t esi5;
    int32_t eax6;
    struct s593* edx7;
    struct s576* eax8;
    struct s576* ebx9;
    int32_t v10;
    int32_t eax11;
    struct s576* eax12;
    int32_t v13;
    int32_t eax14;
    struct s576* eax15;
    int32_t v16;
    int32_t v17;
    int32_t eax18;
    struct s576* eax19;
    int32_t edx20;
    struct s576* eax21;
    int32_t edx22;
    struct s576* eax23;

    ebx2 = eax3;
    eax4 = 0;
    *reinterpret_cast<signed char*>(&eax4) = *ebx2;
    esi5 = -1;
    if (eax4 == 74) {
        esi5 = 1;
        ++ebx2;
    }
    eax6 = 0;
    *reinterpret_cast<signed char*>(&eax6) = *ebx2;
    if (eax6 == 77) {
        esi5 = 0;
    }
    edx7->f20 = esi5;
    eax8 = fun_449322(edx7);
    ebx9 = eax8;
    if (!esi5) {
        edx7->f10 = v10 - 1;
        eax11 = 0;
        *reinterpret_cast<unsigned char*>(&eax11) = eax8->f0;
        if (eax11 == 46 && (eax12 = fun_449322(edx7), ebx9 = eax12, edx7->fc = v13, eax14 = 0, *reinterpret_cast<unsigned char*>(&eax14) = eax12->f0, eax14 == 46)) {
            eax15 = fun_449322(edx7);
            ebx9 = eax15;
            edx7->f18 = v16;
        }
        edx7->f1c = 0;
    } else {
        edx7->f1c = v17;
    }
    eax18 = 0;
    *reinterpret_cast<unsigned char*>(&eax18) = ebx9->f0;
    if (eax18 == 47 && ((eax19 = fun_449322(edx7), edx20 = 0, *reinterpret_cast<unsigned char*>(&edx20) = eax19->f0, ebx9 = eax19, edx20 == 58) && (eax21 = fun_449322(edx7), edx22 = 0, *reinterpret_cast<unsigned char*>(&edx22) = eax21->f0, ebx9 = eax21, edx22 == 58))) {
        eax23 = fun_449322(edx7);
        ebx9 = eax23;
    }
    edx7->f0 = 0;
    edx7->f4 = 0;
    edx7->f8 = 2;
    return ebx9;
}

void** fun_447f90(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    int1_t zf18;
    void** edx19;
    void** ebx20;
    void** eax21;
    void** eax22;
    void** ebx23;

    zf18 = reinterpret_cast<int1_t>(g477a84 == 0xffffffff);
    if (!zf18) {
        eax21 = fun_447f05(ecx, edx19, ecx, ebx20);
        if (!eax21) {
            addr_447fd9_3:
            return eax21;
        } else {
            eax22 = fun_44892a(ecx, edx19, ecx, ebx20, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
            if (eax22) {
                ebx23 = g477a84;
                fun_449cd6(ebx23, eax21, edx19);
                eax21 = reinterpret_cast<void**>(1);
                goto addr_447fd9_3;
            } else {
                fun_4440d1(ecx, edx19, ecx, ebx20, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
            }
        }
    }
    return 0;
}

int32_t CreateEventA = 0x220e14;

int32_t fun_449c94(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    goto CreateEventA;
}

int32_t CreateThread = 0x220e42;

void** fun_449c8e(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    goto CreateThread;
}

struct s515* fun_447fdd(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** edx12;
    struct s515* eax13;
    void** ebx14;
    void** esi15;
    void** edx16;
    void** ebx17;
    void** ecx18;
    int32_t eax19;

    edx12 = g477a84;
    if (edx12 != 0xffffffff && ((eax13 = fun_449ce2(edx12), !!eax13) && ((ebx14 = eax13->fde, fun_44898b(ecx, edx12, esi15, edx16, ecx, ebx17, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11), ecx18 = g477a84, eax13 = fun_449cd6(ecx18, 0, edx12), !!ebx14) && eax19))) {
        eax13 = fun_449d48(ebx14, ecx18, 0, edx12, esi15, edx16, ecx, ebx17, __return_address(), a2, a3, a4, a5);
    }
    return eax13;
}

int32_t ExitThread = 0x220e86;

void fun_449c88() {
    goto ExitThread;
}

void** fun_410640(void** ecx, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** ebx7;
    void** v8;
    void** v9;
    void** edx10;
    int32_t ebx11;
    void** eax12;

    v5 = reinterpret_cast<void**>(__return_address());
    v6 = ebx7;
    v8 = ecx;
    v9 = edx10;
    ebx11 = 0;
    do {
        if (*reinterpret_cast<int32_t*>(*reinterpret_cast<int32_t*>(ebx11 + reinterpret_cast<int32_t>("wed executable\r\n$")) - 12) != 0x1d4a11) {
            fun_43bd40(ecx, "Z_CT at am_map.c:%i", 0xec, v9);
        }
        ebx11 = ebx11 + 4;
        eax12 = fun_437910(ecx, v9, v8, v6, v5, a2, a3, a4);
    } while (ebx11 != 40);
    return eax12;
}

void** g4800c4 = reinterpret_cast<void**>(0);

uint32_t g4800e8 = 0x2000;

uint32_t g480110 = 0;

void** g4800a4 = reinterpret_cast<void**>(0);

void** g4800a8 = reinterpret_cast<void**>(0xd8);

void** g4800a0 = reinterpret_cast<void**>(0);

void* g480098 = reinterpret_cast<void*>(0x1202010b);

int32_t fun_4104a0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** v10;
    void** ebx11;
    void** v12;
    void** v13;
    void** edx14;
    void*** eax15;
    void** ecx16;
    void** eax17;
    void** ebx18;
    void** eax19;
    void** ebx20;
    void** edx21;
    int32_t ebx22;
    int32_t eax23;
    void** edx24;
    void** eax25;
    void** ebx26;
    void* eax27;
    void** eax28;
    void** eax29;
    void** eax30;
    void* eax31;
    int32_t eax32;

    v9 = reinterpret_cast<void**>(__return_address());
    v10 = ebx11;
    v12 = ecx;
    v13 = edx14;
    eax15 = g5f27a0;
    ecx16 = reinterpret_cast<void**>(0);
    g45973c = reinterpret_cast<void**>(1);
    g4800d8 = eax15;
    g480010 = reinterpret_cast<void**>(0x7fffffff);
    g4800c4 = reinterpret_cast<void**>(0);
    g4800c0 = reinterpret_cast<void**>(0);
    g480094 = reinterpret_cast<void**>(0);
    g4800e8 = 0x10000;
    g480110 = 0x10000;
    eax17 = g4800cc;
    ebx18 = g4800b0;
    g480090 = reinterpret_cast<void**>(0);
    __asm__("shrd eax, edx, 0x10");
    g480104 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(eax17) << 16) * reinterpret_cast<unsigned char>(ebx18));
    eax19 = g4800c8;
    ebx20 = g4800b0;
    __asm__("shrd eax, edx, 0x10");
    edx21 = g482a7c;
    ebx22 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx21) * 4 + 0x482978);
    g480100 = reinterpret_cast<void*>((reinterpret_cast<unsigned char>(eax19) << 16) * reinterpret_cast<unsigned char>(ebx20));
    if (!ebx22 && (ecx16 = g482978, edx21 = reinterpret_cast<void**>(0), eax23 = 0, !ecx16)) {
        do {
            eax23 = eax23 + 4;
            ++edx21;
            if (eax23 >= 16) 
                break;
        } while (!*reinterpret_cast<int32_t*>(eax23 + 0x482978));
    }
    edx24 = reinterpret_cast<void**>(0x482518 + (reinterpret_cast<uint32_t>(edx21 + reinterpret_cast<unsigned char>(edx21) * 8) * 4 - reinterpret_cast<unsigned char>(edx21)) * 8);
    eax25 = g480104;
    g4800b4 = edx24;
    ebx26 = *reinterpret_cast<void***>(edx24);
    eax27 = g480100;
    g48010c = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx26 + 12)) - (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax25) - (reinterpret_cast<signed char>(eax25) >> 31)) >> 1));
    g480108 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx26 + 16)) - (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(eax27) - (reinterpret_cast<int32_t>(eax27) >> 31)) >> 1));
    fun_4103d0(ecx16);
    eax28 = g48010c;
    g4800a4 = eax28;
    eax29 = g480108;
    g4800a8 = eax29;
    eax30 = g480104;
    g4800a0 = eax30;
    eax31 = g480100;
    g480098 = eax31;
    eax32 = fun_432320(ecx16, v13, v12, v10, v9, a2, a3, a4, a5, a6, a7, a8);
    return eax32;
}

void fun_4105f0(void** ecx) {
    void* esp2;
    void** ebx3;
    void** ecx4;
    void* esp5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** eax10;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 12);
    ebx3 = reinterpret_cast<void**>(0);
    ecx4 = reinterpret_cast<void**>(0);
    do {
        esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4);
        ecx4 = ecx4 + 4;
        fun_442b4a(ecx4, reinterpret_cast<int32_t>(esp5) + 8, "AMMNUM%d", ebx3, v6, v7);
        ++ebx3;
        eax10 = fun_434890(ecx4, v8, v9);
        esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4 + 12 - 4 + 4);
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx4) + reinterpret_cast<uint32_t>("indowed executable\r\n$")) = eax10;
    } while (reinterpret_cast<signed char>(ebx3) < reinterpret_cast<signed char>(10));
    return;
}

void fun_410170(void** ecx) {
    void** ecx2;
    void* eax3;
    void** edx4;
    void** ebx5;
    void** ebx6;
    void* eax7;
    void** eax8;
    void** eax9;
    void** eax10;
    void* ebx11;
    void** eax12;
    void** edx13;
    void** ebx14;
    void** eax15;
    void** eax16;

    ecx2 = g4800a0;
    eax3 = g480098;
    edx4 = g459750;
    g480100 = eax3;
    if (edx4) {
        ebx5 = g4800b4;
        ebx6 = *reinterpret_cast<void***>(ebx5);
        eax7 = g480100;
        g48010c = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx6 + 12)) - (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(ecx2) - (reinterpret_cast<signed char>(ecx2) >> 31)) >> 1));
        g480108 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx6 + 16)) - (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(eax7) - (reinterpret_cast<int32_t>(eax7) >> 31)) >> 1));
    } else {
        eax8 = g4800a4;
        g48010c = eax8;
        eax9 = g4800a8;
        g480108 = eax9;
    }
    eax10 = g48010c;
    ebx11 = g480100;
    g4800fc = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax10) + reinterpret_cast<unsigned char>(ecx2));
    eax12 = g480108;
    g4800ec = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax12) + reinterpret_cast<uint32_t>(ebx11));
    g480104 = ecx2;
    eax15 = fun_411d60(ecx2, edx13, ecx, ebx14, __return_address());
    g459748 = eax15;
    eax16 = fun_411d60(ecx2, edx13, ecx, ebx14, __return_address());
    g4800b0 = eax16;
    return;
}

struct s594 {
    signed char[8] pad8;
    void** f8;
    signed char[3] pad12;
    unsigned char fc;
    unsigned char fd;
};

int32_t fun_4450b4(void** ecx);

void** fun_4450c5(void** ecx, void** a2) {
    void** ecx3;
    struct s594* eax4;
    uint32_t ebp5;
    void** ebp6;
    void** edi7;
    void** esi8;
    int32_t edi9;
    void** eax10;
    void** edx11;

    image_base_();
    ecx3 = eax4->f8;
    ebp5 = eax4->fc & 48;
    eax4->fc = reinterpret_cast<unsigned char>(eax4->fc & 0xcf);
    if (!ecx3) {
        fun_4458ec(ecx3, ebp6, edi7, esi8, ecx, __return_address(), a2);
    }
    edi9 = 0;
    if (eax4->fd & 4) {
        edi9 = 1;
        eax4->fd = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax4->fd & 0xfa) | 1);
    }
    eax10 = fun_44459b(fun_4450b4, ebp6);
    edx11 = eax10;
    if (edi9) {
        eax4->fd = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax4->fd & 0xfa) | 4);
        fun_4457c5(fun_4450b4);
    }
    image_base_(fun_4450b4);
    if (eax4->fc & 32) {
        edx11 = reinterpret_cast<void**>(0xffffffff);
    }
    eax4->fc = reinterpret_cast<unsigned char>(eax4->fc | ebp5);
    return edx11;
}

struct s595 {
    signed char[1] pad1;
    signed char f1;
    signed char f2;
};

int32_t g477a5d = 0x100;

void** fun_442bb9(void** ecx) {
    struct s595* ebx2;
    struct s595* eax3;
    void** edx4;
    void* eax5;
    void** v6;
    uint32_t eax7;
    int32_t ecx8;
    void** esi9;
    void** eax10;
    int32_t eax11;
    int1_t zf12;
    void** esi13;
    void** edx14;
    void** ebx15;
    void** eax16;
    int1_t zf17;
    int32_t eax18;
    int32_t eax19;

    ebx2 = eax3;
    edx4 = reinterpret_cast<void**>(0);
    eax5 = fun_443671();
    *reinterpret_cast<signed char*>(&v6) = *reinterpret_cast<signed char*>(&eax5);
    eax7 = reinterpret_cast<uint32_t>(eax5) & 0xff;
    if (eax7 == 0x72 || (eax7 == 0x77 || eax7 == 97)) {
        ecx8 = 0;
        esi9 = reinterpret_cast<void**>(0);
        *reinterpret_cast<signed char*>(&ecx8) = ebx2->f1;
        *reinterpret_cast<uint16_t*>(&esi9) = 3;
        if (ecx8 != 43) {
            eax10 = reinterpret_cast<void**>(0);
            *reinterpret_cast<unsigned char*>(&eax10) = 64;
            if (ecx8 == 98) {
                edx4 = reinterpret_cast<void**>(64);
                *reinterpret_cast<signed char*>(&ebx2) = ebx2->f2;
                if ((reinterpret_cast<uint32_t>(ebx2) & 0xff) != 43) 
                    goto addr_442c64_5;
                *reinterpret_cast<unsigned char*>(&eax10) = 67;
                goto addr_442c62_7;
            }
            if (ecx8 == 0x74) 
                goto addr_442c4c_9;
        } else {
            eax11 = 0;
            edx4 = reinterpret_cast<void**>(3);
            *reinterpret_cast<signed char*>(&eax11) = ebx2->f2;
            *reinterpret_cast<uint16_t*>(&esi9) = 67;
            if (eax11 == 98) {
                addr_442c26_11:
                edx4 = esi9;
                goto addr_442c64_5;
            } else {
                if (eax11 == 0x74) 
                    goto addr_442c64_5;
                zf12 = g477a5d == 0x200;
                goto addr_442c24_14;
            }
        }
    } else {
        fun_44515b(v6, esi13, edx14, ecx, ebx15);
        eax16 = reinterpret_cast<void**>(0);
        goto addr_442c82_16;
    }
    zf17 = g477a5d == 0x200;
    if (!zf17) {
        addr_442c64_5:
        eax18 = 0;
        *reinterpret_cast<signed char*>(&eax18) = *reinterpret_cast<signed char*>(&v6);
        if (eax18 != 0x77) {
            if (eax18 != 97) {
                *reinterpret_cast<unsigned char*>(&edx4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx4) | 1);
            } else {
                *reinterpret_cast<unsigned char*>(&edx4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx4) | 0x82);
            }
        } else {
            *reinterpret_cast<unsigned char*>(&edx4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx4) | 2);
        }
    } else {
        addr_442c62_7:
        edx4 = eax10;
        goto addr_442c64_5;
    }
    eax16 = edx4;
    addr_442c82_16:
    return eax16;
    addr_442c4c_9:
    eax19 = 0;
    *reinterpret_cast<signed char*>(&eax19) = ebx2->f2;
    zf12 = eax19 == 43;
    addr_442c24_14:
    if (!zf12) 
        goto addr_442c64_5; else 
        goto addr_442c26_11;
}

struct s596 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** fc;
};

struct s597 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** fc;
};

struct s598 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void** fun_411010(void** ecx) {
    void** ebp2;
    struct s596* ecx3;
    struct s596* edx4;
    void** edi5;
    uint32_t edx6;
    uint32_t eax7;
    struct s597* eax8;
    int1_t less9;
    void** edi10;
    int1_t less11;
    void** edi12;
    int1_t less_or_equal13;
    void** edi14;
    int1_t less_or_equal15;
    void** edx16;
    void** ebx17;
    void* eax18;
    void** eax19;
    void** edi20;
    void** ebx21;
    void** edx22;
    void** eax23;
    void** edx24;
    void** ebx25;
    void** eax26;
    void** esi27;
    void** ebx28;
    void** eax29;
    void** edi30;
    uint32_t ebx31;
    int1_t less32;
    void** edi33;
    uint32_t v34;
    int1_t less35;
    uint32_t esi36;
    void* eax37;
    void** edi38;
    void* v39;
    void** v40;
    void** v41;
    void* eax42;
    void** edi43;
    void** edi44;
    void* v45;
    void** edx46;
    void* edi47;
    void* v48;
    void* edi49;
    void* edx50;
    void** eax51;
    struct s598* edi52;
    void** edi53;
    int1_t less54;
    int1_t less55;
    void** esi56;

    ebp2 = g4800c8;
    ecx3 = edx4;
    edi5 = g4800ec;
    edx6 = 0;
    eax7 = 0;
    if (reinterpret_cast<signed char>(eax8->f4) <= reinterpret_cast<signed char>(edi5)) {
        less9 = reinterpret_cast<signed char>(eax8->f4) < reinterpret_cast<signed char>(g480108);
        if (less9) {
            edx6 = 4;
        }
    } else {
        edx6 = 8;
    }
    edi10 = g4800ec;
    if (reinterpret_cast<signed char>(eax8->fc) <= reinterpret_cast<signed char>(edi10)) {
        less11 = reinterpret_cast<signed char>(eax8->fc) < reinterpret_cast<signed char>(g480108);
        if (less11) {
            eax7 = 4;
        }
    } else {
        eax7 = 8;
    }
    if (!(edx6 & eax7)) {
        edi12 = g48010c;
        if (reinterpret_cast<signed char>(eax8->f0) >= reinterpret_cast<signed char>(edi12)) {
            less_or_equal13 = reinterpret_cast<signed char>(eax8->f0) <= reinterpret_cast<signed char>(g4800fc);
            if (!less_or_equal13) {
                *reinterpret_cast<unsigned char*>(&edx6) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx6) | 2);
            }
        } else {
            *reinterpret_cast<unsigned char*>(&edx6) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx6) | 1);
        }
        edi14 = g48010c;
        if (reinterpret_cast<signed char>(eax8->f8) >= reinterpret_cast<signed char>(edi14)) {
            less_or_equal15 = reinterpret_cast<signed char>(eax8->f8) <= reinterpret_cast<signed char>(g4800fc);
            if (!less_or_equal15) {
                *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax7) | 2);
            }
        } else {
            *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax7) | 1);
        }
        if (edx6 & eax7) {
            g4800c8 = ebp2;
            return 0;
        }
        edx16 = g48010c;
        ebx17 = g459748;
        eax18 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax8->f0) - reinterpret_cast<unsigned char>(edx16));
        g4800c8 = ebp2;
        __asm__("shrd eax, edx, 0x10");
        eax19 = g4800dc;
        ecx3->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax19) + (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(eax18) * reinterpret_cast<unsigned char>(ebx17)) >> 16));
        edi20 = g480108;
        ebx21 = g459748;
        __asm__("shrd eax, edx, 0x10");
        edx22 = g4800c8;
        eax23 = g4800e0;
        ecx3->f4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax23) + (reinterpret_cast<unsigned char>(edx22) - (reinterpret_cast<int32_t>((reinterpret_cast<unsigned char>(eax8->f4) - reinterpret_cast<unsigned char>(edi20)) * reinterpret_cast<unsigned char>(ebx21)) >> 16)));
        edx24 = g48010c;
        ebx25 = g459748;
        __asm__("shrd eax, edx, 0x10");
        eax26 = g4800dc;
        ecx3->f8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax26) + (reinterpret_cast<int32_t>((reinterpret_cast<unsigned char>(eax8->f8) - reinterpret_cast<unsigned char>(edx24)) * reinterpret_cast<unsigned char>(ebx25)) >> 16));
        esi27 = g480108;
        ebx28 = g459748;
        __asm__("shrd eax, edx, 0x10");
        ebp2 = g4800c8;
        eax29 = g4800e0;
        edi30 = ecx3->f4;
        ebx31 = 0;
        ecx3->fc = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax29) + (reinterpret_cast<unsigned char>(ebp2) - (reinterpret_cast<int32_t>((reinterpret_cast<unsigned char>(eax8->fc) - reinterpret_cast<unsigned char>(esi27)) * reinterpret_cast<unsigned char>(ebx28)) >> 16)));
        if (reinterpret_cast<signed char>(edi30) >= reinterpret_cast<signed char>(0)) {
            if (reinterpret_cast<signed char>(edi30) >= reinterpret_cast<signed char>(ebp2)) {
                ebx31 = 4;
            }
        } else {
            ebx31 = 8;
        }
        if (reinterpret_cast<signed char>(ecx3->f0) >= reinterpret_cast<signed char>(0)) {
            less32 = reinterpret_cast<signed char>(ecx3->f0) < reinterpret_cast<signed char>(g4800cc);
            if (!less32) {
                *reinterpret_cast<unsigned char*>(&ebx31) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx31) | 2);
            }
        } else {
            *reinterpret_cast<unsigned char*>(&ebx31) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx31) | 1);
        }
        edi33 = ecx3->fc;
        v34 = 0;
        if (reinterpret_cast<signed char>(edi33) >= reinterpret_cast<signed char>(0)) {
            if (reinterpret_cast<signed char>(edi33) >= reinterpret_cast<signed char>(ebp2)) {
                v34 = 4;
            }
        } else {
            v34 = 8;
        }
        if (reinterpret_cast<signed char>(ecx3->f8) >= reinterpret_cast<signed char>(0)) {
            less35 = reinterpret_cast<signed char>(ecx3->f8) < reinterpret_cast<signed char>(g4800cc);
            if (!less35) {
                *reinterpret_cast<unsigned char*>(&v34) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&v34) | 2);
            }
        } else {
            *reinterpret_cast<unsigned char*>(&v34) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&v34) | 1);
        }
        if (v34 & ebx31) {
            g4800c8 = ebp2;
            return 0;
        }
        do {
            if (!(v34 | ebx31)) 
                break;
            if (!ebx31) {
                esi36 = v34;
            } else {
                esi36 = ebx31;
            }
            if (!(*reinterpret_cast<uint16_t*>(&esi36) & 8)) {
                if (!(*reinterpret_cast<uint16_t*>(&esi36) & 4)) {
                    if (!(*reinterpret_cast<uint16_t*>(&esi36) & 2)) {
                        if (*reinterpret_cast<uint16_t*>(&esi36) & 1) {
                            eax37 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx3->fc) - reinterpret_cast<unsigned char>(ecx3->f4));
                            edi38 = ecx3->f0;
                            v39 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx3->f8) - reinterpret_cast<unsigned char>(edi38));
                            v40 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx3->f4) + reinterpret_cast<int32_t>(-reinterpret_cast<unsigned char>(edi38) * reinterpret_cast<uint32_t>(eax37)) / reinterpret_cast<int32_t>(v39));
                            v41 = reinterpret_cast<void**>(0);
                        }
                    } else {
                        eax42 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx3->fc) - reinterpret_cast<unsigned char>(ecx3->f4));
                        edi43 = g4800cc;
                        edi44 = edi43 - 1;
                        v45 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx3->f8) - reinterpret_cast<unsigned char>(ecx3->f0));
                        edx46 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx3->f4) + reinterpret_cast<int32_t>((reinterpret_cast<unsigned char>(edi44) - reinterpret_cast<unsigned char>(ecx3->f0)) * reinterpret_cast<uint32_t>(eax42)) / reinterpret_cast<int32_t>(v45));
                        v41 = edi44;
                        v40 = edx46;
                    }
                } else {
                    edi47 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx3->f4) - reinterpret_cast<unsigned char>(ecx3->fc));
                    v48 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx3->f8) - reinterpret_cast<unsigned char>(ecx3->f0));
                    v41 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx3->f0) + reinterpret_cast<int32_t>((reinterpret_cast<unsigned char>(ecx3->f4) - reinterpret_cast<unsigned char>(ebp2)) * reinterpret_cast<uint32_t>(v48)) / reinterpret_cast<int32_t>(edi47));
                    v40 = ebp2 + 0xffffffff;
                }
            } else {
                edi49 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx3->f4) - reinterpret_cast<unsigned char>(ecx3->fc));
                edx50 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx3->f8) - reinterpret_cast<unsigned char>(ecx3->f0));
                eax51 = ecx3->f4;
                v41 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx3->f0) + reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(edx50) * reinterpret_cast<unsigned char>(eax51)) / reinterpret_cast<int32_t>(edi49));
                v40 = reinterpret_cast<void**>(0);
            }
            if (esi36 != ebx31) {
                edi52 = reinterpret_cast<struct s598*>(&ecx3->f8);
                edi52->f0 = v41;
                edi52->f4 = v40;
                edi53 = ecx3->fc;
                v34 = 0;
                if (reinterpret_cast<signed char>(edi53) < reinterpret_cast<signed char>(0)) 
                    goto addr_411348_58;
            } else {
                ecx3->f0 = v41;
                ecx3->f4 = v40;
                ebx31 = 0;
                if (reinterpret_cast<signed char>(ecx3->f4) >= reinterpret_cast<signed char>(0)) 
                    goto addr_411313_66; else 
                    goto addr_41130c_67;
            }
            if (reinterpret_cast<signed char>(edi53) >= reinterpret_cast<signed char>(ebp2)) {
                v34 = 4;
            }
            addr_41135e_70:
            if (reinterpret_cast<signed char>(ecx3->f8) >= reinterpret_cast<signed char>(0)) {
                less54 = reinterpret_cast<signed char>(ecx3->f8) < reinterpret_cast<signed char>(g4800cc);
                if (!less54) {
                    *reinterpret_cast<unsigned char*>(&v34) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&v34) | 2);
                    continue;
                }
            } else {
                *reinterpret_cast<unsigned char*>(&v34) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&v34) | 1);
                continue;
            }
            addr_411348_58:
            v34 = 8;
            goto addr_41135e_70;
            addr_411313_66:
            if (reinterpret_cast<signed char>(ecx3->f4) >= reinterpret_cast<signed char>(ebp2)) {
                ebx31 = 4;
            }
            addr_41131c_75:
            if (reinterpret_cast<signed char>(ecx3->f0) >= reinterpret_cast<signed char>(0)) {
                less55 = reinterpret_cast<signed char>(ecx3->f0) < reinterpret_cast<signed char>(g4800cc);
                if (!less55) {
                    *reinterpret_cast<unsigned char*>(&ebx31) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx31) | 2);
                    continue;
                }
            } else {
                *reinterpret_cast<unsigned char*>(&ebx31) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx31) | 1);
                continue;
            }
            addr_41130c_67:
            ebx31 = 8;
            goto addr_41131c_75;
        } while (!(v34 & ebx31));
        goto addr_411383_80;
    } else {
        esi56 = reinterpret_cast<void**>(0);
        goto addr_41139b_82;
    }
    esi56 = reinterpret_cast<void**>(1);
    addr_41139b_82:
    g4800c8 = ebp2;
    return esi56;
    addr_411383_80:
    g4800c8 = ebp2;
    return 0;
}

struct s599 {
    signed char[4] pad4;
    int32_t f4;
};

struct s600 {
    int32_t f0;
    uint32_t f4;
};

struct s601 {
    uint32_t f0;
    int32_t f4;
};

void fun_444160(uint32_t ecx) {
    int32_t* esp2;
    struct s599* ebp3;
    int1_t zf4;
    signed char* eax5;
    signed char dl6;
    uint32_t* esp7;
    struct s600* esp8;
    struct s5* eax9;
    struct s601* esp10;
    uint32_t ecx11;
    signed char dl12;
    uint32_t ecx13;
    signed char dh14;
    signed char dl15;

    esp2 = &ebp3->f4;
    if (zf4) {
        addr_444190_2:
        goto *esp2;
    } else {
        do {
            if (!(*reinterpret_cast<unsigned char*>(&eax5) & 3)) 
                break;
            *eax5 = dl6;
            ++eax5;
            __asm__("ror edx, 0x8");
            --ecx;
        } while (ecx);
        esp7 = reinterpret_cast<uint32_t*>(esp2 - 1);
        *esp7 = ecx;
        esp8 = reinterpret_cast<struct s600*>(esp7 - 1);
        esp8->f0 = 0x44417c;
        eax9 = fun_444197(ecx >> 2);
        esp10 = reinterpret_cast<struct s601*>(&esp8->f4);
        esp2 = &esp10->f4;
        ecx11 = esp10->f0 & 3;
        if (!ecx11) 
            goto addr_444190_2;
        eax9->f0 = dl12;
        ecx13 = ecx11 - 1;
        if (!ecx13) 
            goto addr_444190_2;
        eax9->f1 = dh14;
        if (!(ecx13 - 1)) 
            goto addr_444190_2;
    }
    eax9->f2 = dl15;
    goto addr_444190_2;
}

void** g48013c = reinterpret_cast<void**>(0);

void** g480138 = reinterpret_cast<void**>(0);

void** g480140 = reinterpret_cast<void**>(0);

void** g480144 = reinterpret_cast<void**>(0);

struct s603 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

struct s602 {
    signed char[16] pad16;
    unsigned char f10;
    signed char[1] pad18;
    int16_t f12;
    signed char[26] pad46;
    void** f2e;
    signed char[3] pad50;
    struct s603* f32;
};

void** fun_411640(void** ecx) {
    void** v2;
    void** v3;
    void** edx4;
    void** v5;
    void** esi6;
    void** v7;
    void** edi8;
    void** edx9;
    void** ecx10;
    void* ebx11;
    void** eax12;
    void** eax13;
    void** esi14;
    void** edx15;
    int32_t edi16;
    void** edx17;
    int1_t zf18;
    void** edx19;
    struct s602* edx20;
    void** edx21;
    int1_t zf22;
    void** esi23;

    v2 = ecx;
    v3 = edx4;
    v5 = esi6;
    v7 = edi8;
    edx9 = g4845c8;
    ecx10 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx9) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx9 == 0))) {
        ebx11 = reinterpret_cast<void*>(0);
        while (1) {
            eax12 = g4845d8;
            eax13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax12) + reinterpret_cast<uint32_t>(ebx11));
            esi14 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax13));
            g48013c = *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax13) + 4);
            edx15 = *reinterpret_cast<void***>(eax13 + 4);
            edi16 = g459730;
            g480138 = esi14;
            edx17 = *reinterpret_cast<void***>(edx15 + 4);
            g480140 = *reinterpret_cast<void***>(edx15);
            g480144 = edx17;
            if (edi16 || *reinterpret_cast<unsigned char*>(eax13 + 17) & 1) {
                eax13 = g4845d8;
                if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebx11) + reinterpret_cast<unsigned char>(eax13) + 16) & 0x80)) 
                    goto addr_4116b2_5;
                zf18 = g459730 == 0;
                if (zf18) 
                    goto addr_411768_7;
                addr_4116b2_5:
                edx19 = g4845d8;
                edx20 = reinterpret_cast<struct s602*>(reinterpret_cast<unsigned char>(edx19) + reinterpret_cast<uint32_t>(ebx11));
                if (!edx20->f32) 
                    goto addr_4116cb_8;
            } else {
                edx21 = g4800b4;
                if (!*reinterpret_cast<void***>(edx21 + 60)) 
                    goto addr_411768_7;
                if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax13 + 16)) & 0x80) 
                    goto addr_411768_7;
                goto addr_41175e_12;
            }
            if (edx20->f12 != 39) {
                if (!(edx20->f10 & 32)) {
                    eax13 = edx20->f2e;
                    if (edx20->f32->f0 == *reinterpret_cast<void***>(eax13)) {
                        if (edx20->f32->f4 == *reinterpret_cast<void***>(eax13 + 4)) {
                            zf22 = g459730 == 0;
                            if (zf22) {
                                addr_411768_7:
                                esi23 = g4845c8;
                                ++ecx10;
                                ebx11 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx11) + 62);
                                if (reinterpret_cast<signed char>(ecx10) < reinterpret_cast<signed char>(esi23)) 
                                    continue; else 
                                    break;
                            }
                        }
                    }
                } else {
                    goto addr_41175e_12;
                }
            } else {
                goto addr_41175e_12;
            }
            addr_411763_23:
            eax13 = fun_411530(ecx10, v7, v5, v3, v2);
            goto addr_411768_7;
            addr_41175e_12:
            goto addr_411763_23;
            addr_4116cb_8:
            goto addr_41175e_12;
        }
    }
    return eax13;
}

void** fun_4118f0(void** ecx) {
    int1_t zf2;
    void** esi3;
    int32_t ebp4;
    int32_t edi5;
    void** edx6;
    void** eax7;
    int1_t zf8;
    int1_t zf9;
    uint32_t ecx10;
    void** eax11;
    void** v12;
    void** v13;
    void** ecx14;
    int32_t ebx15;
    void** eax16;
    void** eax17;
    void** v18;
    void** v19;
    void** ecx20;
    void** eax21;
    void** eax22;
    void** v23;
    void** v24;
    void** ecx25;

    zf2 = g482a84 == 0;
    if (!zf2) {
        esi3 = reinterpret_cast<void**>(0x482518);
        ebp4 = -4;
        edi5 = 0;
        do {
            edx6 = g482a6c;
            ebp4 = ebp4 + 4;
            eax7 = esi3;
            if ((!edx6 || ((zf8 = g482a3c == 0, !zf8) || (zf9 = esi3 == g4800b4, zf9))) && *reinterpret_cast<int32_t*>(edi5 + 0x482978)) {
                if (!*reinterpret_cast<void***>(eax7 + 52)) {
                    ecx10 = *reinterpret_cast<uint32_t*>(ebp4 + reinterpret_cast<int32_t>("p"));
                } else {
                    ecx10 = 0xf6;
                }
                eax11 = *reinterpret_cast<void***>(eax7);
                v12 = *reinterpret_cast<void***>(eax11 + 16);
                v13 = *reinterpret_cast<void***>(eax11 + 12);
                ecx14 = *reinterpret_cast<void***>(eax11 + 32);
                eax7 = fun_4117f0(ecx14, ecx10, v13, v12);
            }
            edi5 = edi5 + 4;
            esi3 = esi3 + 0x118;
        } while (edi5 != 16);
    } else {
        ebx15 = g459730;
        if (!ebx15) {
            eax16 = g4800b4;
            eax17 = *reinterpret_cast<void***>(eax16);
            v18 = *reinterpret_cast<void***>(eax17 + 16);
            v19 = *reinterpret_cast<void***>(eax17 + 12);
            ecx20 = *reinterpret_cast<void***>(eax17 + 32);
            eax7 = fun_4117f0(ecx20, 0xd1, v19, v18);
        } else {
            eax21 = g4800b4;
            eax22 = *reinterpret_cast<void***>(eax21);
            v23 = *reinterpret_cast<void***>(eax22 + 16);
            v24 = *reinterpret_cast<void***>(eax22 + 12);
            ecx25 = *reinterpret_cast<void***>(eax22 + 32);
            eax7 = fun_4117f0(ecx25, 0xd1, v24, v23);
        }
    }
    return eax7;
}

int32_t fun_4443c2(void** ecx) {
    int32_t ecx2;
    int32_t eax3;
    signed char* edx4;
    signed char* eax5;
    signed char al6;
    int32_t ebx7;

    ecx2 = eax3;
    edx4 = eax5;
    while (*edx4) {
        al6 = reinterpret_cast<signed char>(*edx4 - 97);
        ebx7 = 0;
        *reinterpret_cast<signed char*>(&ebx7) = al6;
        if (ebx7 <= 25) {
            *edx4 = reinterpret_cast<signed char>(al6 + 65);
        }
        ++edx4;
    }
    return ecx2;
}

void* g4646bc = reinterpret_cast<void*>(0);

void* g4646c0 = reinterpret_cast<void*>(0);

uint32_t g4646c4 = 0;

uint32_t g4646c8 = 0;

uint32_t g4646cc = 0;

uint32_t g4646d0 = 0;

int32_t g483594 = 0xa278;

void** g4835a0 = reinterpret_cast<void**>(72);

struct s604 {
    signed char f0;
    signed char f1;
};

struct s605 {
    signed char f0;
    signed char f1;
};

uint32_t g483598 = 0x2774c085;

struct s606 {
    int16_t f0;
    signed char[10] pad12;
    int32_t fc;
};

struct s607 {
    int16_t f0;
    signed char[10] pad12;
    int32_t fc;
};

struct s608 {
    int16_t f0;
    signed char[10] pad12;
    int32_t fc;
};

struct s609 {
    signed char[12] pad12;
    int32_t fc;
};

struct s610 {
    int16_t f0;
    signed char[10] pad12;
    int32_t fc;
};

struct s611 {
    signed char[12] pad12;
    int32_t fc;
};

void** fun_41b5b0(void** ecx);

void** fun_41bdc0(void** ecx);

void fun_41bd30();

void fun_41b6d0(void** ecx);

void fun_41bf20(void** ecx);

struct s612 {
    signed char[4603012] pad4603012;
    void** f463c84;
};

int32_t fun_41c310(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22) {
    void** v23;
    void** ebp24;
    void** edx25;
    int32_t* eax26;
    void** eax27;
    void* eax28;
    int1_t less_or_equal29;
    void* eax30;
    int1_t less_or_equal31;
    uint32_t ebp32;
    uint32_t ebp33;
    uint32_t eax34;
    uint32_t eax35;
    void* eax36;
    uint32_t ebp37;
    uint32_t ebp38;
    void* eax39;
    uint32_t eax40;
    uint32_t eax41;
    uint32_t esi42;
    uint32_t esi43;
    uint32_t eax44;
    uint32_t eax45;
    void* eax46;
    uint32_t eax47;
    uint32_t eax48;
    void* eax49;
    uint32_t esi50;
    uint32_t esi51;
    void* eax52;
    void* eax53;
    void* eax54;
    void* eax55;
    void* eax56;
    void* eax57;
    void* eax58;
    void* eax59;
    void* eax60;
    void** ebx61;
    int1_t zf62;
    int1_t zf63;
    void** ecx64;
    void** eax65;
    void** eax66;
    void** edi67;
    int1_t zf68;
    void** ecx69;
    void** ecx70;
    uint32_t eax71;
    signed char cl72;
    void** ecx73;
    int1_t zf74;
    struct s604* esi75;
    struct s605* edi76;
    signed char al77;
    signed char al78;
    uint32_t edx79;
    uint32_t ecx80;
    void** ecx81;
    void** edx82;
    void*** eax83;
    struct s606* esi84;
    int32_t edi85;
    struct s607* eax86;
    void** eax87;
    void** eax88;
    void** ebp89;
    void* edx90;
    void** ecx91;
    struct s608* eax92;
    void** bx93;
    void* edx94;
    void** ecx95;
    struct s609* edx96;
    void** edx97;
    void* edx98;
    void** ecx99;
    struct s610* eax100;
    void** bx101;
    void* edx102;
    void** ecx103;
    struct s611* edx104;
    void** eax105;
    void** edx106;
    void*** eax107;
    void** ecx108;
    void** esi109;
    void** bx110;
    int32_t eax111;
    void** ecx112;
    void** esi113;
    int1_t zf114;
    void** eax115;
    void** edi116;
    void* ebp117;
    void** edi118;
    void** esi119;
    void** edx120;
    void** ebx121;
    int1_t zf122;
    int1_t zf123;
    void* esi124;
    void** ebp125;
    void* eax126;
    int1_t zf127;
    int1_t zf128;
    void** bx129;
    void** bx130;
    void** esi131;
    void** esi132;
    struct s612* eax133;
    void** edx134;
    void** ecx135;
    void** eax136;
    void** edx137;
    uint32_t eax138;
    int1_t less139;
    void** ecx140;
    int32_t eax141;
    void** ecx142;
    uint32_t ecx143;
    uint32_t eax144;
    uint32_t esi145;
    void* eax146;

    v23 = ebp24;
    edx25 = reinterpret_cast<void**>(0xffffffff);
    if (*eax26 != 3 || (eax28 = fun_43c1e0(eax27), less_or_equal29 = reinterpret_cast<int32_t>(eax28) <= reinterpret_cast<int32_t>(g4646bc), less_or_equal29)) {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax27) == 2) || (eax30 = fun_43c1e0(eax27), less_or_equal31 = reinterpret_cast<int32_t>(eax30) <= reinterpret_cast<int32_t>(g4646c0), less_or_equal31)) {
            if (!*reinterpret_cast<void***>(eax27)) {
                edx25 = *reinterpret_cast<void***>(eax27 + 4);
            }
        } else {
            ebp32 = g4646c4;
            ebp33 = ebp32 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax27 + 12));
            eax34 = g4646c8;
            g4646c4 = ebp33;
            if (reinterpret_cast<int32_t>(eax34 - 30) <= reinterpret_cast<int32_t>(ebp33)) {
                eax35 = g4646c8;
                if (reinterpret_cast<int32_t>(eax35 + 30) < reinterpret_cast<int32_t>(ebp33)) {
                    eax36 = fun_43c1e0(eax27);
                    edx25 = reinterpret_cast<void**>(0xad);
                    ebp37 = g4646c8;
                    ebp38 = ebp37 + 30;
                    g4646c0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax36) + 5);
                    g4646c8 = ebp38;
                    g4646c4 = ebp38;
                }
            } else {
                eax39 = fun_43c1e0(eax27);
                g4646c0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax39) + 5);
                eax40 = g4646c8;
                eax41 = eax40 - 30;
                edx25 = reinterpret_cast<void**>(0xaf);
                g4646c8 = eax41;
                g4646c4 = eax41;
            }
            esi42 = g4646cc;
            esi43 = esi42 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax27 + 8));
            eax44 = g4646d0;
            g4646cc = esi43;
            if (reinterpret_cast<int32_t>(eax44 - 30) <= reinterpret_cast<int32_t>(esi43)) {
                eax45 = g4646d0;
                if (reinterpret_cast<int32_t>(eax45 + 30) < reinterpret_cast<int32_t>(esi43)) {
                    eax46 = fun_43c1e0(eax27);
                    g4646c0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax46) + 5);
                    eax47 = g4646d0;
                    eax48 = eax47 + 30;
                    edx25 = reinterpret_cast<void**>(0xae);
                    g4646d0 = eax48;
                    g4646cc = eax48;
                }
            } else {
                eax49 = fun_43c1e0(eax27);
                edx25 = reinterpret_cast<void**>(0xac);
                esi50 = g4646d0;
                esi51 = esi50 - 30;
                g4646c0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax49) + 5);
                g4646d0 = esi51;
                g4646cc = esi51;
            }
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax27 + 4)) & 1) {
                eax52 = fun_43c1e0(eax27);
                edx25 = reinterpret_cast<void**>(13);
                g4646c0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax52) + 15);
            }
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax27 + 4)) & 2) {
                eax53 = fun_43c1e0(eax27);
                edx25 = reinterpret_cast<void**>(0x7f);
                g4646c0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax53) + 15);
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax27 + 12) == 0xffffffff)) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax27 + 12) == 1)) {
                addr_41c36d_19:
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax27 + 8) == 0xffffffff)) {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax27 + 8) == 1)) {
                        addr_41c39b_21:
                        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax27 + 4)) & 1) {
                            eax54 = fun_43c1e0(eax27);
                            edx25 = reinterpret_cast<void**>(13);
                            g4646bc = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax54) + 5);
                            goto addr_41c3b3_23;
                        }
                    } else {
                        eax55 = fun_43c1e0(eax27);
                        eax56 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax55) + 2);
                        edx25 = reinterpret_cast<void**>(0xae);
                        goto addr_41c396_25;
                    }
                } else {
                    eax57 = fun_43c1e0(eax27);
                    eax56 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax57) + 2);
                    edx25 = reinterpret_cast<void**>(0xac);
                    goto addr_41c396_25;
                }
            } else {
                eax58 = fun_43c1e0(eax27);
                eax59 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax58) + 5);
                edx25 = reinterpret_cast<void**>(0xaf);
                goto addr_41c368_28;
            }
        } else {
            eax60 = fun_43c1e0(eax27);
            eax59 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax60) + 5);
            edx25 = reinterpret_cast<void**>(0xad);
            goto addr_41c368_28;
        }
    }
    addr_41c510_30:
    ebx61 = g4835d4;
    if (edx25 == 0xffffffff) {
        addr_41cf95_31:
        return 0;
    } else {
        zf62 = g483594 == 0;
        if (zf62) {
            zf63 = g4835b8 == 0;
            if (!zf63) {
                ecx64 = g483588;
                if (reinterpret_cast<int1_t>(ecx64 == 1)) {
                    if (edx25 == 32 || (edx25 == 0x6e || (edx25 == 0x79 || edx25 == 27))) {
                        eax65 = reinterpret_cast<void**>(0);
                    } else {
                        eax65 = ecx64;
                    }
                    if (eax65) 
                        goto addr_41cf8e_39;
                }
                eax66 = g48358c;
                edi67 = g48359c;
                g4835d4 = ebx61;
                g4835cc = eax66;
                g4835b8 = reinterpret_cast<void**>(0);
                if (edi67) {
                    g48359c();
                }
                g4835cc = reinterpret_cast<void**>(0);
                fun_4312d0(ecx64, v23);
                return 1;
            }
            zf68 = g481254 == 0;
            if (!zf68 && reinterpret_cast<int1_t>(edx25 == 0xbb)) {
                fun_417710();
                return 1;
            }
            ecx69 = g4835cc;
            ebx61 = g4835d4;
            if (!ecx69) 
                goto addr_41c78a_46;
        } else {
            ecx70 = g4835a0;
            eax71 = (reinterpret_cast<unsigned char>(ecx70) * 4 - reinterpret_cast<unsigned char>(ecx70)) * 8;
            if (reinterpret_cast<unsigned char>(edx25) < reinterpret_cast<unsigned char>(27)) {
                if (edx25 == 13) {
                    cl72 = *reinterpret_cast<signed char*>(eax71 + 0x483450);
                    g483594 = 0;
                    if (cl72 && (ecx73 = g4835a0, fun_417cd0(), fun_41d240(), zf74 = reinterpret_cast<int1_t>(g4835bc == 0xfffffffe), zf74)) {
                        g4835bc = ecx73;
                        return 1;
                    }
                } else {
                    goto addr_41c61c_52;
                }
            } else {
                if (reinterpret_cast<unsigned char>(edx25) <= reinterpret_cast<unsigned char>(27)) {
                    g483594 = 0;
                    esi75 = reinterpret_cast<struct s604*>(0x483540);
                    edi76 = reinterpret_cast<struct s605*>(0x483450 + eax71);
                    do {
                        al77 = esi75->f0;
                        edi76->f0 = al77;
                        if (!al77) 
                            break;
                        al78 = esi75->f1;
                        ++esi75;
                        edi76->f1 = al78;
                        ++edi76;
                    } while (al78);
                    goto addr_41c6ad_58;
                } else {
                    if (edx25 == 0x7f) {
                        edx79 = g483598;
                        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx79) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edx79 == 0))) {
                            ecx80 = edx79 + 0xffffffff;
                            g483598 = ecx80;
                            *reinterpret_cast<signed char*>(eax71 + ecx80 + 0x483450) = 0;
                            goto addr_41c6ad_58;
                        }
                    } else {
                        goto addr_41c61c_52;
                    }
                }
            }
        }
    }
    addr_41cb95_63:
    ecx69 = g4835cc;
    if (ecx69) {
        if (reinterpret_cast<unsigned char>(edx25) < reinterpret_cast<unsigned char>(0xac)) {
            if (reinterpret_cast<unsigned char>(edx25) < reinterpret_cast<unsigned char>(27)) {
                if (edx25 == 13) {
                    ecx81 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(ebx61)));
                    edx82 = g48357c;
                    eax83 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(ecx81) << 4) + reinterpret_cast<unsigned char>(ecx81));
                    esi84 = reinterpret_cast<struct s606*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx82 + 6)) + reinterpret_cast<uint32_t>(eax83));
                    edi85 = esi84->fc;
                    g4835d4 = ebx61;
                    if (edi85 && esi84->f0) {
                        *reinterpret_cast<void***>(edx82 + 18) = ebx61;
                        eax86 = reinterpret_cast<struct s607*>(reinterpret_cast<uint32_t>(eax83) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx82 + 6)));
                        if (eax86->f0 != 2) {
                            eax86->fc();
                        } else {
                            eax86->fc();
                        }
                        fun_4312d0(ecx81, v23);
                    }
                    return 1;
                }
            } else {
                if (reinterpret_cast<unsigned char>(edx25) <= reinterpret_cast<unsigned char>(27)) {
                    eax87 = g48357c;
                    *reinterpret_cast<void***>(eax87 + 18) = ebx61;
                    g4835d4 = ebx61;
                    g4835cc = reinterpret_cast<void**>(0);
                    fun_4312d0(ecx69, v23);
                    return 1;
                } else {
                    if (edx25 == 0x7f) {
                        eax88 = g48357c;
                        ebp89 = *reinterpret_cast<void***>(eax88 + 2);
                        *reinterpret_cast<void***>(eax88 + 18) = ebx61;
                        if (ebp89) {
                            g48357c = ebp89;
                            g4835d4 = *reinterpret_cast<void***>(ebp89 + 18);
                            fun_4312d0(ecx69, v23);
                            ebx61 = g4835d4;
                        }
                        g4835d4 = ebx61;
                        return 1;
                    }
                }
            }
        } else {
            if (reinterpret_cast<unsigned char>(edx25) <= reinterpret_cast<unsigned char>(0xac)) {
                edx90 = reinterpret_cast<void*>(static_cast<int32_t>(reinterpret_cast<int16_t>(ebx61)));
                ecx91 = g48357c;
                eax92 = reinterpret_cast<struct s608*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx91 + 6)) + (reinterpret_cast<uint32_t>(edx90) + (reinterpret_cast<uint32_t>(edx90) << 4)));
                if (eax92->fc && eax92->f0 == 2) {
                    g4835d4 = ebx61;
                    fun_4312d0(ecx91, v23);
                    bx93 = g4835d4;
                    edx94 = reinterpret_cast<void*>(static_cast<int32_t>(reinterpret_cast<int16_t>(bx93)));
                    ecx95 = g48357c;
                    edx96 = reinterpret_cast<struct s609*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx95 + 6)) + ((reinterpret_cast<uint32_t>(edx94) << 4) + reinterpret_cast<uint32_t>(edx94)));
                    edx96->fc();
                    ebx61 = g4835d4;
                }
                g4835d4 = ebx61;
                return 1;
            } else {
                if (reinterpret_cast<unsigned char>(edx25) < reinterpret_cast<unsigned char>(0xae)) {
                    do {
                        if (!ebx61) {
                            ebx61 = g48357c;
                            ebx61 = *reinterpret_cast<void***>(ebx61);
                        }
                        --ebx61;
                        g4835d4 = ebx61;
                        fun_4312d0(0, v23);
                        ebx61 = g4835d4;
                        edx97 = g48357c;
                    } while (static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(edx97 + 6) + reinterpret_cast<int16_t>(ebx61) * 17))) == -1);
                    return 1;
                } else {
                    if (reinterpret_cast<unsigned char>(edx25) <= reinterpret_cast<unsigned char>(0xae)) {
                        edx98 = reinterpret_cast<void*>(static_cast<int32_t>(reinterpret_cast<int16_t>(ebx61)));
                        ecx99 = g48357c;
                        eax100 = reinterpret_cast<struct s610*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx99 + 6)) + (reinterpret_cast<uint32_t>(edx98) + (reinterpret_cast<uint32_t>(edx98) << 4)));
                        if (eax100->fc && eax100->f0 == 2) {
                            g4835d4 = ebx61;
                            fun_4312d0(ecx99, v23);
                            bx101 = g4835d4;
                            edx102 = reinterpret_cast<void*>(static_cast<int32_t>(reinterpret_cast<int16_t>(bx101)));
                            ecx103 = g48357c;
                            edx104 = reinterpret_cast<struct s611*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx103 + 6)) + ((reinterpret_cast<uint32_t>(edx102) << 4) + reinterpret_cast<uint32_t>(edx102)));
                            edx104->fc();
                            ebx61 = g4835d4;
                        }
                        g4835d4 = ebx61;
                        return 1;
                    } else {
                        if (edx25 == 0xaf) {
                            do {
                                eax105 = g48357c;
                                if (reinterpret_cast<int16_t>(ebx61) + 1 <= reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax105)) - 1) {
                                    ++ebx61;
                                } else {
                                    ebx61 = reinterpret_cast<void**>(0);
                                }
                                g4835d4 = ebx61;
                                fun_4312d0(0, v23);
                                ebx61 = g4835d4;
                                edx106 = g48357c;
                            } while (static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(edx106 + 6) + reinterpret_cast<int16_t>(ebx61) * 17))) == -1);
                            return 1;
                        }
                    }
                }
            }
        }
        eax107 = reinterpret_cast<void***>(reinterpret_cast<int16_t>(ebx61) + 1);
        ecx108 = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(eax107) << 4) + reinterpret_cast<uint32_t>(eax107));
        while (esi109 = g48357c, reinterpret_cast<int32_t>(eax107) < static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(esi109)))) {
            if (reinterpret_cast<int1_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx108) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi109 + 6)) + 16)) == edx25)) 
                goto addr_41cf02_106;
            ecx108 = ecx108 + 17;
            ++eax107;
        }
    } else {
        if (!reinterpret_cast<int1_t>(edx25 == 27)) {
            addr_41cf8e_39:
            g4835d4 = ebx61;
            goto addr_41cf95_31;
        } else {
            g4835d4 = ebx61;
            if (!ecx69) {
                bx110 = g4642fa;
                g4835cc = reinterpret_cast<void**>(1);
                g48357c = reinterpret_cast<void**>(0x4642e8);
                g4835d4 = bx110;
                goto addr_41cbd6_111;
            }
        }
    }
    eax111 = 0;
    ecx112 = reinterpret_cast<void**>(0);
    while (eax111 <= static_cast<int32_t>(reinterpret_cast<int16_t>(ebx61))) {
        esi113 = g48357c;
        if (reinterpret_cast<int1_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx112) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi113 + 6)) + 16)) == edx25)) 
            goto addr_41cf57_115;
        ecx112 = ecx112 + 17;
        ++eax111;
    }
    goto addr_41cf8e_39;
    addr_41cf57_115:
    g4835d4 = *reinterpret_cast<void***>(&eax111);
    fun_4312d0(ecx112, v23);
    return 1;
    addr_41cf02_106:
    g4835d4 = *reinterpret_cast<void***>(&eax107);
    fun_4312d0(ecx108, v23);
    return 1;
    addr_41c78a_46:
    if (reinterpret_cast<unsigned char>(edx25) < reinterpret_cast<unsigned char>(0xbf)) {
        if (reinterpret_cast<unsigned char>(edx25) < reinterpret_cast<unsigned char>(0xbb)) {
            if (reinterpret_cast<unsigned char>(edx25) >= reinterpret_cast<unsigned char>(45)) {
                if (reinterpret_cast<unsigned char>(edx25) <= reinterpret_cast<unsigned char>(45)) {
                    zf114 = g45973c == 0;
                    if (zf114 && (eax115 = g482f04, !eax115)) {
                        if (!ecx69) {
                            edi116 = g4835b4;
                            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi116) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi116 == 0))) {
                                ebp117 = g4835ac;
                                g4835b4 = edi116 + 0xffffffff;
                                g4835ac = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp117) - 1);
                            }
                        } else {
                            if (ecx69 == 1) {
                            }
                        }
                        fun_42de60(v23, edi118, esi119, edx120, ecx, ebx121, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22);
                        fun_4312d0(ecx69, v23);
                        return 1;
                    }
                } else {
                    if (edx25 == 61) {
                        zf122 = g45973c == 0;
                        if (zf122 && (zf123 = g482f04 == 0, zf123)) {
                            if (0) {
                                ecx69 = g4835b4;
                                if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx69) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx69 == 0))) {
                                    esi124 = g4835ac;
                                    g4835ac = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi124) - 1);
                                    g4835b4 = ecx69 - 1;
                                }
                            } else {
                                if (1) {
                                    ebp125 = g4835b4;
                                    if (reinterpret_cast<signed char>(ebp125) < reinterpret_cast<signed char>(8)) {
                                        eax126 = g4835ac;
                                        g4835b4 = ebp125 + 1;
                                        g4835ac = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax126) + 1);
                                    }
                                }
                            }
                            fun_42de60(v23, edi118, esi119, edx120, ecx, ebx121, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22);
                            fun_4312d0(ecx69, v23);
                            return 1;
                        }
                    } else {
                        goto addr_41cb95_63;
                    }
                }
            }
        } else {
            if (reinterpret_cast<unsigned char>(edx25) <= reinterpret_cast<unsigned char>(0xbb)) {
                if (!ecx69) {
                    g4835cc = reinterpret_cast<void**>(1);
                }
                zf127 = g481264 == 0;
                if (!zf127 || (zf128 = g481258 == 0, zf128)) {
                    g48357c = reinterpret_cast<void**>(0x4644cc);
                } else {
                    g48357c = reinterpret_cast<void**>(0x4644f4);
                }
                g4835d4 = reinterpret_cast<void**>(0);
                fun_4312d0(ecx69, v23);
                return 1;
            }
            if (reinterpret_cast<unsigned char>(edx25) < reinterpret_cast<unsigned char>(0xbd)) {
                if (!ecx69) {
                    ecx69 = reinterpret_cast<void**>(0x4642e8);
                    g4835cc = reinterpret_cast<void**>(1);
                    bx129 = g4642fa;
                    g48357c = reinterpret_cast<void**>(0x4642e8);
                    g4835d4 = bx129;
                }
                fun_4312d0(ecx69, v23);
                fun_41b4f0(ecx69);
                return 1;
            }
            if (reinterpret_cast<unsigned char>(edx25) <= reinterpret_cast<unsigned char>(0xbd)) {
                if (!ecx69) {
                    bx130 = g4642fa;
                    g4835cc = reinterpret_cast<void**>(1);
                    g48357c = reinterpret_cast<void**>(0x4642e8);
                    g4835d4 = bx130;
                }
                fun_4312d0(ecx69, v23);
                fun_41b2e0(ecx69);
                return 1;
            }
            if (!ecx69) 
                goto addr_41ca33_156;
        }
    } else {
        if (reinterpret_cast<unsigned char>(edx25) <= reinterpret_cast<unsigned char>(0xbf)) {
            addr_41cbd6_111:
            fun_4312d0(ecx69, v23);
            return 1;
        } else {
            if (reinterpret_cast<unsigned char>(edx25) < reinterpret_cast<unsigned char>(0xc2)) {
                if (reinterpret_cast<unsigned char>(edx25) <= reinterpret_cast<unsigned char>(0xc0)) {
                    fun_4312d0(ecx69, v23);
                    fun_41b5b0(ecx69);
                    return 1;
                } else {
                    fun_4312d0(ecx69, v23);
                    fun_41bdc0(ecx69);
                    return 1;
                }
            } else {
                if (reinterpret_cast<unsigned char>(edx25) <= reinterpret_cast<unsigned char>(0xc2)) {
                    fun_41bd30();
                    fun_4312d0(ecx69, v23);
                    return 1;
                } else {
                    if (reinterpret_cast<unsigned char>(edx25) < reinterpret_cast<unsigned char>(0xc4)) {
                        fun_4312d0(ecx69, v23);
                        fun_41b6d0(ecx69);
                        return 1;
                    } else {
                        if (reinterpret_cast<unsigned char>(edx25) <= reinterpret_cast<unsigned char>(0xc4)) {
                            fun_4312d0(ecx69, v23);
                            fun_41bf20(ecx69);
                            return 1;
                        } else {
                            if (edx25 == 0xd7) {
                                esi131 = g5f27b8;
                                esi132 = esi131 + 1;
                                g5f27b8 = esi132;
                                if (reinterpret_cast<signed char>(esi132) > reinterpret_cast<signed char>(4)) {
                                    g5f27b8 = ecx69;
                                }
                                eax133 = reinterpret_cast<struct s612*>(reinterpret_cast<unsigned char>(g5f27b8) * 26);
                                edx134 = g482a7c;
                                ecx135 = reinterpret_cast<void**>(reinterpret_cast<int32_t>("Gamma correction OFF") + reinterpret_cast<uint32_t>(eax133));
                                *reinterpret_cast<void***>((reinterpret_cast<uint32_t>(edx134 + reinterpret_cast<unsigned char>(edx134) * 8) * 4 - reinterpret_cast<unsigned char>(edx134)) * 8 + 0x4825f0) = ecx135;
                                fun_42ce70(ecx135, v23);
                                fun_43c290(ecx135, v23);
                                return 1;
                            } else {
                                goto addr_41cb95_63;
                            }
                        }
                    }
                }
            }
        }
    }
    addr_41ca3d_174:
    g48357c = reinterpret_cast<void**>(0x46454c);
    g4835d4 = reinterpret_cast<void**>(0);
    fun_4312d0(ecx69, v23);
    return 1;
    addr_41ca33_156:
    g4835cc = reinterpret_cast<void**>(1);
    goto addr_41ca3d_174;
    addr_41c6ad_58:
    return 1;
    addr_41c61c_52:
    eax136 = fun_4435c2(ecx70, v23, edi118, esi119);
    edx137 = eax136;
    if ((eax136 == 32 || (eax138 = reinterpret_cast<uint32_t>(eax136 - 33), reinterpret_cast<int32_t>(eax138) >= reinterpret_cast<int32_t>(0)) && reinterpret_cast<int32_t>(eax138) < reinterpret_cast<int32_t>(63)) && (reinterpret_cast<signed char>(edx137) >= reinterpret_cast<signed char>(32) && (reinterpret_cast<signed char>(edx137) <= reinterpret_cast<signed char>(0x7f) && ((less139 = reinterpret_cast<int32_t>(g483598) < reinterpret_cast<int32_t>(23), less139) && (ecx140 = g4835a0, eax141 = fun_41c200(ecx140), eax141 < 0xb0))))) {
        ecx142 = g4835a0;
        ecx143 = (reinterpret_cast<unsigned char>(ecx142) * 4 - reinterpret_cast<unsigned char>(ecx142)) * 8;
        eax144 = g483598;
        esi145 = eax144 + 1;
        *reinterpret_cast<signed char*>(ecx143 + eax144 + 0x483450) = *reinterpret_cast<signed char*>(&edx137);
        g483598 = esi145;
        *reinterpret_cast<signed char*>(ecx143 + esi145 + 0x483450) = 0;
        goto addr_41c6ad_58;
    }
    addr_41c3b3_23:
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax27 + 4)) & 2) {
        eax146 = fun_43c1e0(eax27);
        edx25 = reinterpret_cast<void**>(0x7f);
        g4646bc = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax146) + 5);
        goto addr_41c510_30;
    }
    addr_41c396_25:
    g4646bc = eax56;
    goto addr_41c39b_21;
    addr_41c368_28:
    g4646bc = eax59;
    goto addr_41c36d_19;
}

void** fun_43c950(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** ebx10;
    void** v11;
    void** v12;
    void** edx13;
    void** v14;
    void** esi15;
    void** v16;
    void** edi17;
    void** v18;
    void** ebp19;
    void*** edx20;
    void*** eax21;
    void** ecx22;
    void** v23;
    void** eax24;
    void*** ebx25;
    void** edi26;
    void** ebp27;
    void** ecx28;
    void*** esi29;
    void*** edi30;
    void** eax31;
    uint32_t ecx32;
    int1_t zf33;
    int1_t zf34;
    void** esi35;
    int1_t zf36;
    void** eax37;
    void** edx38;

    v9 = ebx10;
    v11 = ecx;
    v12 = edx13;
    v14 = esi15;
    v16 = edi17;
    v18 = ebp19;
    edx20 = eax21;
    ecx22 = g60b9d4;
    v23 = reinterpret_cast<void**>(0);
    if (!ecx22) {
        eax24 = fun_43c050(ecx22, 0, v18, v16, v14, v12, v11, v9, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        v23 = reinterpret_cast<void**>(1);
    }
    ebx25 = g60b358;
    edi26 = g4775d4;
    ebp27 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi26) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi26 == 0))) {
        do {
            ecx28 = g4775d0;
            esi29 = ebx25;
            edi30 = edx20;
            eax31 = ecx28;
            ecx32 = reinterpret_cast<unsigned char>(ecx28) >> 2;
            zf33 = ecx32 == 0;
            do {
                if (!ecx32) 
                    break;
                --ecx32;
                *edi30 = *esi29;
                edi30 = edi30 + 4;
                esi29 = esi29 + 4;
            } while (!zf33);
            *reinterpret_cast<unsigned char*>(&ecx32) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax31) & 3);
            zf34 = *reinterpret_cast<unsigned char*>(&ecx32) == 0;
            do {
                if (!ecx32) 
                    break;
                --ecx32;
                *edi30 = *esi29;
                ++edi30;
                ++esi29;
            } while (!zf34);
            ++ebp27;
            eax24 = g4775d0;
            ecx22 = g60b9e8;
            esi35 = g4775d4;
            edx20 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx20) + reinterpret_cast<unsigned char>(eax24));
            ebx25 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebx25) + reinterpret_cast<unsigned char>(ecx22));
        } while (reinterpret_cast<signed char>(ebp27) < reinterpret_cast<signed char>(esi35));
    }
    if (v23) {
        zf36 = g60b9d4 == 0;
        if (!zf36) {
            g60b9d4 = reinterpret_cast<void**>(0);
            eax37 = g60b270;
            edx38 = *reinterpret_cast<void***>(eax37);
            eax24 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx38 + 0x80)(eax37, 0));
            g60b3a0 = eax24;
            if (eax24) {
                eax24 = fun_437a90(ecx22, "MegaUnlock: Unlock = %d", reinterpret_cast<unsigned char>(eax24) & 0xfff, eax37, 0, v23, v18, v16, v14);
            }
        } else {
            eax24 = fun_437a90(ecx22, "MegaUnlock: Not Locked!", v23, v18, v16, v14, v12, v11, v9);
        }
    }
    return eax24;
}

struct s613 {
    signed char[420] pad420;
    void** f1a4;
    signed char[7] pad428;
    int32_t* f1ac;
    int32_t f1b0;
};

struct s614 {
    signed char[420] pad420;
    int32_t f1a4;
};

struct s615 {
    signed char[101] pad101;
    int32_t f65;
};

void** fun_418800(void** ecx);

void fun_418a40(void** ecx) {
    struct s613* ebx2;
    struct s613* eax3;
    void** ecx4;
    struct s614* eax5;
    struct s615* edx6;
    struct s615* eax7;

    ebx2 = eax3;
    ecx4 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(eax5->f1a4 < 0) | reinterpret_cast<uint1_t>(eax5->f1a4 == 0))) {
        edx6 = eax7;
        do {
            if (ebx2->f1b0 && !*ebx2->f1ac) {
                edx6->f65 = 4;
            }
            fun_418800(ecx4);
            ++ecx4;
            ++edx6;
        } while (reinterpret_cast<signed char>(ecx4) < reinterpret_cast<signed char>(ebx2->f1a4));
    }
    ebx2->f1b0 = *ebx2->f1ac;
    return;
}

struct s616 {
    signed char[113] pad113;
    int32_t f71;
};

struct s617 {
    signed char[109] pad109;
    int32_t* f6d;
};

struct s618 {
    signed char[101] pad101;
    int32_t f65;
    signed char[4] pad109;
    int32_t* f6d;
    int32_t f71;
};

void fun_418c20(void** ecx) {
    struct s616* eax2;
    struct s617* eax3;
    struct s618* eax4;

    if (eax2->f71 && !*eax3->f6d) {
        eax4->f65 = 4;
    }
    fun_418800(ecx);
    eax4->f71 = *eax4->f6d;
    return;
}

struct s619 {
    signed char[101] pad101;
    int32_t f65;
};

void** fun_418800(void** ecx) {
    int1_t zf2;
    int1_t zf3;
    struct s619* eax4;
    struct s26* eax5;
    void** eax6;
    void** edx7;
    int32_t edi8;

    zf2 = g45973c == 0;
    if (zf2 && ((zf3 = g48ae9c == 0, !zf3) && eax4->f65)) {
        eax6 = fun_43f590(eax5);
    }
    edx7 = g45973c;
    edi8 = eax5->f65;
    g459ac8 = edx7;
    if (edi8) {
        eax5->f65 = edi8 - 1;
    }
    return eax6;
}

void** fun_416400(void** ecx);

void** fun_416580(void** ecx) {
    int32_t v2;
    int32_t ebx3;
    void** edx4;
    void** eax5;
    void** eax6;
    void** eax7;
    void** eax8;
    int1_t zf9;
    void** eax10;
    void** edx11;
    void** eax12;

    v2 = ebx3;
    edx4 = g481e14;
    if (reinterpret_cast<int1_t>(edx4 == 2)) {
        eax5 = fun_416270(ecx);
        return eax5;
    }
    if (!edx4) {
        eax6 = fun_415ac0(ecx);
        return eax6;
    }
    eax7 = g482a80;
    eax8 = eax7 - 1;
    if (reinterpret_cast<unsigned char>(eax8) <= reinterpret_cast<unsigned char>(3)) 
        goto addr_4165af_6;
    addr_416609_7:
    return eax8;
    addr_4165af_6:
    switch (eax8) {
    case 0:
        zf9 = g481258 == 0;
        if (zf9) {
            break;
        } else {
            break;
        }
    case 1:
        break;
    case 2:
        eax10 = fun_416400(ecx);
        return eax10;
    case 3:
    }
    eax12 = fun_434890(ecx, edx11, ecx);
    eax8 = fun_433a50(eax12, edx11, ecx, *reinterpret_cast<signed char*>(&v2));
    goto addr_416609_7;
}

void** fun_432d70(void** ecx);

void** fun_432f30(void** ecx);

void fun_432f60(void** ecx) {
    int32_t eax2;
    int1_t zf3;
    void** eax4;
    void** ecx5;
    int32_t edx6;
    void** eax7;
    void** edi8;
    int32_t ebp9;
    int32_t edi10;

    if (!eax2 || (zf3 = g45973c == 0, !zf3)) {
        eax4 = reinterpret_cast<void**>(1);
    } else {
        eax4 = reinterpret_cast<void**>(0);
    }
    ecx5 = g5f2754;
    g5f26bc = eax4;
    if (ecx5 || edx6) {
        eax7 = reinterpret_cast<void**>(1);
    } else {
        eax7 = reinterpret_cast<void**>(0);
    }
    g5f2754 = eax7;
    fun_432d70(ecx5);
    edi8 = g5f2754;
    g4669d8 = 1;
    if (edi8) {
        g5f2754 = reinterpret_cast<void**>(0);
        fun_432260(ebp9, edi10);
    }
    fun_432f30(ecx5);
    g4669d8 = 0;
    return;
}

int32_t g484d14 = 0xfc33943;

void** g484d1c = reinterpret_cast<void**>(0xff);

int32_t g484d20 = 0x33e9ffff;

struct s370* g487e14 = reinterpret_cast<struct s370*>(0x24348b5f);

void fun_42b790(void** ecx) {
    void** eax2;

    eax2 = g48aea4;
    g484d14 = 0x80000001;
    g484d18 = reinterpret_cast<struct s370*>(-1);
    g484d1c = eax2;
    g484d20 = 0x7fffffff;
    g487e14 = reinterpret_cast<struct s370*>(0x484d24);
    return;
}

void fun_42b640() {
}

struct s620 {
    signed char[6133038] pad6133038;
    int16_t f5d952e;
    signed char[1278] pad6134318;
    int16_t f5d9a2e;
};

void fun_42e690(void** ecx) {
    void** v2;
    void** v3;
    void** ebx4;
    void** v5;
    void** v6;
    void** edx7;
    void** v8;
    void** esi9;
    void** edx10;
    struct s620* eax11;
    struct s620* ebx12;
    int16_t dx13;
    void** eax14;
    void** eax15;

    v2 = reinterpret_cast<void**>(__return_address());
    v3 = ebx4;
    v5 = ecx;
    v6 = edx7;
    v8 = esi9;
    edx10 = g48aea4;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx10) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx10 == 0))) {
        eax11 = reinterpret_cast<struct s620*>(0);
        ebx12 = reinterpret_cast<struct s620*>(reinterpret_cast<unsigned char>(edx10) + reinterpret_cast<unsigned char>(edx10));
        do {
            eax11 = reinterpret_cast<struct s620*>(reinterpret_cast<uint32_t>(eax11) + 2);
            dx13 = *reinterpret_cast<int16_t*>(&g48ae98);
            eax11->f5d952e = dx13;
            eax11->f5d9a2e = -1;
        } while (reinterpret_cast<int32_t>(eax11) < reinterpret_cast<int32_t>(ebx12));
    }
    g5ee6b8 = reinterpret_cast<void**>(0x495330);
    g5ee6d0 = reinterpret_cast<void**>(0x5da6b0);
    fun_442b80(0x5da6b0, v8, v6, v5, v3, v2);
    eax14 = fun_411d60(0x5da6b0, v8, v6, v5, v3);
    g5ee6c4 = eax14;
    eax15 = fun_411d60(0x5da6b0, v8, v6, v5, v3);
    g5ee6c0 = eax15;
    g5ee6c0 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(eax15));
    return;
}

void fun_42fef0() {
    g5f12f8 = reinterpret_cast<struct s419*>(0x5eec68);
    return;
}

struct s621 {
    signed char[420] pad420;
    void** f1a4;
    signed char[3] pad424;
    int32_t f1a8;
};

struct s622 {
    signed char[428] pad428;
    void** f1ac;
};

void** fun_4189f0(void** ecx) {
    struct s621* ebx2;
    struct s621* eax3;
    void** eax4;
    struct s622* eax5;
    void** ecx6;

    ebx2 = eax3;
    eax4 = eax5->f1ac;
    if (*reinterpret_cast<void***>(eax4) && (ecx6 = reinterpret_cast<void**>(0), !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx2->f1a4) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx2->f1a4 == 0)))) {
        do {
            if (reinterpret_cast<int32_t>(ebx2->f1a8 - reinterpret_cast<unsigned char>(ecx6)) < reinterpret_cast<int32_t>(0)) {
            }
            ++ecx6;
            eax4 = fun_418730(ecx6);
        } while (reinterpret_cast<signed char>(ecx6) < reinterpret_cast<signed char>(ebx2->f1a4));
    }
    return eax4;
}

struct s623 {
    signed char[109] pad109;
    int32_t* f6d;
};

void** fun_418c00(void** ecx) {
    struct s623* eax2;
    void** eax3;

    if (*eax2->f6d) {
        eax3 = fun_418730(ecx);
    }
    return eax3;
}

void*** g5f27ac = reinterpret_cast<void***>(0);

void fun_4340f0(void* ecx, void** a2, void*** a3);

int32_t fun_4153c0(void** ecx, void** a2, void** a3) {
    void*** eax4;
    void** ebp5;
    void** edi6;
    void** esi7;
    int1_t zf8;
    int1_t zf9;
    int1_t zf10;
    int1_t zf11;
    void*** edx12;
    void* ebx13;

    eax4 = g5f27ac;
    g481de8 = eax4;
    fun_43c950(ecx, ecx, ebp5, edi6, esi7, __return_address(), a2, a3);
    zf8 = reinterpret_cast<int1_t>(g4775d4 == 0xf0);
    if (!zf8 || (zf9 = g482a68 == 0, zf9)) {
        zf10 = reinterpret_cast<int1_t>(g4775d4 == 0x1e0);
        if (!zf10 || (zf11 = g482a68 == 0, zf11)) {
            addr_4154bf_3:
            edx12 = g481de0;
            fun_4340f0(ebx13, ecx, edx12);
            return 0;
        } else {
            fun_442b80(ecx, ecx, ebp5, edi6, esi7, __return_address());
        }
    } else {
        fun_442b80(ecx, ecx, ebp5, edi6, esi7, __return_address());
    }
    fun_442b80(ecx, ecx, ebp5, edi6, esi7, __return_address());
    goto addr_4154bf_3;
}

void*** g60b9fc = reinterpret_cast<void***>(0);

int32_t g60b884 = 0;

void** fun_43c900(void** ecx) {
    int1_t zf2;
    void*** eax3;
    void** ebx4;
    void** eax5;

    zf2 = g60b89c == 0;
    if (zf2) {
        eax3 = g5f27a0;
        g60ba00 = eax3;
        g60ba04 = eax3;
        g60b9fc = eax3;
        g60b884 = 1;
        fun_42ce70(ecx, ebx4);
        eax5 = fun_43c290(ecx, ebx4);
    }
    return eax5;
}

struct s624 {
    unsigned char f0;
    signed char f1;
};

struct s624* fun_444875(void** ecx);

void** fun_444bb3(void** ecx);

int32_t g0;

void** fun_44459b(void** ecx, void** a2) {
    void* esp3;
    void*** esi4;
    void*** ebx5;
    void** v6;
    signed char* edi7;
    signed char* edx8;
    int32_t edx9;
    int32_t v10;
    struct s624* eax11;
    unsigned char al12;
    unsigned char v13;
    int32_t eax14;
    void** ecx15;
    uint32_t eax16;
    signed char v17;
    int32_t eax18;
    int32_t v19;
    int32_t v20;
    int32_t v21;
    void** eax22;
    void** v23;
    int32_t v24;
    uint32_t eax25;
    signed char v26;
    int32_t eax27;
    int32_t v28;
    int32_t eax29;
    void** eax30;
    void** v31;
    int32_t v32;
    int32_t v33;
    int32_t v34;
    int32_t eax35;
    int32_t v36;
    void** ebx37;
    void** edx38;
    void** edx39;
    void** edx40;
    void** edx41;
    void** ebx42;
    void** eax43;

    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 2 - 4 - 76);
    esi4 = ebx5;
    v6 = ecx;
    edi7 = edx8;
    while (*reinterpret_cast<signed char*>(&ecx) = *edi7, !!*reinterpret_cast<signed char*>(&ecx)) {
        edx9 = 0;
        *reinterpret_cast<signed char*>(&edx9) = *reinterpret_cast<signed char*>(&ecx);
        if (edx9 != 37) {
            ++edi7;
            v10();
            esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 + 4);
            continue;
        }
        eax11 = fun_444875(ecx);
        esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 + 4);
        al12 = eax11->f0;
        edi7 = &eax11->f1;
        v13 = al12;
        if (!al12) 
            break;
        eax14 = 0;
        *reinterpret_cast<unsigned char*>(&eax14) = v13;
        if (eax14 == 0x6e) 
            goto addr_4445f3_10;
        ecx15 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp3) + 72);
        fun_444bb3(ecx15);
        esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 + 4);
        eax16 = 0;
        if (!0 && (*reinterpret_cast<signed char*>(&eax16) = v17, eax16 == 32)) {
            while (eax18 = v19 - 1, v19 = eax18, eax18 >= 0) {
                v20(ecx15);
                esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 + 4);
            }
        }
        while (*reinterpret_cast<signed char*>(&v6 + 2)) {
            v21();
            esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 + 4);
        }
        while (eax22 = v23, ecx = eax22 + 0xffffffff, v23 = ecx, !!eax22) {
            v24();
            esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 + 4);
        }
        eax25 = 0;
        if (!0 && (*reinterpret_cast<signed char*>(&eax25) = v26, eax25 != 32)) {
            while (eax27 = v19 - 1, v19 = eax27, eax27 >= 0) {
                v28();
                esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 + 4);
            }
        }
        eax29 = 0;
        *reinterpret_cast<unsigned char*>(&eax29) = v13;
        if (eax29 == 0x73 || eax29 == 83) {
            if (1) {
                while (eax30 = v31, v31 = eax30 + 0xffffffff, !!eax30) {
                    v32();
                    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 + 4);
                }
            } else {
                while (eax30 = v31, ecx = eax30 + 0xffffffff, v31 = ecx, !!eax30) {
                    v33();
                    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 + 4);
                }
            }
        } else {
            while (eax30 = v31, ecx = eax30 + 0xffffffff, v31 = ecx, !!eax30) {
                v34();
                esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 + 4);
            }
        }
        if (1) 
            continue;
        if (v19 <= 0) 
            continue;
        while (eax35 = v19, v19 = eax35 - 1, !!eax35) {
            v36();
            esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 + 4);
        }
        continue;
        addr_4445f3_10:
        if (1) {
            if (!1) {
                if (1) {
                    if (1) {
                        ebx37 = *esi4 + 4;
                        *esi4 = ebx37;
                        edx38 = *reinterpret_cast<void***>(ebx37 + 0xfffffffc);
                    } else {
                        ecx = *esi4 + 4;
                        *esi4 = ecx;
                        edx38 = *reinterpret_cast<void***>(ecx + 0xfffffffc);
                    }
                    *reinterpret_cast<void***>(edx38) = reinterpret_cast<void**>(0);
                    continue;
                } else {
                    *esi4 = *esi4 + 8;
                    __asm__("les edx, [eax-0x8]");
                    *reinterpret_cast<int16_t*>(&g0) = 0;
                    continue;
                }
            }
            if (!1) 
                goto addr_4446c9_42;
        } else {
            edx39 = reinterpret_cast<void**>(0);
            *reinterpret_cast<signed char*>(&edx39) = 0;
            if (1) {
                if (1) {
                    edx40 = *esi4 + 4;
                    *esi4 = edx40;
                    edx41 = *reinterpret_cast<void***>(edx40 + 0xfffffffc);
                    goto addr_44463b_46;
                } else {
                    ebx42 = *esi4 + 4;
                    *esi4 = ebx42;
                    edx41 = *reinterpret_cast<void***>(ebx42 + 0xfffffffc);
                    goto addr_44463b_46;
                }
            } else {
                ecx = *esi4 + 8;
                *esi4 = ecx;
                __asm__("les edx, [ecx-0x8]");
                goto addr_444620_49;
            }
        }
        if (1) {
            ecx = *esi4 + 4;
            *esi4 = ecx;
            edx41 = *reinterpret_cast<void***>(ecx + 0xfffffffc);
        } else {
            eax43 = *esi4 + 4;
            *esi4 = eax43;
            edx41 = *reinterpret_cast<void***>(eax43 + 0xfffffffc);
        }
        addr_44463b_46:
        *reinterpret_cast<void***>(edx41) = reinterpret_cast<void**>(0);
        continue;
        addr_4446c9_42:
        edx39 = *esi4 + 8;
        *esi4 = edx39;
        __asm__("les edx, [edx-0x8]");
        addr_444620_49:
        *reinterpret_cast<void***>(edx39) = reinterpret_cast<void**>(0);
    }
    return 0;
}

void fun_44440c(int32_t ecx);

void** fun_44441f(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** esi12;
    void** eax13;
    void* eax14;

    eax13 = fun_44459b(fun_44440c, esi12);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax14) + reinterpret_cast<unsigned char>(eax13)) = 0;
    return eax13;
}

void** fun_442d91(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** v9;
    void** ebx10;
    void** v11;
    void** v12;
    void** edx13;
    void** ebx14;
    void** eax15;
    void** eax16;
    void** edx17;
    void** eax18;
    void** edx19;

    v8 = reinterpret_cast<void**>(__return_address());
    v9 = ebx10;
    v11 = ecx;
    v12 = edx13;
    ebx14 = eax15;
    image_base_();
    eax16 = g618348;
    while (eax16) {
        if (ebx14 == *reinterpret_cast<void***>(eax16 + 4)) 
            goto addr_442dac_4;
        eax16 = *reinterpret_cast<void***>(eax16);
    }
    edx17 = reinterpret_cast<void**>(0x618340);
    while (eax18 = *reinterpret_cast<void***>(edx17), !!eax18) {
        if (ebx14 == *reinterpret_cast<void***>(eax18 + 4)) 
            goto addr_442dde_9;
        edx17 = eax18;
    }
    fun_44515b(v12, v11, v9, v8, a2);
    image_base_();
    return 0;
    addr_442dde_9:
    *reinterpret_cast<void***>(edx17) = *reinterpret_cast<void***>(eax18);
    edx19 = g618348;
    g618348 = eax18;
    *reinterpret_cast<void***>(eax18) = edx19;
    addr_442dbe_12:
    image_base_();
    return ebx14;
    addr_442dac_4:
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax16 + 4) + 12)) & 3) {
        fun_443451(ecx, v12, v11, v9, v8, a2, a3, a4, a5, a6, a7);
        goto addr_442dbe_12;
    }
}

void fun_43ca20() {
    return;
}

struct s625 {
    signed char[4] pad4;
    unsigned char f4;
};

struct s625* g60b9d0 = reinterpret_cast<struct s625*>(0);

unsigned char* fun_43bac0() {
    struct s625* edx1;

    edx1 = g60b9d0;
    if (edx1) {
        return &edx1->f4;
    } else {
        return 0x60b9c8;
    }
}

void** g5f1360 = reinterpret_cast<void**>(0);

void** fun_41ac70(void** ecx);

void** fun_41acb0(void** ecx);

void** fun_430c80(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21) {
    void** eax22;
    void** v23;
    void** v24;
    void** v25;
    void** ebp26;
    void** esi27;
    void** ebx28;
    void** eax29;
    void** v30;
    void** v31;
    void** v32;
    void* esp33;
    int1_t zf34;
    void** v35;
    void** ebx36;
    int1_t zf37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** eax46;
    void** v47;
    void** v48;
    void** eax49;
    void** eax50;

    eax29 = fun_41d410(eax22, v23, v24, v25, ebp26, esi27, ecx, ebx28, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21);
    if (!eax29 && ((eax29 = fun_41d410(eax22, v30, v31, v32, ebp26, esi27, ecx, ebx28, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21), esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 12 - 4 + 4 - 4 + 4), !eax29) && (zf34 = g5f1360 == 0, !zf34))) {
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax22) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax22 == 0) || reinterpret_cast<signed char>(eax22) >= reinterpret_cast<signed char>(68)) {
            eax29 = fun_43bd40(eax22, "Bad music number %d", eax22, v35);
            esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp33) - 4 - 4 - 4 + 4 + 8);
        } else {
            ebx36 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(eax22) << 4) + 0x4654e8);
        }
        zf37 = ebx36 == g4654d4;
        if (!zf37) {
            fun_430bf0(eax22, v38, v39, v40, ebp26, esi27, ecx, ebx28, __return_address(), a2, a3, a4, a5);
            if (!*reinterpret_cast<void***>(ebx36 + 4)) {
                v41 = *reinterpret_cast<void***>(ebx36);
                fun_442b4a(eax22, reinterpret_cast<int32_t>(esp33) - 4 + 4 - 4 - 4 + 8, "d_%s", v41, v42, v43);
                eax46 = fun_4346d0(eax22, v44, v45);
                *reinterpret_cast<void***>(ebx36 + 4) = eax46;
            }
            eax49 = fun_4348a0(eax22, v47, v48);
            *reinterpret_cast<void***>(ebx36 + 8) = eax49;
            eax50 = fun_41ac70(eax22);
            *reinterpret_cast<void***>(ebx36 + 12) = eax50;
            eax29 = fun_41acb0(eax22);
            g4654d4 = ebx36;
        }
    }
    return eax29;
}

void** fun_443193(void** ecx) {
    void** v2;
    void** eax3;
    void** v4;
    void** edx5;
    void** ebp6;
    void** ebx7;
    int32_t ebx8;
    uint32_t edx9;
    void** v10;
    void** v11;
    void** ebp12;
    void** edi13;
    void** dl14;
    void* v15;
    void** eax16;
    void** v17;
    void** v18;
    void** edx19;
    void** ebx20;
    void** eax21;
    void** eax22;
    uint32_t eax23;
    void** eax24;
    void** eax25;
    void** v26;
    void** edx27;
    void** edi28;
    void** esi29;
    void* ebx30;
    void** v31;
    void** eax32;
    uint32_t ecx33;
    int1_t zf34;
    int1_t zf35;
    void** ecx36;
    void** edi37;
    void** ecx38;
    void** eax39;
    void** eax40;

    v2 = eax3;
    v4 = edx5;
    ebp6 = ecx;
    image_base_();
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx + 12)) & 1) {
        ebx7 = reinterpret_cast<void**>(ebx8 * edx9);
        if (ebx7) {
            if (!*reinterpret_cast<void***>(ecx + 8)) {
                fun_4458ec(ecx, v4, v2, v10, v11, ebp12, edi13);
            }
            dl14 = *reinterpret_cast<void***>(ebp6 + 12);
            v15 = reinterpret_cast<void*>(0);
            if (reinterpret_cast<unsigned char>(dl14) & 64) 
                goto addr_443205_6;
        } else {
            image_base_();
            eax16 = ebx7;
            goto addr_44338b_8;
        }
    } else {
        fun_44515b(v4, v2, v17, v18, ebp12);
        *reinterpret_cast<void***>(ecx + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx + 12)) | 32);
        image_base_();
        eax16 = reinterpret_cast<void**>(0);
        goto addr_44338b_8;
    }
    edx19 = v2;
    ebx20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx7) + reinterpret_cast<unsigned char>(edx19));
    do {
        if (*reinterpret_cast<void***>(ebp6 + 4)) 
            goto addr_44331a_12;
        eax21 = fun_445a98(ecx, v4);
        if (!eax21) 
            break;
        addr_44331a_12:
        eax22 = *reinterpret_cast<void***>(ebp6);
        ecx = *reinterpret_cast<void***>(ebp6 + 4) - 1;
        *reinterpret_cast<void***>(ebp6 + 4) = ecx;
        *reinterpret_cast<void***>(ebp6) = eax22 + 1;
        eax22 = *reinterpret_cast<void***>(eax22);
        eax23 = reinterpret_cast<unsigned char>(eax22) & 0xff;
        if (eax23 == 13) {
            if (*reinterpret_cast<void***>(ebp6 + 4)) 
                goto addr_443347_15;
            eax24 = fun_445a98(ecx, v4);
            if (!eax24) 
                break;
            addr_443347_15:
            eax25 = *reinterpret_cast<void***>(ebp6);
            *reinterpret_cast<void***>(ebp6 + 4) = *reinterpret_cast<void***>(ebp6 + 4) - 1;
            *reinterpret_cast<void***>(ebp6) = eax25 + 1;
            eax25 = *reinterpret_cast<void***>(eax25);
            eax23 = reinterpret_cast<unsigned char>(eax25) & 0xff;
        }
        if (eax23 == 26) 
            goto addr_4432c3_18;
        *reinterpret_cast<void***>(edx19) = *reinterpret_cast<void***>(&eax23);
        ++edx19;
        v15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v15) + 1);
    } while (edx19 != ebx20);
    addr_443377_20:
    image_base_();
    eax16 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v15) / reinterpret_cast<unsigned char>(v4));
    addr_44338b_8:
    return eax16;
    addr_4432c3_18:
    *reinterpret_cast<void***>(ebp6 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp6 + 12)) | 16);
    goto addr_443377_20;
    addr_443205_6:
    v26 = ebx7;
    while (1) {
        edx27 = *reinterpret_cast<void***>(ebp6 + 4);
        if (edx27) {
            if (reinterpret_cast<unsigned char>(edx27) > reinterpret_cast<unsigned char>(v26)) {
                edx27 = v26;
            }
            edi28 = v2;
            esi29 = *reinterpret_cast<void***>(ebp6);
            ebx30 = v15;
            v31 = edi28;
            eax32 = edx27;
            ecx33 = reinterpret_cast<unsigned char>(edx27) >> 2;
            zf34 = ecx33 == 0;
            do {
                if (!ecx33) 
                    break;
                --ecx33;
                *reinterpret_cast<void***>(edi28) = *reinterpret_cast<void***>(esi29);
                edi28 = edi28 + 4;
                esi29 = esi29 + 4;
            } while (!zf34);
            *reinterpret_cast<unsigned char*>(&ecx33) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax32) & 3);
            zf35 = *reinterpret_cast<unsigned char*>(&ecx33) == 0;
            do {
                if (!ecx33) 
                    break;
                --ecx33;
                *reinterpret_cast<void***>(edi28) = *reinterpret_cast<void***>(esi29);
                ++edi28;
                ++esi29;
            } while (!zf35);
            ecx36 = *reinterpret_cast<void***>(ebp6);
            v2 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) + reinterpret_cast<unsigned char>(edx27));
            v15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx30) + reinterpret_cast<unsigned char>(edx27));
            edi37 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp6 + 4)) - reinterpret_cast<unsigned char>(edx27));
            *reinterpret_cast<void***>(ebp6) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx36) + reinterpret_cast<unsigned char>(edx27));
            v26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v26) - reinterpret_cast<unsigned char>(edx27));
            *reinterpret_cast<void***>(ebp6 + 4) = edi37;
        }
        ecx38 = v26;
        if (!ecx38) 
            goto addr_443377_20;
        if (reinterpret_cast<unsigned char>(ecx38) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp6 + 20)) || *reinterpret_cast<unsigned char*>(ebp6 + 13) & 4) {
            *reinterpret_cast<void***>(ebp6 + 4) = reinterpret_cast<void**>(0);
            *reinterpret_cast<unsigned char*>(&ecx38) = *reinterpret_cast<unsigned char*>(ebp6 + 13);
            *reinterpret_cast<void***>(ebp6) = *reinterpret_cast<void***>(ebp6 + 8);
            if (!(*reinterpret_cast<unsigned char*>(&ecx38) & 4) && reinterpret_cast<unsigned char>(v26) > reinterpret_cast<unsigned char>(0x200)) {
            }
            eax39 = fun_445963(ecx38);
            if (reinterpret_cast<int1_t>(eax39 == 0xffffffff)) 
                break;
            if (!eax39) 
                goto addr_4432c3_18;
            v2 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v2) + reinterpret_cast<unsigned char>(eax39));
            v26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v26) - reinterpret_cast<unsigned char>(eax39));
            v15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v15) + reinterpret_cast<unsigned char>(eax39));
        } else {
            eax40 = fun_445a98(ecx38, v4);
            if (!eax40) 
                goto addr_443377_20;
        }
    }
    *reinterpret_cast<void***>(ebp6 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp6 + 12)) | 32);
    goto addr_443377_20;
}

/* (image base) */
int32_t image_base_ = 0x442fdb;

int32_t g477b10 = 0;

struct s626 {
    signed char[87] pad87;
    signed char f57;
};

struct s627 {
    signed char[87] pad87;
    signed char f57;
};

void** fun_442ff4(void** ecx) {
    int1_t zf2;
    struct s535* ebx3;
    struct s535* eax4;
    void** eax5;
    struct s626* esi6;
    struct s627* esi7;
    void** tmp32_8;
    int1_t cf9;
    uint32_t ecx10;
    void** eax11;
    void** esi12;
    void** edi13;
    void** edx14;
    void** ecx15;
    void** esi16;
    void** edi17;
    void** ebx18;

    image_base_();
    image_base_();
    zf2 = g477b10 == 0;
    if (!zf2) {
        g477b10();
    }
    ebx3 = eax4;
    fun_447d8a();
    fun_448223();
    image_base_();
    eax5 = fun_449d7e(ebx3);
    esi6->f57 = reinterpret_cast<signed char>(esi7->f57 - 1);
    if (!eax5 || ((tmp32_8 = eax5 + 7, cf9 = reinterpret_cast<unsigned char>(tmp32_8) < reinterpret_cast<unsigned char>(eax5), eax5 = tmp32_8, cf9) || (*reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax5) & 0xfc), ecx10 = reinterpret_cast<unsigned char>(ecx) - (reinterpret_cast<unsigned char>(ecx) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(ecx) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ecx) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax5) >= reinterpret_cast<unsigned char>(12))))), eax5 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(eax5) - reinterpret_cast<unsigned char>(12) & ecx10) + reinterpret_cast<unsigned char>(12)), reinterpret_cast<unsigned char>(eax5) > reinterpret_cast<unsigned char>(ebx3->f14)))) {
        addr_44549f_6:
        eax11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax5) - reinterpret_cast<unsigned char>(eax5));
    } else {
        esi12 = ebx3->fc;
        edi13 = ebx3->f10;
        if (reinterpret_cast<unsigned char>(eax5) <= reinterpret_cast<unsigned char>(edi13)) {
            esi12 = ebx3->f28;
            edi13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi13) - reinterpret_cast<unsigned char>(edi13));
        }
        do {
            if (reinterpret_cast<unsigned char>(eax5) <= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi12))) 
                goto addr_4454a3_10;
            ecx10 = ecx10 - (ecx10 + reinterpret_cast<uint1_t>(ecx10 < ecx10 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(edi13) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi12)))));
            edi13 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(edi13) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi12)) & ecx10) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi12)));
            esi12 = *reinterpret_cast<void***>(esi12 + 8);
        } while (!reinterpret_cast<int1_t>(esi12 == &ebx3->f20));
        goto addr_44549c_12;
    }
    addr_4454ee_13:
    return eax11;
    addr_4454a3_10:
    edx14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi12)) - reinterpret_cast<unsigned char>(eax5));
    ebx3->f10 = edi13;
    ebx3->f18 = ebx3->f18 + 1;
    ecx15 = *reinterpret_cast<void***>(esi12 + 8);
    if (reinterpret_cast<unsigned char>(edx14) < reinterpret_cast<unsigned char>(12)) {
        ebx3->f1c = ebx3->f1c - 1;
        esi16 = *reinterpret_cast<void***>(esi12 + 4);
        *reinterpret_cast<void***>(esi16 + 8) = ecx15;
        *reinterpret_cast<void***>(ecx15 + 4) = esi16;
        ebx3->fc = esi16;
        esi12 = esi12;
    } else {
        edi17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi12) + reinterpret_cast<unsigned char>(eax5));
        ebx3->fc = edi17;
        *reinterpret_cast<void***>(edi17) = edx14;
        *reinterpret_cast<void***>(esi12) = eax5;
        ebx18 = *reinterpret_cast<void***>(esi12 + 4);
        *reinterpret_cast<void***>(edi17 + 4) = ebx18;
        *reinterpret_cast<void***>(edi17 + 8) = ecx15;
        *reinterpret_cast<void***>(ebx18 + 8) = edi17;
        *reinterpret_cast<void***>(ecx15 + 4) = edi17;
    }
    *reinterpret_cast<void***>(esi12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi12)) | 1);
    eax11 = esi12 + 4;
    goto addr_4454ee_13;
    addr_44549c_12:
    ebx3->f14 = edi13;
    goto addr_44549f_6;
}

void** fun_412bf0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35, void** a36, void** a37, void** a38, void** a39, void** a40, void** a41, void** a42, void** a43, void** a44) {
    void** v45;
    void** v46;
    void** ebx47;
    void** v48;
    void** v49;
    void** edx50;
    void** v51;
    void** esi52;
    void** v53;
    void** edi54;
    void** v55;
    void** ebp56;
    void* esp57;
    void** edi58;
    void** edx59;
    void** eax60;
    void** ebx61;
    void** edx62;
    void** eax63;
    void* esp64;
    void** v65;
    void** v66;
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
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** eax102;
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
    void* eax118;
    void* esi119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** eax130;
    void** v131;
    void** edi132;
    void** v133;
    void** v134;
    void** v135;
    void** v136;
    void** v137;
    void* esp138;
    void** ebx139;
    int32_t ebp140;
    void** ecx141;
    void* eax142;
    void* ebx143;
    void* ecx144;
    void** edx145;
    void** ecx146;
    void** ecx147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** v154;
    void** v155;
    void** v156;
    void** eax157;
    void** v158;
    void** v159;
    void** v160;
    void** v161;
    void** v162;
    void* esp163;
    void** eax164;
    void* edi165;
    void** ebx166;
    void** v167;
    void* eax168;
    void** ecx169;
    void* v170;
    void** ecx171;
    void** edx172;
    void*** edx173;
    void* edx174;
    void* ebp175;
    void* eax176;
    void** edi177;
    int32_t* esi178;
    void** edx179;
    void** v180;
    void** v181;
    void** v182;
    void** v183;
    void** v184;
    void** v185;
    void** v186;
    void** v187;
    void** v188;
    void** v189;
    void** v190;
    void** v191;
    void** v192;
    void** ecx193;
    void* ebx194;
    void** eax195;
    void** v196;
    void** v197;
    void** v198;
    void** v199;
    void** v200;
    void** v201;
    void** v202;
    void** v203;
    void** v204;
    void** v205;
    void** v206;
    void** v207;
    void** v208;
    void** v209;
    void** edi210;

    v45 = reinterpret_cast<void**>(__return_address());
    v46 = ebx47;
    v48 = ecx;
    v49 = edx50;
    v51 = esi52;
    v53 = edi54;
    v55 = ebp56;
    esp57 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 92);
    edi58 = reinterpret_cast<void**>(1);
    edx59 = g4835f4;
    if (reinterpret_cast<signed char>(edx59) <= reinterpret_cast<signed char>(1)) {
        addr_412e04_2:
        return eax60;
    } else {
        eax60 = reinterpret_cast<void**>(4);
        ebx61 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx59) * 4);
        do {
            edx62 = g4835f8;
            if (**reinterpret_cast<signed char**>(reinterpret_cast<unsigned char>(edx62) + reinterpret_cast<unsigned char>(eax60)) == 64) 
                break;
            eax60 = eax60 + 4;
            ++edi58;
        } while (reinterpret_cast<signed char>(eax60) < reinterpret_cast<signed char>(ebx61));
        goto addr_412e04_2;
    }
    eax63 = fun_442d87(ecx);
    esp64 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp57) - 4 + 4);
    if (!eax63) {
        fun_440840(ecx, "\nNo such response file!", v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78);
        fun_442fdc(ecx, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, v92, v93, v94, v95, v96, v97, v98, v99, v100, v101, v55, v53, v51, v49, v48, v46, v45, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44);
        esp64 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp64) - 4 - 4 + 4 + 4 - 4 + 4);
    }
    eax102 = g4835f8;
    v103 = *reinterpret_cast<void***>(eax102 + reinterpret_cast<unsigned char>(edi58) * 4) + 1;
    fun_440840(ecx, "Found response file %s!\n", v103, v104, v105, v106, v107, v108, v109, v110, v111, v112, v113, v114, v115, v116);
    fun_44305b(ecx, v117);
    eax118 = fun_44314f(ecx);
    esi119 = eax118;
    fun_44305b(eax63, v120);
    eax130 = fun_442e73(eax63, v121, v122, v123, v124, v125, v126, v127, v128, v129);
    v131 = eax130;
    fun_443193(eax63);
    edi132 = edi58 + 1;
    fun_443392(eax63, v133, v134, v135, v136, v137);
    esp138 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp64) - 4 - 4 - 4 + 4 + 8 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4);
    ebx139 = g4835f4;
    ebp140 = 0;
    if (reinterpret_cast<signed char>(edi132) < reinterpret_cast<signed char>(ebx139)) {
        ecx141 = g4835f4;
        eax142 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi132) * 4);
        ebx143 = reinterpret_cast<void*>(0);
        ecx144 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx141) * 4);
        do {
            edx145 = g4835f8;
            eax142 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax142) + 4);
            ebx143 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx143) + 4);
            ++ebp140;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp138) + reinterpret_cast<int32_t>(ebx143) - 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx145) + reinterpret_cast<uint32_t>(eax142) + 0xfffffffc);
        } while (reinterpret_cast<int32_t>(eax142) < reinterpret_cast<int32_t>(ecx144));
    }
    ecx146 = g4835f8;
    ecx147 = *reinterpret_cast<void***>(ecx146);
    eax157 = fun_442e73(ecx147, v148, v149, v150, v151, v152, v153, v154, v155, v156);
    g4835f8 = eax157;
    fun_442b80(ecx147, v158, v159, v160, v161, v162);
    esp163 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp138) - 4 + 4 - 4 + 4);
    eax164 = g4835f8;
    edi165 = reinterpret_cast<void*>(4);
    *reinterpret_cast<void***>(eax164) = ecx147;
    ebx166 = reinterpret_cast<void**>(1);
    v167 = v131;
    eax168 = reinterpret_cast<void*>(0);
    do {
        ecx169 = g4835f8;
        v170 = edi165;
        ++ebx166;
        edi165 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi165) + 4);
        ecx171 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx169) + reinterpret_cast<uint32_t>(v170));
        edx172 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v167) + reinterpret_cast<uint32_t>(eax168));
        *reinterpret_cast<void***>(ecx171) = edx172;
        if (reinterpret_cast<int32_t>(eax168) < reinterpret_cast<int32_t>(esi119)) {
            do {
                (&ecx171)[1] = *reinterpret_cast<void***>(edx172);
                if (reinterpret_cast<signed char>((&ecx171)[1]) < reinterpret_cast<signed char>(33)) 
                    break;
            } while (reinterpret_cast<signed char>((&ecx171)[1]) <= reinterpret_cast<signed char>(0x7a) && (eax168 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax168) + 1), ++edx172, reinterpret_cast<int32_t>(eax168) < reinterpret_cast<int32_t>(esi119)));
        }
        edx173 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v167) + reinterpret_cast<uint32_t>(eax168));
        *edx173 = reinterpret_cast<void**>(0);
        if (reinterpret_cast<int32_t>(eax168) < reinterpret_cast<int32_t>(esi119)) {
            do {
                (&ecx171)[1] = *edx173;
                if (reinterpret_cast<signed char>((&ecx171)[1]) <= reinterpret_cast<signed char>(32)) 
                    continue;
                if (reinterpret_cast<signed char>((&ecx171)[1]) <= reinterpret_cast<signed char>(0x7a)) 
                    break;
                eax168 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax168) + 1);
                ++edx173;
            } while (reinterpret_cast<int32_t>(eax168) < reinterpret_cast<int32_t>(esi119));
        }
    } while (reinterpret_cast<int32_t>(eax168) < reinterpret_cast<int32_t>(esi119));
    if (!(reinterpret_cast<uint1_t>(ebp140 < 0) | reinterpret_cast<uint1_t>(ebp140 == 0))) {
        edx174 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx166) * 4);
        ebp175 = reinterpret_cast<void*>(ebp140 * 4);
        eax176 = reinterpret_cast<void*>(0);
        do {
            edi177 = g4835f8;
            eax176 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax176) + 4);
            ++ebx166;
            esi178 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edx174) + reinterpret_cast<unsigned char>(edi177));
            edx174 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx174) + 4);
            *esi178 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp163) + reinterpret_cast<int32_t>(eax176) - 4);
        } while (reinterpret_cast<int32_t>(eax176) < reinterpret_cast<int32_t>(ebp175));
    }
    edx179 = reinterpret_cast<void**>(1);
    g4835f4 = ebx166;
    eax60 = fun_440840(ecx171, "%d command-line args:\n", ebx166, v180, v181, v182, v183, v184, v185, v186, v187, v188, v189, v190, v191, v192);
    ecx193 = g4835f4;
    if (reinterpret_cast<signed char>(ecx193) > reinterpret_cast<signed char>(1)) {
        ebx194 = reinterpret_cast<void*>(4);
        while (eax195 = g4835f8, v196 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebx194) + reinterpret_cast<unsigned char>(eax195)), ebx194 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx194) + 4), ++edx179, eax60 = fun_440840(ecx193, "%s\n", v196, v197, v198, v199, v200, v201, v202, v203, v204, v205, v206, v207, v208, v209), edi210 = g4835f4, reinterpret_cast<signed char>(edx179) < reinterpret_cast<signed char>(edi210)) {
        }
        goto addr_412e04_2;
    }
}

int32_t g480a20 = 0x89000242;

int32_t g450104 = 0x61666564;

int32_t g480a24 = 0x48006481;

int32_t g450108 = 0x2e746c75;

int32_t g480a28 = 0xafb8300;

int32_t g45010c = 0x676663;

int32_t g60b6e0 = 0;

struct s628 {
    signed char f0;
    signed char f1;
};

void** fun_412700(void** ecx) {
    void** v2;
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** eax30;
    void** v31;
    void** v32;
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
    void** eax59;
    void** v60;
    void** v61;
    void** v62;
    int32_t v63;
    int32_t v64;
    void* v65;
    void** ecx66;
    void** v67;
    void** v68;
    void** v69;
    int32_t v70;
    int32_t v71;
    void* v72;
    int32_t* edi73;
    void** v74;
    void** v75;
    void** v76;
    int32_t v77;
    int32_t v78;
    void* v79;
    int32_t* esi80;
    void** v81;
    void** v82;
    void** v83;
    int32_t v84;
    int32_t v85;
    void* v86;
    void** eax87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
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
    void** eax116;
    void** eax117;
    int1_t zf118;
    void** v119;
    void** v120;
    void** v121;
    int32_t v122;
    int32_t v123;
    void* v124;
    void** ecx125;
    int32_t* edi126;
    void** v127;
    void** v128;
    void** v129;
    int32_t v130;
    int32_t v131;
    void* v132;
    int32_t* esi133;
    void** v134;
    void** v135;
    void** v136;
    int32_t v137;
    int32_t v138;
    void* v139;
    void** eax140;
    int1_t zf141;
    int32_t eax142;
    void** ecx143;
    void** v144;
    void** v145;
    void** v146;
    int32_t v147;
    int32_t v148;
    void* v149;
    int32_t* edi150;
    void** v151;
    void** v152;
    void** v153;
    int32_t v154;
    int32_t v155;
    void* v156;
    int32_t* esi157;
    void** v158;
    void** v159;
    void** v160;
    int32_t v161;
    int32_t v162;
    void* v163;
    void** eax164;
    void** v165;
    void** v166;
    void** v167;
    void** v168;
    void** v169;
    void** v170;
    void** v171;
    void** v172;
    void** v173;
    void** v174;
    void** v175;
    void** v176;
    void** v177;
    void** v178;
    void** v179;
    void** v180;
    void** v181;
    void** v182;
    void** v183;
    void** v184;
    void** v185;
    void** v186;
    void** v187;
    void** v188;
    void** v189;
    void** v190;
    void** v191;
    void** v192;
    void** eax193;
    void** v194;
    void** v195;
    void** v196;
    void** v197;
    int32_t eax198;
    void** v199;
    void** v200;
    void** v201;
    void** v202;
    int32_t eax203;
    void** v204;
    void** v205;
    void** v206;
    void** v207;
    int32_t eax208;
    void** v209;
    void** v210;
    void** v211;
    void** v212;
    int32_t eax213;
    void** v214;
    void** v215;
    void** v216;
    void** v217;
    int32_t eax218;
    void** v219;
    void** v220;
    void** v221;
    void** v222;
    int32_t eax223;
    void** v224;
    void** v225;
    int32_t v226;
    int32_t v227;
    void** v228;
    void** v229;
    void** v230;
    int32_t v231;
    int32_t v232;
    void* v233;
    int32_t v234;
    int32_t v235;
    int32_t v236;
    int32_t v237;
    int32_t v238;
    int32_t v239;
    void** eax240;
    void** v241;
    void** v242;
    void** v243;
    int32_t v244;
    int32_t v245;
    void* v246;
    int32_t v247;
    int32_t v248;
    int32_t v249;
    int32_t v250;
    int32_t v251;
    int32_t v252;
    void** eax253;
    void** v254;
    void** v255;
    void** v256;
    int32_t v257;
    int32_t v258;
    void* v259;
    int32_t v260;
    int32_t v261;
    int32_t v262;
    int32_t v263;
    int32_t v264;
    int32_t v265;
    void** eax266;
    void** v267;
    void** v268;
    void** v269;
    int32_t v270;
    int32_t v271;
    void* v272;
    int32_t v273;
    int32_t v274;
    int32_t v275;
    int32_t v276;
    int32_t v277;
    int32_t v278;
    void** eax279;
    void** v280;
    void** v281;
    void** v282;
    int32_t v283;
    int32_t v284;
    void* v285;
    int32_t v286;
    int32_t v287;
    int32_t v288;
    int32_t v289;
    int32_t v290;
    int32_t v291;
    void** eax292;
    void** v293;
    void** v294;
    void** v295;
    void** v296;
    void** v297;
    void** v298;
    void** v299;
    void** v300;
    void** v301;
    void** v302;
    void** v303;
    void** v304;
    void** v305;
    void** v306;
    int32_t v307;
    int32_t v308;
    int32_t v309;
    int32_t v310;
    int32_t v311;
    int32_t v312;
    int32_t v313;
    int32_t v314;
    int32_t v315;
    int32_t v316;
    int32_t v317;
    int32_t v318;
    int32_t v319;
    int32_t v320;
    void** v321;
    void** v322;
    void** v323;
    int32_t v324;
    int32_t v325;
    void* v326;
    int32_t v327;
    int32_t v328;
    int32_t v329;
    int32_t v330;
    int32_t v331;
    int32_t v332;
    void** eax333;
    void** esi334;
    struct s628* esi335;
    signed char al336;
    signed char al337;
    uint32_t eax338;
    uint32_t eax339;
    uint32_t eax340;
    uint32_t eax341;
    uint32_t eax342;
    uint32_t eax343;
    void** v344;
    void** v345;
    void** v346;
    void** v347;
    void** v348;
    int32_t v349;
    int32_t v350;
    void* v351;
    void** eax352;
    void** v353;
    void** v354;
    void** v355;
    int32_t v356;
    int32_t v357;
    void* v358;
    void** eax359;
    void** v360;
    void** v361;
    void** v362;
    int32_t v363;
    int32_t v364;
    void* v365;
    void** eax366;
    void** v367;
    void** v368;
    void** v369;
    int32_t v370;
    int32_t v371;
    void* v372;
    void** eax373;
    void** v374;
    void** v375;
    void** v376;
    int32_t v377;
    int32_t v378;
    void* v379;
    void** eax380;
    void** v381;
    void** v382;
    void** v383;
    void** v384;
    void** v385;
    void** v386;
    void** v387;
    void** v388;
    void** v389;
    void** v390;
    void** v391;
    void** v392;
    void** v393;
    void** v394;
    void** v395;
    void** v396;
    void** v397;
    int32_t v398;
    int32_t v399;
    void* v400;
    void** eax401;

    g480a20 = g450104;
    g480a24 = g450108;
    g480a28 = g45010c;
    eax30 = fun_41d410("plutonia.wad", v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29);
    if (!eax30) {
        eax59 = fun_41d410("plutonia.wad", v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58);
        if (eax59) {
            g481258 = reinterpret_cast<void**>(1);
            g481254 = reinterpret_cast<void**>(1);
            fun_412690("plutonia.wad", v60, v61, v62, v63, v64, v65);
            ecx66 = reinterpret_cast<void**>(6);
            fun_412690(6, v67, v68, v69, v70, v71, v72);
            edi73 = reinterpret_cast<int32_t*>(0x480a20);
            fun_412690(6, v74, v75, v76, v77, v78, v79);
            esi80 = reinterpret_cast<int32_t*>("e:/users/id/default.cfg");
            eax87 = fun_412690(6, v81, v82, v83, v84, v85, v86);
            while (ecx66) {
                --ecx66;
                *edi73 = *esi80;
                ++edi73;
                ++esi80;
            }
            return eax87;
        }
        eax116 = fun_41d410("plutonia.wad", v88, v89, v90, v91, v92, v93, v94, v95, v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107, v108, v109, v110, v111, v112, v113, v114, v115);
        if (eax116) {
            eax117 = g48125c;
            g481264 = reinterpret_cast<void**>(1);
            g481254 = reinterpret_cast<void**>(1);
            if (!eax117) {
                zf118 = g48124c == 0;
                if (zf118) {
                }
            }
            fun_412690("plutonia.wad", v119, v120, v121, v122, v123, v124);
            ecx125 = reinterpret_cast<void**>(6);
            edi126 = reinterpret_cast<int32_t*>(0x480a20);
            fun_412690(6, v127, v128, v129, v130, v131, v132);
            esi133 = reinterpret_cast<int32_t*>("e:/users/id/default.cfg");
            eax140 = fun_412690(6, v134, v135, v136, v137, v138, v139);
            while (ecx125) {
                --ecx125;
                *edi126 = *esi133;
                ++edi126;
                ++esi133;
            }
            return eax140;
        }
        zf141 = g60b6e0 == 0;
        if (zf141) 
            goto addr_4128b3_27;
        eax142 = fun_43d330("plutonia.wad");
        if (eax142) 
            goto addr_4128eb_29;
    } else {
        ecx143 = reinterpret_cast<void**>(6);
        g481258 = reinterpret_cast<void**>(0);
        g481250 = reinterpret_cast<void**>(1);
        g481254 = reinterpret_cast<void**>(1);
        fun_412690(6, v144, v145, v146, v147, v148, v149);
        edi150 = reinterpret_cast<int32_t*>(0x480a20);
        fun_412690(6, v151, v152, v153, v154, v155, v156);
        esi157 = reinterpret_cast<int32_t*>("e:/users/id/default.cfg");
        eax164 = fun_412690(6, v158, v159, v160, v161, v162, v163);
        while (ecx143) {
            --ecx143;
            *edi150 = *esi157;
            ++edi150;
            ++esi157;
        }
        goto addr_412bc6_34;
    }
    addr_4128b3_27:
    eax193 = fun_41d410("plutonia.wad", v165, v166, v167, v168, v169, v170, v171, v172, v173, v174, v175, v176, v177, v178, v179, v180, v181, v182, v183, v184, v185, v186, v187, v188, v189, v190, v191, v192);
    if (!eax193) {
        addr_412a4f_35:
        eax198 = fun_442fa9("plutonia.wad", v194, v195, v196, v197);
        if (eax198) {
            eax203 = fun_442fa9("plutonia.wad", v199, v200, v201, v202);
            if (eax203) {
                eax208 = fun_442fa9("plutonia.wad", v204, v205, v206, v207);
                if (eax208) {
                    eax213 = fun_442fa9("plutonia.wad", v209, v210, v211, v212);
                    if (eax213) {
                        eax218 = fun_442fa9("plutonia.wad", v214, v215, v216, v217);
                        if (eax218) {
                            eax223 = fun_442fa9("plutonia.wad", v219, v220, v221, v222);
                            if (eax223) {
                                eax164 = fun_43bd40("plutonia.wad", "Game mode indeterminate\n", v224, v225, "plutonia.wad", "Game mode indeterminate\n", v226, v227);
                            } else {
                                g481250 = reinterpret_cast<void**>(1);
                                eax240 = fun_412690("plutonia.wad", v228, v229, v230, v231, v232, v233, "plutonia.wad", v234, v235, v236, v237, v238, v239);
                                return eax240;
                            }
                        } else {
                            g481258 = reinterpret_cast<void**>(1);
                            eax253 = fun_412690("plutonia.wad", v241, v242, v243, v244, v245, v246, "plutonia.wad", v247, v248, v249, v250, v251, v252);
                            return eax253;
                        }
                    } else {
                        g481264 = reinterpret_cast<void**>(1);
                        g48124c = reinterpret_cast<void**>(1);
                        eax266 = fun_412690(1, v254, v255, v256, v257, v258, v259, 1, v260, v261, v262, v263, v264, v265);
                        return eax266;
                    }
                } else {
                    g481264 = reinterpret_cast<void**>(1);
                    g48125c = reinterpret_cast<void**>(1);
                    eax279 = fun_412690("plutonia.wad", v267, v268, v269, v270, v271, v272, "plutonia.wad", v273, v274, v275, v276, v277, v278);
                    return eax279;
                }
            } else {
                g481264 = reinterpret_cast<void**>(1);
                eax292 = fun_412690("plutonia.wad", v280, v281, v282, v283, v284, v285, "plutonia.wad", v286, v287, v288, v289, v290, v291);
                return eax292;
            }
        } else {
            g481264 = reinterpret_cast<void**>(1);
            g481260 = reinterpret_cast<void**>(1);
            fun_440840("plutonia.wad", "French version\n", v293, v294, v295, v296, v297, v298, v299, v300, v301, v302, v303, v304, v305, v306, "plutonia.wad", "French version\n", v307, v308, v309, v310, v311, v312, v313, v314, v315, v316, v317, v318, v319, v320);
            eax333 = fun_412690("plutonia.wad", v321, v322, v323, v324, v325, v326, "plutonia.wad", v327, v328, v329, v330, v331, v332);
            return eax333;
        }
    } else {
        esi334 = g4835f8;
        esi335 = *reinterpret_cast<struct s628**>(reinterpret_cast<uint32_t>(esi334 + reinterpret_cast<unsigned char>(eax193) * 4) + 4);
        do {
            al336 = esi335->f0;
            if (!al336) 
                break;
            al337 = esi335->f1;
            ++esi335;
        } while (al337);
        goto addr_4128eb_29;
    }
    addr_412bc6_34:
    return eax164;
    addr_4128eb_29:
    eax338 = fun_442f62("plutonia.wad");
    if (eax338) {
        eax339 = fun_442f62("plutonia.wad");
        if (eax339) {
            eax340 = fun_442f62("plutonia.wad");
            if (eax340) {
                eax341 = fun_442f62("plutonia.wad");
                if (eax341) {
                    eax342 = fun_442f62("plutonia.wad");
                    if (eax342) {
                        eax343 = fun_442f62("plutonia.wad");
                        if (eax343) {
                            fun_43bd40("plutonia.wad", "Unable to locate the WAD file for your game!", v344, v345);
                            goto addr_412a4f_35;
                        } else {
                            g481250 = reinterpret_cast<void**>(1);
                            eax352 = fun_412690(1, v346, v347, v348, v349, v350, v351);
                            return eax352;
                        }
                    } else {
                        g481258 = reinterpret_cast<void**>(1);
                        eax359 = fun_412690("plutonia.wad", v353, v354, v355, v356, v357, v358);
                        return eax359;
                    }
                } else {
                    g481264 = reinterpret_cast<void**>(1);
                    g48124c = reinterpret_cast<void**>(1);
                    eax366 = fun_412690("plutonia.wad", v360, v361, v362, v363, v364, v365);
                    return eax366;
                }
            } else {
                g481264 = reinterpret_cast<void**>(1);
                g48125c = reinterpret_cast<void**>(1);
                eax373 = fun_412690("plutonia.wad", v367, v368, v369, v370, v371, v372);
                return eax373;
            }
        } else {
            g481264 = reinterpret_cast<void**>(1);
            eax380 = fun_412690("plutonia.wad", v374, v375, v376, v377, v378, v379);
            return eax380;
        }
    } else {
        g481264 = reinterpret_cast<void**>(1);
        g481260 = reinterpret_cast<void**>(1);
        fun_440840(1, "French version\n", v381, v382, v383, v384, v385, v386, v387, v388, v389, v390, v391, v392, v393, v394);
        eax401 = fun_412690(1, v395, v396, v397, v398, v399, v400);
        return eax401;
    }
}

int32_t fun_4434fc(void** ecx, void** a2) {
    int32_t edx3;
    void** ebx4;
    int32_t eax5;

    if (!edx3) {
    }
    eax5 = fun_445bc2(0x1000, ecx, ebx4, __return_address(), a2);
    return eax5;
}

