/*
 * portc.h
 *
 *  Created on: Feb 17, 2023
 *      Author: KWU1COB
 */

#ifndef PORTC_H_
#define PORTC_H_
#define AHB1   0x40020000
#define RCC    0x40023800
#define GPIOC  0x40020800
#define GPIOB  0x40020400
#define GPIOA  0x40020000

#define RCC_AHB1ENR   *(volatile uint32_t*)(RCC+0x30)
#define GPIOC_MODER    *(volatile uint32_t*)(GPIOC+0x00)
#define GPIOC_OTYPER   *(volatile uint32_t*)(GPIOC+0x04)
#define GPIOC_ODR      *(volatile uint32_t*)(GPIOC+0x14)

#define GPIOB_MODER      *(volatile uint32_t*)(GPIOB+0x00)
#define GPIOB_IDR      *(volatile uint32_t*)(GPIOB+0x10)
#define GPIOB_ODR      *(volatile uint32_t*)(GPIOB+0x14)

#define GPIOA_MODER    *(volatile uint32_t*)(GPIOA+0x00)
#define GPIOA_IDR       *(volatile uint32_t*)(GPIOA+0x10)

#endif /* PORTC_H_ */
