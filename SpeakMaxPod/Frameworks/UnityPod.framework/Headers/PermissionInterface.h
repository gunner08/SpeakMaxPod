//
//  PermissionInterface.h
//  UnityFramework
//
//  Created by shuo on 2024/10/6.
//

#ifndef PermissionInterface_h
#define PermissionInterface_h
#import <Foundation/Foundation.h>
@interface PermissionInterface : NSObject

#ifdef __cplusplus
extern "C"{
#endif
 
    bool __CheckMicrophonePermission();
    void __JumpSetting();
    void __RequestSpeechRecognitionPermission();
    void __RequestMicrophonePermission();
    
#ifdef __cplusplus
}
#endif

@end


#endif /* PermissionInterface_h */
