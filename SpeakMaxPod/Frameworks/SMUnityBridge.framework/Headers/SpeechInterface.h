//
//  SpeechInterface.h
//  UnityFramework
//
//  Created by shuo on 2024/10/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SpeechInterface : NSObject

#ifdef __cplusplus
extern "C"{
#endif
    
    void __StartRecognition();
    void __StopRecognition();
    bool __IsMicrophoneRecording();
    void __RecognizeAudio(const char* filePath);
    
#ifdef __cplusplus
}
#endif
    
@end

NS_ASSUME_NONNULL_END
