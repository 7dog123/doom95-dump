void fun_424370(void** ecx);

void** fun_430f50(void** ecx);

void** fun_42af50(void** ecx);

struct s67 {
    int32_t f0;
    int32_t f4;
};

struct s68 {
    int32_t f0;
    int32_t f4;
};

struct s69 {
    int32_t f0;
    int16_t f4;
};

struct s70 {
    int32_t f0;
    int16_t f4;
};

void** fun_4252a0(void** ecx) {
    struct s65* eax2;
    struct s66* eax3;
    void** eax4;
    void* ebx5;
    struct s67* esi6;
    struct s68* edi7;
    uint32_t eax8;
    struct s69* edi9;
    struct s70* esi10;
    void* eax11;
    void* esi12;

    if (!(eax2->f68 & 1) || (eax3->f6a & 2 || (eax3->f58 == 56 || eax3->f58 == 58))) {
        addr_42530b_2:
        fun_424370(ecx);
        fun_430f50(ecx);
        eax4 = fun_42af50(ecx);
        return eax4;
    } else {
        ebx5 = g4844e4;
        esi6 = reinterpret_cast<struct s67*>(&eax3->f8c);
        edi7 = reinterpret_cast<struct s68*>((reinterpret_cast<uint32_t>(ebx5) * 4 + reinterpret_cast<uint32_t>(ebx5)) * 2 + 0x483de0);
        eax8 = g484d04;
        edi7->f0 = esi6->f0;
        edi9 = reinterpret_cast<struct s69*>(&edi7->f4);
        esi10 = reinterpret_cast<struct s70*>(&esi6->f4);
        edi9->f0 = esi10->f0;
        edi9->f4 = esi10->f4;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebx5) * 4 + 0x4842e0) = eax8;
        eax11 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx5) + 1 & 0x7f);
        esi12 = g4844e8;
        g4844e4 = eax11;
        if (eax11 != esi12) 
            goto addr_42530b_2;
    }
    g4844e8 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi12) + 1 & 0x7f);
    goto addr_42530b_2;
}

void** g4845cc = reinterpret_cast<void**>(72);

void** g4845c4 = reinterpret_cast<void**>(0);

uint32_t fun_42d730(void** ecx);

void** g4845dc = reinterpret_cast<void**>(0);

void** fun_42e2f0(void** ecx) {
    void** edx2;
    void** eax3;
    void** ecx4;
    void** ecx5;
    uint32_t eax6;
    void** ecx7;
    void** eax8;

    edx2 = g4845cc;
    if (edx2) {
        eax3 = edx2 + 0xffffffff;
        if (!(*reinterpret_cast<unsigned char*>(&eax3 + 1) & 0x80)) {
            do {
                ecx4 = g4845c4;
                ecx5 = ecx4 + reinterpret_cast<unsigned char>(eax3) * 52;
                eax6 = fun_42d730(ecx5);
                *reinterpret_cast<int16_t*>(&eax6) = *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(ecx5 + eax6 * 2) + 48);
                eax3 = reinterpret_cast<void**>(eax6 & 0xffff);
            } while (!(*reinterpret_cast<unsigned char*>(&eax3 + 1) & 0x80));
        }
        *reinterpret_cast<unsigned char*>(&eax3 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax3 + 1) & 0x7f);
        ecx7 = g4845dc;
        return ecx7 + reinterpret_cast<unsigned char>(eax3) * 8;
    } else {
        eax8 = g4845dc;
        return eax8;
    }
}

void fun_424420(void** ecx);

void** fun_425180(void** ecx) {
    void** edx2;
    void** eax3;
    void** eax4;
    void** ebp5;
    void** edi6;
    void** esi7;
    void** ebx8;
    int1_t zf9;
    void** eax10;
    void** edx11;
    void** edx12;
    void** ebx13;

    eax4 = fun_4375e0(ecx, edx2, eax3);
    fun_442b80(eax4, edx2, eax3, ebp5, edi6, esi7);
    *reinterpret_cast<void***>(eax4 + 12) = eax3;
    *reinterpret_cast<void***>(eax4 + 16) = edx2;
    ebx8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx) * 92 + 0x460b48);
    *reinterpret_cast<void***>(eax4 + 88) = ecx;
    *reinterpret_cast<void***>(eax4 + 92) = ebx8;
    *reinterpret_cast<void***>(eax4 + 64) = *reinterpret_cast<void***>(ebx8 + 64);
    *reinterpret_cast<void***>(eax4 + 68) = *reinterpret_cast<void***>(ebx8 + 68);
    *reinterpret_cast<void***>(eax4 + 0x68) = *reinterpret_cast<void***>(ebx8 + 84);
    *reinterpret_cast<void***>(eax4 + 0x6c) = *reinterpret_cast<void***>(ebx8 + 8);
    zf9 = reinterpret_cast<int1_t>(g482a58 == 4);
    if (!zf9) {
        *reinterpret_cast<void***>(eax4 + 0x7c) = *reinterpret_cast<void***>(ebx8 + 20);
    }
    eax10 = fun_41d460(eax4, edx2);
    *reinterpret_cast<void***>(eax4 + 0x88) = reinterpret_cast<void**>(reinterpret_cast<signed char>(eax10) % 4);
    edx11 = reinterpret_cast<void**>(0x45a184 + (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx8 + 4)) * 8 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx8 + 4))) * 4);
    *reinterpret_cast<void***>(eax4 + 100) = edx11;
    *reinterpret_cast<void***>(eax4 + 96) = *reinterpret_cast<void***>(edx11 + 8);
    *reinterpret_cast<void***>(eax4 + 36) = *reinterpret_cast<void***>(edx11);
    *reinterpret_cast<void***>(eax4 + 40) = *reinterpret_cast<void***>(edx11 + 4);
    fun_424420(eax4);
    *reinterpret_cast<void***>(eax4 + 56) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax4 + 52)));
    edx12 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax4 + 52)) + 4);
    *reinterpret_cast<void***>(eax4 + 60) = edx12;
    if (!reinterpret_cast<int1_t>(ebx13 == 0x80000000)) {
        if (!reinterpret_cast<int1_t>(ebx13 == 0x7fffffff)) {
            *reinterpret_cast<void***>(eax4 + 20) = ebx13;
        } else {
            *reinterpret_cast<void***>(eax4 + 20) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx12) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax4 + 92) + 68)));
        }
    } else {
        *reinterpret_cast<void***>(eax4 + 20) = *reinterpret_cast<void***>(eax4 + 56);
    }
    *reinterpret_cast<void***>(eax4 + 8) = reinterpret_cast<void**>(0x4250d0);
    fun_42af30();
    return eax4;
}

uint32_t g4647d8 = 0;

void** fun_41d460(void** ecx, void** a2) {
    uint32_t eax3;
    uint32_t eax4;

    eax3 = g4647d8;
    eax4 = eax3 + 1 & 0xff;
    g4647d8 = eax4;
    *reinterpret_cast<signed char*>(&eax4) = *reinterpret_cast<signed char*>(eax4 + 0x4646d4);
    return eax4 & 0xff;
}

void** fun_423010(void** ecx);

struct s71 {
    signed char[12] pad12;
    int32_t fc;
    int32_t f10;
};

int32_t fun_4173e0(void** ecx) {
    void** ecx2;
    void** edx3;
    int32_t eax4;
    int32_t eax5;
    void** eax6;
    int1_t less7;
    uint32_t eax8;
    uint32_t ebp9;
    void** edx10;
    void** ebp11;
    int32_t esi12;
    int32_t eax13;
    int32_t edi14;
    int32_t esi15;

    ecx2 = edx3;
    if (*reinterpret_cast<int32_t*>(((eax4 * 8 + eax5) * 4 - eax5) * 8 + 0x482518)) {
        eax6 = fun_423010(ecx2);
        if (eax6) {
            less7 = reinterpret_cast<int32_t>(g482a30) < reinterpret_cast<int32_t>(32);
            if (!less7) {
                fun_4252a0(ecx2);
            }
            eax8 = g482a30;
            ebp9 = g482a30;
            *reinterpret_cast<int32_t*>("*H" + reinterpret_cast<int32_t>(eax8) % 32 * 4) = *reinterpret_cast<int32_t*>(((eax5 * 8 + eax5) * 4 - eax5) * 8 + 0x482518);
            g482a30 = ebp9 + 1;
            fun_42e2f0(ecx2);
            fun_425180(39);
            edx10 = g482a7c;
            if (*reinterpret_cast<int32_t*>((reinterpret_cast<uint32_t>(edx10 + reinterpret_cast<unsigned char>(edx10) * 8) * 4 - reinterpret_cast<unsigned char>(edx10)) * 8 + 0x482528) != 1) {
                fun_4312d0(39, ebp11);
                goto addr_417591_7;
            }
        } else {
            return 0;
        }
    }
    if (reinterpret_cast<uint1_t>(eax5 < 0) | reinterpret_cast<uint1_t>(eax5 == 0)) {
        addr_417591_7:
        esi12 = 1;
    } else {
        eax13 = 0;
        edi14 = static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ecx2))) << 16;
        esi15 = ((eax5 * 8 + eax5) * 4 - eax5) * 8;
        do {
            if (edi14 != (*reinterpret_cast<struct s71**>(eax13 + 0x482518))->fc) 
                continue;
            if (static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ecx2 + 2))) << 16 == (*reinterpret_cast<struct s71**>(eax13 + 0x482518))->f10) 
                goto addr_417450_13;
            eax13 = eax13 + 0x118;
        } while (eax13 < esi15);
        goto addr_417460_15;
    }
    addr_417596_16:
    return esi12;
    addr_417450_13:
    esi12 = 0;
    goto addr_417596_16;
    addr_417460_15:
    goto addr_417591_7;
}

void** fun_4175a0(void** ecx, void** a2, void** a3) {
    void** v4;
    void** ebp5;
    int32_t esi6;
    int32_t eax7;
    signed char* edx8;
    void** eax9;
    void** ebp10;
    void** ecx11;
    void** eax12;
    int32_t eax13;
    int32_t esi14;
    void** eax15;

    v4 = ebp5;
    esi6 = eax7;
    edx8 = g484660;
    eax9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edx8 - 0x4845fc) / 10);
    ebp10 = eax9;
    if (reinterpret_cast<signed char>(eax9) < reinterpret_cast<signed char>(4)) {
        fun_43bd40(ecx, "Only %i deathmatch spots, 4 required", eax9, v4);
    }
    ecx11 = reinterpret_cast<void**>(0);
    do {
        eax12 = fun_41d460(ecx11, v4);
        eax13 = fun_4173e0(ecx11);
        if (eax13) 
            break;
        ++ecx11;
    } while (reinterpret_cast<signed char>(ecx11) < reinterpret_cast<signed char>(20));
    goto addr_41760c_6;
    esi14 = esi6 + 1;
    *reinterpret_cast<int16_t*>(reinterpret_cast<signed char>(eax12) % reinterpret_cast<signed char>(ebp10) * 10 + 0x484602) = *reinterpret_cast<int16_t*>(&esi14);
    addr_41761c_8:
    eax15 = fun_425450(ecx11);
    return eax15;
    addr_41760c_6:
    goto addr_41761c_8;
}

struct s72 {
    signed char[6] pad6;
    int16_t f6;
};

void fun_4172b0(void** ecx);

struct s73 {
    signed char[4] pad4;
    int16_t f4;
    int16_t f6;
};

void** fun_426bd0(void** ecx);

void fun_4338a0(void** ecx);

void** fun_418df0(void** ecx);

void** fun_425450(void** ecx) {
    int32_t edx2;
    struct s72* eax3;
    int32_t edx4;
    void** esi5;
    void** eax6;
    struct s73* eax7;
    void** ecx8;
    uint32_t eax9;
    int1_t zf10;
    void** edx11;
    void** eax12;

    edx2 = eax3->f6;
    if (*reinterpret_cast<int32_t*>(edx2 * 4 + 0x482974)) {
        edx4 = edx2 - 1;
        esi5 = reinterpret_cast<void**>(((edx4 * 8 + edx4) * 4 - edx4) * 8 + 0x482518);
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi5 + 4) == 2)) {
            fun_4172b0(ecx);
        }
        eax6 = fun_425180(0);
        if (eax7->f6 > 1) {
            *reinterpret_cast<void***>(eax6 + 0x68) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax6 + 0x68)) | eax7->f6 - 1 << 26);
        }
        ecx8 = reinterpret_cast<void**>(45);
        eax9 = reinterpret_cast<uint32_t>(eax7->f4 / reinterpret_cast<signed char>(45));
        *reinterpret_cast<void***>(eax6 + 0x84) = esi5;
        *reinterpret_cast<void***>(eax6 + 32) = reinterpret_cast<void**>(eax9 << 29);
        *reinterpret_cast<void***>(eax6 + 0x6c) = *reinterpret_cast<void***>(esi5 + 32);
        *reinterpret_cast<void***>(esi5 + 4) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(esi5 + 0xc8) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(esi5 + 0xd8) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(esi5 + 0xdc) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(esi5 + 0xe0) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(esi5 + 0xe8) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(esi5 + 0xec) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(esi5 + 20) = reinterpret_cast<void**>(0x290000);
        *reinterpret_cast<void***>(esi5) = eax6;
        fun_426bd0(45);
        zf10 = g482a6c == 0;
        if (!zf10) {
            ecx8 = reinterpret_cast<void**>(6);
            fun_444197(6);
        }
        edx11 = g482a7c;
        eax12 = reinterpret_cast<void**>(eax7->f6 - 1);
        if (eax12 == edx11) {
            fun_4338a0(ecx8);
            eax12 = fun_418df0(ecx8);
        }
    }
    return eax12;
}

void fun_417230(void** ecx, void** a2) {
    void** ecx3;
    int32_t eax4;
    int32_t eax5;
    void** edx6;
    void** ebx7;

    ecx3 = reinterpret_cast<void**>(0x482518 + ((eax4 * 8 + eax5) * 4 - eax5) * 8);
    fun_442b80(ecx3, edx6, ecx, ebx7, __return_address(), a2);
    fun_442b80(ecx3, edx6, ecx, ebx7, __return_address(), a2);
    *reinterpret_cast<unsigned char*>(*reinterpret_cast<void***>(ecx3) + 0x6a) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(*reinterpret_cast<void***>(ecx3) + 0x6a) & 0xfb);
    *reinterpret_cast<void***>(ecx3 + 0xe8) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(ecx3 + 0xec) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(ecx3 + 0xdc) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(ecx3 + 0xe0) = reinterpret_cast<void**>(0);
    return;
}

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(100);

void** g481e08 = reinterpret_cast<void**>(47);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(32);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0xf4);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0xe4);

void** g48125c = reinterpret_cast<void**>(1);

void** g48124c = reinterpret_cast<void**>(43);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0xdc);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0x74);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(12);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0xe0);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(28);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0xb4);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0xb4);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(60);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(48);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0x74);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0xac);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0xe0);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0xa8);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0x8c);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0xd8);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(72);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(20);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0xc8);

