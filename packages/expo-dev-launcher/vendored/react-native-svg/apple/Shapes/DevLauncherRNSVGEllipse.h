/**
 * Copyright (c) 2015-present, Horcrux.
 * All rights reserved.
 *
 * This source code is licensed under the MIT-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

#import "DevLauncherRNSVGPath.h"

@interface DevLauncherRNSVGEllipse : DevLauncherRNSVGRenderable
@property (nonatomic, strong) DevLauncherRNSVGLength* cx;
@property (nonatomic, strong) DevLauncherRNSVGLength* cy;
@property (nonatomic, strong) DevLauncherRNSVGLength* rx;
@property (nonatomic, strong) DevLauncherRNSVGLength* ry;
@end
