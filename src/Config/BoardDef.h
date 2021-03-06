/*
 * BoardDef.h
 *
 *  Created on: 30 Jun 2019
 *      Author: David
 */

#ifndef SRC_CONFIG_BOARDDEF_H_
#define SRC_CONFIG_BOARDDEF_H_

constexpr float DefaultThermistorR25 = 100000.0;
constexpr float DefaultThermistorbeta = 4388.0;
constexpr float DefaultThermistorC = 0.0;

#ifdef EXP3HC_V09
# include "EXP3HC_V09.h"
#endif

#ifdef EXP3HC_V05
# include "EXP3HC_V05.h"
#endif

#ifdef TOOL1LC_V04
# include "TOOL1LC_V04.h"
#endif

#define SUPPORT_CAN_EXPANSION	1

#endif /* SRC_CONFIG_BOARDDEF_H_ */
