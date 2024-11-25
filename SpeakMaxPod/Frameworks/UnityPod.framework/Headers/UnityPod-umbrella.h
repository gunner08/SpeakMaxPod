#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "FirebaseInterface.h"
#import "HapticFeedbackInterface.h"
#import "MobInterface.h"
#import "PermissionInterface.h"
#import "SMInterface.h"
#import "SpeechInterface.h"
#import "UmengInterface.h"

FOUNDATION_EXPORT double UnityPodVersionNumber;
FOUNDATION_EXPORT const unsigned char UnityPodVersionString[];

