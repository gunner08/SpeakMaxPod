//
//  UmengInterface.h
//  UnityFramework
//
//  Created by shuo on 2024/10/6.
//

#ifndef UmengInterface_h
#define UmengInterface_h
#import <Foundation/Foundation.h>

@interface UmengInterface : NSObject

#ifdef __cplusplus
extern "C"{
#endif
    
    void __initUmeng();
    void __UmengEvent(const char* eName);
    void __UmengEventJS(const char* eName,const char* js);
    void __UmengBegainPage(const char* pName);
    void __UmengEndPage(const char* pName);
    void __UmengLogDeviceInfo();
    
#ifdef __cplusplus
}
#endif
    
@end

#endif /* UmengInterface_h */
