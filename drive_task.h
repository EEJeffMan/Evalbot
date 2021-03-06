//*****************************************************************************
//
// drive_task.h - Header and prototypes for motor drive controller
//
// Copyright (c) 2011-2013 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 10636 of the Stellaris Firmware Development Package.
//
//*****************************************************************************

#ifndef __DRIVE_TASK_H__
#define __DRIVE_TASK_H__

//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
extern "C"
{
#endif

//*****************************************************************************
//
// Defines the motor, right or left.
//
//*****************************************************************************
#define MOTOR_DRIVE_LEFT    0
#define MOTOR_DRIVE_RIGHT   1

//*****************************************************************************
//
// Defines the directions for commanding the motor drive.
//
//*****************************************************************************
#define MOTOR_DRIVE_TURN_LEFT 		1
#define MOTOR_DRIVE_TURN_RIGHT 		2
#define MOTOR_DRIVE_FORWARD 		8
#define MOTOR_DRIVE_REVERSE 		4

#define MOTOR_DRIVE_FORWARD_LEFT	9
#define MOTOR_DRIVE_FORWARD_RIGHT	10
#define MOTOR_DRIVE_REVERSE_LEFT	5
#define MOTOR_DRIVE_REVERSE_RIGHT	6
#define MOTOR_DRIVE_STOP			0

//*****************************************************************************
//
// Function prototypes for the drive task module.
//
//*****************************************************************************
extern void DriveTask(void *pvParam);
extern void DriveStop(void);
extern void DriveRun(unsigned long ulDirection, unsigned long ulSpeed);
extern void DriveInit(void);
extern long DriveSpeedGet(unsigned long ulMotor);

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif
