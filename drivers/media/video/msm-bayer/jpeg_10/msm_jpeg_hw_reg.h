/* Copyright (c) 2012, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef MSM_JPEG_HW_REG_H
#define MSM_JPEG_HW_REG_H

#define JPEG_REG_BASE 0

#define MSM_JPEG_HW_IRQ_MASK_ADDR 0x00000018
#define MSM_JPEG_HW_IRQ_MASK_RMSK 0xFFFFFFFF
#define MSM_JPEG_HW_IRQ_ENABLE 0xFFFFFFFF

#define MSM_JPEG_HW_IRQ_STATUS_FRAMEDONE_MASK 0x00000001
#define MSM_JPEG_HW_IRQ_STATUS_FRAMEDONE_SHIFT 0x00000000

#define MSM_JPEG_HW_IRQ_STATUS_FE_RD_DONE_MASK 0x00000010
#define MSM_JPEG_HW_IRQ_STATUS_FE_RD_DONE_SHIFT 0x00000001

#define MSM_JPEG_HW_IRQ_STATUS_FE_RTOVF_MASK 0x00000004
#define MSM_JPEG_HW_IRQ_STATUS_FE_RTOVF_SHIFT 0x00000002

#define MSM_JPEG_HW_IRQ_STATUS_FE_VFE_OVERFLOW_MASK 0x00000008
#define MSM_JPEG_HW_IRQ_STATUS_FE_VFE_OVERFLOW_SHIFT 0x00000003

#define MSM_JPEG_HW_IRQ_STATUS_WE_Y_PINGPONG_MASK 0x00000010
#define MSM_JPEG_HW_IRQ_STATUS_WE_Y_PINGPONG_SHIFT 0x00000004

#define MSM_JPEG_HW_IRQ_STATUS_WE_CBCR_PINGPONG_MASK 0x00000020
#define MSM_JPEG_HW_IRQ_STATUS_WE_CBCR_PINGPONG_SHIFT 0x00000005

#define MSM_JPEG_HW_IRQ_STATUS_WE_Y_BUFFER_OVERFLOW_MASK 0x00000040
#define MSM_JPEG_HW_IRQ_STATUS_WE_Y_BUFFER_OVERFLOW_SHIFT 0x00000006

#define MSM_JPEG_HW_IRQ_STATUS_WE_CBCR_BUFFER_OVERFLOW_MASK 0x00000080
#define MSM_JPEG_HW_IRQ_STATUS_WE_CBCR_BUFFER_OVERFLOW_SHIFT 0x00000007

#define MSM_JPEG_HW_IRQ_STATUS_WE_CH0_DATAFIFO_OVERFLOW_MASK 0x00000100
#define MSM_JPEG_HW_IRQ_STATUS_WE_CH0_DATAFIFO_OVERFLOW_SHIFT 0x00000008

#define MSM_JPEG_HW_IRQ_STATUS_WE_CH1_DATAFIFO_OVERFLOW_MASK 0x00000200
#define MSM_JPEG_HW_IRQ_STATUS_WE_CH1_DATAFIFO_OVERFLOW_SHIFT 0x00000009

#define MSM_JPEG_HW_IRQ_STATUS_RESET_ACK_MASK 0x10000000
#define MSM_JPEG_HW_IRQ_STATUS_RESET_ACK_SHIFT 0x0000000a

#define MSM_JPEG_HW_IRQ_STATUS_BUS_ERROR_MASK 0x00000800
#define MSM_JPEG_HW_IRQ_STATUS_BUS_ERROR_SHIFT 0x0000000b

#define MSM_JPEG_HW_IRQ_STATUS_VIOLATION_MASK 0x00001000
#define MSM_JPEG_HW_IRQ_STATUS_VIOLATION_SHIFT 0x0000000c

#define JPEG_OFFLINE_CMD_START 0x00000001

#define JPEG_RESET_DEFAULT 0x00000003 /* cfff? */

#define JPEG_IRQ_DISABLE_ALL 0x00000000
#define JPEG_IRQ_CLEAR_ALL 0xFFFFFFFF

#define JPEG_PLN0_RD_PNTR_ADDR (JPEG_REG_BASE + 0x00000038)
#define JPEG_PLN0_RD_PNTR_BMSK  0xFFFFFFFF

#define JPEG_PLN0_RD_OFFSET_ADDR 0x0000003C
#define JPEG_PLN0_RD_OFFSET_BMSK 0x1FFFFFFF

#define JPEG_PLN1_RD_PNTR_ADDR (JPEG_REG_BASE + 0x00000044)
#define JPEG_PLN1_RD_PNTR_BMSK 0xFFFFFFFF

#define JPEG_PLN1_RD_OFFSET_ADDR 0x00000048
#define JPEG_PLN1_RD_OFFSET_BMSK 0x1FFFFFFF

#define JPEG_CMD_ADDR (JPEG_REG_BASE + 0x00000010)
#define JPEG_CMD_BMSK 0x00000FFF
#define JPEG_CMD_CLEAR_WRITE_PLN_QUEUES 0x700

#define JPEG_PLN0_WR_PNTR_ADDR (JPEG_REG_BASE + 0x000000cc)
#define JPEG_PLN0_WR_PNTR_BMSK 0xFFFFFFFF

#define JPEG_PLN1_WR_PNTR_ADDR (JPEG_REG_BASE + 0x000000D0)
#define JPEG_PLN1_WR_PNTR_BMSK 0xFFFFFFFF

#define JPEG_IRQ_MASK_ADDR (JPEG_REG_BASE + 0x00000018)
#define JPEG_IRQ_MASK_BMSK 0xFFFFFFFF
#define JPEG_IRQ_ALLSOURCES_ENABLE 0xFFFFFFFF

#define JPEG_IRQ_CLEAR_ADDR (JPEG_REG_BASE + 0x0000001c)
#define JPEG_IRQ_CLEAR_BMSK 0xFFFFFFFF

#define JPEG_RESET_CMD_ADDR (JPEG_REG_BASE + 0x00000008)
#define JPEG_RESET_CMD_RMSK 0xFFFFFFFF

#define JPEG_IRQ_STATUS_ADDR (JPEG_REG_BASE + 0x00000020)
#define JPEG_IRQ_STATUS_BMSK 0xFFFFFFFF

#define JPEG_ENCODE_OUTPUT_SIZE_STATUS_ADDR (JPEG_REG_BASE + 0x00000180)
#define JPEG_ENCODE_OUTPUT_SIZE_STATUS_BMSK 0x1FFFFFFF


#define VBIF_BASE_ADDRESS                      0xFDA60000
#define VBIF_REGION_SIZE                       0xC30
#define JPEG_VBIF_CLKON                        0x4
#define JPEG_VBIF_IN_RD_LIM_CONF0              0xB0
#define JPEG_VBIF_IN_RD_LIM_CONF1              0xB4
#define JPEG_VBIF_IN_RD_LIM_CONF2              0xB8
#define JPEG_VBIF_IN_WR_LIM_CONF0              0xC0
#define JPEG_VBIF_IN_WR_LIM_CONF1              0xC4
#define JPEG_VBIF_IN_WR_LIM_CONF2              0xC8
#define JPEG_VBIF_OUT_RD_LIM_CONF0             0xD0
#define JPEG_VBIF_OUT_WR_LIM_CONF0             0xD4
#define JPEG_VBIF_DDR_OUT_MAX_BURST            0xD8
#define JPEG_VBIF_OCMEM_OUT_MAX_BURST          0xDC

#endif /* MSM_JPEG_HW_REG_H */
