/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : hardware_init.c
**     Project     : SDK
**     Processor   : MK02FN128VLH10 on TWR-K22F120M
**     Component   : PinSettings
**     Version     : Component 01.002, Driver 1.1, CPU db: 3.00.000
**     Compiler    : IAR ARM C Compiler
**     Date/Time   : 2014-01-06, 13:21, # CodeGen: 2
**     Abstract    :
**
**     Settings    :
**
**     Contents    :
**         GPIO                - void hardware_init_GPIO(uint32_t instance);
**         I2C                 - void hardware_init_I2C(uint32_t instance);
**         SPI                 - void hardware_init_SPI(uint32_t instance);
**         UART                - void hardware_init_UART(uint32_t instance);
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file hardware_init.c
** @version 1.1
** @brief
**
*/         
/*!
**  @addtogroup hardware_init_module hardware_init module documentation
**  @{
*/         

/* MODULE hardware_init. */

//#include "fsl_platform_types.h"
#include "fsl_device_registers.h"
#include "fsl_port_hal.h"
#include "pin_mux.h"


void configure_gpio_pins(uint32_t instance)
{
  switch(instance) {    
    case 1:                             /* PTB */
      /* PORTB_PCR0 */
      PORT_HAL_SetMuxMode(PORTB_BASE,0u,kPortMuxAsGpio);
      /* PORTB_PCR1 */
      PORT_HAL_SetMuxMode(PORTB_BASE,1u,kPortMuxAsGpio);
      /* PORTB_PCR6 */
      PORT_HAL_SetMuxMode(PORTB_BASE,6u,kPortMuxAsGpio);
      /* PORTB_PCR8 */
      PORT_HAL_SetMuxMode(PORTB_BASE,8u,kPortMuxAsGpio);
      break;
    case 2:                             /* PTC */
      /* PORTC_PCR6 */
      PORT_HAL_SetMuxMode(PORTC_BASE,6u,kPortMuxAsGpio);
      /* PORTC_PCR7 */
      PORT_HAL_SetMuxMode(PORTC_BASE,7u,kPortMuxAsGpio);
      /* PORTC_PCR8 */
      PORT_HAL_SetMuxMode(PORTC_BASE,8u,kPortMuxAsGpio);
      /* PORTC_PCR9 */
      PORT_HAL_SetMuxMode(PORTC_BASE,9u,kPortMuxAsGpio);
      break;
    case 3:                             /* PTD */
      /* PORTD_PCR4 */
      PORT_HAL_SetMuxMode(PORTD_BASE,4u,kPortMuxAsGpio);
      /* PORTD_PCR5 */
      PORT_HAL_SetMuxMode(PORTD_BASE,5u,kPortMuxAsGpio);
      /* PORTD_PCR6 */
      PORT_HAL_SetMuxMode(PORTD_BASE,6u,kPortMuxAsGpio);
      /* PORTD_PCR7 */
      PORT_HAL_SetMuxMode(PORTD_BASE,7u,kPortMuxAsGpio);
      break;
    default:
      break;
  }
}

void configure_i2c_pins(uint32_t instance)
{
  switch(instance) {    
    case 0:                             /* I2C0 */
      /* PORTE_PCR24 */
      PORT_HAL_SetMuxMode(PORTE_BASE,24u,kPortMuxAlt5); /*I2C0_SCL */
      PORT_HAL_SetOpenDrainCmd(PORTE_BASE,24u,true);
      /* PORTE_PCR25 */
      PORT_HAL_SetMuxMode(PORTE_BASE,25u,kPortMuxAlt5); /*I2C0_SDA*/
      PORT_HAL_SetOpenDrainCmd(PORTE_BASE,25u,true);
      break;
            /* I2C1 */
      /* Not supported, only I2C0 module*/
    default:
      break;
  }
}

void configure_spi_pins(uint32_t instance)
{
  switch(instance) {    
    case 0:                             /* SPI0 */
      /* PORTD_PCR0 */
      PORT_HAL_SetMuxMode(PORTD_BASE,0u,kPortMuxAlt2); /*SPI0_PCS0 */
      /* PORTD_PCR3 */
      PORT_HAL_SetMuxMode(PORTD_BASE,3u,kPortMuxAlt2); /*SPI0_SIN */
      /* PORTD_PCR1 */
      PORT_HAL_SetMuxMode(PORTD_BASE,1u,kPortMuxAlt2); /*SPI0_SCK */
      /* PORTD_PCR2 */
      PORT_HAL_SetMuxMode(PORTD_BASE,2u,kPortMuxAlt2); /*SPI0_SOUT*/
      break;
    /* SPI1 */
      /* Not supported, only SPI0 module*/      
    default:
      break;
  }
}

void configure_spi_cs0_pins(uint32_t instance)
{
  PORT_HAL_SetMuxMode(PORTD_BASE,0u,kPortMuxAsGpio);
}

void configure_spi_cs1_pins(uint32_t instance)
{
  PORT_HAL_SetMuxMode(PORTD_BASE,4u,kPortMuxAsGpio);
}

void configure_gpio_i2c_pins(uint32_t instance)
{
  PORT_HAL_SetMuxMode(PORTC_BASE,10u,kPortMuxAsGpio);
  PORT_HAL_SetMuxMode(PORTC_BASE,11u,kPortMuxAsGpio);
}

void configure_uart_pins(uint32_t instance)
{
  switch(instance) {    
    case 0:
      /* PORTB_PCR16 */                 /* UART0. */
      PORT_HAL_SetMuxMode(PORTB_BASE,16u,kPortMuxAlt3);
      /* PORTB_PCR17 */
      PORT_HAL_SetMuxMode(PORTB_BASE,17u,kPortMuxAlt3);
      break;
    case 1:                             /* UART1 */
      /* PORTE_PCR1 */
      PORT_HAL_SetMuxMode(PORTE_BASE,1u,kPortMuxAlt3);
      /* PORTE_PCR0 */
      PORT_HAL_SetMuxMode(PORTE_BASE,0u,kPortMuxAlt3);
      break;
    default:
      break;
  }
}

/* Setup FTM pins to drive LEDs */
void configure_ftm_pins(uint32_t instance)
{
  switch(instance) {
    case 0:                             /* FTM0 */
    /* PORTD_PCR4 (D7 - Green) */ 
    PORT_HAL_SetMuxMode(PORTD_BASE, 4u, kPortMuxAlt4);      
    break; 
    
    default:
      break;
  }
}

void configure_cmp_pins(uint32_t instance)
{
    switch (instance)
    {
        case 0U:
            PORT_HAL_SetMuxMode(PORTC_BASE, 6U, kPortPinDisabled); /* PTC6 - CMP0_IN0. */
            break;
        default:
            break;
    }
}

/* END hardware_init. */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.09]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/