void** fun_4155a0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** v16;
    void** edi17;
    void** eax18;
    void** eax19;
    int1_t zf20;
    int1_t zf21;
    void** eax22;
    void** eax23;
    void** eax24;
    void** eax25;
    void** eax26;
    void** eax27;
    void** edi28;
    void** eax29;
    void** eax30;
    void** eax31;
    void** eax32;
    void** eax33;
    void** eax34;
    void** eax35;
    void** eax36;
    void** eax37;
    void** eax38;
    void** eax39;
    void** ebp40;
    void** edi41;
    void** esi42;
    void** edx43;

    v16 = ecx;
    edi17 = g481264;
    g482a8c = reinterpret_cast<void**>(0);
    g482a68 = reinterpret_cast<void**>(2);
    g482a2c = reinterpret_cast<void**>(0);
    g45973c = reinterpret_cast<void**>(0);
    if (!edi17) {
        eax18 = g482a80;
        switch (eax18 - 1) {
            addr_41599c_4:
        default:
            goto addr_4159a6_5;
        case 0:
            eax19 = image_base_;
            g481e08 = reinterpret_cast<void**>("FLOOR4_8");
            break;
        case 1:
            eax19 = image_base_;
            g481e08 = reinterpret_cast<void**>("SFLR6_1");
            break;
        case 2:
            g481e08 = reinterpret_cast<void**>("MFLR8_4");
            eax19 = image_base_;
            break;
        case 3:
            eax19 = image_base_;
            g481e08 = reinterpret_cast<void**>("MFLR8_3");
        }
    } else {
        zf20 = g48125c == 0;
        if (zf20) {
            zf21 = g48124c == 0;
            if (zf21) {
                eax22 = g482a5c;
                if (reinterpret_cast<unsigned char>(eax22) < reinterpret_cast<unsigned char>(15)) {
                    if (reinterpret_cast<unsigned char>(eax22) < reinterpret_cast<unsigned char>(6)) {
                        addr_415933_14:
                        goto addr_4159a6_5;
                    } else {
                        if (reinterpret_cast<unsigned char>(eax22) <= reinterpret_cast<unsigned char>(6)) {
                            ecx = reinterpret_cast<void**>("SLIME16");
                            eax23 = image_base_;
                            g481e08 = reinterpret_cast<void**>("SLIME16");
                            g481e0c = eax23;
                            goto addr_4159a6_5;
                        } else {
                            if (eax22 == 11) {
                                eax24 = image_base_;
                                g481e08 = reinterpret_cast<void**>("RROCK14");
                                g481e0c = eax24;
                                goto addr_4159a6_5;
                            } else {
                                goto addr_4159a6_5;
                            }
                        }
                    }
                } else {
                    if (reinterpret_cast<unsigned char>(eax22) <= reinterpret_cast<unsigned char>(15)) {
                        eax25 = image_base_;
                        g481e08 = reinterpret_cast<void**>("RROCK13");
                        g481e0c = eax25;
                        goto addr_4159a6_5;
                    } else {
                        if (reinterpret_cast<unsigned char>(eax22) < reinterpret_cast<unsigned char>(30)) {
                            if (eax22 == 20) {
                                g481e08 = reinterpret_cast<void**>("RROCK07");
                                eax26 = image_base_;
                                g481e0c = eax26;
                                goto addr_4159a6_5;
                            } else {
                                goto addr_4159a6_5;
                            }
                        } else {
                            if (reinterpret_cast<unsigned char>(eax22) <= reinterpret_cast<unsigned char>(30)) {
                                eax27 = image_base_;
                                g481e08 = reinterpret_cast<void**>("RROCK17");
                                g481e0c = eax27;
                                goto addr_4159a6_5;
                            } else {
                                if (eax22 == 31) {
                                    edi28 = reinterpret_cast<void**>("RROCK19");
                                    eax29 = image_base_;
                                    goto addr_415928_30;
                                } else {
                                    goto addr_4159a6_5;
                                }
                            }
                        }
                    }
                }
            } else {
                eax30 = g482a5c;
                if (reinterpret_cast<unsigned char>(eax30) < reinterpret_cast<unsigned char>(15)) {
                    if (reinterpret_cast<unsigned char>(eax30) < reinterpret_cast<unsigned char>(6)) 
                        goto addr_415933_14;
                    if (reinterpret_cast<unsigned char>(eax30) <= reinterpret_cast<unsigned char>(6)) {
                        eax31 = image_base_;
                        g481e08 = reinterpret_cast<void**>("SLIME16");
                        g481e0c = eax31;
                        goto addr_4159a6_5;
                    } else {
                        if (eax30 == 11) {
                            eax32 = image_base_;
                            g481e08 = reinterpret_cast<void**>("FLOOR0_7");
                            g481e0c = eax32;
                            goto addr_4159a6_5;
                        } else {
                            goto addr_4159a6_5;
                        }
                    }
                } else {
                    if (reinterpret_cast<unsigned char>(eax30) <= reinterpret_cast<unsigned char>(15)) {
                        g481e08 = reinterpret_cast<void**>("RROCK13");
                        eax33 = image_base_;
                        g481e0c = eax33;
                        goto addr_4159a6_5;
                    } else {
                        if (reinterpret_cast<unsigned char>(eax30) < reinterpret_cast<unsigned char>(30)) {
                            if (eax30 == 20) {
                                eax34 = image_base_;
                                g481e08 = reinterpret_cast<void**>("RROCK07");
                                g481e0c = eax34;
                                goto addr_4159a6_5;
                            } else {
                                goto addr_4159a6_5;
                            }
                        } else {
                            if (reinterpret_cast<unsigned char>(eax30) <= reinterpret_cast<unsigned char>(30)) {
                                edi28 = reinterpret_cast<void**>("FLAT5_6");
                                eax29 = image_base_;
                                goto addr_415928_30;
                            } else {
                                if (eax30 == 31) {
                                    eax35 = image_base_;
                                    g481e08 = reinterpret_cast<void**>("RROCK19");
                                    g481e0c = eax35;
                                    goto addr_4159a6_5;
                                } else {
                                    goto addr_4159a6_5;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            eax36 = g482a5c;
            if (reinterpret_cast<unsigned char>(eax36) < reinterpret_cast<unsigned char>(15)) {
                if (reinterpret_cast<unsigned char>(eax36) < reinterpret_cast<unsigned char>(6)) 
                    goto addr_415933_14;
                if (reinterpret_cast<unsigned char>(eax36) <= reinterpret_cast<unsigned char>(6)) 
                    goto addr_415624_53; else 
                    goto addr_41561a_54;
            } else {
                if (reinterpret_cast<unsigned char>(eax36) <= reinterpret_cast<unsigned char>(15)) {
                    eax37 = image_base_;
                    g481e08 = reinterpret_cast<void**>("RROCK13");
                    g481e0c = eax37;
                    goto addr_4159a6_5;
                } else {
                    if (reinterpret_cast<unsigned char>(eax36) < reinterpret_cast<unsigned char>(30)) {
                        if (eax36 == 20) {
                            edi28 = reinterpret_cast<void**>("RROCK07");
                            eax29 = image_base_;
                            goto addr_415928_30;
                        } else {
                            goto addr_415933_14;
                        }
                    } else {
                        if (reinterpret_cast<unsigned char>(eax36) <= reinterpret_cast<unsigned char>(30)) {
                            eax38 = image_base_;
                            g481e08 = reinterpret_cast<void**>("RROCK17");
                            g481e0c = eax38;
                            goto addr_4159a6_5;
                        } else {
                            if (eax36 == 31) {
                                ecx = reinterpret_cast<void**>("RROCK19");
                                eax39 = image_base_;
                                g481e08 = reinterpret_cast<void**>("RROCK19");
                                g481e0c = eax39;
                                goto addr_4159a6_5;
                            } else {
                                goto addr_415933_14;
                            }
                        }
                    }
                }
            }
        }
    }
    g481e0c = eax19;
    goto addr_41599c_4;
    addr_4159a6_5:
    fun_430c80(ecx, ebp40, edi41, esi42, edx43, v16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    g481e14 = reinterpret_cast<void**>(0);
    g481e10 = reinterpret_cast<void**>(0);
    goto a2;
    addr_415928_30:
    g481e08 = edi28;
    addr_41592e_67:
    g481e0c = eax29;
    goto addr_415933_14;
    addr_415624_53:
    eax29 = image_base_;
    g481e08 = reinterpret_cast<void**>("SLIME16");
    goto addr_41592e_67;
    addr_41561a_54:
    if (eax36 == 11) {
        g481e08 = reinterpret_cast<void**>("RROCK14");
        eax29 = image_base_;
        goto addr_41592e_67;
    } else {
        goto addr_415933_14;
    }
}

void** g482a40 = reinterpret_cast<void**>(83);

void fun_42a0e0(void** ecx) {
    void*** ebp2;
    int32_t v3;
    int32_t v4;
    int32_t v5;
    void** eax6;
    void** edi7;
    void** edi8;
    int32_t edx9;
    void** esi10;
    void*** edi11;
    uint32_t ecx12;
    void** edi13;
    int32_t eax14;
    int32_t ebx15;
    int32_t eax16;

    ebp2 = reinterpret_cast<void***>(0x482518);
    v3 = 0;
    v4 = 0;
    v5 = 32;
    do {
        if (*reinterpret_cast<int32_t*>(v4 + 0x482978)) {
            eax6 = g482a40;
            edi7 = g482a40;
            edi8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi7) + (4 - (reinterpret_cast<unsigned char>(eax6) & 3) & 3));
            edx9 = v3 * 0x118;
            g482a40 = edi8;
            esi10 = edi8;
            edi11 = ebp2;
            ecx12 = 70;
            do {
                if (!ecx12) 
                    break;
                --ecx12;
                *edi11 = *reinterpret_cast<void***>(esi10);
                edi11 = edi11 + 4;
                esi10 = esi10 + 4;
            } while (1);
            *reinterpret_cast<unsigned char*>(&ecx12) = 0;
            do {
                if (!ecx12) 
                    break;
                --ecx12;
                *edi11 = *reinterpret_cast<void***>(esi10);
                ++edi11;
                ++esi10;
            } while (0);
            *reinterpret_cast<int32_t*>(edx9 + 0x482518) = 0;
            edi13 = g482a40;
            *reinterpret_cast<int32_t*>(edx9 + 0x4825f0) = 0;
            eax14 = edx9;
            *reinterpret_cast<int32_t*>(edx9 + 0x4825fc) = 0;
            ebx15 = v5;
            g482a40 = edi13 + 0x118;
            do {
                if (*reinterpret_cast<int32_t*>(eax14 + 0x48260c)) {
                    *reinterpret_cast<int32_t*>(eax14 + 0x48260c) = *reinterpret_cast<int32_t*>(eax14 + 0x48260c) * 28 + 0x45a184;
                }
                eax14 = eax14 + 16;
            } while (eax14 != ebx15);
        }
        ebp2 = ebp2 + 0x118;
        eax16 = v3 + 1;
        v4 = v4 + 4;
        v5 = v5 + 0x118;
        v3 = eax16;
    } while (eax16 < 4);
    return;
}

void** g4845d4 = reinterpret_cast<void**>(0xff);

struct s74 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
    void** f8;
    signed char[1] pad10;
    void** fa;
    signed char[1] pad12;
    void** fc;
};

void fun_42a340(void** ecx) {
    void** edi2;
    void** eax3;
    void** edx4;
    void** ecx5;
    void** ebx6;
    void** eax7;
    void** eax8;
    void** ebp9;
    void** eax10;
    void** eax11;
    void** ebp12;
    void** ebx13;
    void** v14;
    void** v15;
    void** eax16;
    void** esi17;
    void** eax18;
    void** ebx19;
    int32_t edx20;
    struct s74* edx21;
    void** eax22;
    void** eax23;
    void** eax24;
    void** ebx25;
    void** ecx26;

    edi2 = g4845d4;
    eax3 = g482a40;
    edx4 = g4845e0;
    ecx5 = g4845ec;
    ebx6 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx5) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx5 == 0))) {
        do {
            *reinterpret_cast<void***>(edx4) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax3)))) << 16);
            *reinterpret_cast<void***>(edx4 + 4) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax3 + 2)))) << 16);
            eax7 = eax3 + 2;
            *reinterpret_cast<void***>(edx4 + 8) = *reinterpret_cast<void***>(eax3 + 4);
            eax8 = eax7 + 2;
            *reinterpret_cast<void***>(edx4 + 10) = *reinterpret_cast<void***>(eax7 + 4);
            ebp9 = g4845ec;
            eax10 = eax8 + 2;
            *reinterpret_cast<void***>(edx4 + 12) = *reinterpret_cast<void***>(eax8 + 4);
            ++ebx6;
            eax11 = eax10 + 2;
            *reinterpret_cast<void***>(edx4 + 14) = *reinterpret_cast<void***>(eax10 + 4);
            edx4 = edx4 + 86;
            *reinterpret_cast<void***>(edx4 + 0xffffffba) = *reinterpret_cast<void***>(eax11 + 4);
            *reinterpret_cast<int32_t*>(edx4 + 0xfffffff4) = 0;
            eax3 = eax11 + 2 + 2 + 2;
            *reinterpret_cast<int32_t*>(edx4 + 0xffffffc0) = 0;
        } while (reinterpret_cast<signed char>(ebx6) < reinterpret_cast<signed char>(ebp9));
    }
    ebp12 = g4845d8;
    ebx13 = g4845c8;
    v14 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx13) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx13 == 0))) {
        v15 = ebp12 + 4;
        do {
            eax16 = eax3 + 2;
            *reinterpret_cast<void***>(ebp12 + 16) = *reinterpret_cast<void***>(eax3);
            esi17 = v15;
            eax18 = eax16 + 2;
            *reinterpret_cast<void***>(ebp12 + 18) = *reinterpret_cast<void***>(eax16);
            ebx19 = ebp12;
            eax3 = eax18 + 2;
            *reinterpret_cast<void***>(ebp12 + 20) = *reinterpret_cast<void***>(eax18);
            do {
                edx20 = reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ebx19 + 22));
                if (edx20 != -1) {
                    edx21 = reinterpret_cast<struct s74*>(edi2 + edx20 * 18);
                    edx21->f0 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax3)))) << 16);
                    eax22 = eax3 + 2 + 2;
                    edx21->f4 = static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax3 + 2))) << 16;
                    eax23 = eax22 + 2;
                    edx21->f8 = *reinterpret_cast<void***>(eax22);
                    eax24 = eax23 + 2;
                    edx21->fa = *reinterpret_cast<void***>(eax23);
                    eax3 = eax24 + 2;
                    edx21->fc = *reinterpret_cast<void***>(eax24);
                }
                ebx19 = ebx19 + 2;
            } while (ebx19 != esi17);
            ebx25 = g4845c8;
            ebp12 = ebp12 + 62;
            ecx26 = v14 + 1;
            v14 = ecx26;
            v15 = v15 + 62;
        } while (reinterpret_cast<signed char>(ecx26) < reinterpret_cast<signed char>(ebx25));
    }
    g482a40 = eax3;
    g4845d4 = edi2;
    return;
}

void** g484cfc = reinterpret_cast<void**>(0x88);

void** g484cf8 = reinterpret_cast<void**>(72);

struct s75 {
    signed char[4563332] pad4563332;
    void** f45a184;
};

void fun_42a580(void** ecx) {
    void** v2;
    void** edi3;
    void** v4;
    void** ebp5;
    void** eax6;
    void** edx7;
    void** edx8;
    void** edx9;
    void** esi10;
    void** eax11;
    void** esi12;
    void** ebx13;
    void** edi14;
    void** edx15;
    uint32_t ecx16;
    struct s75* eax17;
    void** ecx18;
    void** esi19;
    void** eax20;
    void** eax21;
    void** esi22;

    v2 = edi3;
    v4 = ebp5;
    eax6 = g484cfc;
    if (eax6 != "H") {
        do {
            ecx = *reinterpret_cast<void***>(eax6 + 8);
            edx7 = *reinterpret_cast<void***>(eax6 + 4);
            if (!reinterpret_cast<int1_t>(ecx == 0x4250d0)) {
                fun_437550(ecx);
            } else {
                fun_4252a0(ecx);
            }
            eax6 = edx7;
        } while (!reinterpret_cast<int1_t>(edx7 == "H"));
    }
    g484cfc = reinterpret_cast<void**>("H");
    g484cf8 = reinterpret_cast<void**>("H");
    while (edx8 = g482a40, edx9 = edx8 + 1, eax6 = *reinterpret_cast<void***>(edx9 + 0xffffffff), g482a40 = edx9, !!eax6) {
        if (!reinterpret_cast<int1_t>(eax6 == 1)) {
            eax6 = fun_43bd40(ecx, "Unknown tclass %i in savegame", reinterpret_cast<unsigned char>(eax6) & 0xff, v4);
            continue;
        }
        esi10 = g482a40;
        g482a40 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi10) + (4 - (reinterpret_cast<unsigned char>(edx9) & 3) & 3));
        eax11 = fun_4375e0(0x9a, v4, v2);
        esi12 = g482a40;
        ebx13 = eax11;
        edi14 = eax11;
        edx15 = eax11;
        ecx16 = 38;
        do {
            if (!ecx16) 
                break;
            --ecx16;
            *reinterpret_cast<void***>(edi14) = *reinterpret_cast<void***>(esi12);
            edi14 = edi14 + 4;
            esi12 = esi12 + 4;
        } while (1);
        *reinterpret_cast<unsigned char*>(&ecx16) = 2;
        do {
            if (!ecx16) 
                break;
            --ecx16;
            *reinterpret_cast<void***>(edi14) = *reinterpret_cast<void***>(esi12);
            ++edi14;
            ++esi12;
        } while (1);
        eax17 = reinterpret_cast<struct s75*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx13 + 100)) * 28);
        *reinterpret_cast<void***>(ebx13 + 0x78) = reinterpret_cast<void**>(0);
        ecx18 = g482a40;
        *reinterpret_cast<void***>(ebx13 + 100) = reinterpret_cast<void**>(&eax17->f45a184);
        ecx = ecx18 + 0x9a;
        esi19 = *reinterpret_cast<void***>(ebx13 + 0x84);
        g482a40 = ecx;
        if (esi19) 
            goto addr_42a660_17;
        addr_42a678_18:
        fun_424420(ecx);
        eax20 = *reinterpret_cast<void***>(edx15 + 52);
        *reinterpret_cast<void***>(edx15 + 92) = reinterpret_cast<void**>(0x460b48 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx15 + 88)) * 92);
        *reinterpret_cast<void***>(edx15 + 56) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax20));
        eax21 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(edx15 + 52)) + 4);
        *reinterpret_cast<void***>(edx15 + 8) = reinterpret_cast<void**>(0x4250d0);
        *reinterpret_cast<void***>(edx15 + 60) = eax21;
        eax6 = g484cf8;
        *reinterpret_cast<void***>(eax6 + 4) = edx15;
        *reinterpret_cast<void***>(edx15 + 4) = reinterpret_cast<void**>("H");
        *reinterpret_cast<void***>(edx15) = eax6;
        g484cf8 = edx15;
        continue;
        addr_42a660_17:
        esi22 = reinterpret_cast<void**>(0x482518 + reinterpret_cast<unsigned char>(esi19 + 0xffffffff) * 0x118);
        *reinterpret_cast<void***>(ebx13 + 0x84) = esi22;
        *reinterpret_cast<void***>(esi22) = ebx13;
        goto addr_42a678_18;
    }
    return;
}

void fun_41e380();

void fun_422780(void** ecx);

void fun_422830(int32_t ecx);

