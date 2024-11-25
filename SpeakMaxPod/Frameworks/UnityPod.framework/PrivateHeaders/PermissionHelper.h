//
//  PermissionHelper.h
//  UnityPod
//
//  Created by shuo on 2024/11/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PermissionHelper : NSObject

+(BOOL)CheckMicrophonePermission;
+(void)JumpSetting;
+(void)RequestSpeechRecognitionPermission;
+(void)RequestMicrophonePermission;

@end

NS_ASSUME_NONNULL_END
