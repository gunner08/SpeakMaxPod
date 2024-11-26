//
//  SMInterface.h
//  UnityFramework
//
//  Created by shuo on 2024/10/8.
//

#ifndef SMInterface_h
#define SMInterface_h

#import <Foundation/Foundation.h>

@interface SMInterface : NSObject

+(void)addAllowFunction:(void(^)(void))func;

#ifdef __cplusplus
extern "C"{
#endif

    void __AllowPrivacy();
    void __OpenAppStore(char* appId);
    void __OpenAppSettings();
    void __ShowToast(const char* message);
    bool __IsOverseas();
    
#ifdef __cplusplus
}
#endif
    
@end
#endif /* SMInterface_h */