void fun_42aad0(void** ecx) {
    void** v2;
    void** edi3;
    void** v4;
    void** ebp5;
    void** ebx6;
    void** ebx7;
    void** dl8;
    void** eax9;
    int32_t eax10;
    void** eax11;
    void** esi12;
    void** edx13;
    void** edi14;
    void** ebx15;
    uint32_t ecx16;
    void** esi17;
    void** esi18;
    void** ecx19;
    void** esi20;
    void** edx21;
    void** eax22;
    void** esi23;
    void** edi24;
    void** edx25;
    uint32_t ecx26;
    void** ebx27;
    void** ebx28;
    void** eax29;
    void** ecx30;
    void** eax31;
    void** esi32;
    void** edi33;
    void** edx34;
    uint32_t ecx35;
    void** esi36;
    void** esi37;
    void** eax38;
    void** ecx39;
    void** eax40;
    void** esi41;
    void** edx42;
    void** edi43;
    void** ebx44;
    uint32_t ecx45;
    void** eax46;
    void** eax47;
    void** ecx48;
    void** esi49;
    void** eax50;
    void** eax51;
    void** esi52;
    void** edi53;
    void** edx54;
    uint32_t ecx55;
    void* ebx56;
    void** eax57;
    void** eax58;
    void** ecx59;
    void** eax60;
    void** esi61;
    void** edi62;
    void** edx63;
    uint32_t ecx64;
    void* eax65;
    void** ebx66;
    void** eax67;
    void** ecx68;
    void** eax69;
    void** esi70;
    void** edi71;
    void** edx72;
    uint32_t ecx73;
    void* eax74;
    void** ebx75;
    void** eax76;
    void** ecx77;

    v2 = edi3;
    v4 = ebp5;
    while (1) {
        ebx6 = g482a40;
        ebx7 = ebx6 + 1;
        dl8 = *reinterpret_cast<void***>(ebx7 + 0xffffffff);
        g482a40 = ebx7;
        if (reinterpret_cast<unsigned char>(dl8) > 7) {
            eax9 = reinterpret_cast<void**>(0);
            eax9 = dl8;
            fun_43bd40(ecx, "P_UnarchiveSpecials:Unknown tclass %i in savegame", eax9, v4);
            continue;
        }
        eax10 = 0;
        *reinterpret_cast<void***>(&eax10) = dl8;
        switch (eax10) {
        case 0:
            g482a40 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx7) + (4 - (reinterpret_cast<unsigned char>(ebx7) & 3) & 3));
            eax11 = fun_4375e0(48, v4, v2);
            esi12 = g482a40;
            edx13 = eax11;
            edi14 = eax11;
            ebx15 = eax11;
            ecx16 = 12;
            do {
                if (!ecx16) 
                    break;
                --ecx16;
                *reinterpret_cast<void***>(edi14) = *reinterpret_cast<void***>(esi12);
                edi14 = edi14 + 4;
                esi12 = esi12 + 4;
            } while (1);
            *reinterpret_cast<unsigned char*>(&ecx16) = 0;
            do {
                if (!ecx16) 
                    break;
                --ecx16;
                *reinterpret_cast<void***>(edi14) = *reinterpret_cast<void***>(esi12);
                ++edi14;
                ++esi12;
            } while (0);
            esi17 = g4845e0;
            esi18 = esi17 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx13 + 16)) * 86;
            *reinterpret_cast<void***>(edx13 + 16) = esi18;
            ecx19 = g482a40;
            *reinterpret_cast<void***>(esi18 + 74) = edx13;
            ecx = ecx19 + 48;
            esi20 = *reinterpret_cast<void***>(edx13 + 8);
            g482a40 = ecx;
            if (esi20) {
                *reinterpret_cast<void***>(edx13 + 8) = reinterpret_cast<void**>(0x41e0c0);
            }
            edx21 = g484cf8;
            *reinterpret_cast<void***>(edx21 + 4) = ebx15;
            *reinterpret_cast<void***>(ebx15 + 4) = reinterpret_cast<void**>("H");
            *reinterpret_cast<void***>(ebx15) = edx21;
            g484cf8 = ebx15;
            fun_41e380();
            break;
        case 1:
            g482a40 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx7) + (4 - (reinterpret_cast<unsigned char>(ebx7) & 3) & 3));
            eax22 = fun_4375e0(40, v4, v2);
            esi23 = g482a40;
            edi24 = eax22;
            edx25 = eax22;
            ecx26 = 10;
            do {
                if (!ecx26) 
                    break;
                --ecx26;
                *reinterpret_cast<void***>(edi24) = *reinterpret_cast<void***>(esi23);
                edi24 = edi24 + 4;
                esi23 = esi23 + 4;
            } while (1);
            *reinterpret_cast<unsigned char*>(&ecx26) = 0;
            do {
                if (!ecx26) 
                    break;
                --ecx26;
                *reinterpret_cast<void***>(edi24) = *reinterpret_cast<void***>(esi23);
                ++edi24;
                ++esi23;
            } while (0);
            ebx27 = g4845e0;
            ebx28 = ebx27 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx25 + 16)) * 86;
            *reinterpret_cast<void***>(edx25 + 16) = ebx28;
            *reinterpret_cast<void***>(ebx28 + 74) = edx25;
            *reinterpret_cast<void***>(edx25 + 8) = reinterpret_cast<void**>(0x41e500);
            eax29 = g484cf8;
            *reinterpret_cast<void***>(eax29 + 4) = edx25;
            ecx30 = g482a40;
            *reinterpret_cast<void***>(edx25 + 4) = reinterpret_cast<void**>("H");
            ecx = ecx30 + 40;
            *reinterpret_cast<void***>(edx25) = eax29;
            g482a40 = ecx;
            g484cf8 = edx25;
            break;
        case 2:
            g482a40 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx7) + (4 - (reinterpret_cast<unsigned char>(ebx7) & 3) & 3));
            eax31 = fun_4375e0(42, v4, v2);
            esi32 = g482a40;
            edi33 = eax31;
            edx34 = eax31;
            ecx35 = 10;
            do {
                if (!ecx35) 
                    break;
                --ecx35;
                *reinterpret_cast<void***>(edi33) = *reinterpret_cast<void***>(esi32);
                edi33 = edi33 + 4;
                esi32 = esi32 + 4;
            } while (1);
            *reinterpret_cast<unsigned char*>(&ecx35) = 2;
            do {
                if (!ecx35) 
                    break;
                --ecx35;
                *reinterpret_cast<void***>(edi33) = *reinterpret_cast<void***>(esi32);
                ++edi33;
                ++esi32;
            } while (1);
            esi36 = g4845e0;
            esi37 = esi36 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx34 + 20)) * 86;
            *reinterpret_cast<void***>(edx34 + 20) = esi37;
            *reinterpret_cast<void***>(esi37 + 74) = edx34;
            *reinterpret_cast<void***>(edx34 + 8) = reinterpret_cast<void**>(0x420e50);
            eax38 = g484cf8;
            *reinterpret_cast<void***>(eax38 + 4) = edx34;
            ecx39 = g482a40;
            *reinterpret_cast<void***>(edx34 + 4) = reinterpret_cast<void**>("H");
            ecx = ecx39 + 42;
            *reinterpret_cast<void***>(edx34) = eax38;
            g482a40 = ecx;
            g484cf8 = edx34;
            break;
        case 3:
            g482a40 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx7) + (4 - (reinterpret_cast<unsigned char>(ebx7) & 3) & 3));
            eax40 = fun_4375e0(56, v4, v2);
            esi41 = g482a40;
            edx42 = eax40;
            edi43 = eax40;
            ebx44 = eax40;
            ecx45 = 14;
            do {
                if (!ecx45) 
                    break;
                --ecx45;
                *reinterpret_cast<void***>(edi43) = *reinterpret_cast<void***>(esi41);
                edi43 = edi43 + 4;
                esi41 = esi41 + 4;
            } while (1);
            *reinterpret_cast<unsigned char*>(&ecx45) = 0;
            do {
                if (!ecx45) 
                    break;
                --ecx45;
                *reinterpret_cast<void***>(edi43) = *reinterpret_cast<void***>(esi41);
                ++edi43;
                ++esi41;
            } while (0);
            eax46 = g4845e0;
            eax47 = eax46 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx42 + 12)) * 86;
            *reinterpret_cast<void***>(edx42 + 12) = eax47;
            ecx48 = g482a40;
            *reinterpret_cast<void***>(eax47 + 74) = edx42;
            ecx = ecx48 + 56;
            esi49 = *reinterpret_cast<void***>(edx42 + 8);
            g482a40 = ecx;
            if (esi49) {
                *reinterpret_cast<void***>(edx42 + 8) = reinterpret_cast<void**>(0x425ab0);
            }
            eax50 = g484cf8;
            *reinterpret_cast<void***>(eax50 + 4) = ebx44;
            *reinterpret_cast<void***>(ebx44 + 4) = reinterpret_cast<void**>("H");
            *reinterpret_cast<void***>(ebx44) = eax50;
            g484cf8 = ebx44;
            fun_425f20(ecx, v4);
            break;
        case 4:
            g482a40 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx7) + (4 - (reinterpret_cast<unsigned char>(ebx7) & 3) & 3));
            eax51 = fun_4375e0(36, v4, v2);
            esi52 = g482a40;
            edi53 = eax51;
            edx54 = eax51;
            ecx55 = 9;
            do {
                if (!ecx55) 
                    break;
                --ecx55;
                *reinterpret_cast<void***>(edi53) = *reinterpret_cast<void***>(esi52);
                edi53 = edi53 + 4;
                esi52 = esi52 + 4;
            } while (1);
            *reinterpret_cast<unsigned char*>(&ecx55) = 0;
            do {
                if (!ecx55) 
                    break;
                --ecx55;
                *reinterpret_cast<void***>(edi53) = *reinterpret_cast<void***>(esi52);
                ++edi53;
                ++esi52;
            } while (0);
            ebx56 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx54 + 12)) * 86);
            eax57 = g4845e0;
            *reinterpret_cast<void***>(edx54 + 8) = reinterpret_cast<void**>(fun_422780);
            *reinterpret_cast<void***>(edx54 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax57) + reinterpret_cast<uint32_t>(ebx56));
            eax58 = g484cf8;
            *reinterpret_cast<void***>(eax58 + 4) = edx54;
            ecx59 = g482a40;
            *reinterpret_cast<void***>(edx54 + 4) = reinterpret_cast<void**>("H");
            ecx = ecx59 + 36;
            *reinterpret_cast<void***>(edx54) = eax58;
            g482a40 = ecx;
            g484cf8 = edx54;
            break;
        case 5:
            g482a40 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx7) + (4 - (reinterpret_cast<unsigned char>(ebx7) & 3) & 3));
            eax60 = fun_4375e0(36, v4, v2);
            esi61 = g482a40;
            edi62 = eax60;
            edx63 = eax60;
            ecx64 = 9;
            do {
                if (!ecx64) 
                    break;
                --ecx64;
                *reinterpret_cast<void***>(edi62) = *reinterpret_cast<void***>(esi61);
                edi62 = edi62 + 4;
                esi61 = esi61 + 4;
            } while (1);
            *reinterpret_cast<unsigned char*>(&ecx64) = 0;
            do {
                if (!ecx64) 
                    break;
                --ecx64;
                *reinterpret_cast<void***>(edi62) = *reinterpret_cast<void***>(esi61);
                ++edi62;
                ++esi61;
            } while (0);
            eax65 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx63 + 12)) * 86);
            ebx66 = g4845e0;
            *reinterpret_cast<void***>(edx63 + 8) = reinterpret_cast<void**>(fun_422830);
            *reinterpret_cast<void***>(edx63 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx66) + reinterpret_cast<uint32_t>(eax65));
            eax67 = g484cf8;
            *reinterpret_cast<void***>(eax67 + 4) = edx63;
            ecx68 = g482a40;
            *reinterpret_cast<void***>(edx63 + 4) = reinterpret_cast<void**>("H");
            ecx = ecx68 + 36;
            *reinterpret_cast<void***>(edx63) = eax67;
            g482a40 = ecx;
            g484cf8 = edx63;
            break;
        case 6:
            g482a40 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx7) + (4 - (reinterpret_cast<unsigned char>(ebx7) & 3) & 3));
            eax69 = fun_4375e0(28, v4, v2);
            esi70 = g482a40;
            edi71 = eax69;
            edx72 = eax69;
            ecx73 = 7;
            do {
                if (!ecx73) 
                    break;
                --ecx73;
                *reinterpret_cast<void***>(edi71) = *reinterpret_cast<void***>(esi70);
                edi71 = edi71 + 4;
                esi70 = esi70 + 4;
            } while (1);
            *reinterpret_cast<unsigned char*>(&ecx73) = 0;
            do {
                if (!ecx73) 
                    break;
                --ecx73;
                *reinterpret_cast<void***>(edi71) = *reinterpret_cast<void***>(esi70);
                ++edi71;
                ++esi70;
            } while (0);
            eax74 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx72 + 12)) * 86);
            ebx75 = g4845e0;
            *reinterpret_cast<void***>(edx72 + 8) = reinterpret_cast<void**>(0x422a50);
            *reinterpret_cast<void***>(edx72 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx75) + reinterpret_cast<uint32_t>(eax74));
            eax76 = g484cf8;
            *reinterpret_cast<void***>(eax76 + 4) = edx72;
            ecx77 = g482a40;
            *reinterpret_cast<void***>(edx72 + 4) = reinterpret_cast<void**>("H");
            ecx = ecx77 + 28;
            *reinterpret_cast<void***>(edx72) = eax76;
            g482a40 = ecx;
            g484cf8 = edx72;
        case 7:
            goto 0x42aa9d;
        }
    }
    return;
}

void fun_42a010(int32_t a1, int32_t a2) {
    int32_t ebp3;
    void*** v4;
    void** eax5;
    void** ecx6;
    void** ecx7;
    void*** esi8;
    void** edx9;
    void** edi10;
    uint32_t ecx11;
    void** esi12;
    void** ebx13;
    void** ecx14;

    ebp3 = 0;
    v4 = reinterpret_cast<void***>(0x482518);
    do {
        if (*reinterpret_cast<int32_t*>(ebp3 + 0x482978)) {
            eax5 = g482a40;
            ecx6 = g482a40;
            ecx7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx6) + (4 - (reinterpret_cast<unsigned char>(eax5) & 3) & 3));
            esi8 = v4;
            g482a40 = ecx7;
            edx9 = ecx7;
            edi10 = edx9;
            ecx11 = 70;
            do {
                if (!ecx11) 
                    break;
                --ecx11;
                *reinterpret_cast<void***>(edi10) = *esi8;
                edi10 = edi10 + 4;
                esi8 = esi8 + 4;
            } while (1);
            *reinterpret_cast<unsigned char*>(&ecx11) = 0;
            do {
                if (!ecx11) 
                    break;
                --ecx11;
                *reinterpret_cast<void***>(edi10) = *esi8;
                ++edi10;
                ++esi8;
            } while (0);
            esi12 = g482a40;
            ebx13 = edx9;
            ecx14 = edx9 + 32;
            g482a40 = esi12 + 0x118;
            do {
                if (*reinterpret_cast<void***>(ebx13 + 0xf4)) {
                    *reinterpret_cast<void***>(ebx13 + 0xf4) = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(ebx13 + 0xf4) - 0x45a184) / 28);
                }
                ebx13 = ebx13 + 16;
            } while (ebx13 != ecx14);
        }
        ebp3 = ebp3 + 4;
        v4 = v4 + 0x118;
    } while (ebp3 != 16);
    goto a2;
}

struct s76 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
    void** f8;
    signed char[1] pad10;
    void** fa;
    signed char[1] pad12;
    void** fc;
};

