/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2018 Zodiac Inflight Innovations
 *
 * Author: Andrey Smirnov <andrew.smirnov@gmail.com>
 */

#ifndef DT_BINDING_RESET_IMX8MQ_H
#define DT_BINDING_RESET_IMX8MQ_H

#define IMX8MQ_RESET_A53_CORE_POR_RESET0	0
#define IMX8MQ_RESET_A53_CORE_POR_RESET1	1
#define IMX8MQ_RESET_A53_CORE_POR_RESET2	2
#define IMX8MQ_RESET_A53_CORE_POR_RESET3	3
#define IMX8MQ_RESET_A53_CORE_RESET0		4
#define IMX8MQ_RESET_A53_CORE_RESET1		5
#define IMX8MQ_RESET_A53_CORE_RESET2		6
#define IMX8MQ_RESET_A53_CORE_RESET3		7
#define IMX8MQ_RESET_A53_DBG_RESET0		8
#define IMX8MQ_RESET_A53_DBG_RESET1		9
#define IMX8MQ_RESET_A53_DBG_RESET2		10
#define IMX8MQ_RESET_A53_DBG_RESET3		11
#define IMX8MQ_RESET_A53_ETM_RESET0		12
#define IMX8MQ_RESET_A53_ETM_RESET1		13
#define IMX8MQ_RESET_A53_ETM_RESET2		14
#define IMX8MQ_RESET_A53_ETM_RESET3		15
#define IMX8MQ_RESET_A53_SOC_DBG_RESET		16
#define IMX8MQ_RESET_A53_L2RESET		17
#define IMX8MQ_RESET_SW_NON_SCLR_M4C_RST	18
#define IMX8MQ_RESET_OTG1_PHY_RESET		19
#define IMX8MQ_RESET_OTG2_PHY_RESET		20	/* i.MX8MN does NOT support */
#define IMX8MQ_RESET_MIPI_DSI_RESET_BYTE_N	21	/* i.MX8MN does NOT support */
#define IMX8MQ_RESET_MIPI_DSI_RESET_N		22	/* i.MX8MN does NOT support */
#define IMX8MQ_RESET_MIPI_DSI_DPI_RESET_N	23	/* i.MX8MN does NOT support */
#define IMX8MQ_RESET_MIPI_DSI_ESC_RESET_N	24	/* i.MX8MN does NOT support */
#define IMX8MQ_RESET_MIPI_DSI_PCLK_RESET_N	25	/* i.MX8MN does NOT support */
#define IMX8MQ_RESET_PCIEPHY			26	/* i.MX8MN does NOT support */
#define IMX8MQ_RESET_PCIEPHY_PERST		27	/* i.MX8MN does NOT support */
#define IMX8MQ_RESET_PCIE_CTRL_APPS_EN		28	/* i.MX8MN does NOT support */
#define IMX8MQ_RESET_PCIE_CTRL_APPS_TURNOFF	29	/* i.MX8MN does NOT support */
#define IMX8MQ_RESET_HDMI_PHY_APB_RESET		30	/* i.MX8MM/i.MX8MN does NOT support */
#define IMX8MQ_RESET_DISP_RESET			31
#define IMX8MQ_RESET_GPU_RESET			32
#define IMX8MQ_RESET_VPU_RESET			33	/* i.MX8MN does NOT support */
#define IMX8MQ_RESET_PCIEPHY2			34	/* i.MX8MM/i.MX8MN does NOT support */
#define IMX8MQ_RESET_PCIEPHY2_PERST		35	/* i.MX8MM/i.MX8MN does NOT support */
#define IMX8MQ_RESET_PCIE2_CTRL_APPS_EN		36	/* i.MX8MM/i.MX8MN does NOT support */
#define IMX8MQ_RESET_PCIE2_CTRL_APPS_TURNOFF	37	/* i.MX8MM/i.MX8MN does NOT support */
#define IMX8MQ_RESET_MIPI_CSI1_CORE_RESET	38	/* i.MX8MM/i.MX8MN does NOT support */
#define IMX8MQ_RESET_MIPI_CSI1_PHY_REF_RESET	39	/* i.MX8MM/i.MX8MN does NOT support */
#define IMX8MQ_RESET_MIPI_CSI1_ESC_RESET	40	/* i.MX8MM/i.MX8MN does NOT support */
#define IMX8MQ_RESET_MIPI_CSI2_CORE_RESET	41	/* i.MX8MM/i.MX8MN does NOT support */
#define IMX8MQ_RESET_MIPI_CSI2_PHY_REF_RESET	42	/* i.MX8MM/i.MX8MN does NOT support */
#define IMX8MQ_RESET_MIPI_CSI2_ESC_RESET	43	/* i.MX8MM/i.MX8MN does NOT support */
#define IMX8MQ_RESET_DDRC1_PRST			44	/* i.MX8MN does NOT support */
#define IMX8MQ_RESET_DDRC1_CORE_RESET		45	/* i.MX8MN does NOT support */
#define IMX8MQ_RESET_DDRC1_PHY_RESET		46	/* i.MX8MN does NOT support */
#define IMX8MQ_RESET_DDRC2_PRST			47	/* i.MX8MM/i.MX8MN does NOT support */
#define IMX8MQ_RESET_DDRC2_CORE_RESET		48	/* i.MX8MM/i.MX8MN does NOT support */
#define IMX8MQ_RESET_DDRC2_PHY_RESET		49	/* i.MX8MM/i.MX8MN does NOT support */
#define IMX8MQ_RESET_SW_M4C_RST			50
#define IMX8MQ_RESET_SW_M4P_RST			51
#define IMX8MQ_RESET_M4_ENABLE			52
#define IMX8MQ_RESET_PCIE_CTRL_APPS_CLK_REQ	53	/* i.MX8M PCIe CTL CLK REQ */
#define IMX8MQ_RESET_PCIE2_CTRL_APPS_CLK_REQ	54	/* i.MX8M PCIe CTL CLK REQ */

#define IMX8MQ_RESET_NUM			55

#endif
