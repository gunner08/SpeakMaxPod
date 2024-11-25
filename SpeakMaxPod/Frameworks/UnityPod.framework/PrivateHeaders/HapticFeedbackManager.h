//
//  HapticFeedbackManager.h
//  UnityFramework
//
//  Created by shuo on 2024/11/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HapticFeedbackManager : NSObject

+ (instancetype)sharedInstance;
- (void)selectionHaptic;
- (void)successHaptic;
- (void)warningHaptic;
- (void)failureHaptic;
- (void)lightImpactHaptic;
- (void)mediumImpactHaptic;
- (void)heavyImpactHaptic;
- (void)softImpactHaptic;

@end

NS_ASSUME_NONNULL_END