void fun_42a1e0(uint32_t ecx) {
    void** edi2;
    void** eax3;
    void** edx4;
    void** ecx5;
    void** ebx6;
    int32_t ecx7;
    void** eax8;
    int32_t ecx9;
    void** eax10;
    void** eax11;
    void** eax12;
    void** esi13;
    void** eax14;
    void** edx15;
    void** v16;
    void** ebp17;
    void** v18;
    void** eax19;
    void** eax20;
    void** esi21;
    void** ebx22;
    int32_t edx23;
    struct s76* edx24;
    int32_t ecx25;
    void** eax26;
    int32_t ecx27;
    void** eax28;
    void** eax29;
    void** esi30;
    void** ebx31;

    edi2 = g4845d4;
    eax3 = g482a40;
    edx4 = g4845e0;
    ecx5 = g4845ec;
    ebx6 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx5) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx5 == 0))) {
        do {
            ecx7 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(edx4)) >> 16;
            *reinterpret_cast<void***>(eax3) = *reinterpret_cast<void***>(&ecx7);
            eax8 = eax3 + 2 + 2;
            ecx9 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(edx4 + 4)) >> 16;
            *reinterpret_cast<void***>(eax8 + 0xfffffffe) = *reinterpret_cast<void***>(&ecx9);
            eax10 = eax8 + 2;
            *reinterpret_cast<void***>(eax10 + 0xfffffffe) = *reinterpret_cast<void***>(edx4 + 8);
            eax11 = eax10 + 2;
            *reinterpret_cast<void***>(eax11 + 0xfffffffe) = *reinterpret_cast<void***>(edx4 + 10);
            eax12 = eax11 + 2;
            esi13 = g4845ec;
            *reinterpret_cast<void***>(eax12 + 0xfffffffe) = *reinterpret_cast<void***>(edx4 + 12);
            eax14 = eax12 + 2;
            ++ebx6;
            *reinterpret_cast<void***>(eax14 + 0xfffffffe) = *reinterpret_cast<void***>(edx4 + 14);
            eax3 = eax14 + 2;
            edx4 = edx4 + 86;
            *reinterpret_cast<void***>(eax3 + 0xfffffffe) = *reinterpret_cast<void***>(edx4 + 16);
        } while (reinterpret_cast<signed char>(ebx6) < reinterpret_cast<signed char>(esi13));
    }
    edx15 = g4845c8;
    v16 = reinterpret_cast<void**>(0);
    ebp17 = g4845d8;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx15) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx15 == 0))) {
        v18 = ebp17 + 4;
        do {
            eax19 = eax3 + 2;
            *reinterpret_cast<void***>(eax19 + 0xfffffffe) = *reinterpret_cast<void***>(ebp17 + 16);
            eax20 = eax19 + 2;
            esi21 = v18;
            *reinterpret_cast<void***>(eax20 + 0xfffffffe) = *reinterpret_cast<void***>(ebp17 + 18);
            eax3 = eax20 + 2;
            ebx22 = ebp17;
            *reinterpret_cast<void***>(eax3 + 0xfffffffe) = *reinterpret_cast<void***>(ebp17 + 20);
            do {
                edx23 = reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ebx22 + 22));
                if (edx23 != -1) {
                    edx24 = reinterpret_cast<struct s76*>(edi2 + edx23 * 18);
                    ecx25 = reinterpret_cast<signed char>(edx24->f0) >> 16;
                    *reinterpret_cast<void***>(eax3) = *reinterpret_cast<void***>(&ecx25);
                    eax26 = eax3 + 2 + 2;
                    ecx27 = edx24->f4 >> 16;
                    *reinterpret_cast<void***>(eax26 + 0xfffffffe) = *reinterpret_cast<void***>(&ecx27);
                    eax28 = eax26 + 2;
                    *reinterpret_cast<void***>(eax28 + 0xfffffffe) = edx24->f8;
                    eax29 = eax28 + 2;
                    *reinterpret_cast<void***>(eax29 + 0xfffffffe) = edx24->fa;
                    eax3 = eax29 + 2;
                    *reinterpret_cast<void***>(eax3 + 0xfffffffe) = edx24->fc;
                }
                ebx22 = ebx22 + 2;
            } while (ebx22 != esi21);
            esi30 = g4845c8;
            ebp17 = ebp17 + 62;
            ebx31 = v16 + 1;
            v16 = ebx31;
            v18 = v18 + 62;
        } while (reinterpret_cast<signed char>(ebx31) < reinterpret_cast<signed char>(esi30));
    }
    g482a40 = eax3;
    g4845d4 = edi2;
    return;
}

void fun_42a4a0(uint32_t ecx) {
    void** ebp2;
    void** edx3;
    void** edx4;
    void** ebx5;
    void** ebx6;
    void** esi7;
    void** edi8;
    uint32_t ecx9;
    void** ecx10;
    uint32_t edx11;
    void** esi12;
    void** eax13;

    ebp2 = g484cfc;
    if (ebp2 != "H") {
        while (1) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebp2 + 8) == 0x4250d0)) {
                addr_42a55c_3:
                ebp2 = *reinterpret_cast<void***>(ebp2 + 4);
                if (!reinterpret_cast<int1_t>(ebp2 == "H")) 
                    continue; else 
                    break;
            } else {
                edx3 = g482a40;
                *reinterpret_cast<void***>(edx3) = reinterpret_cast<void**>(1);
                edx4 = edx3 + 1;
                g482a40 = edx4;
                ebx5 = g482a40;
                ebx6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx5) + (4 - (reinterpret_cast<unsigned char>(edx4) & 3) & 3));
                esi7 = ebp2;
                edi8 = ebx6;
                g482a40 = ebx6;
                ecx9 = 38;
                do {
                    if (!ecx9) 
                        break;
                    --ecx9;
                    *reinterpret_cast<void***>(edi8) = *reinterpret_cast<void***>(esi7);
                    edi8 = edi8 + 4;
                    esi7 = esi7 + 4;
                } while (1);
                *reinterpret_cast<unsigned char*>(&ecx9) = 2;
                do {
                    if (!ecx9) 
                        break;
                    --ecx9;
                    *reinterpret_cast<void***>(edi8) = *reinterpret_cast<void***>(esi7);
                    ++edi8;
                    ++esi7;
                } while (1);
                ecx10 = g482a40;
                edx11 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ebx6 + 100) - 0x45a184);
                g482a40 = ecx10 + 0x9a;
                esi12 = *reinterpret_cast<void***>(ebx6 + 0x84);
                *reinterpret_cast<void***>(ebx6 + 100) = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edx11) / 28);
                if (!esi12) 
                    goto addr_42a55c_3;
            }
            *reinterpret_cast<void***>(ebx6 + 0x84) = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esi12 - 0x482518) / 0x118 + 1);
            goto addr_42a55c_3;
        }
    }
    eax13 = g482a40;
    *reinterpret_cast<void***>(eax13) = reinterpret_cast<void**>(0);
    g482a40 = eax13 + 1;
    return;
}

void fun_42a6e0(uint32_t ecx) {
    void** ebp2;
    void** ebx3;
    void** edx4;
    void** ebp5;
    void** ebp6;
    void** esi7;
    void** edi8;
    void** edx9;
    uint32_t ecx10;
    void** edi11;
    void** eax12;
    void** ebp13;
    void** edx14;
    void** ebp15;
    void** ebp16;
    void** esi17;
    void** edi18;
    void** edx19;
    void** v20;
    uint32_t ecx21;
    void** eax22;
    void** ebp23;
    void** ebp24;
    void** ebp25;
    void** esi26;
    void** edi27;
    void** edx28;
    void** v29;
    uint32_t ecx30;
    void** ecx31;
    void** ebp32;
    void** ebp33;
    void** ebp34;
    void** esi35;
    void** edi36;
    void** edx37;
    void** v38;
    uint32_t ecx39;
    void** esi40;
    void** ebp41;
    void** ebp42;
    void** ebp43;
    void** esi44;
    void** edi45;
    void** edx46;
    uint32_t ecx47;
    void** edi48;
    void** eax49;
    void** ebp50;
    void** ebp51;
    void** ebp52;
    void** esi53;
    void** edi54;
    void** edx55;
    void** v56;
    uint32_t ecx57;
    void** eax58;
    void** ebp59;
    void** ebp60;
    void** ebp61;
    void** esi62;
    void** edi63;
    void** edx64;
    void** v65;
    uint32_t ecx66;
    void** ecx67;
    void** eax68;
    void** ebp69;
    void** esi70;
    int32_t eax71;
    void** ebp72;
    void** ebp73;
    void** esi74;
    void** edi75;
    void** edx76;
    void** v77;
    uint32_t ecx78;
    void** eax79;
    void** eax80;
    void** ebp81;

    ebp2 = g482a40;
    ebx3 = g484cfc;
    if (ebx3 != "H") {
        while (1) {
            edx4 = *reinterpret_cast<void***>(ebx3 + 8);
            if (edx4) {
                if (!reinterpret_cast<int1_t>(edx4 == 0x41e0c0)) {
                    if (!reinterpret_cast<int1_t>(edx4 == 0x41e500)) {
                        if (!reinterpret_cast<int1_t>(edx4 == 0x420e50)) {
                            if (!reinterpret_cast<int1_t>(edx4 == 0x425ab0)) {
                                if (!reinterpret_cast<int1_t>(edx4 == fun_422780)) {
                                    if (!reinterpret_cast<int1_t>(edx4 == fun_422830)) {
                                        if (!reinterpret_cast<int1_t>(edx4 == 0x422a50)) {
                                            addr_42aa80_10:
                                            ebx3 = *reinterpret_cast<void***>(ebx3 + 4);
                                            if (!reinterpret_cast<int1_t>(ebx3 == "H")) 
                                                continue; else 
                                                break;
                                        } else {
                                            *reinterpret_cast<void***>(ebp2) = reinterpret_cast<void**>(6);
                                            ebp5 = ebp2 + 1;
                                            ebp6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp5) + (4 - (reinterpret_cast<unsigned char>(ebp5) & 3) & 3));
                                            esi7 = ebx3;
                                            edi8 = ebp6;
                                            g482a40 = ebp6;
                                            edx9 = edi8;
                                            ecx10 = 7;
                                            do {
                                                if (!ecx10) 
                                                    break;
                                                --ecx10;
                                                *reinterpret_cast<void***>(edi8) = *reinterpret_cast<void***>(esi7);
                                                edi8 = edi8 + 4;
                                                esi7 = esi7 + 4;
                                            } while (1);
                                            *reinterpret_cast<unsigned char*>(&ecx10) = 0;
                                            do {
                                                if (!ecx10) 
                                                    break;
                                                --ecx10;
                                                *reinterpret_cast<void***>(edi8) = *reinterpret_cast<void***>(esi7);
                                                ++edi8;
                                                ++esi7;
                                            } while (0);
                                            edi11 = g4845e0;
                                            eax12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx9 + 12)) - reinterpret_cast<unsigned char>(edi11)) / 86);
                                            ebp13 = g482a40;
                                            edx14 = ebp6;
                                            ebp2 = ebp13 + 28;
                                        }
                                    } else {
                                        *reinterpret_cast<void***>(ebp2) = reinterpret_cast<void**>(5);
                                        ebp15 = ebp2 + 1;
                                        ebp16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp15) + (4 - (reinterpret_cast<unsigned char>(ebp15) & 3) & 3));
                                        esi17 = ebx3;
                                        edi18 = ebp16;
                                        g482a40 = ebp16;
                                        edx19 = edi18;
                                        v20 = edi18;
                                        ecx21 = 9;
                                        do {
                                            if (!ecx21) 
                                                break;
                                            --ecx21;
                                            *reinterpret_cast<void***>(edi18) = *reinterpret_cast<void***>(esi17);
                                            edi18 = edi18 + 4;
                                            esi17 = esi17 + 4;
                                        } while (1);
                                        *reinterpret_cast<unsigned char*>(&ecx21) = 0;
                                        do {
                                            if (!ecx21) 
                                                break;
                                            --ecx21;
                                            *reinterpret_cast<void***>(edi18) = *reinterpret_cast<void***>(esi17);
                                            ++edi18;
                                            ++esi17;
                                        } while (0);
                                        eax22 = g4845e0;
                                        eax12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx19 + 12)) - reinterpret_cast<unsigned char>(eax22)) / 86);
                                        ebp23 = g482a40;
                                        edx14 = v20;
                                        ebp2 = ebp23 + 36;
                                    }
                                } else {
                                    *reinterpret_cast<void***>(ebp2) = reinterpret_cast<void**>(4);
                                    ebp24 = ebp2 + 1;
                                    ebp25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp24) + (4 - (reinterpret_cast<unsigned char>(ebp24) & 3) & 3));
                                    esi26 = ebx3;
                                    edi27 = ebp25;
                                    g482a40 = ebp25;
                                    edx28 = edi27;
                                    v29 = edi27;
                                    ecx30 = 9;
                                    do {
                                        if (!ecx30) 
                                            break;
                                        --ecx30;
                                        *reinterpret_cast<void***>(edi27) = *reinterpret_cast<void***>(esi26);
                                        edi27 = edi27 + 4;
                                        esi26 = esi26 + 4;
                                    } while (1);
                                    *reinterpret_cast<unsigned char*>(&ecx30) = 0;
                                    do {
                                        if (!ecx30) 
                                            break;
                                        --ecx30;
                                        *reinterpret_cast<void***>(edi27) = *reinterpret_cast<void***>(esi26);
                                        ++edi27;
                                        ++esi26;
                                    } while (0);
                                    ecx31 = g4845e0;
                                    eax12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx28 + 12)) - reinterpret_cast<unsigned char>(ecx31)) / 86);
                                    ebp32 = g482a40;
                                    edx14 = v29;
                                    ebp2 = ebp32 + 36;
                                }
                            } else {
                                *reinterpret_cast<void***>(ebp2) = reinterpret_cast<void**>(3);
                                ebp33 = ebp2 + 1;
                                ebp34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp33) + (4 - (reinterpret_cast<unsigned char>(ebp33) & 3) & 3));
                                esi35 = ebx3;
                                edi36 = ebp34;
                                g482a40 = ebp34;
                                edx37 = edi36;
                                v38 = edi36;
                                ecx39 = 14;
                                do {
                                    if (!ecx39) 
                                        break;
                                    --ecx39;
                                    *reinterpret_cast<void***>(edi36) = *reinterpret_cast<void***>(esi35);
                                    edi36 = edi36 + 4;
                                    esi35 = esi35 + 4;
                                } while (1);
                                *reinterpret_cast<unsigned char*>(&ecx39) = 0;
                                do {
                                    if (!ecx39) 
                                        break;
                                    --ecx39;
                                    *reinterpret_cast<void***>(edi36) = *reinterpret_cast<void***>(esi35);
                                    ++edi36;
                                    ++esi35;
                                } while (0);
                                esi40 = g4845e0;
                                eax12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx37 + 12)) - reinterpret_cast<unsigned char>(esi40)) / 86);
                                ebp41 = g482a40;
                                edx14 = v38;
                                ebp2 = ebp41 + 56;
                            }
                            *reinterpret_cast<void***>(edx14 + 12) = eax12;
                            goto addr_42aa80_10;
                        } else {
                            *reinterpret_cast<void***>(ebp2) = reinterpret_cast<void**>(2);
                            ebp42 = ebp2 + 1;
                            ebp43 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp42) + (4 - (reinterpret_cast<unsigned char>(ebp42) & 3) & 3));
                            esi44 = ebx3;
                            edi45 = ebp43;
                            g482a40 = ebp43;
                            edx46 = edi45;
                            ecx47 = 10;
                            do {
                                if (!ecx47) 
                                    break;
                                --ecx47;
                                *reinterpret_cast<void***>(edi45) = *reinterpret_cast<void***>(esi44);
                                edi45 = edi45 + 4;
                                esi44 = esi44 + 4;
                            } while (1);
                            *reinterpret_cast<unsigned char*>(&ecx47) = 2;
                            do {
                                if (!ecx47) 
                                    break;
                                --ecx47;
                                *reinterpret_cast<void***>(edi45) = *reinterpret_cast<void***>(esi44);
                                ++edi45;
                                ++esi44;
                            } while (1);
                            edi48 = g4845e0;
                            eax49 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx46 + 20)) - reinterpret_cast<unsigned char>(edi48)) / 86);
                            ebp50 = g482a40;
                            ebp2 = ebp50 + 42;
                            *reinterpret_cast<void***>(ebp43 + 20) = eax49;
                            goto addr_42aa80_10;
                        }
                    } else {
                        *reinterpret_cast<void***>(ebp2) = reinterpret_cast<void**>(1);
                        ebp51 = ebp2 + 1;
                        ebp52 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp51) + (4 - (reinterpret_cast<unsigned char>(ebp51) & 3) & 3));
                        esi53 = ebx3;
                        edi54 = ebp52;
                        g482a40 = ebp52;
                        edx55 = edi54;
                        v56 = edi54;
                        ecx57 = 10;
                        do {
                            if (!ecx57) 
                                break;
                            --ecx57;
                            *reinterpret_cast<void***>(edi54) = *reinterpret_cast<void***>(esi53);
                            edi54 = edi54 + 4;
                            esi53 = esi53 + 4;
                        } while (1);
                        *reinterpret_cast<unsigned char*>(&ecx57) = 0;
                        do {
                            if (!ecx57) 
                                break;
                            --ecx57;
                            *reinterpret_cast<void***>(edi54) = *reinterpret_cast<void***>(esi53);
                            ++edi54;
                            ++esi53;
                        } while (0);
                        eax58 = g4845e0;
                        ebp59 = g482a40;
                        ebp2 = ebp59 + 40;
                        *reinterpret_cast<void***>(v56 + 16) = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx55 + 16)) - reinterpret_cast<unsigned char>(eax58)) / 86);
                        goto addr_42aa80_10;
                    }
                } else {
                    *reinterpret_cast<void***>(ebp2) = reinterpret_cast<void**>(0);
                    ebp60 = ebp2 + 1;
                    ebp61 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp60) + (4 - (reinterpret_cast<unsigned char>(ebp60) & 3) & 3));
                    esi62 = ebx3;
                    edi63 = ebp61;
                    g482a40 = ebp61;
                    edx64 = edi63;
                    v65 = edi63;
                    ecx66 = 12;
                    do {
                        if (!ecx66) 
                            break;
                        --ecx66;
                        *reinterpret_cast<void***>(edi63) = *reinterpret_cast<void***>(esi62);
                        edi63 = edi63 + 4;
                        esi62 = esi62 + 4;
                    } while (1);
                    *reinterpret_cast<unsigned char*>(&ecx66) = 0;
                    do {
                        if (!ecx66) 
                            break;
                        --ecx66;
                        *reinterpret_cast<void***>(edi63) = *reinterpret_cast<void***>(esi62);
                        ++edi63;
                        ++esi62;
                    } while (0);
                    ecx67 = g4845e0;
                    eax68 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx64 + 16)) - reinterpret_cast<unsigned char>(ecx67)) / 86);
                    ebp69 = g482a40;
                    ebp2 = ebp69 + 48;
                    *reinterpret_cast<void***>(v65 + 16) = eax68;
                    goto addr_42aa80_10;
                }
            } else {
                esi70 = g4835fc;
                eax71 = 0;
                if (ebx3 != esi70) {
                    do {
                        eax71 = eax71 + 4;
                        ++edx4;
                        if (eax71 >= 0x78) 
                            break;
                    } while (ebx3 != *reinterpret_cast<void***>(eax71 + 0x4835fc));
                }
                if (reinterpret_cast<signed char>(edx4) < reinterpret_cast<signed char>(30)) {
                    *reinterpret_cast<void***>(ebp2) = reinterpret_cast<void**>(0);
                    ebp72 = ebp2 + 1;
                    ebp73 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp72) + (4 - (reinterpret_cast<unsigned char>(ebp72) & 3) & 3));
                    esi74 = ebx3;
                    edi75 = ebp73;
                    g482a40 = ebp73;
                    edx76 = edi75;
                    v77 = edi75;
                    ecx78 = 12;
                    do {
                        if (!ecx78) 
                            break;
                        --ecx78;
                        *reinterpret_cast<void***>(edi75) = *reinterpret_cast<void***>(esi74);
                        edi75 = edi75 + 4;
                        esi74 = esi74 + 4;
                    } while (1);
                    *reinterpret_cast<unsigned char*>(&ecx78) = 0;
                    do {
                        if (!ecx78) 
                            break;
                        --ecx78;
                        *reinterpret_cast<void***>(edi75) = *reinterpret_cast<void***>(esi74);
                        ++edi75;
                        ++esi74;
                    } while (0);
                    eax79 = g4845e0;
                    eax80 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx76 + 16)) - reinterpret_cast<unsigned char>(eax79)) / 86);
                    ebp81 = g482a40;
                    ebp2 = ebp81 + 48;
                    *reinterpret_cast<void***>(v77 + 16) = eax80;
                    goto addr_42aa80_10;
                }
            }
        }
    }
    *reinterpret_cast<void***>(ebp2) = reinterpret_cast<void**>(7);
    g482a40 = ebp2 + 1;
    return;
}

int32_t fun_41abe0(void** ecx);

int32_t fun_430f20(void** ecx, void** a2) {
    void** edx3;
    int1_t zf4;
    int32_t eax5;

    edx3 = g4654d4;
    if (edx3 && (zf4 = g5f22c0 == 0, !zf4)) {
        eax5 = fun_41abe0(0);
        g5f22c0 = reinterpret_cast<void**>(0);
    }
    return eax5;
}

void** fun_42cfc0(void** ecx);

void** fun_42d020(void** ecx) {
    void** eax2;
    void** eax3;
    void** edx4;

    eax2 = fun_42cfc0(ecx);
    if (reinterpret_cast<int1_t>(eax2 == 0xffffffff)) {
        fun_43bd40(ecx, "R_TextureNumForName: %s not found", eax3, edx4);
    }
    return eax2;
}

int32_t RegSetValueExA = 0x22082c;

void** fun_4402a0(void** ecx) {
    int32_t ebx2;
    int32_t eax3;
    void* esp4;
    int1_t zf5;
    int32_t v6;
    int32_t eax7;
    void* v8;
    int32_t edx9;

    ebx2 = 0;
    eax3 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001));
    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 28 - 4 - 4 - 4 - 4 + 4);
    if (!eax3) {
        RegQueryValueExA("Software\\id\\Doom95\\Session");
        RegCloseKey("demosize", "Software\\id\\Doom95\\Session");
        esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4);
        if (1) {
            ebx2 = 0;
        } else {
            ebx2 = 1;
        }
    }
    zf5 = ebx2 == 0;
    if (zf5) {
        v6 = ebx2;
    }
    if (!zf5) {
        eax7 = reinterpret_cast<int32_t>(RegOpenKeyA());
        esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 - 4 - 4 - 4 + 4);
        if (!eax7) {
            v8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 + 24);
            RegSetValueExA(v6, "demosize", 0, 4, v8, 4);
            RegCloseKey(0x80000001, v6, "demosize", 0, 4, v8, 4);
        }
    }
    goto edx9;
}

void fun_41d6d0(void** ecx);

void** fun_43d270(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35, void** a36, void** a37, void** a38, void** a39, void** a40, void** a41, void** a42, void** a43, void** a44, void** a45, void** a46, void** a47, void** a48, void** a49, void** a50, void** a51, void** a52, void** a53, void** a54, void** a55, void** a56, void** a57, void** a58, void** a59, void** a60, void** a61, void** a62, void** a63, void** a64, void** a65, void** a66, void** a67, void** a68, void** a69, void** a70, void** a71, void** a72) {
    int1_t zf73;
    void** edx74;
    void** eax75;

    zf73 = g482a74 == 0;
    if (zf73) {
        fun_414590(ecx);
    } else {
        fun_418530(ecx, edx74, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60, a61, a62, a63, a64);
    }
    fun_41d6d0(ecx);
    fun_434890(ecx, edx74, __return_address());
    fun_414590(ecx);
    fun_43cfd0(ecx);
    fun_438e40(ecx, edx74, __return_address(), a2, a3, a4);
    eax75 = fun_442fdc(ecx, edx74, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a70, a71, a72);
    return eax75;
}

void fun_412470() {
    g48122c = reinterpret_cast<void**>(1);
    return;
}

void** fun_44367f(void** ecx, void** a2, uint32_t a3, void** a4);

void** fun_443a1e(void** ecx);

void** fun_4439d1(void** ecx, void** a2, void** a3, void** a4);

int32_t fun_41d510(void** ecx) {
    void** eax2;
    void** eax3;
    void** eax4;
    void** esi5;
    void** ebx6;

    eax3 = fun_44367f(ecx, eax2, 0x261, 0x1b6);
    if (!reinterpret_cast<int1_t>(eax3 == 0xffffffff)) {
        eax4 = fun_443a1e(eax3);
        fun_4439d1(eax3, esi5, ecx, __return_address());
        if (reinterpret_cast<signed char>(eax4) >= reinterpret_cast<signed char>(ebx6)) {
            return 1;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}

void** g60b9e8 = reinterpret_cast<void**>(0);

struct s77 {
    signed char f0;
    unsigned char f1;
    signed char[1] pad3;
    unsigned char f3;
};

struct s78 {
    signed char f0;
    signed char f1;
};

struct s79 {
    signed char f0;
    signed char f1;
};

struct s80 {
    signed char f0;
    signed char f1;
    signed char[1] pad3;
    signed char f3;
};

struct s81 {
    signed char[4] pad4;
    signed char f4;
};

void** fun_433eb0(void** ecx, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** esi7;
    void** v8;
    void** edi9;
    void** v10;
    void** ebp11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** eax20;
    void** ebx21;
    int1_t zf22;
    int32_t edx23;
    int32_t edx24;
    int1_t zf25;
    int1_t zf26;
    int32_t edx27;
    void* esi28;
    void* eax29;
    void*** eax30;
    void** v31;
    void** eax32;
    void** v33;
    void** v34;
    void** v35;
    struct s77* ebp36;
    int32_t eax37;
    void** ebx38;
    void* eax39;
    unsigned char* edx40;
    uint32_t esi41;
    struct s78* eax42;
    void** ebx43;
    void* ecx44;
    signed char* eax45;
    void** edi46;
    void* ecx47;
    void** edi48;
    struct s79* eax49;
    void* ecx50;
    signed char* eax51;
    void* eax52;
    void** esi53;
    void** ebp54;
    void*** eax55;
    void** v56;
    void** v57;
    void** v58;
    void** ebp59;
    struct s80* edi60;
    int32_t edx61;
    int32_t ebx62;
    signed char* eax63;
    void*** edx64;
    void* ecx65;
    void** esi66;
    void* eax67;
    struct s81* edi68;
    void** edi69;
    void** eax70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;

    v5 = reinterpret_cast<void**>(__return_address());
    v6 = esi7;
    v8 = edi9;
    v10 = ebp11;
    v12 = ecx;
    eax20 = fun_43c050(ecx, v13, v14, v12, v15, v16, v17, v18, v19, v10, v8, v6, v5, a2, a3, a4);
    if (eax20) {
        ebx21 = g482a68;
        if (ebx21 == 1 || (ebx21 == 2 || reinterpret_cast<int1_t>(ebx21 == 3))) {
            zf22 = reinterpret_cast<int1_t>(g4775d4 == 0xf0);
            if (zf22) {
                edx23 = edx24 + 20;
            }
            zf25 = reinterpret_cast<int1_t>(g4775d4 == 0x1e0);
            if (zf25) {
                edx23 = edx23 + 20;
            }
        }
        zf26 = reinterpret_cast<int1_t>(g4775d0 == 0x140);
        if (!zf26) {
            edx27 = edx23 - reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v12 + 6));
            ecx = g60b9e8;
            esi28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax29) - reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v12 + 4)))));
            eax30 = g60ba04;
            v31 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax30) + (edx27 + edx27) * reinterpret_cast<unsigned char>(ecx) + (reinterpret_cast<uint32_t>(esi28) + reinterpret_cast<uint32_t>(esi28)));
            eax32 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v12))));
            v33 = reinterpret_cast<void**>(0);
            v34 = eax32;
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax32) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax32 == 0))) {
                v35 = v12;
                do {
                    ebp36 = reinterpret_cast<struct s77*>(reinterpret_cast<unsigned char>(v12) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v35 + 8)));
                    if (ebp36->f0 != -1) {
                        do {
                            eax37 = 0;
                            ebx38 = g60b9e8;
                            *reinterpret_cast<signed char*>(&eax37) = ebp36->f0;
                            eax39 = reinterpret_cast<void*>(eax37 * reinterpret_cast<unsigned char>(ebx38));
                            edx40 = &ebp36->f3;
                            esi41 = ebp36->f1;
                            eax42 = reinterpret_cast<struct s78*>(reinterpret_cast<uint32_t>(eax39) + reinterpret_cast<uint32_t>(eax39) + reinterpret_cast<unsigned char>(v31));
                            while (--esi41, esi41 != 0xffffffff) {
                                ebx43 = g487fb4;
                                eax42->f0 = *reinterpret_cast<signed char*>(*edx40 + reinterpret_cast<unsigned char>(ebx43));
                                ecx44 = reinterpret_cast<void*>(0);
                                *reinterpret_cast<unsigned char*>(&ecx44) = *edx40;
                                eax45 = &eax42->f1;
                                edi46 = g60b9e8;
                                *eax45 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx44) + reinterpret_cast<unsigned char>(ebx43));
                                ecx47 = reinterpret_cast<void*>(0);
                                edi48 = edi46 - 1;
                                *reinterpret_cast<unsigned char*>(&ecx47) = *edx40;
                                eax49 = reinterpret_cast<struct s79*>(reinterpret_cast<uint32_t>(eax45) + reinterpret_cast<unsigned char>(edi48));
                                eax49->f0 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx47) + reinterpret_cast<unsigned char>(ebx43));
                                ecx50 = reinterpret_cast<void*>(0);
                                *reinterpret_cast<unsigned char*>(&ecx50) = *edx40;
                                eax51 = &eax49->f1;
                                ++edx40;
                                *eax51 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx50) + reinterpret_cast<unsigned char>(ebx43));
                                eax42 = reinterpret_cast<struct s78*>(reinterpret_cast<uint32_t>(eax51) + reinterpret_cast<unsigned char>(edi48));
                            }
                            eax52 = reinterpret_cast<void*>(0);
                            *reinterpret_cast<unsigned char*>(&eax52) = ebp36->f1;
                            ebp36 = reinterpret_cast<struct s77*>(reinterpret_cast<int32_t>(eax52) + reinterpret_cast<uint32_t>(ebp36) + 4);
                        } while (ebp36->f0 != -1);
                    }
                    ecx = v35 + 4;
                    esi53 = v33 + 1;
                    v31 = v31 + 2;
                    v35 = ecx;
                    v33 = esi53;
                } while (reinterpret_cast<signed char>(esi53) < reinterpret_cast<signed char>(v34));
            }
        } else {
            ebp54 = g60b9e8;
            eax55 = g60ba04;
            v56 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax55) + (edx23 - reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v12 + 6))) * reinterpret_cast<unsigned char>(ebp54) + (reinterpret_cast<int32_t>(eax29) - reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v12 + 4))))));
            v57 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v12))));
            v58 = reinterpret_cast<void**>(0);
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(v57) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(v57 == 0))) {
                ebp59 = v12;
                while (1) {
                    edi60 = reinterpret_cast<struct s80*>(reinterpret_cast<unsigned char>(v12) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp59 + 8)));
                    if (edi60->f0 != -1) {
                        do {
                            edx61 = 0;
                            ecx = g60b9e8;
                            *reinterpret_cast<signed char*>(&edx61) = edi60->f0;
                            ebx62 = 0;
                            eax63 = &edi60->f3;
                            *reinterpret_cast<signed char*>(&ebx62) = edi60->f1;
                            edx64 = reinterpret_cast<void***>(edx61 * reinterpret_cast<unsigned char>(ecx) + reinterpret_cast<unsigned char>(v56));
                            while (--ebx62, ebx62 != -1) {
                                ecx65 = reinterpret_cast<void*>(0);
                                esi66 = g487fb4;
                                *reinterpret_cast<signed char*>(&ecx65) = *eax63;
                                *edx64 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ecx65) + reinterpret_cast<unsigned char>(esi66));
                                ecx = g60b9e8;
                                ++eax63;
                                edx64 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx64) + reinterpret_cast<unsigned char>(ecx));
                            }
                            eax67 = reinterpret_cast<void*>(0);
                            *reinterpret_cast<signed char*>(&eax67) = edi60->f1;
                            edi68 = reinterpret_cast<struct s81*>(reinterpret_cast<uint32_t>(edi60) + reinterpret_cast<uint32_t>(eax67));
                            edi60 = reinterpret_cast<struct s80*>(&edi68->f4);
                        } while (edi68->f4 != -1);
                    }
                    ebp59 = ebp59 + 4;
                    edi69 = v58 + 1;
                    ++v56;
                    v58 = edi69;
                    if (reinterpret_cast<signed char>(edi69) >= reinterpret_cast<signed char>(v57)) 
                        break;
                }
            }
        }
        eax70 = fun_43bb40(ecx, v34, v57, v12, v35, v33, v58, v56, v31, v10, v8, v6, v5, a2, a3, a4);
    } else {
        eax70 = fun_437a90(ecx, "V_DrawPatchDirect: megalock failed", v71, v72, v12, v73, v74, v75, v76);
    }
    return eax70;
}

void** fun_43f590(struct s26* ecx) {
    void* esp2;
    void** esi3;
    void** edx4;
    void** edx5;
    int32_t edi6;
    void** ecx7;
    int1_t zf8;
    void** eax9;
    void** edx10;
    void** eax11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** ebp20;
    void** edi21;
    void** esi22;
    int1_t zf23;
    void* ebx24;
    void* ebx25;
    void* ebx26;
    void** eax27;
    void*** esp28;
    void** v29;
    void** eax30;
    void* esp31;
    void** v32;
    void** ebx33;
    void** eax34;
    void** v35;
    void** edx36;
    void** eax37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 16);
    esi3 = edx4;
    edx5 = g482a68;
    edi6 = 0;
    if (!edx5) {
        ecx7 = g60b9d4;
        zf8 = ecx7 == 0;
        if (!zf8) {
            edi6 = 1;
            if (!zf8) {
                eax9 = g60b270;
                g60b9d4 = edx5;
                edx10 = *reinterpret_cast<void***>(eax9);
                eax11 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx10 + 0x80)(eax9, 0));
                esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 + 4);
                g60b3a0 = eax11;
                if (eax11) {
                    fun_437a90(ecx7, "MegaUnlock: Unlock = %d", reinterpret_cast<unsigned char>(eax11) & 0xfff, eax9, 0, v12, v13, v14, v15);
                    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 + 4 + 8);
                }
            } else {
                fun_437a90(ecx7, "MegaUnlock: Not Locked!", v16, v17, v18, v19, ebp20, edi21, esi22);
                esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 + 4 + 4);
            }
        }
        zf23 = reinterpret_cast<int1_t>(g4775d0 == 0x280);
        if (zf23) {
            esi3 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi3) + reinterpret_cast<unsigned char>(esi3));
            ebx24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx25) + reinterpret_cast<int32_t>(ebx26));
        }
        eax27 = g4775d0;
        esp28 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 - 4);
        v29 = reinterpret_cast<void**>(esp28 + 16);
        SetRect(v29, eax30, esi3, eax27, reinterpret_cast<int32_t>(ebx24) + reinterpret_cast<unsigned char>(esi3));
        esp31 = reinterpret_cast<void*>(esp28 - 4 - 4 + 4 - 4 - 4);
        v32 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp31) + 8);
        ebx33 = g60b278;
        eax34 = g60b270;
        v35 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp31) - 4 - 4 + 16);
        edx36 = *reinterpret_cast<void***>(eax34);
        eax37 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx36 + 20)(eax34, v35, ebx33, v32, 0x1000000, 0, v29, eax30, esi3, eax27, reinterpret_cast<int32_t>(ebx24) + reinterpret_cast<unsigned char>(esi3)));
        g60b3a0 = eax37;
        if (eax37) {
            v38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax37) & 0xfff);
            eax37 = fun_437a90(ecx7, "EraseFromPage4: Blt = %d", v38, eax34, v35, ebx33, v32, 0x1000000, 0, ecx7, "EraseFromPage4: Blt = %d", v38, eax34, v35, ebx33, v32, 0x1000000, 0);
        }
        if (edi6) {
            eax37 = fun_43c050(ecx7, eax34, v35, ebx33, v32, 0x1000000, 0, v29, eax30, esi3, eax27, reinterpret_cast<int32_t>(ebx24) + reinterpret_cast<unsigned char>(esi3), v39, v40, v41, v42);
        }
    }
    return eax37;
}

