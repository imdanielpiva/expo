/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

#import <ReactABI33_0_0/ABI33_0_0RCTBridgeModule.h>

@class ABI33_0_0RCTLoadingProgress;

@interface ABI33_0_0RCTDevLoadingView : NSObject <ABI33_0_0RCTBridgeModule>

+ (void)setEnabled:(BOOL)enabled;
- (void)showMessage:(NSString *)message color:(UIColor *)color backgroundColor:(UIColor *)backgroundColor;
- (void)showWithURL:(NSURL *)URL;
- (void)updateProgress:(ABI33_0_0RCTLoadingProgress *)progress;
- (void)hide;

@end
