/**
  *********************************************************************************************
  *BS4X-2017 is a open source Four-Axis-Aircraft.
  *It provides the all information for hobbyists to build their own aircrafts.
  *The open documents include the schematic, source code.
  *You can visit our web-site www.bspilot.com to get more information,
  *or send the email to support@bspilot.com.
  *
  * COPYRIGHT(c) 2017 Dr.R&D (www.bspilot.com)
  *
  * Redistribution and use in source and binary forms must retain the above copyright notice.
  **********************************************************************************************
 **/

#ifndef __BSHH_NRF_H
#define __BSHH_NRF_H

#define BS_NRF_CS_LOW() 	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,GPIO_PIN_RESET)  //BSHH PB3 is CSN
#define BS_NRF_CS_HIGH() 	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,GPIO_PIN_SET)
#define BS_NRF_CE_LOW() 	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,GPIO_PIN_RESET)  //BSHH PB4 is CE
#define BS_NRF_CE_HIGH() 	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,GPIO_PIN_SET)

static void bshh_nrf_delay_ms(unsigned int dly);
static void bshh_nrf_write_reg(uint8_t *reg_buf);
static void bshh_nrf_write_buffer(uint8_t reg,uint8_t value);
static void bshh_nrf_write_addr_tx(uint8_t index);
static void bshh_nrf_write_addr_rx(uint8_t index);
static void bshh_nrf_show_rx_data(void);
static void bshh_nrf_show_tx_addr(void);
static void bshh_nrf_show_rx_addr(void);
static void bshh_nrf_tx_configuration(void);
static void bshh_nrf_rx_configuration(void);
static void bshh_nrf_transmit(uint8_t *data_ptr);
static void bshh_nrf_receive(void);

void bshh_nrf_configuration(void);
void bshh_nrf_send_ctrl_data(uint8_t *ctrl_data);
void bshh_nrf_show_times(void);
void bshh_nrf_status_check(void);

#endif