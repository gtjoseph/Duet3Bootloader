/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef DRIVER_INIT_INCLUDED
#define DRIVER_INIT_INCLUDED

#include "atmel_start_pins.h"

#ifdef __cplusplus
extern "C" {
#endif

extern uint32_t SystemCoreClock;			// in system_same51.c
extern uint32_t SystemPeripheralClock;		// in system_same51.c

#include <hal_atomic.h>
#include <hal_delay.h>
#include <hal_gpio.h>
#include <hal_init.h>
#include <hal_io.h>
#include <hal_sleep.h>

#include <hal_adc_async.h>

#include <hal_ext_irq.h>

#include <hal_timer.h>

#include <hal_usart_async.h>

#include <hal_delay.h>
#include <hal_pwm.h>
#include <hpl/tc/hpl_tc_base.h>
#include <hal_timer.h>

#include <hal_wdt.h>
#include <hal_can_async.h>

extern struct adc_async_descriptor ADC_0;
extern struct adc_async_descriptor ADC_1;

extern struct usart_async_descriptor USART_0;

extern struct wdt_descriptor       WDT_0;
extern struct can_async_descriptor CAN_0;

void USART_0_PORT_init(void);
void USART_0_CLOCK_init(void);
void USART_0_init(void);

void delay_driver_init(void);

void WDT_0_CLOCK_init(void);
void WDT_0_init(void);

/**
 * \brief Perform system initialization, initialize pins and clocks for
 * peripherals
 */
void system_init(void);

void DeviceInit(void);

#ifdef __cplusplus
}
#endif

#endif // DRIVER_INIT_INCLUDED