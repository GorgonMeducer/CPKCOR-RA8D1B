/* generated vector source file - do not edit */
        #include "bsp_api.h"
        /* Do not build these data structures if no interrupts are currently allocated because IAR will have build errors. */
        #if VECTOR_DATA_IRQ_COUNT > 0
        #if __has_include("r_ioport.h")
        BSP_DONT_REMOVE const fsp_vector_t g_vector_table[BSP_ICU_VECTOR_MAX_ENTRIES] BSP_PLACE_IN_SECTION(BSP_SECTION_APPLICATION_VECTORS) =
        {
                        [0] = sci_b_uart_rxi_isr, /* SCI3 RXI (Receive data full) */
            [1] = sci_b_uart_txi_isr, /* SCI3 TXI (Transmit data empty) */
            [2] = sci_b_uart_tei_isr, /* SCI3 TEI (Transmit end) */
            [3] = sci_b_uart_eri_isr, /* SCI3 ERI (Receive error) */
        };
        const bsp_interrupt_event_t g_interrupt_event_link_select[BSP_ICU_VECTOR_MAX_ENTRIES] =
        {
            [0] = BSP_PRV_IELS_ENUM(EVENT_SCI3_RXI), /* SCI3 RXI (Receive data full) */
            [1] = BSP_PRV_IELS_ENUM(EVENT_SCI3_TXI), /* SCI3 TXI (Transmit data empty) */
            [2] = BSP_PRV_IELS_ENUM(EVENT_SCI3_TEI), /* SCI3 TEI (Transmit end) */
            [3] = BSP_PRV_IELS_ENUM(EVENT_SCI3_ERI), /* SCI3 ERI (Receive error) */
        };
        #elif __has_include("r_ioport_b.h")
        BSP_DONT_REMOVE const fsp_vector_t g_vector_table[BSP_IRQ_VECTOR_MAX_ENTRIES] BSP_PLACE_IN_SECTION(BSP_SECTION_APPLICATION_VECTORS) =
        {
            [BSP_PRV_IELS_ENUM(SCI3_RXI)] = sci_b_uart_rxi_isr, /* SCI3 RXI (Receive data full) */
            [BSP_PRV_IELS_ENUM(SCI3_TXI)] = sci_b_uart_txi_isr, /* SCI3 TXI (Transmit data empty) */
            [BSP_PRV_IELS_ENUM(SCI3_TEI)] = sci_b_uart_tei_isr, /* SCI3 TEI (Transmit end) */
            [BSP_PRV_IELS_ENUM(SCI3_ERI)] = sci_b_uart_eri_isr, /* SCI3 ERI (Receive error) */
        };
        #endif
        #endif