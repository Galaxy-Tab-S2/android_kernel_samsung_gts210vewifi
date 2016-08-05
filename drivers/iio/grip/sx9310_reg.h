/*
 * Copyright (C) 2013 Samsung Electronics. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 */
#ifndef _SX9310_I2C_REG_H_
#define _SX9310_I2C_REG_H_

/*
 *  I2C Registers
 */
#define SX9310_IRQSTAT_REG	0x00
#define SX9310_STAT0_REG	0x01
#define SX9310_STAT1_REG	0x02
#define SX9310_IRQ_ENABLE_REG	0x03
#define SX9310_IRQFUNC_REG	0x04
#define SX9310_CPS_CTRL0_REG	0x10
#define SX9310_CPS_CTRL1_REG	0x11
#define SX9310_CPS_CTRL2_REG	0x12
#define SX9310_CPS_CTRL3_REG	0x13
#define SX9310_CPS_CTRL4_REG	0x14
#define SX9310_CPS_CTRL5_REG	0x15
#define SX9310_CPS_CTRL6_REG	0x16
#define SX9310_CPS_CTRL7_REG	0x17
#define SX9310_CPS_CTRL8_REG	0x18
#define SX9310_CPS_CTRL9_REG	0x19
#define SX9310_CPS_CTRL10_REG	0x1A
#define SX9310_CPS_CTRL11_REG	0x1B
#define SX9310_CPS_CTRL12_REG	0x1C
#define SX9310_CPS_CTRL13_REG	0x1D
#define SX9310_CPS_CTRL14_REG	0x1E
#define SX9310_CPS_CTRL15_REG	0x1F
#define SX9310_CPS_CTRL16_REG	0x20
#define SX9310_CPS_CTRL17_REG	0x21
#define SX9310_CPS_CTRL18_REG	0x22
#define SX9310_CPS_CTRL19_REG	0x23
#define SX9310_SAR_CTRL0_REG	0x2A
#define SX9310_SAR_CTRL1_REG	0x2B
#define SX9310_SAR_CTRL2_REG	0x2C

#define SX9310_SOFTRESET_REG	0x7F

/* Sensor Readback */
#define SX9310_REGSENSORSELECT	0x30
#define SX9310_REGUSEMSB	0x31
#define SX9310_REGUSELSB	0x32
#define SX9310_REGAVGMSB	0x33
#define SX9310_REGAVGLSB	0x34
#define SX9310_REGDIFFMSB	0x35
#define SX9310_REGDIFFLSB	0x36
#define SX9310_REGOFFSETMSB	0x37
#define SX9310_REGOFFSETLSB	0x38
#define SX9310_SARMSB		0x39
#define SX9310_SARLSB		0x3A

/*Miscellaneous register */
#define SX9310_I2CADDRSET_REG		0x40

/* IrqStat 0:Inactive 1:Active */
#define SX9310_IRQSTAT_RESET_FLAG	0x80
#define SX9310_IRQSTAT_TOUCH_FLAG	0x40
#define SX9310_IRQSTAT_RELEASE_FLAG	0x20
#define SX9310_IRQSTAT_COMPDONE_FLAG	0x10
#define SX9310_IRQSTAT_CONV_FLAG	0x08
#define SX9310_IRQSTAT_SMARTSAR_FLAG	0x01

/* CpsStat */
#define SX9310_TCHCMPSTAT_TCHCOMB_FLAG   0x08
#define SX9310_TCHCMPSTAT_TCHSTAT2_FLAG  0x04
#define SX9310_TCHCMPSTAT_TCHSTAT1_FLAG  0x02
#define SX9310_TCHCMPSTAT_TCHSTAT0_FLAG  0x01

/* Bodystat */
#define SX9310_BODYCMPSTAT_FLAG  0x10
/* SoftReset */
#define SX9310_SOFTRESET  0xDE

struct smtc_reg_data {
	unsigned char reg;
	unsigned char val;
};

enum {
	OFF = 0,
	ON = 1
};

enum {
	SX9310_IRQ_ENABLE = 0,	/* 0 */
	SX9310_IRQFUNC,		/* 1 */
	SX9310_CPS_CTRL0,	/* 2 */
	SX9310_CPS_CTRL1,	/* 3 */
	SX9310_CPS_CTRL2,	/* 4 */
	SX9310_CPS_CTRL3,	/* 5 */
	SX9310_CPS_CTRL4,	/* 6 */
	SX9310_CPS_CTRL5,	/* 7 */
	SX9310_CPS_CTRL6,	/* 8 */
	SX9310_CPS_CTRL7,	/* 9 */
	SX9310_CPS_CTRL8,	/* 10 */
	SX9310_CPS_CTRL9,	/* 11 */
	SX9310_CPS_CTRL10,	/* 12 */
	SX9310_SAR_CTRL0,	/* 13 */
	SX9310_END
};

static struct smtc_reg_data setup_reg[] = {
	{
		.reg = SX9310_IRQ_ENABLE_REG,
		.val = 0x70,
	},
	{
		.reg = SX9310_IRQFUNC_REG,
		.val = 0x00,
	},
	{
		.reg = SX9310_CPS_CTRL0_REG,
		.val = 0x80,
	},
	{
		.reg = SX9310_CPS_CTRL1_REG,
		.val = 0x00,
	},
	{
		.reg = SX9310_CPS_CTRL2_REG,
		.val = 0x00,
	},
	{
		.reg = SX9310_CPS_CTRL3_REG,
		.val = 0x02, /* CS1 GAIN : x4 */
	},
	{
		.reg = SX9310_CPS_CTRL4_REG,
		.val = 0x0D,
	},
	{
		.reg = SX9310_CPS_CTRL5_REG,
		.val = 0xC0, /* RANGE: SMALL, RAWFILT: 0 */
	},
	{
		.reg = SX9310_CPS_CTRL6_REG,
		.val = 0x10,
	},
	{
		.reg = SX9310_CPS_CTRL7_REG,
		.val =  0x49, /* AVGPOSFILT: 1-1/16, AVGNEGFILT: 1-1/2 */
	},
	{
		.reg = SX9310_CPS_CTRL8_REG,
		.val = 0x7E,
	},
	{
		.reg = SX9310_CPS_CTRL9_REG,
		.val = 0x7D,
	},
	{
		.reg = SX9310_CPS_CTRL10_REG,
		.val = 0x10, /* HYSTERESIS: +-6% */
	},
	{
		.reg = SX9310_SAR_CTRL0_REG,
		.val = 0x01,
	},

};

#endif /* _SX9310_I2C_REG_H_*/
