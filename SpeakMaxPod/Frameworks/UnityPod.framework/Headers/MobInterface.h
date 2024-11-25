//
//  MobInterface.h
//  UnityFramework
//
//  Created by shuo on 2024/10/6.
//

#ifndef MobInterface_h
#define MobInterface_h
#import <Foundation/Foundation.h>

@interface MobInterface : NSObject

#ifdef __cplusplus
extern "C"{
#endif
    
    void __LoginQQ();
    void __LoginWechat();
    void __LoginApple();
    void __LoginGoogle();
    void __LoginFacebook();
    bool __MobHasAuthorized(int type);
    void __MobCancelAuthorize(int type);
    void __MobGetCountryZone();
    void __MobGetVerificationCode(const char* tempCode,const char* country,const char* phone);
    void __MobSubmitVerificationCode(const char* country,const char* phone,const char* code);
    
#ifdef __cplusplus
}
#endif
    
@end

#endif /* MobInterface_h */
