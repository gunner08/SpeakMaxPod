//
//  FirebaseInterface.h
//  UnityFramework
//
//  Created by shuo on 2024/11/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FirebaseInterface : NSObject

#ifdef __cplusplus
extern "C"{
#endif
    
    void __FirebaseRunMode(bool isTest);
    void __FirebaseEvent(const char* eName);
    void __FirebaseEventJS(const char* eName, const char* js);
    
#ifdef __cplusplus
}
#endif
    
@end

NS_ASSUME_NONNULL_END
