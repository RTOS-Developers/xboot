#ifndef __RK3288_REG_CRU_H__
#define __RK3288_REG_CRU_H__

#define RK3288_CRU_BASE			(0xff760000)

#define CRU_APLL_CON0			(0x0000)
#define CRU_APLL_CON1			(0x0004)
#define CRU_APLL_CON2			(0x0008)
#define CRU_APLL_CON3			(0x000c)
#define CRU_DPLL_CON0			(0x0010)
#define CRU_DPLL_CON1			(0x0014)
#define CRU_DPLL_CON2			(0x0018)
#define CRU_DPLL_CON3			(0x001c)
#define CRU_CPLL_CON0			(0x0020)
#define CRU_CPLL_CON1			(0x0024)
#define CRU_CPLL_CON2			(0x0028)
#define CRU_CPLL_CON3			(0x002c)
#define CRU_GPLL_CON0			(0x0030)
#define CRU_GPLL_CON1			(0x0034)
#define CRU_GPLL_CON2			(0x0038)
#define CRU_GPLL_CON3			(0x003c)
#define CRU_NPLL_CON0			(0x0040)
#define CRU_NPLL_CON1			(0x0044)
#define CRU_NPLL_CON2			(0x0048)
#define CRU_NPLL_CON3			(0x004c)

#define CRU_MODE_CON			(0x0050)

#define CRU_CLKSEL0_CON			(0x0060)
#define CRU_CLKSEL1_CON			(0x0064)
#define CRU_CLKSEL2_CON			(0x0068)
#define CRU_CLKSEL3_CON			(0x006c)
#define CRU_CLKSEL4_CON			(0x0070)
#define CRU_CLKSEL5_CON			(0x0074)
#define CRU_CLKSEL6_CON			(0x0078)
#define CRU_CLKSEL7_CON			(0x007c)
#define CRU_CLKSEL8_CON			(0x0080)
#define CRU_CLKSEL9_CON			(0x0084)
#define CRU_CLKSEL10_CON		(0x0088)
#define CRU_CLKSEL11_CON		(0x008c)
#define CRU_CLKSEL12_CON		(0x0090)
#define CRU_CLKSEL13_CON		(0x0094)
#define CRU_CLKSEL14_CON		(0x0098)
#define CRU_CLKSEL15_CON		(0x009c)
#define CRU_CLKSEL16_CON		(0x00a0)
#define CRU_CLKSEL17_CON		(0x00a4)
#define CRU_CLKSEL18_CON		(0x00a8)
#define CRU_CLKSEL19_CON		(0x00ac)
#define CRU_CLKSEL20_CON		(0x00b0)
#define CRU_CLKSEL21_CON		(0x00b4)
#define CRU_CLKSEL22_CON		(0x00b8)
#define CRU_CLKSEL23_CON		(0x00bc)
#define CRU_CLKSEL24_CON		(0x00c0)
#define CRU_CLKSEL25_CON		(0x00c4)
#define CRU_CLKSEL26_CON		(0x00c8)
#define CRU_CLKSEL27_CON		(0x00cc)
#define CRU_CLKSEL28_CON		(0x00d0)
#define CRU_CLKSEL29_CON		(0x00d4)
#define CRU_CLKSEL30_CON		(0x00d8)
#define CRU_CLKSEL31_CON		(0x00dc)
#define CRU_CLKSEL32_CON		(0x00e0)
#define CRU_CLKSEL33_CON		(0x00e4)
#define CRU_CLKSEL34_CON		(0x00e8)
#define CRU_CLKSEL35_CON		(0x00ec)
#define CRU_CLKSEL36_CON		(0x00f0)
#define CRU_CLKSEL37_CON		(0x00f4)
#define CRU_CLKSEL38_CON		(0x00f8)
#define CRU_CLKSEL39_CON		(0x00fc)
#define CRU_CLKSEL40_CON		(0x0100)
#define CRU_CLKSEL41_CON		(0x0104)
#define CRU_CLKSEL42_CON		(0x0108)

#define CRU_CLKGATE0_CON		(0x0160)
#define CRU_CLKGATE1_CON		(0x0164)
#define CRU_CLKGATE2_CON		(0x0168)
#define CRU_CLKGATE3_CON		(0x016c)
#define CRU_CLKGATE4_CON		(0x0170)
#define CRU_CLKGATE5_CON		(0x0174)
#define CRU_CLKGATE6_CON		(0x0178)
#define CRU_CLKGATE7_CON		(0x017c)
#define CRU_CLKGATE8_CON		(0x0180)
#define CRU_CLKGATE9_CON		(0x0184)
#define CRU_CLKGATE10_CON		(0x0188)
#define CRU_CLKGATE11_CON		(0x018c)
#define CRU_CLKGATE12_CON		(0x0190)
#define CRU_CLKGATE13_CON		(0x0194)
#define CRU_CLKGATE14_CON		(0x0198)
#define CRU_CLKGATE15_CON		(0x019c)
#define CRU_CLKGATE16_CON		(0x01a0)
#define CRU_CLKGATE17_CON		(0x01a4)
#define CRU_CLKGATE18_CON		(0x01a8)

#define CRU_GLB_SRST_FST_VALUE	(0x01b0)
#define CRU_GLB_SRST_SND_VALUE	(0x01b4)
#define CRU_SOFTRST0_CON		(0x01b8)
#define CRU_SOFTRST1_CON		(0x01bc)
#define CRU_SOFTRST2_CON		(0x01c0)
#define CRU_SOFTRST3_CON		(0x01c4)
#define CRU_SOFTRST4_CON		(0x01c8)
#define CRU_SOFTRST5_CON		(0x01cc)
#define CRU_SOFTRST6_CON		(0x01d0)
#define CRU_SOFTRST7_CON		(0x01d4)
#define CRU_SOFTRST8_CON		(0x01d8)
#define CRU_SOFTRST9_CON		(0x01dc)
#define CRU_SOFTRST10_CON		(0x01e0)
#define CRU_SOFTRST11_CON		(0x01e4)

#define CRU_MISC_CON			(0x01e8)
#define CRU_GLB_CNT_TH			(0x01ec)
#define CRU_GLB_RST_CON			(0x01f0)
#define CRU_GLB_RST_ST			(0x01f8)

#define CRU_SDMMC_CON0			(0x0200)
#define CRU_SDMMC_CON1			(0x0204)
#define CRU_SDIO0_CON0			(0x0208)
#define CRU_SDIO0_CON1			(0x020c)
#define CRU_SDIO1_CON0			(0x0210)
#define CRU_SDIO1_CON1			(0x0214)
#define CRU_EMMC_CON0			(0x0218)
#define CRU_EMMC_CON1			(0x021c)

#endif /* __RK3288_REG_CRU_H__ */
