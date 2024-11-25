//
//  UmengHelper.h
//  UnityFramework
//
//  Created by shuo on 2024/10/8.
//

#ifndef UmengHelper_h
#define UmengHelper_h

#import <Foundation/Foundation.h>
#import <UMCommon/UMCommon.h>
@interface UmengHelper : NSObject{
    
}
+(void)Init;
+(void)Event:(NSString*) eventName;
+(void)Event:(NSString*) eventName json:(NSString*) js;
+(void)BeginPageView:(NSString*) pageName;
+(void)EndPageView:(NSString*) pageName;
+(void)LogDeviceInfo;
@end

#endif /* UmengHelper_h */
