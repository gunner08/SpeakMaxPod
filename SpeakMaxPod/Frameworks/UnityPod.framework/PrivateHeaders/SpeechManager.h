//
//  SpeechManager.h
//  UnityFramework
//
//  Created by shuo on 2024/10/17.
//

#import <Foundation/Foundation.h>
#import <Speech/Speech.h>

NS_ASSUME_NONNULL_BEGIN

@interface SpeechManager : NSObject

+ (SpeechManager *)sharedInstance;
- (void)startRecognition;
- (void)stopRecognition;
- (bool)IsMicrophoneRecording;
- (void)RecognizeAudio:(NSString*) audioPath;
@end

NS_ASSUME_NONNULL_END
