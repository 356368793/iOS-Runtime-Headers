/* Generated by RuntimeBrowser
   Image: /System/Library/TextInput/libTextInputCore.dylib
 */

@interface _TILanguageLikelihoodModel : NSObject <TILanguageLikelihoodModeling> {
    void * _languageLikelihoodModelRef;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) void*languageLikelihoodModelRef;
@property (readonly) Class superclass;

+ (id)sharedLanguageLikelihoodModel;

- (void)addEvidence:(id)arg1 timestamp:(double)arg2 adaptationType:(int)arg3 forRecipient:(id)arg4 app:(id)arg5 language:(id)arg6;
- (void)dealloc;
- (unsigned int)emojiUsageCountForApp:(id)arg1 lastEmojiCountUpdateTime:(double*)arg2;
- (id)init;
- (void*)languageLikelihoodModelRef;
- (double)lastOfflineAdaptationTimeForApp:(id)arg1;
- (void)priorProbabilityForLanguages:(id)arg1 recipient:(id)arg2 handler:(id /* block */)arg3;
- (id)rankedLanguagesForRecipient:(id)arg1;

@end