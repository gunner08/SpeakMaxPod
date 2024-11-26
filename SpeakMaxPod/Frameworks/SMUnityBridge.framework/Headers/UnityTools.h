//
//  UnityTools.h
//  UnityFramework
//
//  Created by shuo on 2024/8/29.
//

#ifndef UnityTools_h
#define UnityTools_h
#import <Foundation/Foundation.h>

@interface UnityTools : NSObject{}
+(void) Send2Unity:(NSString *)msgType andData:(NSString *)JsonData;
+(void)SetUnitySendMessageFunction:(void (*)(const char* objectName, const char* methodName, const char* message))function;
@end

#ifdef __cplusplus
extern "C" {
#endif

// 声明一个全局静态 C++ 函数
void Send2Unity(NSString* msgType, NSString* JsonData);
void Send2UnityCommon(NSString* msgType, NSString* str);
NSString* GetCommonJSString(NSString* str);
#ifdef __cplusplus
}
#endif


#endif /* UnityTools_h */
