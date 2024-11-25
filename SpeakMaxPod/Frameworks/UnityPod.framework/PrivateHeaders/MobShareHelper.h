//
//  MobShareHelper.h
//  UnityFramework
//
//  Created by shuo on 2024/10/8.
//

#ifndef MobShareHelper_h
#define MobShareHelper_h

#import <Foundation/Foundation.h>
#import <ShareSDK/ShareSDK.h>
#import <MOBFoundation/MobSDK+Privacy.h>
#import <MOBFoundation/MOBFJson.h>

@interface MobShareHelper : NSObject{
}

+(void)AllowPrivacy;
+(void)Authorize:(SSDKPlatformType) type;
+(void)CancelAuthorize:(SSDKPlatformType) type;
+(bool)HasAuthorized:(SSDKPlatformType) type;
@end

#endif /* MobShareHelper_h */
