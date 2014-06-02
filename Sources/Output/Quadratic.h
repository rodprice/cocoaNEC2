//
//  Quadratic.h
//  cocoaNEC v0.70
//
//  Created by Kok Chen on 4/11/11.
//  Copyright 2011 Kok Chen, W7AY. All rights reserved.
//

#import "Interpolate.h"

@interface Quadratic : Interpolate {
	NSPoint *qa, *qb, *qc ;
	float *z ;
}

@end