struct s82 {
    signed char[97] pad97;
    int32_t f61;
};

struct s83 {
    signed char[16] pad16;
    signed char f10;
};

struct s84 {
    signed char[101] pad101;
    int32_t f65;
};

void** fun_418670() {
    struct s82* eax1;
    struct s83* eax2;
    struct s84* eax3;
    void** eax4;

    eax1->f61 = 0;
    eax2->f10 = 0;
    eax3->f65 = 1;
    return eax4;
}

struct s85 {
    signed char[97] pad97;
    int32_t f61;
};

struct s86 {
    signed char[97] pad97;
    int32_t f61;
};

struct s87 {
    signed char[101] pad101;
    int32_t f65;
};

int32_t fun_418700() {
    struct s85* eax1;
    int32_t ebx2;
    struct s86* eax3;
    int32_t eax4;
    struct s87* eax5;

    if (eax1->f61) {
        ebx2 = eax1->f61 - 1;
        eax3->f61 = ebx2;
        *reinterpret_cast<signed char*>(ebx2 + eax4 + 16) = 0;
        eax5->f65 = 4;
        return 1;
    } else {
        return 0;
    }
}

struct s88 {
    signed char[8] pad8;
    void*** f8;
    int32_t fc;
    signed char[81] pad97;
    void** f61;
};

struct s89 {
    signed char[97] pad97;
    int32_t f61;
};

void** fun_418730(void** ecx) {
    struct s88* edi2;
    struct s88* eax3;
    void** v4;
    void** edx5;
    void** esi6;
    void*** eax7;
    int32_t ebx8;
    struct s89* eax9;
    void** v10;
    void** v11;
    void** eax12;
    int32_t ecx13;
    void** ecx14;
    void** ecx15;
    void** edx16;
    int1_t less_or_equal17;
    void** edx18;
    void** ecx19;
    void** ebp20;

    edi2 = eax3;
    v4 = edx5;
    esi6 = *eax7;
    ebx8 = eax9->f61;
    v10 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(ebx8 < 0) | reinterpret_cast<uint1_t>(ebx8 == 0))) {
        do {
            eax12 = fun_4435c2(ecx, v4, v11, v10);
            if (*reinterpret_cast<unsigned char*>(&eax12) == 32 || ((ecx13 = 0, *reinterpret_cast<unsigned char*>(&ecx13) = *reinterpret_cast<unsigned char*>(&eax12), ecx13 < edi2->fc) || *reinterpret_cast<unsigned char*>(&eax12) > 95)) {
                ecx14 = g4775d0;
                esi6 = esi6 + 4;
                if (reinterpret_cast<signed char>(esi6) >= reinterpret_cast<signed char>(ecx14)) 
                    break;
            } else {
                ecx15 = edi2->f8[(ecx13 - edi2->fc) * 4];
                edx16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi6) + static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ecx15))));
                v11 = edx16;
                eax12 = edx16;
                less_or_equal17 = reinterpret_cast<signed char>(eax12) <= reinterpret_cast<signed char>(g4775d0);
                if (!less_or_equal17) 
                    break;
                eax12 = fun_433eb0(ecx15, v4, v11, v10);
                esi6 = v11;
            }
            ecx = v10 + 1;
            edx18 = edi2->f61;
            v10 = ecx;
        } while (reinterpret_cast<signed char>(ecx) < reinterpret_cast<signed char>(edx18));
    }
    if (v4 && (ecx19 = edi2->f8[(95 - edi2->fc) * 4], ebp20 = g4775d0, eax12 = reinterpret_cast<void**>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ecx19)) + reinterpret_cast<unsigned char>(esi6)), reinterpret_cast<signed char>(eax12) <= reinterpret_cast<signed char>(ebp20))) {
        eax12 = fun_433eb0(ecx19, v4, v11, v10);
    }
    return eax12;
}

struct s90 {
    signed char[2] pad2;
    int16_t f2;
};

struct s91 {
    signed char[432] pad432;
    int32_t f1b0;
};

struct s92 {
    signed char[424] pad424;
    int32_t f1a8;
};

struct s93 {
    signed char[420] pad420;
    int32_t f1a4;
};

struct s94 {
    signed char[428] pad428;
    int32_t f1ac;
};

struct s95 {
    int32_t f0;
    int32_t f4;
    struct s90** f8;
    int32_t fc;
};

void** fun_418860(int32_t ecx, struct s90** a2, int32_t a3, int32_t a4) {
    int32_t v5;
    int32_t edx6;
    int32_t edi7;
    int32_t ebx8;
    int32_t esi9;
    struct s90** ecx10;
    struct s91* eax11;
    struct s92* eax12;
    struct s93* eax13;
    int32_t ebx14;
    struct s94* eax15;
    struct s95* edx16;
    struct s95* eax17;
    int32_t ebp18;
    void** eax19;

    v5 = edx6;
    edi7 = ebx8;
    esi9 = ecx;
    ecx10 = a2;
    eax11->f1b0 = 1;
    eax12->f1a8 = 0;
    eax13->f1a4 = esi9;
    ebx14 = 0;
    eax15->f1ac = a4;
    if (!(reinterpret_cast<uint1_t>(esi9 < 0) | reinterpret_cast<uint1_t>(esi9 == 0))) {
        edx16 = eax17;
        do {
            ebp18 = edi7 - ((*ecx10)->f2 + 1) * ebx14;
            edx16->f8 = ecx10;
            ++ebx14;
            edx16->f4 = ebp18;
            edx16->fc = a3;
            edx16->f0 = v5;
            eax19 = fun_418670();
            edx16 = reinterpret_cast<struct s95*>(reinterpret_cast<int32_t>(edx16) + 0x69);
        } while (ebx14 < esi9);
    }
    return eax19;
}

struct s96 {
    signed char[97] pad97;
    int32_t f61;
};

struct s97 {
    signed char[16] pad16;
    signed char f10;
};

struct s98 {
    signed char[101] pad101;
    int32_t f65;
};

struct s99 {
    signed char[4] pad4;
    int32_t f4;
};

struct s100 {
    signed char[8] pad8;
    int32_t f8;
};

struct s101 {
    signed char[12] pad12;
    int32_t fc;
};

void fun_418690(int32_t ecx, int32_t a2) {
    struct s96* eax3;
    struct s97* eax4;
    struct s98* eax5;
    int32_t* eax6;
    int32_t edx7;
    struct s99* eax8;
    int32_t ebx9;
    struct s100* eax10;
    struct s101* eax11;

    eax3->f61 = 0;
    eax4->f10 = 0;
    eax5->f65 = 1;
    *eax6 = edx7;
    eax8->f4 = ebx9;
    eax10->f8 = ecx;
    eax11->fc = a2;
    return;
}

struct s102 {
    signed char[97] pad97;
    int32_t f61;
};

struct s103 {
    signed char[97] pad97;
    int32_t f61;
};

struct s104 {
    signed char[97] pad97;
    int32_t f61;
};

struct s105 {
    signed char[101] pad101;
    int32_t f65;
};

int32_t fun_4186c0(int32_t ecx) {
    int32_t edx2;
    struct s102* eax3;
    struct s103* eax4;
    int32_t eax5;
    signed char dl6;
    struct s104* eax7;
    int32_t eax8;
    struct s105* eax9;

    edx2 = eax3->f61;
    if (edx2 != 80) {
        eax4->f61 = edx2 + 1;
        *reinterpret_cast<signed char*>(edx2 + eax5 + 16) = dl6;
        *reinterpret_cast<signed char*>(eax7->f61 + eax8 + 16) = 0;
        eax9->f65 = 4;
        return 1;
    } else {
        return 0;
    }
}

struct s106 {
    signed char[424] pad424;
    int32_t f1a8;
};

void fun_4188e0(struct s106* ecx);

struct s107 {
    signed char[97] pad97;
    int32_t f61;
    int32_t f65;
};

struct s108 {
    signed char[97] pad97;
    int32_t f61;
    int32_t f65;
};

void fun_418960(void** ecx) {
    struct s106* ecx2;
    struct s106* eax3;
    signed char* esi4;
    signed char* ebx5;
    int32_t edx6;
    signed char* edx7;
    struct s107* eax8;
    int32_t edi9;
    signed char v10;
    struct s108* eax11;
    signed char bl12;
    int32_t edx13;

    ecx2 = eax3;
    esi4 = ebx5;
    fun_4188e0(ecx2);
    if (edx6) {
        while (*edx7) {
            ++edx7;
            eax8 = reinterpret_cast<struct s107*>(ecx2->f1a8 * 0x69 + reinterpret_cast<int32_t>(ecx2));
            edi9 = eax8->f61;
            v10 = *(edx7 - 1);
            if (edi9 == 80) 
                continue;
            eax8->f61 = edi9 + 1;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax8) + edi9 + 16) = v10;
            *reinterpret_cast<signed char*>(eax8->f61 + reinterpret_cast<int32_t>(eax8) + 16) = 0;
            eax8->f65 = 4;
        }
    }
    while (*esi4) {
        eax11 = reinterpret_cast<struct s108*>(ecx2->f1a8 * 0x69 + reinterpret_cast<int32_t>(ecx2));
        bl12 = *esi4;
        edx13 = eax11->f61;
        ++esi4;
        if (edx13 == 80) 
            continue;
        eax11->f61 = edx13 + 1;
        *reinterpret_cast<signed char*>(edx13 + reinterpret_cast<int32_t>(eax11) + 16) = bl12;
        *reinterpret_cast<signed char*>(eax11->f61 + reinterpret_cast<int32_t>(eax11) + 16) = 0;
        eax11->f65 = 4;
    }
    return;
}

struct s109 {
    signed char[105] pad105;
    int32_t f69;
};

struct s110 {
    signed char[97] pad97;
    int32_t f61;
};

struct s111 {
    signed char[16] pad16;
    signed char f10;
};

struct s112 {
    signed char[101] pad101;
    int32_t f65;
};

void fun_418b40() {
    struct s109* eax1;
    struct s110* eax2;
    struct s111* eax3;
    struct s112* eax4;

    eax1->f69 = 0;
    eax2->f61 = 0;
    eax3->f10 = 0;
    eax4->f65 = 1;
    return;
}

uint32_t g459dc0 = 0;

uint32_t g459dc4 = 0;

void fun_419210() {
    uint32_t edx1;
    uint32_t ebx2;
    uint32_t edx3;
    uint32_t edx4;
    signed char al5;
    void** edx6;

    edx1 = g459dc0;
    ebx2 = g459dc4;
    if ((edx1 + 1 & 0x7f) != ebx2) {
        edx3 = g459dc0;
        edx4 = edx3 + 1;
        *reinterpret_cast<signed char*>(edx4 + 0x482ae3) = al5;
        g459dc0 = edx4 & 0x7f;
        return;
    } else {
        edx6 = g483004;
        *reinterpret_cast<void***>(edx6 + 0xd8) = reinterpret_cast<void**>("[Message unsent]");
        return;
    }
}

void* fun_443671();

int32_t g459eac = 0;

