#ifndef INC_PID_H_
#define INC_PID_H_

#include <math.h>
#include <stdint.h>
#include "mainpp.h"

#ifdef __cplusplus
extern "C"
{
#endif

#define frequency 1000
#define resolution 512
#define reduction_ratio 20.8
#define max_ui 1
#define PWM_ARR 4200
#define Dwheel 0.0996		//wheelDiameter
#define width 0.23704
#define length 0.196

typedef struct{
	const double Kp;
	const double Ki;
	const double Kd;
	int16_t enc;
	double goalVel;		//m/s
	double insVel;		//m/s
	double error;
	double last_error;
	double u;
	double up;
	double ui;
	double ud;
	double pulse;
	double cD;
}KPID;

extern KPID Kpid[4];

void pidCtrl(int i);

#ifdef __cplusplus
}
#endif

#endif /* INC_PID_H_ */
