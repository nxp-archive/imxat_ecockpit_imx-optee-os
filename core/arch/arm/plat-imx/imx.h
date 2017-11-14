/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright 2017-2018 NXP
 *
 * Peng Fan <peng.fan@nxp.com>
 */
#ifndef PLAT_IMX_IMX_H
#define PLAT_IMX_IMX_H

#include <stdint.h>
#include <stdbool.h>
#include <tee_api_types.h>

#define SOC_MX6SL	0x60
#define SOC_MX6DL	0x61
#define SOC_MX6SX	0x62
#define SOC_MX6Q	0x63
#define SOC_MX6UL	0x64
#define SOC_MX6ULL	0x65
#define SOC_MX6SLL	0x67
#define SOC_MX6D	0x6A
#define SOC_MX7D	0x72

uint32_t imx_get_src_gpr(int cpu);
void imx_set_src_gpr(int cpu, uint32_t val);

bool soc_is_imx6(void);
bool soc_is_imx6sll(void);
bool soc_is_imx6sl(void);
bool soc_is_imx6sx(void);
bool soc_is_imx6ul(void);
bool soc_is_imx6ull(void);
bool soc_is_imx6sdl(void);
bool soc_is_imx6dq(void);
bool soc_is_imx6dqp(void);
bool soc_is_imx7ds(void);
void imx_gpcv2_set_core1_pdn_by_software(void);
void imx_gpcv2_set_core1_pup_by_software(void);
#ifdef CFG_CSU
TEE_Result csu_init(void);
#endif
#ifdef CFG_SCU
void scu_init(void);
#endif
#endif
