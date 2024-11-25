//
//  HapticFeedbackInterface.h
//  UnityFramework
//
//  Created by shuo on 2024/11/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HapticFeedbackInterface : NSObject

#ifdef __cplusplus
extern "C"{
#endif
    
    void __Vibrate(int milliseconds,int amplitude);
    
#ifdef __cplusplus
}
#endif

@end

NS_ASSUME_NONNULL_END