void* fun_41a6e0(int32_t ecx) {
    uint32_t edx2;
    signed char al3;
    void* eax4;
    uint32_t eax5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t eax8;
    uint32_t eax9;
    uint32_t eax10;
    uint32_t eax11;
    uint32_t eax12;
    int32_t eax13;
    uint32_t eax14;
    uint32_t eax15;
    int32_t eax16;
    int1_t zf17;
    int16_t ax18;
    int32_t ebx19;
    uint32_t eax20;
    uint32_t eax21;
    uint32_t eax22;
    uint32_t eax23;
    uint32_t eax24;
    uint32_t eax25;
    uint32_t eax26;
    uint32_t eax27;
    uint32_t eax28;
    uint32_t eax29;
    uint32_t eax30;
    uint32_t eax31;
    uint32_t eax32;
    int32_t eax33;
    uint32_t eax34;
    uint32_t eax35;
    uint32_t eax36;
    uint32_t eax37;
    uint32_t eax38;
    uint32_t eax39;
    uint32_t eax40;
    int32_t eax41;
    uint32_t eax42;
    uint32_t eax43;
    uint32_t eax44;
    uint32_t eax45;
    uint32_t eax46;
    uint32_t eax47;
    uint32_t eax48;
    uint32_t eax49;
    uint32_t eax50;
    uint32_t eax51;
    uint32_t eax52;
    uint32_t eax53;
    uint32_t eax54;
    uint32_t eax55;
    uint32_t eax56;
    uint32_t eax57;
    uint32_t eax58;
    uint32_t eax59;
    uint32_t eax60;
    uint32_t eax61;
    uint32_t eax62;
    uint32_t eax63;
    uint32_t eax64;
    uint32_t eax65;
    uint32_t eax66;
    uint32_t eax67;
    uint32_t eax68;
    uint32_t eax69;
    uint32_t eax70;
    uint32_t eax71;
    uint32_t eax72;
    int32_t eax73;
    uint32_t eax74;
    uint32_t eax75;
    uint32_t eax76;
    uint32_t eax77;
    uint32_t eax78;
    uint32_t eax79;
    uint32_t eax80;
    uint32_t eax81;
    uint32_t eax82;
    uint32_t eax83;
    uint32_t eax84;
    int32_t eax85;
    uint32_t eax86;
    uint32_t eax87;
    uint32_t eax88;
    uint32_t eax89;
    uint32_t eax90;

    *reinterpret_cast<signed char*>(&edx2) = reinterpret_cast<signed char>(al3 + 1);
    if (*reinterpret_cast<unsigned char*>((edx2 & 0xff) + 0x459418) & 64) {
        eax4 = fun_443671();
        return eax4;
    }
    if (*reinterpret_cast<unsigned char*>((edx2 & 0xff) + 0x459418) & 32) {
        addr_41ab80_4:
        return 0xffffffff;
    } else {
        if (eax5 < 0x6b) {
            if (eax6 < 38) {
                if (eax7 < 19) {
                    if (eax8 < 12) {
                        if (eax9 < 8) {
                            if (eax10 >= 1 && eax11 > 4) {
                                return 0xffffffff;
                            }
                        } else {
                            if (eax12 <= 8) {
                                return 0x7f;
                            } else {
                                if (eax13 != 9) {
                                    return 0xffffffff;
                                }
                            }
                        }
                    } else {
                        if (eax14 <= 12) {
                            addr_41ab73_17:
                            return 0xcc;
                        } else {
                            if (eax15 < 16) {
                                if (eax16 == 13) {
                                    zf17 = g459eac == 0;
                                    if (zf17 || (ax18 = reinterpret_cast<int16_t>(GetAsyncKeyState()), ax18 <= 1)) {
                                        return 13;
                                    } else {
                                        goto ebx19;
                                    }
                                } else {
                                    return 0xffffffff;
                                }
                            }
                            if (eax20 > 16) 
                                goto addr_41a9aa_25;
                        }
                    }
                } else {
                    if (eax21 <= 19) {
                        return 0xff;
                    }
                    if (eax22 < 33) 
                        goto addr_41a96d_29; else 
                        goto addr_41a94a_30;
                }
            } else {
                if (eax23 <= 38) {
                    addr_41aa5b_32:
                    return 0xad;
                } else {
                    if (eax24 < 97) {
                        if (eax25 < 45) {
                            if (eax26 < 40) {
                                addr_41aa63_36:
                                return 0xae;
                            } else {
                                if (eax27 > 40) {
                                    return 0xffffffff;
                                }
                            }
                        } else {
                            if (eax28 <= 45) {
                                return 0xd2;
                            } else {
                                if (eax29 < 47) {
                                    addr_41a883_42:
                                    return 0xd3;
                                } else {
                                    if (eax30 <= 47 || (eax31 < 91 || eax32 <= 93)) {
                                        addr_41ab7b_44:
                                        goto addr_41ab80_4;
                                    } else {
                                        if (eax33 != 96) {
                                            return 0xffffffff;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (eax34 <= 97) 
                            goto addr_41ab5b_48;
                        if (eax35 < 0x66) 
                            goto addr_41a8cd_50; else 
                            goto addr_41a8aa_51;
                    }
                }
            }
        } else {
            if (eax36 <= 0x6b) {
                return 43;
            }
            if (eax37 < 0x90) 
                goto addr_41a7fd_55; else 
                goto addr_41a722_56;
        }
    }
    return 0xb6;
    addr_41a9aa_25:
    if (eax38 <= 17) {
        addr_41aa2b_58:
        return 0x9d;
    }
    addr_41aa33_60:
    return 0xb8;
    addr_41a96d_29:
    if (eax39 < 27) {
        return 0xffffffff;
    } else {
        if (eax40 <= 27) {
            return 27;
        } else {
            if (eax41 != 32) {
                return 0xffffffff;
            }
        }
    }
    addr_41a94a_30:
    if (eax42 <= 33) {
        return 0xc9;
    } else {
        if (eax43 < 35) {
            addr_41ab53_68:
            return 0xd1;
        } else {
            if (eax44 <= 35) {
                addr_41ab5b_48:
                return 0xcf;
            } else {
                if (eax45 <= 36) {
                    addr_41ab63_71:
                    return 0xc7;
                }
            }
        }
    }
    return 0xac;
    addr_41a8cd_50:
    if (eax46 < 99) {
        return 0xaf;
    } else {
        if (eax47 <= 99) 
            goto addr_41ab53_68;
        if (eax48 > 100) {
            goto addr_41ab73_17;
        }
    }
    addr_41a8aa_51:
    if (eax49 <= 0x66) 
        goto addr_41aa63_36;
    if (eax50 < 0x68) 
        goto addr_41ab63_71;
    if (eax51 <= 0x68) 
        goto addr_41aa5b_32;
    if (eax52 > 0x69) {
        return 42;
    }
    addr_41a7fd_55:
    if (eax53 >= 0x74) {
        if (eax54 <= 0x74) {
            return 0xbf;
        } else {
            if (eax55 < 0x78) {
                if (eax56 < 0x76) {
                    return 0xc0;
                } else {
                    if (eax57 <= 0x76) {
                        return 0xc1;
                    } else {
                        return 0xc2;
                    }
                }
            } else {
                if (eax58 <= 0x78) {
                    return 0xc3;
                } else {
                    if (eax59 < 0x7a) {
                        return 0xc4;
                    } else {
                        if (eax60 <= 0x7a) {
                            return 0xd7;
                        } else {
                            if (eax61 <= 0x7b) {
                                return 0xd8;
                            } else {
                                return 0xffffffff;
                            }
                        }
                    }
                }
            }
        }
    }
    if (eax62 >= 0x6f) 
        goto addr_41a851_102;
    if (eax63 < 0x6d) 
        goto addr_41ab7b_44;
    if (eax64 <= 0x6d) 
        goto addr_41aa43_105; else 
        goto addr_41a883_42;
    addr_41a851_102:
    if (eax65 > 0x6f) {
        if (eax66 < 0x71) {
            return 0xbb;
        } else {
            if (eax67 <= 0x71) {
                return 0xbc;
            } else {
                if (eax68 <= 0x72) {
                    return 0xbd;
                } else {
                    return 0xbe;
                }
            }
        }
    }
    addr_41aafb_114:
    return 47;
    addr_41a722_56:
    if (eax69 <= 0x91) 
        goto addr_41ab7b_44;
    if (eax70 < 0xbc) {
        if (eax71 < 0xa3) {
            if (eax72 < 0xa1) {
                if (eax73 == 0xa0) {
                    return 0xfe;
                } else {
                    return 0xffffffff;
                }
            } else {
                if (eax74 > 0xa1) {
                    return 29;
                }
            }
        } else {
            if (eax75 <= 0xa3) 
                goto addr_41aa2b_58;
            if (eax76 < 0xa5) 
                goto addr_41aa33_60;
            if (eax77 <= 0xa5) 
                goto addr_41aa33_60;
        }
    } else {
        if (eax78 <= 0xbc) {
            return 44;
        }
        if (eax79 < 0xdb) 
            goto addr_41a778_130; else 
            goto addr_41a741_131;
    }
    if (eax80 >= 0xba) {
        if (eax81 <= 0xba) {
            return 59;
        } else {
            return 61;
        }
    }
    addr_41a778_130:
    if (eax82 < 0xbe) {
        addr_41aa43_105:
        return 45;
    } else {
        if (eax83 <= 0xbe) {
            return 46;
        }
        if (eax84 <= 0xbf) 
            goto addr_41aafb_114;
    }
    if (eax85 == 0xc0) {
        return 96;
    } else {
        goto addr_41ab7b_44;
    }
    addr_41a741_131:
    if (eax86 <= 0xdb) {
        return 91;
    } else {
        if (eax87 < 0xdd) {
            return 92;
        } else {
            if (eax88 <= 0xdd) {
                return 93;
            } else {
                if (eax89 <= 0xde) {
                    return 39;
                } else {
                    if (eax90 >= 0xf6) {
                        goto addr_41ab7b_44;
                    }
                }
            }
        }
    }
}

int32_t GetDesktopWindow = 0x220b7c;

int32_t MoveWindow = 0x220c7e;

void fun_419fe0(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10) {
    int32_t eax11;
    void* esp12;
    void* esp13;
    int32_t esi14;
    int32_t eax15;
    int32_t edi16;
    void* v17;
    int32_t edx18;
    int32_t ecx19;
    int32_t ebx20;
    int32_t v21;
    int32_t v22;
    int32_t edx23;
    int32_t v24;
    int32_t v25;
    int32_t v26;
    int32_t edx27;
    int32_t v28;
    int32_t v29;
    int32_t v30;

    eax11 = reinterpret_cast<int32_t>(GetDesktopWindow());
    esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 56 - 4 + 4);
    GetWindowRect();
    esp13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 - 4 - 4 + 4);
    GetWindowRect();
    esi14 = eax11 - eax15;
    edi16 = reinterpret_cast<int32_t>(esp12) + 16 - reinterpret_cast<int32_t>(esp13);
    v17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp13) - 4 - 4 - 4 + 4 + 32);
    GetWindowRect(edx18, v17);
    ecx19 = 0;
    ebx20 = v21 - esi14;
    if (esi14 >= v22) {
        edx23 = v24 - v25;
        if (edx23 <= esi14) {
            addr_41a070_3:
            if (edi16 >= v26) {
                edx27 = v28 - v29;
                if (edx27 <= edi16) {
                    addr_41a093_5:
                    MoveWindow(eax15, ebx20, ecx19, esi14, edi16, 0, edx18, v17);
                    goto v30;
                } else {
                    addr_41a088_6:
                    ecx19 = edx27 - (edx27 >> 31) >> 1;
                    goto addr_41a093_5;
                }
            } else {
                edx27 = v26 - edi16;
                goto addr_41a088_6;
            }
        } else {
            addr_41a065_8:
            ebx20 = edx23 - (edx23 >> 31) >> 1;
            goto addr_41a070_3;
        }
    } else {
        edx23 = v22 - esi14;
        goto addr_41a065_8;
    }
}

int32_t PostMessageA = 0x220c9c;

int32_t CheckDlgButton = 0x220ab6;

int32_t GetDlgItem = 0x220b90;

int32_t EnableWindow = 0x220b34;

void fun_419f50(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10) {
    int32_t v11;
    int32_t v12;
    int32_t ebx13;
    int32_t v14;
    int32_t v15;
    int32_t edx16;
    int32_t v17;
    int32_t esi18;
    int32_t v19;
    int32_t edi20;
    int32_t v21;
    int32_t ebp22;
    int32_t esi23;
    int32_t eax24;
    int32_t ebx25;
    int32_t v26;
    int32_t v27;
    int32_t edi28;
    int32_t ebp29;

    v11 = reinterpret_cast<int32_t>(__return_address());
    v12 = ebx13;
    v14 = ecx;
    v15 = edx16;
    v17 = esi18;
    v19 = edi20;
    v21 = ebp22;
    esi23 = eax24;
    ebx25 = 0;
    do {
        v26 = *reinterpret_cast<int32_t*>(ebx25 + 0x459de0);
        v27 = *reinterpret_cast<int32_t*>(ebx25 + 0x459dd8);
        ebx25 = ebx25 + 16;
        PostMessageA(esi23, 0x40b, v27, v26, v21, v19, v17, v15, v14, v12, v11);
    } while (ebx25 != 0xd0);
    edi28 = g4835ec;
    CheckDlgButton(esi23, 0x3f5, edi28, esi23, 0x40b, v27, v26, v21, v19, v17, v15, v14, v12, v11);
    ebp29 = g459eac;
    CheckDlgButton(esi23, 0x411, ebp29, esi23, 0x3f5, edi28, esi23, 0x40b, v27, v26, v21, v19, v17, v15, v14, v12, v11);
    GetDlgItem();
    EnableWindow();
    GetDlgItem();
    EnableWindow();
    goto 2;
}

struct s113 {
    int32_t f0;
    int32_t f4;
};

int32_t g4540a4 = 0x6d697250;

int32_t g4540a8 = 0x797261;

struct s114 {
    int32_t f0;
    int32_t f4;
};

int32_t g4540ac = 0x6f636553;

struct s115 {
    int32_t f0;
    int16_t f4;
};

int32_t g4540b0 = 0x7261646e;

int16_t g4540b4 = 0x79;

struct s116 {
    int32_t f0;
    int16_t f4;
};

int32_t g4540b8 = 0x6464694d;

struct s117 {
    int16_t f0;
    signed char f2;
};

int16_t g4540bc = 0x656c;

signed char g4540be = 0;

int32_t g4540d4 = 0x626154;

struct s118 {
    int32_t f0;
    int16_t f4;
};

int32_t g4540d8 = 0x65746e45;

int16_t g4540dc = 0x72;

struct s119 {
    int32_t f0;
    int16_t f4;
};

int32_t g4540e0 = 0x61637345;

struct s120 {
    int16_t f0;
    signed char f2;
};

int16_t g4540e4 = 0x6570;

signed char g4540e6 = 0;

struct s121 {
    int32_t f0;
    int16_t f4;
};

int32_t g454188 = 0x63617053;

int16_t g45418c = 0x65;

struct s122 {
    int32_t f0;
    int16_t f4;
};

int32_t g454150 = 0x756e694d;

int16_t g454154 = 0x73;

struct s123 {
    int32_t f0;
    int16_t f4;
};

int32_t g454148 = 0x61757145;

struct s124 {
    int16_t f0;
    signed char f2;
};

int16_t g45414c = 0x736c;

signed char g45414e = 0;

struct s125 {
    int32_t f0;
    int32_t f4;
};

int32_t g4540e8 = 0x6b636142;

struct s126 {
    int32_t f0;
    int16_t f4;
};

int32_t g4540ec = 0x63617053;

int16_t g4540f0 = 0x65;

struct s127 {
    int32_t f0;
    signed char f4;
};

int32_t g4540c4 = 0x6c727443;

signed char g4540c8 = 0;

struct s128 {
    int32_t f0;
    signed char f4;
};

int32_t g4540f4 = 0x7466654c;

signed char g4540f8 = 0;

struct s129 {
    int16_t f0;
    signed char f2;
};

int16_t g4540fc = 0x7055;

signed char g4540fe = 0;

struct s130 {
    int32_t f0;
    int16_t f4;
};

int32_t g454100 = 0x68676952;

int16_t g454104 = 0x74;

struct s131 {
    int32_t f0;
    signed char f4;
};

int32_t g454108 = 0x6e776f44;

signed char g45410c = 0;

struct s132 {
    int32_t f0;
    int16_t f4;
};

int32_t g4540cc = 0x66696853;

int16_t g4540d0 = 0x74;

int32_t g4540c0 = 0x746c41;

struct s133 {
    int16_t f0;
    signed char f2;
};

int16_t g454110 = 0x3146;

signed char g454112 = 0;

struct s134 {
    int16_t f0;
    signed char f2;
};

int16_t g454114 = 0x3246;

signed char g454116 = 0;

struct s135 {
    int16_t f0;
    signed char f2;
};

int16_t g454118 = 0x3346;

signed char g45411a = 0;

struct s136 {
    int16_t f0;
    signed char f2;
};

int16_t g45411c = 0x3446;

signed char g45411e = 0;

struct s137 {
    int16_t f0;
    signed char f2;
};

int16_t g454120 = 0x3546;

signed char g454122 = 0;

struct s138 {
    int16_t f0;
    signed char f2;
};

int16_t g454124 = 0x3646;

signed char g454126 = 0;

struct s139 {
    int16_t f0;
    signed char f2;
};

int16_t g454128 = 0x3746;

signed char g45412a = 0;

struct s140 {
    int16_t f0;
    signed char f2;
};

int16_t g45412c = 0x3846;

signed char g45412e = 0;

struct s141 {
    int16_t f0;
    signed char f2;
};

int16_t g454130 = 0x3946;

signed char g454132 = 0;

int32_t g454134 = 0x303146;

struct s142 {
    int32_t f0;
    signed char f4;
};

int32_t g45416c = 0x656d6f48;

signed char g454170 = 0;

struct s143 {
    int32_t f0;
    int16_t f4;
};

int32_t g454158 = 0x65676150;

struct s144 {
    int16_t f0;
    signed char f2;
};

int16_t g45415c = 0x7055;

signed char g45415e = 0;

struct s145 {
    int32_t f0;
    int32_t f4;
};

int32_t g45417c = 0x506d754e;

struct s146 {
    int32_t f0;
    signed char f4;
};

int32_t g454180 = 0x35206461;

signed char g454184 = 0;

int32_t g454168 = 0x646e45;

struct s147 {
    int32_t f0;
    int32_t f4;
};

int32_t g454160 = 0x65676150;

int32_t g454164 = 0x6e7744;

int32_t g454174 = 0x736e49;

int32_t g454178 = 0x6c6544;

int32_t g454138 = 0x313146;

int32_t g45413c = 0x323146;

struct s148 {
    int32_t f0;
    int16_t f4;
};

int32_t g454140 = 0x73756150;

int16_t g454144 = 0x65;

struct s149 {
    signed char[1] pad1;
    signed char f1;
};

int32_t fun_419610(int32_t ecx, int32_t a2, int32_t a3, void* a4) {
    int32_t ebx5;
    int32_t eax6;
    uint32_t eax7;
    uint32_t eax8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    struct s113* edx12;
    signed char* edi13;
    signed char* edx14;
    int32_t ecx15;
    uint32_t eax16;
    struct s114* edx17;
    struct s115* edi18;
    signed char* edi19;
    signed char* edx20;
    int32_t ecx21;
    int32_t eax22;
    struct s116* edx23;
    struct s117* edi24;
    signed char* edi25;
    signed char* edx26;
    int32_t ecx27;
    uint32_t eax28;
    int32_t eax29;
    int32_t* edx30;
    signed char* edi31;
    signed char* edx32;
    int32_t ecx33;
    uint32_t eax34;
    int32_t eax35;
    struct s118* edx36;
    signed char* edi37;
    signed char* edx38;
    int32_t ecx39;
    uint32_t eax40;
    struct s119* edx41;
    struct s120* edi42;
    signed char* edi43;
    signed char* edx44;
    int32_t ecx45;
    uint32_t eax46;
    uint32_t eax47;
    struct s121* edx48;
    signed char* edi49;
    signed char* edx50;
    int32_t ecx51;
    int32_t eax52;
    struct s122* edx53;
    signed char* edi54;
    signed char* edx55;
    int32_t ecx56;
    uint32_t eax57;
    struct s123* edx58;
    struct s124* edi59;
    signed char* edi60;
    signed char* edx61;
    int32_t ecx62;
    uint32_t eax63;
    uint32_t eax64;
    int32_t eax65;
    struct s125* edx66;
    struct s126* edi67;
    signed char* edi68;
    signed char* edx69;
    int32_t ecx70;
    uint32_t eax71;
    struct s127* edx72;
    signed char* edi73;
    signed char* edx74;
    int32_t ecx75;
    uint32_t eax76;
    uint32_t eax77;
    struct s128* edx78;
    signed char* edi79;
    signed char* edx80;
    int32_t ecx81;
    struct s129* edx82;
    signed char* edi83;
    signed char* edx84;
    int32_t ecx85;
    uint32_t eax86;
    struct s130* edx87;
    signed char* edi88;
    signed char* edx89;
    int32_t ecx90;
    uint32_t eax91;
    int32_t eax92;
    struct s131* edx93;
    signed char* edi94;
    signed char* edx95;
    int32_t ecx96;
    uint32_t eax97;
    struct s132* edx98;
    signed char* edi99;
    signed char* edx100;
    int32_t ecx101;
    uint32_t eax102;
    uint32_t eax103;
    int32_t eax104;
    int32_t* edx105;
    signed char* edi106;
    signed char* edx107;
    int32_t ecx108;
    int32_t eax109;
    struct s133* edx110;
    signed char* edi111;
    signed char* edx112;
    int32_t ecx113;
    uint32_t eax114;
    struct s134* edx115;
    signed char* edi116;
    signed char* edx117;
    int32_t ecx118;
    uint32_t eax119;
    uint32_t eax120;
    uint32_t eax121;
    struct s135* edx122;
    signed char* edi123;
    signed char* edx124;
    int32_t ecx125;
    uint32_t eax126;
    struct s136* edx127;
    signed char* edi128;
    signed char* edx129;
    int32_t ecx130;
    struct s137* edx131;
    signed char* edi132;
    signed char* edx133;
    int32_t ecx134;
    uint32_t eax135;
    struct s138* edx136;
    signed char* edi137;
    signed char* edx138;
    int32_t ecx139;
    uint32_t eax140;
    struct s139* edx141;
    signed char* edi142;
    signed char* edx143;
    int32_t ecx144;
    uint32_t eax145;
    struct s140* edx146;
    signed char* edi147;
    signed char* edx148;
    int32_t ecx149;
    uint32_t eax150;
    struct s141* edx151;
    signed char* edi152;
    signed char* edx153;
    int32_t ecx154;
    int32_t eax155;
    int32_t eax156;
    int32_t* edx157;
    signed char* edi158;
    signed char* edx159;
    int32_t ecx160;
    uint32_t eax161;
    struct s142* edx162;
    signed char* edi163;
    signed char* edx164;
    int32_t ecx165;
    uint32_t eax166;
    uint32_t eax167;
    int32_t eax168;
    struct s143* edx169;
    struct s144* edi170;
    signed char* edi171;
    signed char* edx172;
    int32_t ecx173;
    uint32_t eax174;
    struct s145* edx175;
    struct s146* edi176;
    signed char* edi177;
    signed char* edx178;
    int32_t ecx179;
    uint32_t eax180;
    uint32_t eax181;
    int32_t eax182;
    int32_t* edx183;
    signed char* edi184;
    signed char* edx185;
    int32_t ecx186;
    int32_t eax187;
    struct s147* edx188;
    signed char* edi189;
    signed char* edx190;
    int32_t ecx191;
    uint32_t eax192;
    int32_t eax193;
    int32_t* edx194;
    signed char* edi195;
    signed char* edx196;
    int32_t ecx197;
    uint32_t eax198;
    int32_t eax199;
    int32_t eax200;
    int32_t* edx201;
    signed char* edi202;
    signed char* edx203;
    int32_t ecx204;
    uint32_t eax205;
    int32_t eax206;
    int32_t* edx207;
    signed char* edi208;
    signed char* edx209;
    int32_t ecx210;
    uint32_t eax211;
    int32_t eax212;
    int32_t* edx213;
    signed char* edi214;
    signed char* edx215;
    int32_t ecx216;
    int32_t eax217;
    struct s148* edx218;
    signed char* edi219;
    signed char* edx220;
    int32_t ecx221;
    struct s149* edx222;
    signed char* edx223;
    signed char al224;
    signed char* edi225;
    signed char* edx226;
    int32_t ecx227;
    signed char* edx228;

    if (ebx5 >= 10) {
        if (eax6 != -1) {
            if (eax7 < 0xbc) {
                if (eax8 < 61) {
                    if (eax9 < 9) {
                        if (eax10 < 1) {
                            if (!eax11) {
                                edx12->f0 = g4540a4;
                                edx12->f4 = g4540a8;
                                edi13 = edx14;
                                ecx15 = ecx - ecx - 1;
                                do {
                                    if (!ecx15) 
                                        break;
                                    --ecx15;
                                    ++edi13;
                                } while (*edi13);
                                return ~ecx15 - 1;
                            }
                        } else {
                            if (eax16 <= 1) {
                                edx17->f0 = g4540ac;
                                edi18 = reinterpret_cast<struct s115*>(&edx17->f4);
                                edi18->f0 = g4540b0;
                                edi18->f4 = g4540b4;
                                edi19 = edx20;
                                ecx21 = ecx - ecx - 1;
                                do {
                                    if (!ecx21) 
                                        break;
                                    --ecx21;
                                    ++edi19;
                                } while (*edi19);
                                return ~ecx21 - 1;
                            } else {
                                if (eax22 == 2) {
                                    edx23->f0 = g4540b8;
                                    edi24 = reinterpret_cast<struct s117*>(&edx23->f4);
                                    edi24->f0 = g4540bc;
                                    edi24->f2 = g4540be;
                                    edi25 = edx26;
                                    ecx27 = ecx - ecx - 1;
                                    do {
                                        if (!ecx27) 
                                            break;
                                        --ecx27;
                                        ++edi25;
                                    } while (*edi25);
                                    return ~ecx27 - 1;
                                }
                            }
                        }
                    } else {
                        if (eax28 <= 9) {
                            eax29 = g4540d4;
                            *edx30 = eax29;
                            edi31 = edx32;
                            ecx33 = ecx - ecx - 1;
                            do {
                                if (!ecx33) 
                                    break;
                                --ecx33;
                                ++edi31;
                            } while (*edi31);
                            return ~ecx33 - 1;
                        } else {
                            if (eax34 < 27) {
                                if (eax35 == 13) {
                                    edx36->f0 = g4540d8;
                                    edx36->f4 = g4540dc;
                                    edi37 = edx38;
                                    ecx39 = ecx - ecx - 1;
                                    do {
                                        if (!ecx39) 
                                            break;
                                        --ecx39;
                                        ++edi37;
                                    } while (*edi37);
                                    return ~ecx39 - 1;
                                }
                            } else {
                                if (eax40 <= 27) {
                                    edx41->f0 = g4540e0;
                                    edi42 = reinterpret_cast<struct s120*>(&edx41->f4);
                                    edi42->f0 = g4540e4;
                                    edi42->f2 = g4540e6;
                                    edi43 = edx44;
                                    ecx45 = ecx - ecx - 1;
                                    do {
                                        if (!ecx45) 
                                            break;
                                        --ecx45;
                                        ++edi43;
                                    } while (*edi43);
                                    return ~ecx45 - 1;
                                } else {
                                    if (eax46 >= 32) {
                                        if (eax47 <= 32) {
                                            edx48->f0 = g454188;
                                            edx48->f4 = g45418c;
                                            edi49 = edx50;
                                            ecx51 = ecx - ecx - 1;
                                            do {
                                                if (!ecx51) 
                                                    break;
                                                --ecx51;
                                                ++edi49;
                                            } while (*edi49);
                                            return ~ecx51 - 1;
                                        } else {
                                            if (eax52 == 45) {
                                                edx53->f0 = g454150;
                                                edx53->f4 = g454154;
                                                edi54 = edx55;
                                                ecx56 = ecx - ecx - 1;
                                                do {
                                                    if (!ecx56) 
                                                        break;
                                                    --ecx56;
                                                    ++edi54;
                                                } while (*edi54);
                                                return ~ecx56 - 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (eax57 <= 61) {
                        edx58->f0 = g454148;
                        edi59 = reinterpret_cast<struct s124*>(&edx58->f4);
                        edi59->f0 = g45414c;
                        edi59->f2 = g45414e;
                        edi60 = edx61;
                        ecx62 = ecx - ecx - 1;
                        do {
                            if (!ecx62) 
                                break;
                            --ecx62;
                            ++edi60;
                        } while (*edi60);
                        return ~ecx62 - 1;
                    } else {
                        if (eax63 < 0xae) {
                            if (eax64 < 0x9d) {
                                if (eax65 == 0x7f) {
                                    edx66->f0 = g4540e8;
                                    edi67 = reinterpret_cast<struct s126*>(&edx66->f4);
                                    edi67->f0 = g4540ec;
                                    edi67->f4 = g4540f0;
                                    edi68 = edx69;
                                    ecx70 = ecx - ecx - 1;
                                    do {
                                        if (!ecx70) 
                                            break;
                                        --ecx70;
                                        ++edi68;
                                    } while (*edi68);
                                    return ~ecx70 - 1;
                                }
                            } else {
                                if (eax71 <= 0x9d) {
                                    edx72->f0 = g4540c4;
                                    edx72->f4 = g4540c8;
                                    edi73 = edx74;
                                    ecx75 = ecx - ecx - 1;
                                    do {
                                        if (!ecx75) 
                                            break;
                                        --ecx75;
                                        ++edi73;
                                    } while (*edi73);
                                    return ~ecx75 - 1;
                                } else {
                                    if (eax76 >= 0xac) {
                                        if (eax77 <= 0xac) {
                                            edx78->f0 = g4540f4;
                                            edx78->f4 = g4540f8;
                                            edi79 = edx80;
                                            ecx81 = ecx - ecx - 1;
                                            do {
                                                if (!ecx81) 
                                                    break;
                                                --ecx81;
                                                ++edi79;
                                            } while (*edi79);
                                            return ~ecx81 - 1;
                                        } else {
                                            edx82->f0 = g4540fc;
                                            edx82->f2 = g4540fe;
                                            edi83 = edx84;
                                            ecx85 = ecx - ecx - 1;
                                            do {
                                                if (!ecx85) 
                                                    break;
                                                --ecx85;
                                                ++edi83;
                                            } while (*edi83);
                                            return ~ecx85 - 1;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (eax86 <= 0xae) {
                                edx87->f0 = g454100;
                                edx87->f4 = g454104;
                                edi88 = edx89;
                                ecx90 = ecx - ecx - 1;
                                do {
                                    if (!ecx90) 
                                        break;
                                    --ecx90;
                                    ++edi88;
                                } while (*edi88);
                                return ~ecx90 - 1;
                            } else {
                                if (eax91 < 0xb6) {
                                    if (eax92 == 0xaf) {
                                        edx93->f0 = g454108;
                                        edx93->f4 = g45410c;
                                        edi94 = edx95;
                                        ecx96 = ecx - ecx - 1;
                                        do {
                                            if (!ecx96) 
                                                break;
                                            --ecx96;
                                            ++edi94;
                                        } while (*edi94);
                                        return ~ecx96 - 1;
                                    }
                                } else {
                                    if (eax97 <= 0xb6) {
                                        edx98->f0 = g4540cc;
                                        edx98->f4 = g4540d0;
                                        edi99 = edx100;
                                        ecx101 = ecx - ecx - 1;
                                        do {
                                            if (!ecx101) 
                                                break;
                                            --ecx101;
                                            ++edi99;
                                        } while (*edi99);
                                        return ~ecx101 - 1;
                                    } else {
                                        if (eax102 >= 0xb8) {
                                            if (eax103 <= 0xb8) {
                                                eax104 = g4540c0;
                                                *edx105 = eax104;
                                                edi106 = edx107;
                                                ecx108 = ecx - ecx - 1;
                                                do {
                                                    if (!ecx108) 
                                                        break;
                                                    --ecx108;
                                                    ++edi106;
                                                } while (*edi106);
                                                return ~ecx108 - 1;
                                            } else {
                                                if (eax109 == 0xbb) {
                                                    edx110->f0 = g454110;
                                                    edx110->f2 = g454112;
                                                    edi111 = edx112;
                                                    ecx113 = ecx - ecx - 1;
                                                    do {
                                                        if (!ecx113) 
                                                            break;
                                                        --ecx113;
                                                        ++edi111;
                                                    } while (*edi111);
                                                    return ~ecx113 - 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (eax114 <= 0xbc) {
                    edx115->f0 = g454114;
                    edx115->f2 = g454116;
                    edi116 = edx117;
                    ecx118 = ecx - ecx - 1;
                    do {
                        if (!ecx118) 
                            break;
                        --ecx118;
                        ++edi116;
                    } while (*edi116);
                    return ~ecx118 - 1;
                } else {
                    if (eax119 < 0xc7) {
                        if (eax120 < 0xc0) {
                            if (eax121 < 0xbe) {
                                edx122->f0 = g454118;
                                edx122->f2 = g45411a;
                                edi123 = edx124;
                                ecx125 = ecx - ecx - 1;
                                do {
                                    if (!ecx125) 
                                        break;
                                    --ecx125;
                                    ++edi123;
                                } while (*edi123);
                                return ~ecx125 - 1;
                            } else {
                                if (eax126 <= 0xbe) {
                                    edx127->f0 = g45411c;
                                    edx127->f2 = g45411e;
                                    edi128 = edx129;
                                    ecx130 = ecx - ecx - 1;
                                    do {
                                        if (!ecx130) 
                                            break;
                                        --ecx130;
                                        ++edi128;
                                    } while (*edi128);
                                    return ~ecx130 - 1;
                                } else {
                                    edx131->f0 = g454120;
                                    edx131->f2 = g454122;
                                    edi132 = edx133;
                                    ecx134 = ecx - ecx - 1;
                                    do {
                                        if (!ecx134) 
                                            break;
                                        --ecx134;
                                        ++edi132;
                                    } while (*edi132);
                                    return ~ecx134 - 1;
                                }
                            }
                        } else {
                            if (eax135 <= 0xc0) {
                                edx136->f0 = g454124;
                                edx136->f2 = g454126;
                                edi137 = edx138;
                                ecx139 = ecx - ecx - 1;
                                do {
                                    if (!ecx139) 
                                        break;
                                    --ecx139;
                                    ++edi137;
                                } while (*edi137);
                                return ~ecx139 - 1;
                            } else {
                                if (eax140 < 0xc2) {
                                    edx141->f0 = g454128;
                                    edx141->f2 = g45412a;
                                    edi142 = edx143;
                                    ecx144 = ecx - ecx - 1;
                                    do {
                                        if (!ecx144) 
                                            break;
                                        --ecx144;
                                        ++edi142;
                                    } while (*edi142);
                                    return ~ecx144 - 1;
                                } else {
                                    if (eax145 <= 0xc2) {
                                        edx146->f0 = g45412c;
                                        edx146->f2 = g45412e;
                                        edi147 = edx148;
                                        ecx149 = ecx - ecx - 1;
                                        do {
                                            if (!ecx149) 
                                                break;
                                            --ecx149;
                                            ++edi147;
                                        } while (*edi147);
                                        return ~ecx149 - 1;
                                    } else {
                                        if (eax150 <= 0xc3) {
                                            edx151->f0 = g454130;
                                            edx151->f2 = g454132;
                                            edi152 = edx153;
                                            ecx154 = ecx - ecx - 1;
                                            do {
                                                if (!ecx154) 
                                                    break;
                                                --ecx154;
                                                ++edi152;
                                            } while (*edi152);
                                            return ~ecx154 - 1;
                                        } else {
                                            if (eax155 == 0xc4) {
                                                eax156 = g454134;
                                                *edx157 = eax156;
                                                edi158 = edx159;
                                                ecx160 = ecx - ecx - 1;
                                                do {
                                                    if (!ecx160) 
                                                        break;
                                                    --ecx160;
                                                    ++edi158;
                                                } while (*edi158);
                                                return ~ecx160 - 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (eax161 <= 0xc7) {
                            edx162->f0 = g45416c;
                            edx162->f4 = g454170;
                            edi163 = edx164;
                            ecx165 = ecx - ecx - 1;
                            do {
                                if (!ecx165) 
                                    break;
                                --ecx165;
                                ++edi163;
                            } while (*edi163);
                            return ~ecx165 - 1;
                        } else {
                            if (eax166 < 0xd2) {
                                if (eax167 < 0xcc) {
                                    if (eax168 == 0xc9) {
                                        edx169->f0 = g454158;
                                        edi170 = reinterpret_cast<struct s144*>(&edx169->f4);
                                        edi170->f0 = g45415c;
                                        edi170->f2 = g45415e;
                                        edi171 = edx172;
                                        ecx173 = ecx - ecx - 1;
                                        do {
                                            if (!ecx173) 
                                                break;
                                            --ecx173;
                                            ++edi171;
                                        } while (*edi171);
                                        return ~ecx173 - 1;
                                    }
                                } else {
                                    if (eax174 <= 0xcc) {
                                        edx175->f0 = g45417c;
                                        edi176 = reinterpret_cast<struct s146*>(&edx175->f4);
                                        edi176->f0 = g454180;
                                        edi176->f4 = g454184;
                                        edi177 = edx178;
                                        ecx179 = ecx - ecx - 1;
                                        do {
                                            if (!ecx179) 
                                                break;
                                            --ecx179;
                                            ++edi177;
                                        } while (*edi177);
                                        return ~ecx179 - 1;
                                    } else {
                                        if (eax180 >= 0xcf) {
                                            if (eax181 <= 0xcf) {
                                                eax182 = g454168;
                                                *edx183 = eax182;
                                                edi184 = edx185;
                                                ecx186 = ecx - ecx - 1;
                                                do {
                                                    if (!ecx186) 
                                                        break;
                                                    --ecx186;
                                                    ++edi184;
                                                } while (*edi184);
                                                return ~ecx186 - 1;
                                            } else {
                                                if (eax187 == 0xd1) {
                                                    edx188->f0 = g454160;
                                                    edx188->f4 = g454164;
                                                    edi189 = edx190;
                                                    ecx191 = ecx - ecx - 1;
                                                    do {
                                                        if (!ecx191) 
                                                            break;
                                                        --ecx191;
                                                        ++edi189;
                                                    } while (*edi189);
                                                    return ~ecx191 - 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (eax192 <= 0xd2) {
                                    eax193 = g454174;
                                    *edx194 = eax193;
                                    edi195 = edx196;
                                    ecx197 = ecx - ecx - 1;
                                    do {
                                        if (!ecx197) 
                                            break;
                                        --ecx197;
                                        ++edi195;
                                    } while (*edi195);
                                    return ~ecx197 - 1;
                                } else {
                                    if (eax198 < 0xd7) {
                                        if (eax199 == 0xd3) {
                                            eax200 = g454178;
                                            *edx201 = eax200;
                                            edi202 = edx203;
                                            ecx204 = ecx - ecx - 1;
                                            do {
                                                if (!ecx204) 
                                                    break;
                                                --ecx204;
                                                ++edi202;
                                            } while (*edi202);
                                            return ~ecx204 - 1;
                                        }
                                    } else {
                                        if (eax205 <= 0xd7) {
                                            eax206 = g454138;
                                            *edx207 = eax206;
                                            edi208 = edx209;
                                            ecx210 = ecx - ecx - 1;
                                            do {
                                                if (!ecx210) 
                                                    break;
                                                --ecx210;
                                                ++edi208;
                                            } while (*edi208);
                                            return ~ecx210 - 1;
                                        } else {
                                            if (eax211 <= 0xd8) {
                                                eax212 = g45413c;
                                                *edx213 = eax212;
                                                edi214 = edx215;
                                                ecx216 = ecx - ecx - 1;
                                                do {
                                                    if (!ecx216) 
                                                        break;
                                                    --ecx216;
                                                    ++edi214;
                                                } while (*edi214);
                                                return ~ecx216 - 1;
                                            } else {
                                                if (eax217 == 0xff) {
                                                    edx218->f0 = g454140;
                                                    edx218->f4 = g454144;
                                                    edi219 = edx220;
                                                    ecx221 = ecx - ecx - 1;
                                                    do {
                                                        if (!ecx221) 
                                                            break;
                                                        --ecx221;
                                                        ++edi219;
                                                    } while (*edi219);
                                                    return ~ecx221 - 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            edx222->f1 = 0;
            *edx223 = al224;
            edi225 = edx226;
            ecx227 = ecx - ecx - 1;
            do {
                if (!ecx227) 
                    break;
                --ecx227;
                ++edi225;
            } while (*edi225);
            return ~ecx227 - 1;
        } else {
            *edx228 = 0;
            return 0;
        }
    } else {
        return 0;
    }
}

