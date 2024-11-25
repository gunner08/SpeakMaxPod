//
//  FirebaseHelper.h
//  UnityFramework
//
//  Created by shuo on 2024/11/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FirebaseHelper : NSObject

+(void)SetRunMode:(BOOL) isTest;
+(void)Event:(NSString*) eventName;
+(void)Event:(NSString*) eventName json:(NSString*) js;

@end

NS_ASSUME_NONNULL_END
