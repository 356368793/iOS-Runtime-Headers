/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUVideoCompositionExportNode : PXRunNode <PUVideoURLNode> {
    AVAssetExportSession * _exportSession;
    unsigned int  _quality;
    <PUVideoCompositionNode> * _videoCompositionNode;
    NSURL * _videoURL;
}

@property (getter=isCanceled, readonly) BOOL canceled;
@property (getter=isComplete, readonly) BOOL complete;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXRunNodeDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int quality;
@property (getter=isRunning, readonly) BOOL running;
@property (readonly) unsigned int state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PUVideoCompositionNode> *videoCompositionNode;
@property (nonatomic, readonly) NSURL *videoURL;
@property (getter=isWaiting, readonly) BOOL waiting;

- (void).cxx_destruct;
- (id)_exportPresetName;
- (void)_handleDidExportToURL:(id)arg1;
- (id)_newOutputURL;
- (void)didCancel;
- (id)initWithVideoCompositionNode:(id)arg1 quality:(unsigned int)arg2;
- (unsigned int)quality;
- (void)run;
- (id)videoCompositionNode;
- (id)videoURL;

@end